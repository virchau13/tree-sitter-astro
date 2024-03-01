#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_text = 16,
  anon_sym_DASH_DASH_DASH = 17,
  anon_sym_RBRACE = 18,
  sym__start_tag_name = 19,
  sym__script_start_tag_name = 20,
  sym__style_start_tag_name = 21,
  sym__end_tag_name = 22,
  sym_erroneous_end_tag_name = 23,
  sym__implicit_end_tag = 24,
  sym_raw_text = 25,
  sym_comment = 26,
  sym__frontmatter_start = 27,
  sym__interpolation_start = 28,
  sym__markdown_start_tag_name = 29,
  sym_document = 30,
  sym_doctype = 31,
  sym__node = 32,
  sym_element = 33,
  sym_script_element = 34,
  sym_style_element = 35,
  sym_start_tag = 36,
  sym_script_start_tag = 37,
  sym_style_start_tag = 38,
  sym_self_closing_tag = 39,
  sym_end_tag = 40,
  sym_erroneous_end_tag = 41,
  sym_attribute = 42,
  sym_quoted_attribute_value = 43,
  sym_markdown_element = 44,
  sym_markdown_start_tag = 45,
  sym__markdown_self_closing_tag = 46,
  sym_frontmatter = 47,
  sym_interpolation = 48,
  aux_sym_document_repeat1 = 49,
  aux_sym_start_tag_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_RBRACE] = "}",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym__frontmatter_start] = "---",
  [sym__interpolation_start] = "{",
  [sym__markdown_start_tag_name] = "tag_name",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_markdown_element] = "markdown_element",
  [sym_markdown_start_tag] = "start_tag",
  [sym__markdown_self_closing_tag] = "self_closing_tag",
  [sym_frontmatter] = "frontmatter",
  [sym_interpolation] = "interpolation",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym__frontmatter_start] = anon_sym_DASH_DASH_DASH,
  [sym__interpolation_start] = sym__interpolation_start,
  [sym__markdown_start_tag_name] = sym__start_tag_name,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_markdown_element] = sym_markdown_element,
  [sym_markdown_start_tag] = sym_start_tag,
  [sym__markdown_self_closing_tag] = sym_self_closing_tag,
  [sym_frontmatter] = sym_frontmatter,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__frontmatter_start] = {
    .visible = true,
    .named = false,
  },
  [sym__interpolation_start] = {
    .visible = true,
    .named = false,
  },
  [sym__markdown_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_element] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__markdown_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 13,
  [21] = 15,
  [22] = 17,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 24,
  [32] = 32,
  [33] = 25,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 26,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 28,
  [44] = 29,
  [45] = 45,
  [46] = 30,
  [47] = 12,
  [48] = 32,
  [49] = 39,
  [50] = 45,
  [51] = 34,
  [52] = 40,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 60,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 59,
  [72] = 72,
  [73] = 66,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 76,
  [81] = 75,
  [82] = 39,
  [83] = 13,
  [84] = 39,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 88,
  [94] = 91,
  [95] = 91,
  [96] = 96,
  [97] = 72,
  [98] = 77,
  [99] = 74,
  [100] = 100,
  [101] = 100,
  [102] = 13,
  [103] = 89,
  [104] = 91,
  [105] = 90,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 92,
  [110] = 110,
  [111] = 96,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 112,
  [123] = 120,
  [124] = 124,
  [125] = 116,
  [126] = 126,
  [127] = 114,
  [128] = 124,
  [129] = 114,
  [130] = 130,
  [131] = 119,
  [132] = 126,
  [133] = 117,
  [134] = 130,
  [135] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 3},
  [3] = {.lex_state = 19, .external_lex_state = 3},
  [4] = {.lex_state = 19, .external_lex_state = 3},
  [5] = {.lex_state = 19, .external_lex_state = 3},
  [6] = {.lex_state = 19, .external_lex_state = 4},
  [7] = {.lex_state = 19, .external_lex_state = 3},
  [8] = {.lex_state = 19, .external_lex_state = 4},
  [9] = {.lex_state = 19, .external_lex_state = 4},
  [10] = {.lex_state = 19, .external_lex_state = 4},
  [11] = {.lex_state = 19, .external_lex_state = 3},
  [12] = {.lex_state = 19, .external_lex_state = 4},
  [13] = {.lex_state = 19, .external_lex_state = 3},
  [14] = {.lex_state = 19, .external_lex_state = 3},
  [15] = {.lex_state = 19, .external_lex_state = 4},
  [16] = {.lex_state = 19, .external_lex_state = 4},
  [17] = {.lex_state = 19, .external_lex_state = 3},
  [18] = {.lex_state = 19, .external_lex_state = 4},
  [19] = {.lex_state = 19, .external_lex_state = 3},
  [20] = {.lex_state = 19, .external_lex_state = 4},
  [21] = {.lex_state = 19, .external_lex_state = 3},
  [22] = {.lex_state = 19, .external_lex_state = 4},
  [23] = {.lex_state = 19, .external_lex_state = 4},
  [24] = {.lex_state = 19, .external_lex_state = 3},
  [25] = {.lex_state = 19, .external_lex_state = 3},
  [26] = {.lex_state = 19, .external_lex_state = 3},
  [27] = {.lex_state = 19, .external_lex_state = 4},
  [28] = {.lex_state = 19, .external_lex_state = 3},
  [29] = {.lex_state = 19, .external_lex_state = 3},
  [30] = {.lex_state = 19, .external_lex_state = 3},
  [31] = {.lex_state = 19, .external_lex_state = 4},
  [32] = {.lex_state = 19, .external_lex_state = 3},
  [33] = {.lex_state = 19, .external_lex_state = 4},
  [34] = {.lex_state = 19, .external_lex_state = 3},
  [35] = {.lex_state = 19, .external_lex_state = 4},
  [36] = {.lex_state = 19, .external_lex_state = 3},
  [37] = {.lex_state = 19, .external_lex_state = 4},
  [38] = {.lex_state = 19, .external_lex_state = 4},
  [39] = {.lex_state = 19, .external_lex_state = 4},
  [40] = {.lex_state = 19, .external_lex_state = 3},
  [41] = {.lex_state = 19, .external_lex_state = 3},
  [42] = {.lex_state = 19, .external_lex_state = 3},
  [43] = {.lex_state = 19, .external_lex_state = 4},
  [44] = {.lex_state = 19, .external_lex_state = 4},
  [45] = {.lex_state = 19, .external_lex_state = 3},
  [46] = {.lex_state = 19, .external_lex_state = 4},
  [47] = {.lex_state = 19, .external_lex_state = 3},
  [48] = {.lex_state = 19, .external_lex_state = 4},
  [49] = {.lex_state = 19, .external_lex_state = 3},
  [50] = {.lex_state = 19, .external_lex_state = 4},
  [51] = {.lex_state = 19, .external_lex_state = 4},
  [52] = {.lex_state = 19, .external_lex_state = 4},
  [53] = {.lex_state = 1, .external_lex_state = 4},
  [54] = {.lex_state = 1, .external_lex_state = 4},
  [55] = {.lex_state = 7, .external_lex_state = 5},
  [56] = {.lex_state = 7, .external_lex_state = 5},
  [57] = {.lex_state = 7, .external_lex_state = 5},
  [58] = {.lex_state = 7, .external_lex_state = 5},
  [59] = {.lex_state = 7, .external_lex_state = 5},
  [60] = {.lex_state = 7, .external_lex_state = 5},
  [61] = {.lex_state = 7, .external_lex_state = 5},
  [62] = {.lex_state = 7, .external_lex_state = 5},
  [63] = {.lex_state = 7, .external_lex_state = 5},
  [64] = {.lex_state = 7, .external_lex_state = 6},
  [65] = {.lex_state = 7, .external_lex_state = 6},
  [66] = {.lex_state = 7, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 0, .external_lex_state = 7},
  [69] = {.lex_state = 7, .external_lex_state = 6},
  [70] = {.lex_state = 7, .external_lex_state = 6},
  [71] = {.lex_state = 7, .external_lex_state = 6},
  [72] = {.lex_state = 7, .external_lex_state = 5},
  [73] = {.lex_state = 7, .external_lex_state = 6},
  [74] = {.lex_state = 7, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 7, .external_lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 0, .external_lex_state = 8},
  [81] = {.lex_state = 0, .external_lex_state = 8},
  [82] = {.lex_state = 7, .external_lex_state = 5},
  [83] = {.lex_state = 7, .external_lex_state = 5},
  [84] = {.lex_state = 7, .external_lex_state = 6},
  [85] = {.lex_state = 0, .external_lex_state = 8},
  [86] = {.lex_state = 0, .external_lex_state = 8},
  [87] = {.lex_state = 0, .external_lex_state = 8},
  [88] = {.lex_state = 0, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 8},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 8},
  [95] = {.lex_state = 0, .external_lex_state = 8},
  [96] = {.lex_state = 2, .external_lex_state = 6},
  [97] = {.lex_state = 7, .external_lex_state = 6},
  [98] = {.lex_state = 7, .external_lex_state = 6},
  [99] = {.lex_state = 7, .external_lex_state = 6},
  [100] = {.lex_state = 4, .external_lex_state = 6},
  [101] = {.lex_state = 4, .external_lex_state = 6},
  [102] = {.lex_state = 7, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 8},
  [105] = {.lex_state = 0, .external_lex_state = 6},
  [106] = {.lex_state = 0, .external_lex_state = 8},
  [107] = {.lex_state = 0, .external_lex_state = 8},
  [108] = {.lex_state = 0, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 6},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 2, .external_lex_state = 6},
  [112] = {.lex_state = 0, .external_lex_state = 6},
  [113] = {.lex_state = 0, .external_lex_state = 6},
  [114] = {.lex_state = 0, .external_lex_state = 6},
  [115] = {.lex_state = 0, .external_lex_state = 6},
  [116] = {.lex_state = 0, .external_lex_state = 6},
  [117] = {.lex_state = 0, .external_lex_state = 6},
  [118] = {.lex_state = 0, .external_lex_state = 6},
  [119] = {.lex_state = 0, .external_lex_state = 10},
  [120] = {.lex_state = 0, .external_lex_state = 6},
  [121] = {.lex_state = 0, .external_lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 6},
  [123] = {.lex_state = 0, .external_lex_state = 6},
  [124] = {.lex_state = 0, .external_lex_state = 6},
  [125] = {.lex_state = 0, .external_lex_state = 6},
  [126] = {.lex_state = 17, .external_lex_state = 6},
  [127] = {.lex_state = 0, .external_lex_state = 6},
  [128] = {.lex_state = 0, .external_lex_state = 6},
  [129] = {.lex_state = 0, .external_lex_state = 6},
  [130] = {.lex_state = 0, .external_lex_state = 11},
  [131] = {.lex_state = 0, .external_lex_state = 10},
  [132] = {.lex_state = 17, .external_lex_state = 6},
  [133] = {.lex_state = 0, .external_lex_state = 6},
  [134] = {.lex_state = 0, .external_lex_state = 11},
  [135] = {.lex_state = 0, .external_lex_state = 6},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
  ts_external_token__frontmatter_start = 9,
  ts_external_token__interpolation_start = 10,
  ts_external_token__markdown_start_tag_name = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__frontmatter_start] = sym__frontmatter_start,
  [ts_external_token__interpolation_start] = sym__interpolation_start,
  [ts_external_token__markdown_start_tag_name] = sym__markdown_start_tag_name,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__frontmatter_start] = true,
    [ts_external_token__interpolation_start] = true,
    [ts_external_token__markdown_start_tag_name] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token__frontmatter_start] = true,
    [ts_external_token__interpolation_start] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__interpolation_start] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token__interpolation_start] = true,
  },
  [5] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__markdown_start_tag_name] = true,
  },
  [8] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__frontmatter_start] = ACTIONS(1),
    [sym__interpolation_start] = ACTIONS(1),
    [sym__markdown_start_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(113),
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(75),
    [sym_style_start_tag] = STATE(76),
    [sym_self_closing_tag] = STATE(15),
    [sym_erroneous_end_tag] = STATE(6),
    [sym_markdown_element] = STATE(6),
    [sym_markdown_start_tag] = STATE(78),
    [sym__markdown_self_closing_tag] = STATE(16),
    [sym_frontmatter] = STATE(10),
    [sym_interpolation] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__frontmatter_start] = ACTIONS(15),
    [sym__interpolation_start] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    ACTIONS(29), 1,
      sym__interpolation_start,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym__markdown_self_closing_tag,
    STATE(19), 1,
      sym_end_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_markdown_start_tag,
    STATE(80), 1,
      sym_style_start_tag,
    STATE(81), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(3), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [55] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym__interpolation_start,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym__markdown_self_closing_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(34), 1,
      sym_end_tag,
    STATE(79), 1,
      sym_markdown_start_tag,
    STATE(80), 1,
      sym_style_start_tag,
    STATE(81), 1,
      sym_script_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(7), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [110] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__interpolation_start,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym__markdown_self_closing_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(27), 1,
      sym_end_tag,
    STATE(79), 1,
      sym_markdown_start_tag,
    STATE(80), 1,
      sym_style_start_tag,
    STATE(81), 1,
      sym_script_start_tag,
    ACTIONS(37), 2,
      sym_entity,
      sym_text,
    STATE(5), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [165] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__interpolation_start,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym__markdown_self_closing_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_tag,
    STATE(79), 1,
      sym_markdown_start_tag,
    STATE(80), 1,
      sym_style_start_tag,
    STATE(81), 1,
      sym_script_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(7), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [220] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym__interpolation_start,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym__markdown_self_closing_tag,
    STATE(75), 1,
      sym_script_start_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_markdown_start_tag,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [272] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LT_BANG,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      sym__implicit_end_tag,
    ACTIONS(61), 1,
      sym__interpolation_start,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym__markdown_self_closing_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_markdown_start_tag,
    STATE(80), 1,
      sym_style_start_tag,
    STATE(81), 1,
      sym_script_start_tag,
    ACTIONS(56), 2,
      sym_entity,
      sym_text,
    STATE(7), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [324] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LT_SLASH,
    ACTIONS(76), 1,
      sym__interpolation_start,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym__markdown_self_closing_tag,
    STATE(75), 1,
      sym_script_start_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_markdown_start_tag,
    ACTIONS(73), 2,
      sym_entity,
      sym_text,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [376] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym__interpolation_start,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym__markdown_self_closing_tag,
    STATE(75), 1,
      sym_script_start_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_markdown_start_tag,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [428] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym__interpolation_start,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym__markdown_self_closing_tag,
    STATE(75), 1,
      sym_script_start_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_markdown_start_tag,
    ACTIONS(81), 2,
      sym_entity,
      sym_text,
    STATE(9), 9,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_markdown_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(83), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(87), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(91), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(95), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(99), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(95), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(103), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(107), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(111), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(91), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(99), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(103), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(83), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(115), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(119), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(123), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(111), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(127), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(131), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(135), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(115), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(139), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(119), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(143), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(147), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(147), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(123), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(151), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(155), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(159), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(163), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(167), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(127), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(131), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(171), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(135), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(87), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(139), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(155), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(171), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(143), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(159), 4,
      sym__interpolation_start,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [1110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_attribute_value,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym__interpolation_start,
    STATE(72), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [1130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_attribute_value,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym__interpolation_start,
    STATE(97), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [1150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_SLASH_GT,
    ACTIONS(195), 1,
      sym_attribute_name,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(197), 1,
      anon_sym_SLASH_GT,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      anon_sym_SLASH_GT,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(203), 1,
      anon_sym_SLASH_GT,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_attribute_name,
    ACTIONS(205), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(210), 1,
      anon_sym_GT,
    ACTIONS(212), 1,
      anon_sym_SLASH_GT,
    STATE(56), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_SLASH_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(218), 1,
      anon_sym_SLASH_GT,
    STATE(58), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(210), 1,
      anon_sym_GT,
    ACTIONS(220), 1,
      anon_sym_SLASH_GT,
    STATE(55), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_GT,
    ACTIONS(224), 1,
      sym_attribute_name,
    STATE(71), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_attribute_name,
    ACTIONS(226), 1,
      anon_sym_GT,
    STATE(71), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(228), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__start_tag_name,
    ACTIONS(234), 1,
      sym__script_start_tag_name,
    ACTIONS(236), 1,
      sym__style_start_tag_name,
    ACTIONS(238), 1,
      sym__markdown_start_tag_name,
  [1357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__script_start_tag_name,
    ACTIONS(236), 1,
      sym__style_start_tag_name,
    ACTIONS(240), 1,
      sym__start_tag_name,
    ACTIONS(242), 1,
      sym__markdown_start_tag_name,
  [1373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_GT,
    STATE(64), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_attribute_name,
    ACTIONS(246), 1,
      anon_sym_GT,
    STATE(65), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_GT,
    ACTIONS(248), 1,
      sym_attribute_name,
    STATE(71), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(228), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      sym_raw_text,
    STATE(31), 1,
      sym_end_tag,
  [1457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_raw_text,
    STATE(33), 1,
      sym_end_tag,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(265), 1,
      sym_raw_text,
    STATE(35), 1,
      sym_end_tag,
  [1492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_raw_text,
    STATE(36), 1,
      sym_end_tag,
  [1505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    ACTIONS(271), 1,
      sym_raw_text,
    STATE(25), 1,
      sym_end_tag,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      sym_raw_text,
    STATE(24), 1,
      sym_end_tag,
  [1531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(277), 1,
      sym_raw_text,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym__end_tag_name,
    ACTIONS(285), 1,
      sym_erroneous_end_tag_name,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    STATE(44), 1,
      sym_end_tag,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    STATE(46), 1,
      sym_end_tag,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_raw_text,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    STATE(48), 1,
      sym_end_tag,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(291), 1,
      sym__end_tag_name,
  [1643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      sym_raw_text,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      sym_raw_text,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token2,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      aux_sym_quoted_attribute_value_token1,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    ACTIONS(309), 1,
      aux_sym_quoted_attribute_value_token1,
  [1717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    STATE(29), 1,
      sym_end_tag,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      sym_raw_text,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    STATE(30), 1,
      sym_end_tag,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    STATE(32), 1,
      sym_end_tag,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_quoted_attribute_value_token2,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_DASH_DASH,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_GT,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [1856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_erroneous_end_tag_name,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__doctype,
  [1877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_GT,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_GT,
  [1898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      aux_sym_doctype_token1,
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
  [1919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_GT,
  [1926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [1933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__end_tag_name,
  [1940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_erroneous_end_tag_name,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_doctype_token1,
  [1954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_GT,
  [1961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym__end_tag_name,
  [1968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 376,
  [SMALL_STATE(10)] = 428,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 495,
  [SMALL_STATE(13)] = 510,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 555,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 615,
  [SMALL_STATE(21)] = 630,
  [SMALL_STATE(22)] = 645,
  [SMALL_STATE(23)] = 660,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 690,
  [SMALL_STATE(26)] = 705,
  [SMALL_STATE(27)] = 720,
  [SMALL_STATE(28)] = 735,
  [SMALL_STATE(29)] = 750,
  [SMALL_STATE(30)] = 765,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 795,
  [SMALL_STATE(33)] = 810,
  [SMALL_STATE(34)] = 825,
  [SMALL_STATE(35)] = 840,
  [SMALL_STATE(36)] = 855,
  [SMALL_STATE(37)] = 870,
  [SMALL_STATE(38)] = 885,
  [SMALL_STATE(39)] = 900,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 930,
  [SMALL_STATE(42)] = 945,
  [SMALL_STATE(43)] = 960,
  [SMALL_STATE(44)] = 975,
  [SMALL_STATE(45)] = 990,
  [SMALL_STATE(46)] = 1005,
  [SMALL_STATE(47)] = 1020,
  [SMALL_STATE(48)] = 1035,
  [SMALL_STATE(49)] = 1050,
  [SMALL_STATE(50)] = 1065,
  [SMALL_STATE(51)] = 1080,
  [SMALL_STATE(52)] = 1095,
  [SMALL_STATE(53)] = 1110,
  [SMALL_STATE(54)] = 1130,
  [SMALL_STATE(55)] = 1150,
  [SMALL_STATE(56)] = 1167,
  [SMALL_STATE(57)] = 1184,
  [SMALL_STATE(58)] = 1201,
  [SMALL_STATE(59)] = 1218,
  [SMALL_STATE(60)] = 1233,
  [SMALL_STATE(61)] = 1250,
  [SMALL_STATE(62)] = 1267,
  [SMALL_STATE(63)] = 1284,
  [SMALL_STATE(64)] = 1301,
  [SMALL_STATE(65)] = 1315,
  [SMALL_STATE(66)] = 1329,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1357,
  [SMALL_STATE(69)] = 1373,
  [SMALL_STATE(70)] = 1387,
  [SMALL_STATE(71)] = 1401,
  [SMALL_STATE(72)] = 1415,
  [SMALL_STATE(73)] = 1424,
  [SMALL_STATE(74)] = 1435,
  [SMALL_STATE(75)] = 1444,
  [SMALL_STATE(76)] = 1457,
  [SMALL_STATE(77)] = 1470,
  [SMALL_STATE(78)] = 1479,
  [SMALL_STATE(79)] = 1492,
  [SMALL_STATE(80)] = 1505,
  [SMALL_STATE(81)] = 1518,
  [SMALL_STATE(82)] = 1531,
  [SMALL_STATE(83)] = 1540,
  [SMALL_STATE(84)] = 1549,
  [SMALL_STATE(85)] = 1557,
  [SMALL_STATE(86)] = 1567,
  [SMALL_STATE(87)] = 1575,
  [SMALL_STATE(88)] = 1583,
  [SMALL_STATE(89)] = 1593,
  [SMALL_STATE(90)] = 1603,
  [SMALL_STATE(91)] = 1613,
  [SMALL_STATE(92)] = 1623,
  [SMALL_STATE(93)] = 1633,
  [SMALL_STATE(94)] = 1643,
  [SMALL_STATE(95)] = 1653,
  [SMALL_STATE(96)] = 1663,
  [SMALL_STATE(97)] = 1673,
  [SMALL_STATE(98)] = 1681,
  [SMALL_STATE(99)] = 1689,
  [SMALL_STATE(100)] = 1697,
  [SMALL_STATE(101)] = 1707,
  [SMALL_STATE(102)] = 1717,
  [SMALL_STATE(103)] = 1725,
  [SMALL_STATE(104)] = 1735,
  [SMALL_STATE(105)] = 1745,
  [SMALL_STATE(106)] = 1755,
  [SMALL_STATE(107)] = 1763,
  [SMALL_STATE(108)] = 1771,
  [SMALL_STATE(109)] = 1779,
  [SMALL_STATE(110)] = 1789,
  [SMALL_STATE(111)] = 1797,
  [SMALL_STATE(112)] = 1807,
  [SMALL_STATE(113)] = 1814,
  [SMALL_STATE(114)] = 1821,
  [SMALL_STATE(115)] = 1828,
  [SMALL_STATE(116)] = 1835,
  [SMALL_STATE(117)] = 1842,
  [SMALL_STATE(118)] = 1849,
  [SMALL_STATE(119)] = 1856,
  [SMALL_STATE(120)] = 1863,
  [SMALL_STATE(121)] = 1870,
  [SMALL_STATE(122)] = 1877,
  [SMALL_STATE(123)] = 1884,
  [SMALL_STATE(124)] = 1891,
  [SMALL_STATE(125)] = 1898,
  [SMALL_STATE(126)] = 1905,
  [SMALL_STATE(127)] = 1912,
  [SMALL_STATE(128)] = 1919,
  [SMALL_STATE(129)] = 1926,
  [SMALL_STATE(130)] = 1933,
  [SMALL_STATE(131)] = 1940,
  [SMALL_STATE(132)] = 1947,
  [SMALL_STATE(133)] = 1954,
  [SMALL_STATE(134)] = 1961,
  [SMALL_STATE(135)] = 1968,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markdown_self_closing_tag, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markdown_self_closing_tag, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_element, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_element, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_element, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_element, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_element, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_element, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markdown_self_closing_tag, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markdown_self_closing_tag, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(73),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_start_tag, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_start_tag, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [327] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_astro_external_scanner_create(void);
void tree_sitter_astro_external_scanner_destroy(void *);
bool tree_sitter_astro_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_astro_external_scanner_serialize(void *, char *);
void tree_sitter_astro_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_astro(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_astro_external_scanner_create,
      tree_sitter_astro_external_scanner_destroy,
      tree_sitter_astro_external_scanner_scan,
      tree_sitter_astro_external_scanner_serialize,
      tree_sitter_astro_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
