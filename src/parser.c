#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_f0 = 70,
  anon_sym_f1 = 71,
  anon_sym_f2 = 72,
  anon_sym_f3 = 73,
  anon_sym_f4 = 74,
  anon_sym_f5 = 75,
  anon_sym_f6 = 76,
  anon_sym_f7 = 77,
  anon_sym_f8 = 78,
  anon_sym_f9 = 79,
  anon_sym_f10 = 80,
  anon_sym_f11 = 81,
  anon_sym_f12 = 82,
  anon_sym_f13 = 83,
  anon_sym_f14 = 84,
  anon_sym_f15 = 85,
  anon_sym_f16 = 86,
  anon_sym_f17 = 87,
  anon_sym_f18 = 88,
  anon_sym_f19 = 89,
  anon_sym_f20 = 90,
  anon_sym_f21 = 91,
  anon_sym_f22 = 92,
  anon_sym_f23 = 93,
  anon_sym_f24 = 94,
  anon_sym_f25 = 95,
  anon_sym_f26 = 96,
  anon_sym_f27 = 97,
  anon_sym_f28 = 98,
  anon_sym_f29 = 99,
  anon_sym_f30 = 100,
  anon_sym_f31 = 101,
  sym_immediate = 102,
  sym_float = 103,
  anon_sym_DQUOTE = 104,
  aux_sym_string_token1 = 105,
  sym_escape_sequence = 106,
  anon_sym_LPAREN = 107,
  anon_sym_RPAREN = 108,
  sym_identifier = 109,
  sym_comment = 110,
  sym_source_file = 111,
  sym_label = 112,
  sym_instruction = 113,
  sym_instruction_name = 114,
  sym_directive = 115,
  sym_directive_name = 116,
  sym_operand_list = 117,
  sym_operand = 118,
  sym_directive_operand = 119,
  sym_register = 120,
  sym_register_name = 121,
  sym_string = 122,
  sym_memory = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_directive_repeat1 = 125,
  aux_sym_string_repeat1 = 126,
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
  [anon_sym_f0] = "f0",
  [anon_sym_f1] = "f1",
  [anon_sym_f2] = "f2",
  [anon_sym_f3] = "f3",
  [anon_sym_f4] = "f4",
  [anon_sym_f5] = "f5",
  [anon_sym_f6] = "f6",
  [anon_sym_f7] = "f7",
  [anon_sym_f8] = "f8",
  [anon_sym_f9] = "f9",
  [anon_sym_f10] = "f10",
  [anon_sym_f11] = "f11",
  [anon_sym_f12] = "f12",
  [anon_sym_f13] = "f13",
  [anon_sym_f14] = "f14",
  [anon_sym_f15] = "f15",
  [anon_sym_f16] = "f16",
  [anon_sym_f17] = "f17",
  [anon_sym_f18] = "f18",
  [anon_sym_f19] = "f19",
  [anon_sym_f20] = "f20",
  [anon_sym_f21] = "f21",
  [anon_sym_f22] = "f22",
  [anon_sym_f23] = "f23",
  [anon_sym_f24] = "f24",
  [anon_sym_f25] = "f25",
  [anon_sym_f26] = "f26",
  [anon_sym_f27] = "f27",
  [anon_sym_f28] = "f28",
  [anon_sym_f29] = "f29",
  [anon_sym_f30] = "f30",
  [anon_sym_f31] = "f31",
  [sym_immediate] = "immediate",
  [sym_float] = "float",
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
  [sym_instruction_name] = "instruction_name",
  [sym_directive] = "directive",
  [sym_directive_name] = "directive_name",
  [sym_operand_list] = "operand_list",
  [sym_operand] = "operand",
  [sym_directive_operand] = "directive_operand",
  [sym_register] = "register",
  [sym_register_name] = "register_name",
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
  [anon_sym_f0] = anon_sym_f0,
  [anon_sym_f1] = anon_sym_f1,
  [anon_sym_f2] = anon_sym_f2,
  [anon_sym_f3] = anon_sym_f3,
  [anon_sym_f4] = anon_sym_f4,
  [anon_sym_f5] = anon_sym_f5,
  [anon_sym_f6] = anon_sym_f6,
  [anon_sym_f7] = anon_sym_f7,
  [anon_sym_f8] = anon_sym_f8,
  [anon_sym_f9] = anon_sym_f9,
  [anon_sym_f10] = anon_sym_f10,
  [anon_sym_f11] = anon_sym_f11,
  [anon_sym_f12] = anon_sym_f12,
  [anon_sym_f13] = anon_sym_f13,
  [anon_sym_f14] = anon_sym_f14,
  [anon_sym_f15] = anon_sym_f15,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f17] = anon_sym_f17,
  [anon_sym_f18] = anon_sym_f18,
  [anon_sym_f19] = anon_sym_f19,
  [anon_sym_f20] = anon_sym_f20,
  [anon_sym_f21] = anon_sym_f21,
  [anon_sym_f22] = anon_sym_f22,
  [anon_sym_f23] = anon_sym_f23,
  [anon_sym_f24] = anon_sym_f24,
  [anon_sym_f25] = anon_sym_f25,
  [anon_sym_f26] = anon_sym_f26,
  [anon_sym_f27] = anon_sym_f27,
  [anon_sym_f28] = anon_sym_f28,
  [anon_sym_f29] = anon_sym_f29,
  [anon_sym_f30] = anon_sym_f30,
  [anon_sym_f31] = anon_sym_f31,
  [sym_immediate] = sym_immediate,
  [sym_float] = sym_float,
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
  [sym_instruction_name] = sym_instruction_name,
  [sym_directive] = sym_directive,
  [sym_directive_name] = sym_directive_name,
  [sym_operand_list] = sym_operand_list,
  [sym_operand] = sym_operand,
  [sym_directive_operand] = sym_directive_operand,
  [sym_register] = sym_register,
  [sym_register_name] = sym_register_name,
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
  [anon_sym_f0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f31] = {
    .visible = true,
    .named = false,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym_instruction_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
  [45] = 45,
  [46] = 46,
  [47] = 24,
  [48] = 25,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == '4') ADVANCE(99);
      if (lookahead == '5') ADVANCE(101);
      if (lookahead == '6') ADVANCE(103);
      if (lookahead == '7') ADVANCE(105);
      if (lookahead == '8') ADVANCE(107);
      if (lookahead == '9') ADVANCE(109);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'g') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(231);
      if (lookahead == 'z') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '4') ADVANCE(98);
      if (lookahead == '5') ADVANCE(100);
      if (lookahead == '6') ADVANCE(102);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead == '8') ADVANCE(106);
      if (lookahead == '9') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'z') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(154);
      if (lookahead == '1') ADVANCE(157);
      if (lookahead == '2') ADVANCE(159);
      if (lookahead == '3') ADVANCE(161);
      if (lookahead == '4') ADVANCE(162);
      if (lookahead == '5') ADVANCE(164);
      if (lookahead == '6') ADVANCE(166);
      if (lookahead == '7') ADVANCE(168);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == '9') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == '4') ADVANCE(70);
      if (lookahead == '5') ADVANCE(72);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '7') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 8:
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
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_zero);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_zero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_v0);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_v0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_v1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_v1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_a0);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_a0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_a1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_a1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_a2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_a2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_a3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_a3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_t0);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_t0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_t1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_t1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_t2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_t2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_t3);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_t3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_t4);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_t4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_t5);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_t5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_t6);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_t6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_t7);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_t7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_t8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_t8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_t9);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_t9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_s0);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_s0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_s1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_s1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_s2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_s2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_s3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_s3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_s4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_s4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_s5);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_s5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_s6);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_s6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_s7);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_s7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_k0);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_k0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_k1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_k1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_gp);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_gp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sp);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_sp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_fp);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_fp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ra);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '3') ADVANCE(117);
      if (lookahead == '4') ADVANCE(119);
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == '6') ADVANCE(123);
      if (lookahead == '7') ADVANCE(125);
      if (lookahead == '8') ADVANCE(127);
      if (lookahead == '9') ADVANCE(129);
      END_STATE();
    case 93:
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
    case 94:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '4') ADVANCE(139);
      if (lookahead == '5') ADVANCE(141);
      if (lookahead == '6') ADVANCE(143);
      if (lookahead == '7') ADVANCE(145);
      if (lookahead == '8') ADVANCE(147);
      if (lookahead == '9') ADVANCE(149);
      END_STATE();
    case 95:
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
    case 96:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '1') ADVANCE(153);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '1') ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_5);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_7);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_9);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_10);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_11);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_12);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_13);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_18);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_19);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_20);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_21);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_22);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_23);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_24);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_25);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_26);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_27);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_28);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_29);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_30);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_31);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_f0);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_f0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_f1);
      if (lookahead == '0') ADVANCE(175);
      if (lookahead == '1') ADVANCE(177);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == '3') ADVANCE(181);
      if (lookahead == '4') ADVANCE(183);
      if (lookahead == '5') ADVANCE(185);
      if (lookahead == '6') ADVANCE(187);
      if (lookahead == '7') ADVANCE(189);
      if (lookahead == '8') ADVANCE(191);
      if (lookahead == '9') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_f1);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '1') ADVANCE(176);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '3') ADVANCE(180);
      if (lookahead == '4') ADVANCE(182);
      if (lookahead == '5') ADVANCE(184);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '7') ADVANCE(188);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == '9') ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == '3') ADVANCE(201);
      if (lookahead == '4') ADVANCE(203);
      if (lookahead == '5') ADVANCE(205);
      if (lookahead == '6') ADVANCE(207);
      if (lookahead == '7') ADVANCE(209);
      if (lookahead == '8') ADVANCE(211);
      if (lookahead == '9') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '1') ADVANCE(196);
      if (lookahead == '2') ADVANCE(198);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead == '4') ADVANCE(202);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == '6') ADVANCE(206);
      if (lookahead == '7') ADVANCE(208);
      if (lookahead == '8') ADVANCE(210);
      if (lookahead == '9') ADVANCE(212);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_f3);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == '1') ADVANCE(217);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_f3);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == '1') ADVANCE(216);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_f4);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_f4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_f5);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_f5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_f6);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_f6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_f7);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_f7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_f8);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_f8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_f9);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_f9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_f10);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_f10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_f11);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_f11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_f12);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_f12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_f13);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_f13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_f14);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_f14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_f15);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_f15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_f17);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_f17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_f18);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_f18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_f19);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_f19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_f20);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_f20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_f21);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_f21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_f22);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_f22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_f23);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_f23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_f24);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_f24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_f25);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_f25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_f26);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_f26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_f27);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_f27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_f28);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_f28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_f29);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_f29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_f30);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_f30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_f31);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_f31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == 't') ADVANCE(29);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(155);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '2') ADVANCE(158);
      if (lookahead == '3') ADVANCE(160);
      if (lookahead == '4') ADVANCE(163);
      if (lookahead == '5') ADVANCE(165);
      if (lookahead == '6') ADVANCE(167);
      if (lookahead == '7') ADVANCE(169);
      if (lookahead == '8') ADVANCE(171);
      if (lookahead == '9') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '1') ADVANCE(81);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(69);
      if (lookahead == '4') ADVANCE(71);
      if (lookahead == '5') ADVANCE(73);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == '7') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '4') ADVANCE(51);
      if (lookahead == '5') ADVANCE(53);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == '9') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [anon_sym_f0] = ACTIONS(1),
    [anon_sym_f1] = ACTIONS(1),
    [anon_sym_f2] = ACTIONS(1),
    [anon_sym_f3] = ACTIONS(1),
    [anon_sym_f4] = ACTIONS(1),
    [anon_sym_f5] = ACTIONS(1),
    [anon_sym_f6] = ACTIONS(1),
    [anon_sym_f7] = ACTIONS(1),
    [anon_sym_f8] = ACTIONS(1),
    [anon_sym_f9] = ACTIONS(1),
    [anon_sym_f10] = ACTIONS(1),
    [anon_sym_f11] = ACTIONS(1),
    [anon_sym_f12] = ACTIONS(1),
    [anon_sym_f13] = ACTIONS(1),
    [anon_sym_f14] = ACTIONS(1),
    [anon_sym_f15] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f17] = ACTIONS(1),
    [anon_sym_f18] = ACTIONS(1),
    [anon_sym_f19] = ACTIONS(1),
    [anon_sym_f20] = ACTIONS(1),
    [anon_sym_f21] = ACTIONS(1),
    [anon_sym_f22] = ACTIONS(1),
    [anon_sym_f23] = ACTIONS(1),
    [anon_sym_f24] = ACTIONS(1),
    [anon_sym_f25] = ACTIONS(1),
    [anon_sym_f26] = ACTIONS(1),
    [anon_sym_f27] = ACTIONS(1),
    [anon_sym_f28] = ACTIONS(1),
    [anon_sym_f29] = ACTIONS(1),
    [anon_sym_f30] = ACTIONS(1),
    [anon_sym_f31] = ACTIONS(1),
    [sym_immediate] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym_label] = STATE(30),
    [sym_instruction] = STATE(30),
    [sym_instruction_name] = STATE(4),
    [sym_directive] = STATE(30),
    [sym_directive_name] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_register_name] = STATE(48),
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
    [anon_sym_f0] = ACTIONS(11),
    [anon_sym_f1] = ACTIONS(13),
    [anon_sym_f2] = ACTIONS(13),
    [anon_sym_f3] = ACTIONS(13),
    [anon_sym_f4] = ACTIONS(11),
    [anon_sym_f5] = ACTIONS(11),
    [anon_sym_f6] = ACTIONS(11),
    [anon_sym_f7] = ACTIONS(11),
    [anon_sym_f8] = ACTIONS(11),
    [anon_sym_f9] = ACTIONS(11),
    [anon_sym_f10] = ACTIONS(11),
    [anon_sym_f11] = ACTIONS(11),
    [anon_sym_f12] = ACTIONS(11),
    [anon_sym_f13] = ACTIONS(11),
    [anon_sym_f14] = ACTIONS(11),
    [anon_sym_f15] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f17] = ACTIONS(11),
    [anon_sym_f18] = ACTIONS(11),
    [anon_sym_f19] = ACTIONS(11),
    [anon_sym_f20] = ACTIONS(11),
    [anon_sym_f21] = ACTIONS(11),
    [anon_sym_f22] = ACTIONS(11),
    [anon_sym_f23] = ACTIONS(11),
    [anon_sym_f24] = ACTIONS(11),
    [anon_sym_f25] = ACTIONS(11),
    [anon_sym_f26] = ACTIONS(11),
    [anon_sym_f27] = ACTIONS(11),
    [anon_sym_f28] = ACTIONS(11),
    [anon_sym_f29] = ACTIONS(11),
    [anon_sym_f30] = ACTIONS(11),
    [anon_sym_f31] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_register_name] = STATE(25),
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
    [anon_sym_f0] = ACTIONS(15),
    [anon_sym_f1] = ACTIONS(17),
    [anon_sym_f2] = ACTIONS(17),
    [anon_sym_f3] = ACTIONS(17),
    [anon_sym_f4] = ACTIONS(15),
    [anon_sym_f5] = ACTIONS(15),
    [anon_sym_f6] = ACTIONS(15),
    [anon_sym_f7] = ACTIONS(15),
    [anon_sym_f8] = ACTIONS(15),
    [anon_sym_f9] = ACTIONS(15),
    [anon_sym_f10] = ACTIONS(15),
    [anon_sym_f11] = ACTIONS(15),
    [anon_sym_f12] = ACTIONS(15),
    [anon_sym_f13] = ACTIONS(15),
    [anon_sym_f14] = ACTIONS(15),
    [anon_sym_f15] = ACTIONS(15),
    [anon_sym_f16] = ACTIONS(15),
    [anon_sym_f17] = ACTIONS(15),
    [anon_sym_f18] = ACTIONS(15),
    [anon_sym_f19] = ACTIONS(15),
    [anon_sym_f20] = ACTIONS(15),
    [anon_sym_f21] = ACTIONS(15),
    [anon_sym_f22] = ACTIONS(15),
    [anon_sym_f23] = ACTIONS(15),
    [anon_sym_f24] = ACTIONS(15),
    [anon_sym_f25] = ACTIONS(15),
    [anon_sym_f26] = ACTIONS(15),
    [anon_sym_f27] = ACTIONS(15),
    [anon_sym_f28] = ACTIONS(15),
    [anon_sym_f29] = ACTIONS(15),
    [anon_sym_f30] = ACTIONS(15),
    [anon_sym_f31] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_comment,
    STATE(29), 1,
      sym_operand,
    STATE(40), 1,
      sym_operand_list,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 2,
      sym_immediate,
      sym_identifier,
    STATE(28), 2,
      sym_register,
      sym_memory,
  [28] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(4), 1,
      sym_instruction_name,
    STATE(7), 1,
      sym_directive_name,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(36), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [53] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 4,
      anon_sym_DOLLAR,
      sym_immediate,
      anon_sym_LPAREN,
      sym_identifier,
  [73] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_directive_operand,
    STATE(26), 1,
      sym_string,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(45), 3,
      sym_immediate,
      sym_float,
      sym_identifier,
  [95] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_operand,
    ACTIONS(51), 2,
      sym_immediate,
      sym_identifier,
    STATE(28), 2,
      sym_register,
      sym_memory,
  [116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(4), 1,
      sym_instruction_name,
    STATE(7), 1,
      sym_directive_name,
    STATE(37), 3,
      sym_label,
      sym_instruction,
      sym_directive,
  [137] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 4,
      anon_sym_DOLLAR,
      sym_immediate,
      anon_sym_LPAREN,
      sym_identifier,
  [154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_operand,
    ACTIONS(51), 2,
      sym_immediate,
      sym_identifier,
    STATE(28), 2,
      sym_register,
      sym_memory,
  [175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_immediate,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string,
    STATE(35), 1,
      sym_directive_operand,
    ACTIONS(61), 2,
      sym_float,
      sym_identifier,
  [195] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 4,
      anon_sym_DOLLAR,
      sym_immediate,
      anon_sym_LPAREN,
      sym_identifier,
  [209] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 4,
      sym_immediate,
      sym_float,
      anon_sym_DQUOTE,
      sym_identifier,
  [223] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_directive_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [237] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_string_token1,
    ACTIONS(83), 1,
      sym_escape_sequence,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [253] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_string_token1,
    ACTIONS(90), 1,
      sym_escape_sequence,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [269] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_directive_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [283] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [297] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_string_token1,
    ACTIONS(106), 1,
      sym_escape_sequence,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [313] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_directive_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [327] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
  [340] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
  [353] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [364] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [375] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [386] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [397] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [408] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [419] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
  [432] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [443] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [454] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [465] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [476] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [487] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [495] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_register,
  [513] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [521] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_register,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 375,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 419,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 443,
  [SMALL_STATE(33)] = 454,
  [SMALL_STATE(34)] = 465,
  [SMALL_STATE(35)] = 476,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 495,
  [SMALL_STATE(38)] = 503,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 546,
  [SMALL_STATE(44)] = 553,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 567,
  [SMALL_STATE(47)] = 574,
  [SMALL_STATE(48)] = 581,
  [SMALL_STATE(49)] = 588,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_name, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_name, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_name, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_name, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_name, 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_name, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_name, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_name, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_name, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operand, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_operand, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_list, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
