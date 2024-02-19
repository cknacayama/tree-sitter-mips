#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  anon_sym_DOT = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_zero = 6,
  anon_sym_at = 7,
  anon_sym_v0 = 8,
  anon_sym_v1 = 9,
  anon_sym_a0 = 10,
  anon_sym_a1 = 11,
  anon_sym_a2 = 12,
  anon_sym_a3 = 13,
  anon_sym_t0 = 14,
  anon_sym_t1 = 15,
  anon_sym_t2 = 16,
  anon_sym_t3 = 17,
  anon_sym_t4 = 18,
  anon_sym_t5 = 19,
  anon_sym_t6 = 20,
  anon_sym_t7 = 21,
  anon_sym_t8 = 22,
  anon_sym_t9 = 23,
  anon_sym_s0 = 24,
  anon_sym_s1 = 25,
  anon_sym_s2 = 26,
  anon_sym_s3 = 27,
  anon_sym_s4 = 28,
  anon_sym_s5 = 29,
  anon_sym_s6 = 30,
  anon_sym_s7 = 31,
  anon_sym_k0 = 32,
  anon_sym_k1 = 33,
  anon_sym_gp = 34,
  anon_sym_sp = 35,
  anon_sym_fp = 36,
  anon_sym_ra = 37,
  anon_sym_DASH = 38,
  aux_sym_immediate_token1 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  sym_escape_sequence = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  sym_identifier = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym_label = 48,
  sym_instruction = 49,
  sym_directive = 50,
  sym_operand = 51,
  sym_directive_operand = 52,
  sym_register = 53,
  sym_register_name = 54,
  sym_immediate = 55,
  sym_string = 56,
  sym_memory = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_instruction_repeat1 = 59,
  aux_sym_directive_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_zero] = "zero",
  [anon_sym_at] = "at",
  [anon_sym_v0] = "v0",
  [anon_sym_v1] = "v1",
  [anon_sym_a0] = "a0",
  [anon_sym_a1] = "a1",
  [anon_sym_a2] = "a2",
  [anon_sym_a3] = "a3",
  [anon_sym_t0] = "t0",
  [anon_sym_t1] = "t1",
  [anon_sym_t2] = "t2",
  [anon_sym_t3] = "t3",
  [anon_sym_t4] = "t4",
  [anon_sym_t5] = "t5",
  [anon_sym_t6] = "t6",
  [anon_sym_t7] = "t7",
  [anon_sym_t8] = "t8",
  [anon_sym_t9] = "t9",
  [anon_sym_s0] = "s0",
  [anon_sym_s1] = "s1",
  [anon_sym_s2] = "s2",
  [anon_sym_s3] = "s3",
  [anon_sym_s4] = "s4",
  [anon_sym_s5] = "s5",
  [anon_sym_s6] = "s6",
  [anon_sym_s7] = "s7",
  [anon_sym_k0] = "k0",
  [anon_sym_k1] = "k1",
  [anon_sym_gp] = "gp",
  [anon_sym_sp] = "sp",
  [anon_sym_fp] = "fp",
  [anon_sym_ra] = "ra",
  [anon_sym_DASH] = "-",
  [aux_sym_immediate_token1] = "immediate_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_directive] = "directive",
  [sym_operand] = "operand",
  [sym_directive_operand] = "directive_operand",
  [sym_register] = "register",
  [sym_register_name] = "register_name",
  [sym_immediate] = "immediate",
  [sym_string] = "string",
  [sym_memory] = "memory",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_zero] = anon_sym_zero,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_v0] = anon_sym_v0,
  [anon_sym_v1] = anon_sym_v1,
  [anon_sym_a0] = anon_sym_a0,
  [anon_sym_a1] = anon_sym_a1,
  [anon_sym_a2] = anon_sym_a2,
  [anon_sym_a3] = anon_sym_a3,
  [anon_sym_t0] = anon_sym_t0,
  [anon_sym_t1] = anon_sym_t1,
  [anon_sym_t2] = anon_sym_t2,
  [anon_sym_t3] = anon_sym_t3,
  [anon_sym_t4] = anon_sym_t4,
  [anon_sym_t5] = anon_sym_t5,
  [anon_sym_t6] = anon_sym_t6,
  [anon_sym_t7] = anon_sym_t7,
  [anon_sym_t8] = anon_sym_t8,
  [anon_sym_t9] = anon_sym_t9,
  [anon_sym_s0] = anon_sym_s0,
  [anon_sym_s1] = anon_sym_s1,
  [anon_sym_s2] = anon_sym_s2,
  [anon_sym_s3] = anon_sym_s3,
  [anon_sym_s4] = anon_sym_s4,
  [anon_sym_s5] = anon_sym_s5,
  [anon_sym_s6] = anon_sym_s6,
  [anon_sym_s7] = anon_sym_s7,
  [anon_sym_k0] = anon_sym_k0,
  [anon_sym_k1] = anon_sym_k1,
  [anon_sym_gp] = anon_sym_gp,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_fp] = anon_sym_fp,
  [anon_sym_ra] = anon_sym_ra,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_immediate_token1] = aux_sym_immediate_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_directive] = sym_directive,
  [sym_operand] = sym_operand,
  [sym_directive_operand] = sym_directive_operand,
  [sym_register] = sym_register,
  [sym_register_name] = sym_register_name,
  [sym_immediate] = sym_immediate,
  [sym_string] = sym_string,
  [sym_memory] = sym_memory,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_immediate_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_register_name] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_label = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_label] = "label",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_label, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 27,
  [46] = 24,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == 'z') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == 'z') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '4') ADVANCE(69);
      if (lookahead == '5') ADVANCE(71);
      if (lookahead == '6') ADVANCE(73);
      if (lookahead == '7') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '4') ADVANCE(49);
      if (lookahead == '5') ADVANCE(51);
      if (lookahead == '6') ADVANCE(53);
      if (lookahead == '7') ADVANCE(55);
      if (lookahead == '8') ADVANCE(57);
      if (lookahead == '9') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '1') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == 'z') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(108);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_zero);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_zero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_v0);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_v0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_v1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_v1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_a0);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_a0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_a1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_a1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_a2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_a2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_a3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_a3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_t0);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_t0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_t1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_t1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_t2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_t2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_t3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_t3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_t4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_t4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_t5);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_t5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_t6);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_t6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_t7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_t7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_t8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_t8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_t9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_t9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_s0);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_s0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_s1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_s1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_s2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_s2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_s3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_s3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_s4);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_s4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_s5);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_s5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_s6);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_s6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_s7);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_s7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_k0);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_k0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_k1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_k1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_gp);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_gp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_sp);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_fp);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_fp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ra);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == 't') ADVANCE(28);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(80);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == '4') ADVANCE(70);
      if (lookahead == '5') ADVANCE(72);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '7') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == '2') ADVANCE(46);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '4') ADVANCE(50);
      if (lookahead == '5') ADVANCE(52);
      if (lookahead == '6') ADVANCE(54);
      if (lookahead == '7') ADVANCE(56);
      if (lookahead == '8') ADVANCE(58);
      if (lookahead == '9') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_zero] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_v0] = ACTIONS(1),
    [anon_sym_v1] = ACTIONS(1),
    [anon_sym_a0] = ACTIONS(1),
    [anon_sym_a1] = ACTIONS(1),
    [anon_sym_a2] = ACTIONS(1),
    [anon_sym_a3] = ACTIONS(1),
    [anon_sym_t0] = ACTIONS(1),
    [anon_sym_t1] = ACTIONS(1),
    [anon_sym_t2] = ACTIONS(1),
    [anon_sym_t3] = ACTIONS(1),
    [anon_sym_t4] = ACTIONS(1),
    [anon_sym_t5] = ACTIONS(1),
    [anon_sym_t6] = ACTIONS(1),
    [anon_sym_t7] = ACTIONS(1),
    [anon_sym_t8] = ACTIONS(1),
    [anon_sym_t9] = ACTIONS(1),
    [anon_sym_s0] = ACTIONS(1),
    [anon_sym_s1] = ACTIONS(1),
    [anon_sym_s2] = ACTIONS(1),
    [anon_sym_s3] = ACTIONS(1),
    [anon_sym_s4] = ACTIONS(1),
    [anon_sym_s5] = ACTIONS(1),
    [anon_sym_s6] = ACTIONS(1),
    [anon_sym_s7] = ACTIONS(1),
    [anon_sym_k0] = ACTIONS(1),
    [anon_sym_k1] = ACTIONS(1),
    [anon_sym_gp] = ACTIONS(1),
    [anon_sym_sp] = ACTIONS(1),
    [anon_sym_fp] = ACTIONS(1),
    [anon_sym_ra] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_immediate_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_label] = STATE(33),
    [sym_instruction] = STATE(33),
    [sym_directive] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_register_name] = STATE(46),
    [anon_sym_zero] = ACTIONS(11),
    [anon_sym_at] = ACTIONS(11),
    [anon_sym_v0] = ACTIONS(11),
    [anon_sym_v1] = ACTIONS(11),
    [anon_sym_a0] = ACTIONS(11),
    [anon_sym_a1] = ACTIONS(11),
    [anon_sym_a2] = ACTIONS(11),
    [anon_sym_a3] = ACTIONS(11),
    [anon_sym_t0] = ACTIONS(11),
    [anon_sym_t1] = ACTIONS(11),
    [anon_sym_t2] = ACTIONS(11),
    [anon_sym_t3] = ACTIONS(11),
    [anon_sym_t4] = ACTIONS(11),
    [anon_sym_t5] = ACTIONS(11),
    [anon_sym_t6] = ACTIONS(11),
    [anon_sym_t7] = ACTIONS(11),
    [anon_sym_t8] = ACTIONS(11),
    [anon_sym_t9] = ACTIONS(11),
    [anon_sym_s0] = ACTIONS(11),
    [anon_sym_s1] = ACTIONS(11),
    [anon_sym_s2] = ACTIONS(11),
    [anon_sym_s3] = ACTIONS(11),
    [anon_sym_s4] = ACTIONS(11),
    [anon_sym_s5] = ACTIONS(11),
    [anon_sym_s6] = ACTIONS(11),
    [anon_sym_s7] = ACTIONS(11),
    [anon_sym_k0] = ACTIONS(11),
    [anon_sym_k1] = ACTIONS(11),
    [anon_sym_gp] = ACTIONS(11),
    [anon_sym_sp] = ACTIONS(11),
    [anon_sym_fp] = ACTIONS(11),
    [anon_sym_ra] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_register_name] = STATE(24),
    [anon_sym_zero] = ACTIONS(13),
    [anon_sym_at] = ACTIONS(13),
    [anon_sym_v0] = ACTIONS(13),
    [anon_sym_v1] = ACTIONS(13),
    [anon_sym_a0] = ACTIONS(13),
    [anon_sym_a1] = ACTIONS(13),
    [anon_sym_a2] = ACTIONS(13),
    [anon_sym_a3] = ACTIONS(13),
    [anon_sym_t0] = ACTIONS(13),
    [anon_sym_t1] = ACTIONS(13),
    [anon_sym_t2] = ACTIONS(13),
    [anon_sym_t3] = ACTIONS(13),
    [anon_sym_t4] = ACTIONS(13),
    [anon_sym_t5] = ACTIONS(13),
    [anon_sym_t6] = ACTIONS(13),
    [anon_sym_t7] = ACTIONS(13),
    [anon_sym_t8] = ACTIONS(13),
    [anon_sym_t9] = ACTIONS(13),
    [anon_sym_s0] = ACTIONS(13),
    [anon_sym_s1] = ACTIONS(13),
    [anon_sym_s2] = ACTIONS(13),
    [anon_sym_s3] = ACTIONS(13),
    [anon_sym_s4] = ACTIONS(13),
    [anon_sym_s5] = ACTIONS(13),
    [anon_sym_s6] = ACTIONS(13),
    [anon_sym_s7] = ACTIONS(13),
    [anon_sym_k0] = ACTIONS(13),
    [anon_sym_k1] = ACTIONS(13),
    [anon_sym_gp] = ACTIONS(13),
    [anon_sym_sp] = ACTIONS(13),
    [anon_sym_fp] = ACTIONS(13),
    [anon_sym_ra] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_immediate_token1,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_comment,
    STATE(14), 1,
      sym_operand,
    STATE(16), 1,
      sym_immediate,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_register,
      sym_memory,
  [33] = 8,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_immediate_token1,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(20), 1,
      sym_directive_operand,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(32), 2,
      sym_immediate,
      sym_string,
  [60] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_immediate_token1,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(16), 1,
      sym_immediate,
    STATE(35), 1,
      sym_operand,
    STATE(26), 2,
      sym_register,
      sym_memory,
  [86] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_immediate_token1,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(28), 1,
      sym_directive_operand,
    STATE(32), 2,
      sym_immediate,
      sym_string,
  [109] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(38), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(37), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [143] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [155] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_directive_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [169] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [181] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [195] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [209] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [223] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [237] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_directive_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [251] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_repeat1,
    ACTIONS(93), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [265] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(97), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [279] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_directive_repeat1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [293] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(103), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [307] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [321] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
  [334] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [345] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [356] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [367] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [378] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [389] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [400] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
  [413] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [424] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [435] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
  [448] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [459] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [470] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [489] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_register,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_register,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_immediate_token1,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 251,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 307,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 345,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 389,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 435,
  [SMALL_STATE(34)] = 448,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 497,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 517,
  [SMALL_STATE(42)] = 524,
  [SMALL_STATE(43)] = 531,
  [SMALL_STATE(44)] = 538,
  [SMALL_STATE(45)] = 545,
  [SMALL_STATE(46)] = 552,
  [SMALL_STATE(47)] = 559,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_name, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_name, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operand, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_operand, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operand, 1, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_operand, 1, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mips(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
