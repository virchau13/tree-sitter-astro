#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
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
  sym_document = 29,
  sym_doctype = 30,
  sym__node = 31,
  sym_element = 32,
  sym_script_element = 33,
  sym_style_element = 34,
  sym_start_tag = 35,
  sym_script_start_tag = 36,
  sym_style_start_tag = 37,
  sym_self_closing_tag = 38,
  sym_end_tag = 39,
  sym_erroneous_end_tag = 40,
  sym_attribute = 41,
  sym_quoted_attribute_value = 42,
  sym_frontmatter = 43,
  sym_interpolation = 44,
  aux_sym_document_repeat1 = 45,
  aux_sym_start_tag_repeat1 = 46,
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 17,
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 18,
  [27] = 27,
  [28] = 28,
  [29] = 14,
  [30] = 16,
  [31] = 25,
  [32] = 15,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 35,
  [39] = 39,
  [40] = 39,
  [41] = 28,
  [42] = 24,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 20,
  [57] = 11,
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 63,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 71,
  [79] = 79,
  [80] = 80,
  [81] = 59,
  [82] = 61,
  [83] = 62,
  [84] = 79,
  [85] = 70,
  [86] = 20,
  [87] = 11,
  [88] = 71,
  [89] = 80,
  [90] = 68,
  [91] = 69,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 96,
  [103] = 103,
  [104] = 97,
  [105] = 105,
  [106] = 94,
  [107] = 96,
  [108] = 98,
  [109] = 96,
  [110] = 100,
  [111] = 99,
  [112] = 103,
  [113] = 105,
  [114] = 92,
  [115] = 101,
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_entity);
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
  [11] = {.lex_state = 19, .external_lex_state = 4},
  [12] = {.lex_state = 19, .external_lex_state = 3},
  [13] = {.lex_state = 19, .external_lex_state = 3},
  [14] = {.lex_state = 19, .external_lex_state = 4},
  [15] = {.lex_state = 19, .external_lex_state = 3},
  [16] = {.lex_state = 19, .external_lex_state = 3},
  [17] = {.lex_state = 19, .external_lex_state = 4},
  [18] = {.lex_state = 19, .external_lex_state = 3},
  [19] = {.lex_state = 19, .external_lex_state = 4},
  [20] = {.lex_state = 19, .external_lex_state = 3},
  [21] = {.lex_state = 19, .external_lex_state = 4},
  [22] = {.lex_state = 19, .external_lex_state = 3},
  [23] = {.lex_state = 19, .external_lex_state = 4},
  [24] = {.lex_state = 19, .external_lex_state = 3},
  [25] = {.lex_state = 19, .external_lex_state = 4},
  [26] = {.lex_state = 19, .external_lex_state = 4},
  [27] = {.lex_state = 19, .external_lex_state = 3},
  [28] = {.lex_state = 19, .external_lex_state = 4},
  [29] = {.lex_state = 19, .external_lex_state = 3},
  [30] = {.lex_state = 19, .external_lex_state = 4},
  [31] = {.lex_state = 19, .external_lex_state = 3},
  [32] = {.lex_state = 19, .external_lex_state = 4},
  [33] = {.lex_state = 19, .external_lex_state = 4},
  [34] = {.lex_state = 19, .external_lex_state = 3},
  [35] = {.lex_state = 19, .external_lex_state = 3},
  [36] = {.lex_state = 19, .external_lex_state = 3},
  [37] = {.lex_state = 19, .external_lex_state = 4},
  [38] = {.lex_state = 19, .external_lex_state = 4},
  [39] = {.lex_state = 19, .external_lex_state = 4},
  [40] = {.lex_state = 19, .external_lex_state = 3},
  [41] = {.lex_state = 19, .external_lex_state = 3},
  [42] = {.lex_state = 19, .external_lex_state = 4},
  [43] = {.lex_state = 1, .external_lex_state = 4},
  [44] = {.lex_state = 1, .external_lex_state = 4},
  [45] = {.lex_state = 7, .external_lex_state = 5},
  [46] = {.lex_state = 7, .external_lex_state = 5},
  [47] = {.lex_state = 7, .external_lex_state = 5},
  [48] = {.lex_state = 7, .external_lex_state = 5},
  [49] = {.lex_state = 7, .external_lex_state = 5},
  [50] = {.lex_state = 7, .external_lex_state = 6},
  [51] = {.lex_state = 7, .external_lex_state = 5},
  [52] = {.lex_state = 7, .external_lex_state = 6},
  [53] = {.lex_state = 7, .external_lex_state = 6},
  [54] = {.lex_state = 7, .external_lex_state = 6},
  [55] = {.lex_state = 7, .external_lex_state = 6},
  [56] = {.lex_state = 7, .external_lex_state = 5},
  [57] = {.lex_state = 7, .external_lex_state = 5},
  [58] = {.lex_state = 7, .external_lex_state = 6},
  [59] = {.lex_state = 7, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 7},
  [61] = {.lex_state = 7, .external_lex_state = 5},
  [62] = {.lex_state = 7, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 0, .external_lex_state = 8},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 0, .external_lex_state = 8},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 4, .external_lex_state = 6},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 0, .external_lex_state = 9},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 0, .external_lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 8},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 0, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 6},
  [80] = {.lex_state = 2, .external_lex_state = 6},
  [81] = {.lex_state = 7, .external_lex_state = 6},
  [82] = {.lex_state = 7, .external_lex_state = 6},
  [83] = {.lex_state = 7, .external_lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 6},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 7, .external_lex_state = 6},
  [87] = {.lex_state = 7, .external_lex_state = 6},
  [88] = {.lex_state = 0, .external_lex_state = 8},
  [89] = {.lex_state = 2, .external_lex_state = 6},
  [90] = {.lex_state = 4, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 10},
  [93] = {.lex_state = 0, .external_lex_state = 6},
  [94] = {.lex_state = 0, .external_lex_state = 6},
  [95] = {.lex_state = 0, .external_lex_state = 6},
  [96] = {.lex_state = 0, .external_lex_state = 6},
  [97] = {.lex_state = 0, .external_lex_state = 6},
  [98] = {.lex_state = 0, .external_lex_state = 6},
  [99] = {.lex_state = 0, .external_lex_state = 11},
  [100] = {.lex_state = 0, .external_lex_state = 6},
  [101] = {.lex_state = 0, .external_lex_state = 6},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 17, .external_lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 6},
  [105] = {.lex_state = 0, .external_lex_state = 6},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 0, .external_lex_state = 6},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 0, .external_lex_state = 6},
  [110] = {.lex_state = 0, .external_lex_state = 6},
  [111] = {.lex_state = 0, .external_lex_state = 11},
  [112] = {.lex_state = 17, .external_lex_state = 6},
  [113] = {.lex_state = 0, .external_lex_state = 6},
  [114] = {.lex_state = 0, .external_lex_state = 10},
  [115] = {.lex_state = 0, .external_lex_state = 6},
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
  },
  [1] = {
    [sym_document] = STATE(95),
    [sym_doctype] = STATE(9),
    [sym__node] = STATE(9),
    [sym_element] = STATE(9),
    [sym_script_element] = STATE(9),
    [sym_style_element] = STATE(9),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(66),
    [sym_style_start_tag] = STATE(65),
    [sym_self_closing_tag] = STATE(17),
    [sym_erroneous_end_tag] = STATE(9),
    [sym_frontmatter] = STATE(8),
    [sym_interpolation] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
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
  [0] = 13,
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
    STATE(3), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_self_closing_tag,
    STATE(29), 1,
      sym_end_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(64), 1,
      sym_style_start_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [48] = 13,
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
    STATE(3), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_end_tag,
    STATE(22), 1,
      sym_self_closing_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(64), 1,
      sym_style_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(2), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [96] = 13,
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
    STATE(3), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_self_closing_tag,
    STATE(26), 1,
      sym_end_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(64), 1,
      sym_style_start_tag,
    ACTIONS(37), 2,
      sym_entity,
      sym_text,
    STATE(5), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [144] = 13,
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
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_end_tag,
    STATE(22), 1,
      sym_self_closing_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(64), 1,
      sym_style_start_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [192] = 12,
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
    STATE(17), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    STATE(10), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [237] = 12,
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
    STATE(3), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_self_closing_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(64), 1,
      sym_style_start_tag,
    ACTIONS(56), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [282] = 12,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(66), 2,
      sym_entity,
      sym_text,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [327] = 12,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    STATE(10), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [372] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LT_BANG,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH,
    ACTIONS(80), 1,
      sym__interpolation_start,
    STATE(4), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(77), 2,
      sym_entity,
      sym_text,
    STATE(10), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_interpolation,
      aux_sym_document_repeat1,
  [417] = 3,
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
  [432] = 3,
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
  [447] = 3,
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
  [462] = 3,
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
  [477] = 3,
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
  [492] = 3,
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
  [507] = 3,
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
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(107), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [537] = 3,
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
  [552] = 3,
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
  [567] = 3,
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
  [582] = 3,
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
  [597] = 3,
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
  [612] = 3,
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
  [627] = 3,
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
  [642] = 3,
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
  [657] = 3,
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
  [672] = 3,
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
  [687] = 3,
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
  [702] = 3,
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
  [717] = 3,
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
  [732] = 3,
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
  [747] = 3,
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
  [762] = 3,
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
  [777] = 3,
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
  [792] = 3,
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
  [807] = 3,
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
  [822] = 3,
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
  [837] = 3,
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
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_LT,
      sym_entity,
      sym_text,
    ACTIONS(151), 4,
      sym__implicit_end_tag,
      sym__interpolation_start,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
  [867] = 3,
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
  [882] = 3,
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
  [897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_attribute_value,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym__interpolation_start,
    STATE(59), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_attribute_value,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__interpolation_start,
    STATE(81), 2,
      sym_quoted_attribute_value,
      sym_interpolation,
  [937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_attribute_name,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(45), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_SLASH_GT,
    ACTIONS(180), 1,
      sym_attribute_name,
    STATE(45), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(182), 1,
      anon_sym_GT,
    ACTIONS(184), 1,
      anon_sym_SLASH_GT,
    STATE(46), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(182), 1,
      anon_sym_GT,
    ACTIONS(186), 1,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(188), 1,
      anon_sym_SLASH_GT,
    STATE(45), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      sym_attribute_name,
    STATE(55), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(194), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_attribute_name,
    STATE(52), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(201), 1,
      anon_sym_GT,
    STATE(52), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(203), 1,
      anon_sym_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_attribute_name,
    ACTIONS(205), 1,
      anon_sym_GT,
    STATE(52), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(194), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__start_tag_name,
    ACTIONS(213), 1,
      sym__script_start_tag_name,
    ACTIONS(215), 1,
      sym__style_start_tag_name,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    ACTIONS(223), 1,
      sym_raw_text,
    STATE(16), 1,
      sym_end_tag,
  [1184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    ACTIONS(225), 1,
      sym_raw_text,
    STATE(15), 1,
      sym_end_tag,
  [1197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    ACTIONS(229), 1,
      sym_raw_text,
    STATE(32), 1,
      sym_end_tag,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    ACTIONS(231), 1,
      sym_raw_text,
    STATE(30), 1,
      sym_end_tag,
  [1223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__script_start_tag_name,
    ACTIONS(215), 1,
      sym__style_start_tag_name,
    ACTIONS(233), 1,
      sym__start_tag_name,
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      aux_sym_quoted_attribute_value_token1,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    STATE(39), 1,
      sym_end_tag,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__end_tag_name,
    ACTIONS(241), 1,
      sym_erroneous_end_tag_name,
  [1266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      sym_raw_text,
  [1276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(249), 1,
      sym_raw_text,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      sym_raw_text,
  [1312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      sym_raw_text,
  [1338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    STATE(41), 1,
      sym_end_tag,
  [1348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_quoted_attribute_value_token2,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    STATE(28), 1,
      sym_end_tag,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(269), 1,
      sym__end_tag_name,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_raw_text,
  [1428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_quoted_attribute_value_token2,
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_quoted_attribute_value_token1,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    STATE(40), 1,
      sym_end_tag,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__end_tag_name,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DASH_DASH_DASH,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_GT,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_erroneous_end_tag_name,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_GT,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__doctype,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_doctype_token1,
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_GT,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_GT,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_GT,
  [1591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_erroneous_end_tag_name,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_doctype_token1,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__end_tag_name,
  [1619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 372,
  [SMALL_STATE(11)] = 417,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 447,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 477,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 507,
  [SMALL_STATE(18)] = 522,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 552,
  [SMALL_STATE(21)] = 567,
  [SMALL_STATE(22)] = 582,
  [SMALL_STATE(23)] = 597,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 627,
  [SMALL_STATE(26)] = 642,
  [SMALL_STATE(27)] = 657,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 687,
  [SMALL_STATE(30)] = 702,
  [SMALL_STATE(31)] = 717,
  [SMALL_STATE(32)] = 732,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 762,
  [SMALL_STATE(35)] = 777,
  [SMALL_STATE(36)] = 792,
  [SMALL_STATE(37)] = 807,
  [SMALL_STATE(38)] = 822,
  [SMALL_STATE(39)] = 837,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 867,
  [SMALL_STATE(42)] = 882,
  [SMALL_STATE(43)] = 897,
  [SMALL_STATE(44)] = 917,
  [SMALL_STATE(45)] = 937,
  [SMALL_STATE(46)] = 952,
  [SMALL_STATE(47)] = 969,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 1003,
  [SMALL_STATE(50)] = 1020,
  [SMALL_STATE(51)] = 1034,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1060,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1088,
  [SMALL_STATE(56)] = 1102,
  [SMALL_STATE(57)] = 1111,
  [SMALL_STATE(58)] = 1120,
  [SMALL_STATE(59)] = 1131,
  [SMALL_STATE(60)] = 1140,
  [SMALL_STATE(61)] = 1153,
  [SMALL_STATE(62)] = 1162,
  [SMALL_STATE(63)] = 1171,
  [SMALL_STATE(64)] = 1184,
  [SMALL_STATE(65)] = 1197,
  [SMALL_STATE(66)] = 1210,
  [SMALL_STATE(67)] = 1223,
  [SMALL_STATE(68)] = 1236,
  [SMALL_STATE(69)] = 1246,
  [SMALL_STATE(70)] = 1256,
  [SMALL_STATE(71)] = 1266,
  [SMALL_STATE(72)] = 1276,
  [SMALL_STATE(73)] = 1286,
  [SMALL_STATE(74)] = 1294,
  [SMALL_STATE(75)] = 1302,
  [SMALL_STATE(76)] = 1312,
  [SMALL_STATE(77)] = 1320,
  [SMALL_STATE(78)] = 1328,
  [SMALL_STATE(79)] = 1338,
  [SMALL_STATE(80)] = 1348,
  [SMALL_STATE(81)] = 1358,
  [SMALL_STATE(82)] = 1366,
  [SMALL_STATE(83)] = 1374,
  [SMALL_STATE(84)] = 1382,
  [SMALL_STATE(85)] = 1392,
  [SMALL_STATE(86)] = 1402,
  [SMALL_STATE(87)] = 1410,
  [SMALL_STATE(88)] = 1418,
  [SMALL_STATE(89)] = 1428,
  [SMALL_STATE(90)] = 1438,
  [SMALL_STATE(91)] = 1448,
  [SMALL_STATE(92)] = 1458,
  [SMALL_STATE(93)] = 1465,
  [SMALL_STATE(94)] = 1472,
  [SMALL_STATE(95)] = 1479,
  [SMALL_STATE(96)] = 1486,
  [SMALL_STATE(97)] = 1493,
  [SMALL_STATE(98)] = 1500,
  [SMALL_STATE(99)] = 1507,
  [SMALL_STATE(100)] = 1514,
  [SMALL_STATE(101)] = 1521,
  [SMALL_STATE(102)] = 1528,
  [SMALL_STATE(103)] = 1535,
  [SMALL_STATE(104)] = 1542,
  [SMALL_STATE(105)] = 1549,
  [SMALL_STATE(106)] = 1556,
  [SMALL_STATE(107)] = 1563,
  [SMALL_STATE(108)] = 1570,
  [SMALL_STATE(109)] = 1577,
  [SMALL_STATE(110)] = 1584,
  [SMALL_STATE(111)] = 1591,
  [SMALL_STATE(112)] = 1598,
  [SMALL_STATE(113)] = 1605,
  [SMALL_STATE(114)] = 1612,
  [SMALL_STATE(115)] = 1619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(51),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
};

enum ts_external_scanner_symbol_identifiers {
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
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
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
