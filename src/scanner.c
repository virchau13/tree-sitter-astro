#include "tag.h"
#include <stdio.h>
#include <wctype.h>

enum TokenType {
    START_TAG_NAME,
    SCRIPT_START_TAG_NAME,
    STYLE_START_TAG_NAME,
    END_TAG_NAME,
    ERRONEOUS_END_TAG_NAME,
    SELF_CLOSING_TAG_DELIMITER,
    IMPLICIT_END_TAG,
    RAW_TEXT,
    COMMENT,
    FRONTMATTER_START,
    INTERPOLATION_START,
};

typedef struct {
    uint32_t len;
    uint32_t cap;
    Tag *data;
} tags_vec;

typedef struct {
    tags_vec tags;
} Scanner;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    do {                                                                       \
        if ((_cap) > (vec).cap && (_cap) > 0) {                                \
            void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));   \
            assert(tmp != NULL);                                               \
            (vec).data = tmp;                                                  \
            (vec).cap = (_cap);                                                \
        }                                                                      \
    } while (0)

#define VEC_GROW(vec, _cap)                                                    \
    do {                                                                       \
        if ((vec).cap < (_cap)) {                                              \
            VEC_RESIZE((vec), (_cap));                                         \
        }                                                                      \
    } while (0)

#define VEC_PUSH(vec, el)                                                      \
    do {                                                                       \
        if ((vec).cap == (vec).len) {                                          \
            VEC_RESIZE((vec), MAX(16, (vec).len * 2));                         \
        }                                                                      \
        (vec).data[(vec).len++] = (el);                                        \
    } while (0)

#define VEC_POP(vec)                                                           \
    do {                                                                       \
        if (VEC_BACK(vec).type == CUSTOM) {                                    \
            tag_free(&VEC_BACK(vec));                                          \
        }                                                                      \
        (vec).len--;                                                           \
    } while (0)

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                          \
    do {                                                                       \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
        (vec).data = NULL;                                                     \
    } while (0)

#define VEC_CLEAR(vec)                                                         \
    do {                                                                       \
        for (int i = 0; i < (vec).len; i++) {                                  \
            tag_free(&(vec).data[i]);                                          \
        }                                                                      \
        (vec).len = 0;                                                         \
    } while (0)

#define VEC_NEW                                                                \
    { .len = 0, .cap = 0, .data = NULL }

#define STRING_RESIZE(vec, _cap)                                               \
    do {                                                                       \
        void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0])); \
        assert(tmp != NULL);                                                   \
        (vec).data = tmp;                                                      \
        memset((vec).data + (vec).len, 0,                                      \
               (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));            \
        (vec).cap = (_cap);                                                    \
    } while (0)

#define STRING_GROW(vec, _cap)                                                 \
    do {                                                                       \
        if ((vec).cap < (_cap)) {                                              \
            STRING_RESIZE((vec), (_cap));                                      \
        }                                                                      \
    } while (0)

#define STRING_PUSH(vec, el)                                                   \
    do {                                                                       \
        if ((vec).cap == (vec).len) {                                          \
            STRING_RESIZE((vec), MAX(16, (vec).len * 2));                      \
        }                                                                      \
        (vec).data[(vec).len++] = (el);                                        \
    } while (0)

#define STRING_INIT(vec)                                                       \
    do {                                                                       \
        (vec).data = calloc(1, sizeof(char) * 17);                             \
        (vec).len = 0;                                                         \
        (vec).cap = 16;                                                        \
    } while (0)

#define STRING_FREE(vec)                                                       \
    do {                                                                       \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
        (vec).data = NULL;                                                     \
    } while (0)

#define STRING_CLEAR(vec)                                                      \
    do {                                                                       \
        (vec).len = 0;                                                         \
        memset((vec).data, 0, (vec).cap * sizeof(char));                       \
    } while (0)

static unsigned serialize(Scanner *scanner, char *buffer) {
    uint16_t tag_count =
        scanner->tags.len > UINT16_MAX ? UINT16_MAX : scanner->tags.len;
    uint16_t serialized_tag_count = 0;

    unsigned size = sizeof(tag_count);
    memcpy(&buffer[size], &tag_count, sizeof(tag_count));
    size += sizeof(tag_count);

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
        Tag tag = scanner->tags.data[serialized_tag_count];
        if (tag.type == CUSTOM) {
            unsigned name_length = tag.custom_tag_name.len;
            if (name_length > UINT8_MAX) {
                name_length = UINT8_MAX;
            }
            if (size + 2 + name_length >=
                TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                break;
            }
            buffer[size++] = tag.type;
            buffer[size++] = (char)name_length;
            strncpy(&buffer[size], tag.custom_tag_name.data, name_length);
            size += name_length;
        } else {
            if (size + 1 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                break;
            }
            buffer[size++] = tag.type;
        }
    }

    memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return size;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    VEC_CLEAR(scanner->tags);
    if (length > 0) {
        unsigned size = 0;
        uint16_t tag_count = 0;
        uint16_t serialized_tag_count = 0;

        memcpy(&serialized_tag_count, &buffer[size],
               sizeof(serialized_tag_count));
        size += sizeof(serialized_tag_count);

        memcpy(&tag_count, &buffer[size], sizeof(tag_count));
        size += sizeof(tag_count);

        VEC_RESIZE(scanner->tags, tag_count);
        if (tag_count > 0) {
            unsigned iter = 0;
            for (iter = 0; iter < serialized_tag_count; iter++) {
                Tag tag = scanner->tags.data[iter];
                tag.type = (unsigned char)buffer[size++];
                if (tag.type == CUSTOM) {
                    uint16_t name_length = (unsigned char)buffer[size++];
                    tag.custom_tag_name.len = name_length;
                    tag.custom_tag_name.cap = name_length;
                    tag.custom_tag_name.data =
                        (char *)calloc(1, sizeof(char) * (name_length + 1));
                    strncpy(tag.custom_tag_name.data, &buffer[size],
                            name_length);
                    size += name_length;
                }
                VEC_PUSH(scanner->tags, tag);
            }
            // add zero tags if we didn't read enough, this is because the
            // buffer had no more room but we held more tags.
            for (; iter < tag_count; iter++) {
                Tag tag = new_tag();
                VEC_PUSH(scanner->tags, tag);
            }
        }
    }
}

static String scan_tag_name(TSLexer *lexer) {
    String tag_name;
    STRING_INIT(tag_name);
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '-' ||
           lexer->lookahead == ':' || lexer->lookahead == '.') {
        STRING_PUSH(tag_name, lexer->lookahead);
        lexer->advance(lexer, false);
    }
    return tag_name;
}

static bool scan_comment(TSLexer *lexer) {
    if (lexer->lookahead != '-') {
        return false;
    }
    lexer->advance(lexer, false);
    if (lexer->lookahead != '-') {
        return false;
    }
    lexer->advance(lexer, false);

    unsigned dashes = 0;
    while (lexer->lookahead) {
        switch (lexer->lookahead) {
            case '-':
                ++dashes;
                break;
            case '>':
                if (dashes >= 2) {
                    lexer->result_symbol = COMMENT;
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    return true;
                }
            default:
                dashes = 0;
        }
        lexer->advance(lexer, false);
    }
    return false;
}

static inline void scan_js_expr(TSLexer *lexer, char *end);

static inline void scan_js_backtick_string(TSLexer *lexer) {
    // Advance past backtick
    lexer->advance(lexer, false);
    while (lexer->lookahead) {
        if (lexer->lookahead == '$') {
            lexer->advance(lexer, false);
            if (lexer->lookahead == '{') {
                // String interpolation
                lexer->advance(lexer, false);
                scan_js_expr(lexer, "}");
                // Advance past the final curly
            } else {
                // Reprocess this character
                continue;
            }
        } else if (lexer->lookahead == '`') {
            // End of string
            lexer->advance(lexer, false);
            break;
        }
        lexer->advance(lexer, false);
    }
}

static inline void scan_js_string(TSLexer *lexer) {
    // Assumes the lookahead char is actually valid
    if (lexer->lookahead == '`') {
        scan_js_backtick_string(lexer);
    } else {
        // Start and end chars are the same
        char str_end_char = (char)lexer->lookahead;
        lexer->advance(lexer, false);
        while (lexer->lookahead) {
            // Note that this doesn't take into account newlines in basic
            // strings, for the same reason why tree-sitter-javascript
            // doesn't.
            // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L860
            if (lexer->lookahead == '\\') {
                // Accept any next char
                lexer->advance(lexer, false);
            } else if (lexer->lookahead == str_end_char) {
                // End of string
                lexer->advance(lexer, false);
                return;
            }
            lexer->advance(lexer, false);
        }
    }
}

static inline void scan_js_expr(TSLexer *lexer, char *end) {
    lexer->mark_end(lexer);
    unsigned delimiter_index = 0;
    unsigned curly_count = 0;

    enum CommentState { NotInComment, SingleLine, MultiLine };
    enum CommentState in_comment = NotInComment;

    while (lexer->lookahead != '\0') {
        if (in_comment == NotInComment) {
            if (lexer->lookahead == '"' || lexer->lookahead == '\'' ||
                lexer->lookahead == '`') {
                scan_js_string(lexer);
                lexer->mark_end(lexer);
                continue;
            }
            if (lexer->lookahead == '/') {
                // comment?
                delimiter_index = 0;
                lexer->advance(lexer, false);
                if (lexer->lookahead == '/') {
                    in_comment = SingleLine;
                    delimiter_index = 0;
                    lexer->advance(lexer, false);
                } else if (lexer->lookahead == '*') {
                    in_comment = MultiLine;
                    delimiter_index = 0;
                    lexer->advance(lexer, false);
                }
                continue;
            }

            if (strcmp(end, "}") == 0) {
                while (lexer->lookahead == '\n') {
                    lexer->advance(lexer, false);
                }
                // we have to balance braces
                if (lexer->lookahead == '{') {
                    curly_count++;
                    lexer->advance(lexer, false);
                    continue;
                }
                if (lexer->lookahead == '}') {
                    if (curly_count == 0) {
                        // This should get caught by the delimiter check,
                        // don't do anything
                    } else {
                        curly_count--;
                        lexer->advance(lexer, false);
                        continue;
                    }
                }
            }
            if (lexer->lookahead == end[delimiter_index]) {
                delimiter_index++;
                if (delimiter_index == strlen(end)) {
                    break;
                }
                lexer->advance(lexer, false);
            } else {
                // It's entirely possible we just stumbled across a newline
                // character, which would mean that our delimiter index
                // should actually be 1. Otherwise we'd end up missing the
                // last ---. This could occur if e.g.
                // ---
                // -
                // ---
                // was the frontmatter.
                /* delimiter_index = (lexer->lookahead == '\n' ? 1 : 0); */
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
            }
        } else if (in_comment == SingleLine) {
            if (lexer->lookahead == '\n') {
                // End of comment
                in_comment = NotInComment;
                /* delimiter_index = (end[0] == '\n' ? 1 : 0); */
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
            } else {
                // Still in comment, ignore
                lexer->advance(lexer, false);
            }
        } else if (in_comment == MultiLine) {
            if (lexer->lookahead == '*') {
                lexer->advance(lexer, false);
                if (lexer->lookahead == '/') {
                    // End of comment
                    in_comment = NotInComment;
                    delimiter_index = 0;
                    lexer->advance(lexer, false);
                } else {
                    continue;
                }
            } else {
                // Still in comment, ignore
                lexer->advance(lexer, false);
            }
        }
    }

    // I have no idea why this is necessary
    // It seems tree-sitter really hates 1-character delimiters?
    if (strcmp(end, "}") == 0) {
        lexer->mark_end(lexer);
    }
}

static bool scan_raw_text(Scanner *scanner, TSLexer *lexer) {
    if (scanner->tags.len == 0) {
        scan_js_expr(lexer, "---");
        goto finish;
    }
    if (VEC_BACK(scanner->tags).type == INTERPOLATION) {
        scan_js_expr(lexer, "}");
        VEC_POP(scanner->tags);
        goto finish;
    }

    if (VEC_BACK(scanner->tags).type != SCRIPT &&
        VEC_BACK(scanner->tags).type != STYLE) {
        return false;
    }

    lexer->mark_end(lexer);

    const char *end_delimiter =
        VEC_BACK(scanner->tags).type == SCRIPT ? "</SCRIPT" : "</STYLE";

    unsigned delimiter_index = 0;
    while (lexer->lookahead) {
        if (towupper(lexer->lookahead) == end_delimiter[delimiter_index]) {
            delimiter_index++;
            if (delimiter_index == strlen(end_delimiter)) {
                break;
            }
            lexer->advance(lexer, false);
        } else {
            delimiter_index = 0;
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
        }
    }

finish:
    lexer->result_symbol = RAW_TEXT;
    return true;
}

static bool scan_implicit_end_tag(Scanner *scanner, TSLexer *lexer) {
    Tag *parent = scanner->tags.len == 0 ? NULL : &VEC_BACK(scanner->tags);

    bool is_closing_tag = false;
    if (lexer->lookahead == '/') {
        is_closing_tag = true;
        lexer->advance(lexer, false);
    } else {
        if (parent && is_void(parent)) {
            VEC_POP(scanner->tags);
            lexer->result_symbol = IMPLICIT_END_TAG;
            return true;
        }
    }

    String tag_name = scan_tag_name(lexer);
    if (tag_name.len == 0) {
        STRING_FREE(tag_name);
        return false;
    }

    Tag next_tag = for_name(tag_name.data);

    if (is_closing_tag) {
        // The tag correctly closes the topmost element on the stack
        if (scanner->tags.len > 0 &&
            tagcmp(&VEC_BACK(scanner->tags), &next_tag)) {
            STRING_FREE(tag_name);
            tag_free(&next_tag);
            return false;
        }

        // Otherwise, dig deeper and queue implicit end tags (to be nice in
        // the case of malformed astro)
        for (unsigned i = scanner->tags.len; i > 0; i--) {
            if (scanner->tags.data[i - 1].type == next_tag.type) {
                VEC_POP(scanner->tags);
                lexer->result_symbol = IMPLICIT_END_TAG;
                STRING_FREE(tag_name);
                tag_free(&next_tag);
                return true;
            }
        }
    } else if (parent && !can_contain(parent, &next_tag)) {
        VEC_POP(scanner->tags);
        lexer->result_symbol = IMPLICIT_END_TAG;
        STRING_FREE(tag_name);
        tag_free(&next_tag);
        return true;
    }

    STRING_FREE(tag_name);
    tag_free(&next_tag);
    return false;
}

static bool scan_start_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.len == 0) {
        STRING_FREE(tag_name);
        return false;
    }
    Tag tag = for_name(tag_name.data);
    VEC_PUSH(scanner->tags, tag);
    switch (tag.type) {
        case SCRIPT:
            lexer->result_symbol = SCRIPT_START_TAG_NAME;
            break;
        case STYLE:
            lexer->result_symbol = STYLE_START_TAG_NAME;
            break;
        default:
            lexer->result_symbol = START_TAG_NAME;
            break;
    }
    STRING_FREE(tag_name);
    return true;
}

static bool scan_end_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.len == 0) {
        STRING_FREE(tag_name);
        return false;
    }
    Tag tag = for_name(tag_name.data);
    if (scanner->tags.len > 0 && tagcmp(&VEC_BACK(scanner->tags), &tag)) {
        VEC_POP(scanner->tags);
        lexer->result_symbol = END_TAG_NAME;
    } else {
        lexer->result_symbol = ERRONEOUS_END_TAG_NAME;
    }
    tag_free(&tag);
    STRING_FREE(tag_name);
    return true;
}

static bool scan_self_closing_tag_delimiter(Scanner *scanner, TSLexer *lexer) {
    lexer->advance(lexer, false);
    if (lexer->lookahead == '>') {
        lexer->advance(lexer, false);
        if (scanner->tags.len > 0) {
            VEC_POP(scanner->tags);
            lexer->result_symbol = SELF_CLOSING_TAG_DELIMITER;
        }
        return true;
    }
    return false;
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }

    if (valid_symbols[RAW_TEXT] && !valid_symbols[START_TAG_NAME] &&
        !valid_symbols[END_TAG_NAME]) {
        return scan_raw_text(scanner, lexer);
    }

    switch (lexer->lookahead) {
        case '<':
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);

            if (lexer->lookahead == '!') {
                lexer->advance(lexer, false);
                return scan_comment(lexer);
            }

            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '\0':
            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '/':
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER]) {
                return scan_self_closing_tag_delimiter(scanner, lexer);
            }
            break;

        case '{':
            if (valid_symbols[INTERPOLATION_START]) {
                lexer->advance(lexer, false);
                Tag tag = (Tag){INTERPOLATION, {0}};
                VEC_PUSH(scanner->tags, tag);
                lexer->result_symbol = INTERPOLATION_START;
                return true;
            }
            break;

        case '-':
            if (valid_symbols[FRONTMATTER_START]) {
                lexer->mark_end(lexer);
                lexer->advance(lexer, false);
                if (lexer->lookahead == '-') {
                    lexer->advance(lexer, false);
                    if (lexer->lookahead == '-') {
                        lexer->advance(lexer, false);
                        lexer->mark_end(lexer);
                        lexer->result_symbol = FRONTMATTER_START;
                        return true;
                    }
                }
            }

        default:
            if ((valid_symbols[START_TAG_NAME] ||
                 valid_symbols[END_TAG_NAME]) &&
                !valid_symbols[RAW_TEXT]) {
                return valid_symbols[START_TAG_NAME]
                           ? scan_start_tag_name(scanner, lexer)
                           : scan_end_tag_name(scanner, lexer);
            }
    }

    return false;
}

void *tree_sitter_astro_external_scanner_create() {
    Scanner *scanner = (Scanner *)malloc(sizeof(Scanner));
    scanner->tags = (tags_vec)VEC_NEW;
    return scanner;
}

bool tree_sitter_astro_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
    return scan((Scanner *)payload, lexer, valid_symbols);
}

unsigned tree_sitter_astro_external_scanner_serialize(void *payload,
                                                      char *buffer) {
    return serialize((Scanner *)payload, buffer);
}

void tree_sitter_astro_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
    deserialize((Scanner *)payload, buffer, length);
}

void tree_sitter_astro_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (unsigned i = 0; i < scanner->tags.len; i++) {
        STRING_FREE(scanner->tags.data[i].custom_tag_name);
    }
    VEC_FREE(scanner->tags);
    free(scanner);
}
