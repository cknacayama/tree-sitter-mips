#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_DOT = 3,
  anon_sym_COMMA = 4,
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
  anon_sym_0 = 38,
  anon_sym_1 = 39,
  anon_sym_2 = 40,
  anon_sym_3 = 41,
  anon_sym_4 = 42,
  anon_sym_5 = 43,
  anon_sym_6 = 44,
  anon_sym_7 = 45,
  anon_sym_8 = 46,
  anon_sym_9 = 47,
  anon_sym_10 = 48,
  anon_sym_11 = 49,
  anon_sym_12 = 50,
  anon_sym_13 = 51,
  anon_sym_14 = 52,
  anon_sym_15 = 53,
  anon_sym_16 = 54,
  anon_sym_17 = 55,
  anon_sym_18 = 56,
  anon_sym_19 = 57,
  anon_sym_20 = 58,
  anon_sym_21 = 59,
  anon_sym_22 = 60,
  anon_sym_23 = 61,
  anon_sym_24 = 62,
  anon_sym_25 = 63,
  anon_sym_26 = 64,
  anon_sym_27 = 65,
  anon_sym_28 = 66,
  anon_sym_29 = 67,
  anon_sym_30 = 68,
  anon_sym_31 = 69,
  anon_sym_DASH = 70,
  aux_sym_immediate_token1 = 71,
  anon_sym_DQUOTE = 72,
  aux_sym_string_token1 = 73,
  sym_escape_sequence = 74,
  anon_sym_LPAREN = 75,
  anon_sym_RPAREN = 76,
  sym_identifier = 77,
  sym_comment = 78,
  sym_source_file = 79,
  sym_label = 80,
  sym_instruction = 81,
  sym_directive = 82,
  sym_operand_list = 83,
  sym_operand = 84,
  sym_directive_operand = 85,
  sym_register = 86,
  sym_register_name = 87,
  sym_immediate = 88,
  sym_string = 89,
  sym_memory = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_directive_repeat1 = 92,
  aux_sym_string_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [anon_sym_10] = "10",
  [anon_sym_11] = "11",
  [anon_sym_12] = "12",
  [anon_sym_13] = "13",
  [anon_sym_14] = "14",
  [anon_sym_15] = "15",
  [anon_sym_16] = "16",
  [anon_sym_17] = "17",
  [anon_sym_18] = "18",
  [anon_sym_19] = "19",
  [anon_sym_20] = "20",
  [anon_sym_21] = "21",
  [anon_sym_22] = "22",
  [anon_sym_23] = "23",
  [anon_sym_24] = "24",
  [anon_sym_25] = "25",
  [anon_sym_26] = "26",
  [anon_sym_27] = "27",
  [anon_sym_28] = "28",
  [anon_sym_29] = "29",
  [anon_sym_30] = "30",
  [anon_sym_31] = "31",
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
  [sym_operand_list] = "operand_list",
  [sym_operand] = "operand",
  [sym_directive_operand] = "directive_operand",
  [sym_register] = "register",
  [sym_register_name] = "register_name",
  [sym_immediate] = "immediate",
  [sym_string] = "string",
  [sym_memory] = "memory",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_31] = anon_sym_31,
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
  [sym_operand_list] = sym_operand_list,
  [sym_operand] = sym_operand,
  [sym_directive_operand] = sym_directive_operand,
  [sym_register] = sym_register,
  [sym_register_name] = sym_register_name,
  [sym_immediate] = sym_immediate,
  [sym_string] = sym_string,
  [sym_memory] = sym_memory,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31] = {
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
  [sym_operand_list] = {
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
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
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
  [41] = 22,
  [42] = 20,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '4') ADVANCE(98);
      if (lookahead == '5') ADVANCE(100);
      if (lookahead == '6') ADVANCE(102);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead == '8') ADVANCE(106);
      if (lookahead == '9') ADVANCE(108);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'k') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'z') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == '4') ADVANCE(97);
      if (lookahead == '5') ADVANCE(99);
      if (lookahead == '6') ADVANCE(101);
      if (lookahead == '7') ADVANCE(103);
      if (lookahead == '8') ADVANCE(105);
      if (lookahead == '9') ADVANCE(107);
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
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '4') ADVANCE(98);
      if (lookahead == '5') ADVANCE(100);
      if (lookahead == '6') ADVANCE(102);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead == '8') ADVANCE(106);
      if (lookahead == '9') ADVANCE(108);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'k') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == 'z') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(172);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_v0);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_v0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_v1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_v1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_a0);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_a0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_a1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_a1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_a2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_a2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_a3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_a3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_t0);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_t0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_t1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_t1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_t2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_t2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_t3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_t3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_t4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_t4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_t5);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_t5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_t6);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_t6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_t7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_t7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_t8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_t8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_t9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_t9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_s0);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_s0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_s1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_s1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_s2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_s2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_s3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_s3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_s4);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_s4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_s5);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_s5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_s6);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_s6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_s7);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_s7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_k0);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_k0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_k1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_k1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_gp);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_gp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_sp);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_fp);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_fp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ra);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '4') ADVANCE(118);
      if (lookahead == '5') ADVANCE(120);
      if (lookahead == '6') ADVANCE(122);
      if (lookahead == '7') ADVANCE(124);
      if (lookahead == '8') ADVANCE(126);
      if (lookahead == '9') ADVANCE(128);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '0') ADVANCE(109);
      if (lookahead == '1') ADVANCE(111);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == '4') ADVANCE(117);
      if (lookahead == '5') ADVANCE(119);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead == '7') ADVANCE(123);
      if (lookahead == '8') ADVANCE(125);
      if (lookahead == '9') ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '1') ADVANCE(132);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '4') ADVANCE(138);
      if (lookahead == '5') ADVANCE(140);
      if (lookahead == '6') ADVANCE(142);
      if (lookahead == '7') ADVANCE(144);
      if (lookahead == '8') ADVANCE(146);
      if (lookahead == '9') ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '4') ADVANCE(137);
      if (lookahead == '5') ADVANCE(139);
      if (lookahead == '6') ADVANCE(141);
      if (lookahead == '7') ADVANCE(143);
      if (lookahead == '8') ADVANCE(145);
      if (lookahead == '9') ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '1') ADVANCE(152);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '1') ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == 't') ADVANCE(28);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(80);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 163:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 164:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
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
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
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
    [sym_source_file] = STATE(43),
    [sym_label] = STATE(23),
    [sym_instruction] = STATE(23),
    [sym_directive] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_register_name] = STATE(42),
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
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_1] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_4] = ACTIONS(11),
    [anon_sym_5] = ACTIONS(11),
    [anon_sym_6] = ACTIONS(11),
    [anon_sym_7] = ACTIONS(11),
    [anon_sym_8] = ACTIONS(11),
    [anon_sym_9] = ACTIONS(11),
    [anon_sym_10] = ACTIONS(11),
    [anon_sym_11] = ACTIONS(11),
    [anon_sym_12] = ACTIONS(11),
    [anon_sym_13] = ACTIONS(11),
    [anon_sym_14] = ACTIONS(11),
    [anon_sym_15] = ACTIONS(11),
    [anon_sym_16] = ACTIONS(11),
    [anon_sym_17] = ACTIONS(11),
    [anon_sym_18] = ACTIONS(11),
    [anon_sym_19] = ACTIONS(11),
    [anon_sym_20] = ACTIONS(11),
    [anon_sym_21] = ACTIONS(11),
    [anon_sym_22] = ACTIONS(11),
    [anon_sym_23] = ACTIONS(11),
    [anon_sym_24] = ACTIONS(11),
    [anon_sym_25] = ACTIONS(11),
    [anon_sym_26] = ACTIONS(11),
    [anon_sym_27] = ACTIONS(11),
    [anon_sym_28] = ACTIONS(11),
    [anon_sym_29] = ACTIONS(11),
    [anon_sym_30] = ACTIONS(11),
    [anon_sym_31] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_register_name] = STATE(20),
    [anon_sym_zero] = ACTIONS(15),
    [anon_sym_at] = ACTIONS(15),
    [anon_sym_v0] = ACTIONS(15),
    [anon_sym_v1] = ACTIONS(15),
    [anon_sym_a0] = ACTIONS(15),
    [anon_sym_a1] = ACTIONS(15),
    [anon_sym_a2] = ACTIONS(15),
    [anon_sym_a3] = ACTIONS(15),
    [anon_sym_t0] = ACTIONS(15),
    [anon_sym_t1] = ACTIONS(15),
    [anon_sym_t2] = ACTIONS(15),
    [anon_sym_t3] = ACTIONS(15),
    [anon_sym_t4] = ACTIONS(15),
    [anon_sym_t5] = ACTIONS(15),
    [anon_sym_t6] = ACTIONS(15),
    [anon_sym_t7] = ACTIONS(15),
    [anon_sym_t8] = ACTIONS(15),
    [anon_sym_t9] = ACTIONS(15),
    [anon_sym_s0] = ACTIONS(15),
    [anon_sym_s1] = ACTIONS(15),
    [anon_sym_s2] = ACTIONS(15),
    [anon_sym_s3] = ACTIONS(15),
    [anon_sym_s4] = ACTIONS(15),
    [anon_sym_s5] = ACTIONS(15),
    [anon_sym_s6] = ACTIONS(15),
    [anon_sym_s7] = ACTIONS(15),
    [anon_sym_k0] = ACTIONS(15),
    [anon_sym_k1] = ACTIONS(15),
    [anon_sym_gp] = ACTIONS(15),
    [anon_sym_sp] = ACTIONS(15),
    [anon_sym_fp] = ACTIONS(15),
    [anon_sym_ra] = ACTIONS(15),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_1] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(17),
    [anon_sym_3] = ACTIONS(17),
    [anon_sym_4] = ACTIONS(15),
    [anon_sym_5] = ACTIONS(15),
    [anon_sym_6] = ACTIONS(15),
    [anon_sym_7] = ACTIONS(15),
    [anon_sym_8] = ACTIONS(15),
    [anon_sym_9] = ACTIONS(15),
    [anon_sym_10] = ACTIONS(15),
    [anon_sym_11] = ACTIONS(15),
    [anon_sym_12] = ACTIONS(15),
    [anon_sym_13] = ACTIONS(15),
    [anon_sym_14] = ACTIONS(15),
    [anon_sym_15] = ACTIONS(15),
    [anon_sym_16] = ACTIONS(15),
    [anon_sym_17] = ACTIONS(15),
    [anon_sym_18] = ACTIONS(15),
    [anon_sym_19] = ACTIONS(15),
    [anon_sym_20] = ACTIONS(15),
    [anon_sym_21] = ACTIONS(15),
    [anon_sym_22] = ACTIONS(15),
    [anon_sym_23] = ACTIONS(15),
    [anon_sym_24] = ACTIONS(15),
    [anon_sym_25] = ACTIONS(15),
    [anon_sym_26] = ACTIONS(15),
    [anon_sym_27] = ACTIONS(15),
    [anon_sym_28] = ACTIONS(15),
    [anon_sym_29] = ACTIONS(15),
    [anon_sym_30] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      aux_sym_immediate_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_comment,
    STATE(14), 1,
      sym_immediate,
    STATE(31), 1,
      sym_operand,
    STATE(34), 1,
      sym_operand_list,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(30), 2,
      sym_register,
      sym_memory,
  [36] = 8,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      aux_sym_immediate_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(19), 1,
      sym_directive_operand,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(25), 2,
      sym_immediate,
      sym_string,
  [63] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_immediate_token1,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(14), 1,
      sym_immediate,
    STATE(37), 1,
      sym_operand,
    STATE(30), 2,
      sym_register,
      sym_memory,
  [89] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_immediate_token1,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(14), 1,
      sym_immediate,
    STATE(32), 1,
      sym_operand,
    STATE(30), 2,
      sym_register,
      sym_memory,
  [115] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(35), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_immediate_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(21), 1,
      sym_directive_operand,
    STATE(25), 2,
      sym_immediate,
      sym_string,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(33), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [172] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_directive_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [186] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(64), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [200] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [212] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [226] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_directive_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [240] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat1,
    ACTIONS(83), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [254] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
    ACTIONS(87), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [268] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [280] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_directive_repeat1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [294] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [305] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [316] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [327] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
  [340] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [351] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [362] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [373] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
  [386] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [397] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
  [410] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [421] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [432] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [443] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [451] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [459] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_register,
  [477] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_immediate_token1,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 280,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 362,
  [SMALL_STATE(27)] = 373,
  [SMALL_STATE(28)] = 386,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 421,
  [SMALL_STATE(32)] = 432,
  [SMALL_STATE(33)] = 443,
  [SMALL_STATE(34)] = 451,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 467,
  [SMALL_STATE(37)] = 477,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 492,
  [SMALL_STATE(40)] = 499,
  [SMALL_STATE(41)] = 506,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 520,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_name, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_name, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operand, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_operand, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
