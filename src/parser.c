#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_POUND_BANGBEGINPROGRAM = 1,
  anon_sym_POUND_BANGENDPROGRAM = 2,
  anon_sym_COLON = 3,
  sym_label = 4,
  anon_sym_UP = 5,
  anon_sym_DOWN = 6,
  anon_sym_LEFT = 7,
  anon_sym_RIGHT = 8,
  anon_sym_ANY = 9,
  anon_sym_NUL = 10,
  anon_sym_LAST = 11,
  sym_unknown_port = 12,
  aux_sym_arg_literal_token1 = 13,
  aux_sym_arg_literal_token2 = 14,
  anon_sym_NOP = 15,
  anon_sym_MOV = 16,
  anon_sym_SAV = 17,
  anon_sym_SWP = 18,
  anon_sym_ADD = 19,
  anon_sym_SUB = 20,
  anon_sym_MUL = 21,
  anon_sym_DIV = 22,
  anon_sym_NEG = 23,
  anon_sym_AND = 24,
  anon_sym_OR = 25,
  anon_sym_XOR = 26,
  anon_sym_SHL = 27,
  anon_sym_SHR = 28,
  anon_sym_NOT = 29,
  anon_sym_RRLAST = 30,
  anon_sym_RLLAST = 31,
  anon_sym_JMP = 32,
  anon_sym_JEZ = 33,
  anon_sym_JNZ = 34,
  anon_sym_JGZ = 35,
  anon_sym_JLZ = 36,
  anon_sym_JRO = 37,
  anon_sym_POUNDDEFINE = 38,
  anon_sym_POUNDUNDEFINE = 39,
  anon_sym_POUNDBWTM = 40,
  sym_line_comment = 41,
  sym__whitespace = 42,
  sym__endofline = 43,
  sym_external_text = 44,
  sym_source_file = 45,
  sym_program = 46,
  sym_program_start = 47,
  sym_program_end = 48,
  sym_statement = 49,
  sym_line_label = 50,
  sym__port = 51,
  sym_default_port = 52,
  sym__arg = 53,
  sym_arg_literal = 54,
  sym_command = 55,
  sym__generic_comment = 56,
  sym_macro = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_program_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_BANGBEGINPROGRAM] = "#!BEGIN PROGRAM",
  [anon_sym_POUND_BANGENDPROGRAM] = "#!END PROGRAM",
  [anon_sym_COLON] = ":",
  [sym_label] = "label",
  [anon_sym_UP] = "UP",
  [anon_sym_DOWN] = "DOWN",
  [anon_sym_LEFT] = "LEFT",
  [anon_sym_RIGHT] = "RIGHT",
  [anon_sym_ANY] = "ANY",
  [anon_sym_NUL] = "NUL",
  [anon_sym_LAST] = "LAST",
  [sym_unknown_port] = "unknown_port",
  [aux_sym_arg_literal_token1] = "arg_literal_token1",
  [aux_sym_arg_literal_token2] = "arg_literal_token2",
  [anon_sym_NOP] = "instruction",
  [anon_sym_MOV] = "MOV",
  [anon_sym_SAV] = "instruction",
  [anon_sym_SWP] = "instruction",
  [anon_sym_ADD] = "instruction",
  [anon_sym_SUB] = "instruction",
  [anon_sym_MUL] = "instruction",
  [anon_sym_DIV] = "instruction",
  [anon_sym_NEG] = "instruction",
  [anon_sym_AND] = "instruction",
  [anon_sym_OR] = "instruction",
  [anon_sym_XOR] = "instruction",
  [anon_sym_SHL] = "instruction",
  [anon_sym_SHR] = "instruction",
  [anon_sym_NOT] = "instruction",
  [anon_sym_RRLAST] = "instruction",
  [anon_sym_RLLAST] = "instruction",
  [anon_sym_JMP] = "instruction",
  [anon_sym_JEZ] = "instruction",
  [anon_sym_JNZ] = "instruction",
  [anon_sym_JGZ] = "instruction",
  [anon_sym_JLZ] = "instruction",
  [anon_sym_JRO] = "instruction",
  [anon_sym_POUNDDEFINE] = "#DEFINE",
  [anon_sym_POUNDUNDEFINE] = "#UNDEFINE",
  [anon_sym_POUNDBWTM] = "#BWTM",
  [sym_line_comment] = "line_comment",
  [sym__whitespace] = "_whitespace",
  [sym__endofline] = "_endofline",
  [sym_external_text] = "external_text",
  [sym_source_file] = "source_file",
  [sym_program] = "program",
  [sym_program_start] = "program_start",
  [sym_program_end] = "program_end",
  [sym_statement] = "statement",
  [sym_line_label] = "line_label",
  [sym__port] = "_port",
  [sym_default_port] = "default_port",
  [sym__arg] = "_arg",
  [sym_arg_literal] = "arg_literal",
  [sym_command] = "command",
  [sym__generic_comment] = "_generic_comment",
  [sym_macro] = "macro",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_BANGBEGINPROGRAM] = anon_sym_POUND_BANGBEGINPROGRAM,
  [anon_sym_POUND_BANGENDPROGRAM] = anon_sym_POUND_BANGENDPROGRAM,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_label] = sym_label,
  [anon_sym_UP] = anon_sym_UP,
  [anon_sym_DOWN] = anon_sym_DOWN,
  [anon_sym_LEFT] = anon_sym_LEFT,
  [anon_sym_RIGHT] = anon_sym_RIGHT,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_NUL] = anon_sym_NUL,
  [anon_sym_LAST] = anon_sym_LAST,
  [sym_unknown_port] = sym_unknown_port,
  [aux_sym_arg_literal_token1] = aux_sym_arg_literal_token1,
  [aux_sym_arg_literal_token2] = aux_sym_arg_literal_token2,
  [anon_sym_NOP] = anon_sym_NOP,
  [anon_sym_MOV] = anon_sym_MOV,
  [anon_sym_SAV] = anon_sym_NOP,
  [anon_sym_SWP] = anon_sym_NOP,
  [anon_sym_ADD] = anon_sym_NOP,
  [anon_sym_SUB] = anon_sym_NOP,
  [anon_sym_MUL] = anon_sym_NOP,
  [anon_sym_DIV] = anon_sym_NOP,
  [anon_sym_NEG] = anon_sym_NOP,
  [anon_sym_AND] = anon_sym_NOP,
  [anon_sym_OR] = anon_sym_NOP,
  [anon_sym_XOR] = anon_sym_NOP,
  [anon_sym_SHL] = anon_sym_NOP,
  [anon_sym_SHR] = anon_sym_NOP,
  [anon_sym_NOT] = anon_sym_NOP,
  [anon_sym_RRLAST] = anon_sym_NOP,
  [anon_sym_RLLAST] = anon_sym_NOP,
  [anon_sym_JMP] = anon_sym_NOP,
  [anon_sym_JEZ] = anon_sym_NOP,
  [anon_sym_JNZ] = anon_sym_NOP,
  [anon_sym_JGZ] = anon_sym_NOP,
  [anon_sym_JLZ] = anon_sym_NOP,
  [anon_sym_JRO] = anon_sym_NOP,
  [anon_sym_POUNDDEFINE] = anon_sym_POUNDDEFINE,
  [anon_sym_POUNDUNDEFINE] = anon_sym_POUNDUNDEFINE,
  [anon_sym_POUNDBWTM] = anon_sym_POUNDBWTM,
  [sym_line_comment] = sym_line_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__endofline] = sym__endofline,
  [sym_external_text] = sym_external_text,
  [sym_source_file] = sym_source_file,
  [sym_program] = sym_program,
  [sym_program_start] = sym_program_start,
  [sym_program_end] = sym_program_end,
  [sym_statement] = sym_statement,
  [sym_line_label] = sym_line_label,
  [sym__port] = sym__port,
  [sym_default_port] = sym_default_port,
  [sym__arg] = sym__arg,
  [sym_arg_literal] = sym_arg_literal,
  [sym_command] = sym_command,
  [sym__generic_comment] = sym__generic_comment,
  [sym_macro] = sym_macro,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_BANGBEGINPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANGENDPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_UP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LEFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RIGHT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST] = {
    .visible = true,
    .named = false,
  },
  [sym_unknown_port] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_arg_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MOV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAV] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SWP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MUL] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DIV] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SHL] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SHR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RRLAST] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RLLAST] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JEZ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JNZ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JGZ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JLZ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JRO] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDDEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDUNDEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDBWTM] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__endofline] = {
    .visible = false,
    .named = true,
  },
  [sym_external_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_program_start] = {
    .visible = true,
    .named = true,
  },
  [sym_program_end] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_line_label] = {
    .visible = true,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym_default_port] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__generic_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_instruction = 2,
  field_label = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_instruction] = "instruction",
  [field_label] = "label",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_instruction, 0},
  [1] =
    {field_label, 1},
  [2] =
    {field_argument, 2},
    {field_instruction, 0},
  [4] =
    {field_argument, 2},
    {field_argument, 4},
    {field_instruction, 0},
  [7] =
    {field_label, 2},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'J') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'X') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '0') ADVANCE(181);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(167);
      if (lookahead == 'U') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'J') ADVANCE(17);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'X') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(79);
      if (lookahead == 'M') ADVANCE(105);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'X') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(12);
      if (lookahead == 'W') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(196);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(250);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(235);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 47:
      if (lookahead == 'V') ADVANCE(205);
      END_STATE();
    case 48:
      if (lookahead == 'V') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == 'V') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'Z') ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == 'Z') ADVANCE(244);
      END_STATE();
    case 52:
      if (lookahead == 'Z') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == 'Z') ADVANCE(241);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(1);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND_BANGBEGINPROGRAM);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND_BANGENDPROGRAM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'H') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == 'W') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(212);
      if (lookahead == 'Y') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'U') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'M') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'F') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'G') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'G') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'G') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'H') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'R') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'N') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'W') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Z') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_UP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_UP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOWN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOWN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LEFT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LEFT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LAST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LAST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'E') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'F') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'G') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'H') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'I') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'L') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'N') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'N') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'O') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'P') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'S') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'T') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'T') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'U') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'W') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unknown_port);
      if (lookahead == 'Y') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unknown_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_arg_literal_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_arg_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_arg_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_NOP);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_MOV);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_MOV);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_MOV);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SAV);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SAV);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SAV);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SWP);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SWP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SWP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_NEG);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SHL);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SHL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SHL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SHR);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SHR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RRLAST);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RRLAST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RRLAST);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RLLAST);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RLLAST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RLLAST);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_JEZ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_JEZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_JEZ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_JNZ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_JNZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_JNZ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_JGZ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_JGZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_JGZ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_JLZ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_JLZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_JLZ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_JRO);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_JRO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_JRO);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(148);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_POUNDDEFINE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_POUNDUNDEFINE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_POUNDBWTM);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'D') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!') ADVANCE(270);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'D') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'A') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'D') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'B') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'D') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'D') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'F') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'G') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'G') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'G') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'I') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'I') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'I') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'M') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'N') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'O') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'O') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'P') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'P') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'R') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'R') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'R') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'W') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__endofline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_external_text);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_BANGBEGINPROGRAM] = ACTIONS(1),
    [anon_sym_POUND_BANGENDPROGRAM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_UP] = ACTIONS(1),
    [anon_sym_DOWN] = ACTIONS(1),
    [anon_sym_LEFT] = ACTIONS(1),
    [anon_sym_RIGHT] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_LAST] = ACTIONS(1),
    [sym_unknown_port] = ACTIONS(1),
    [aux_sym_arg_literal_token1] = ACTIONS(1),
    [aux_sym_arg_literal_token2] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
    [anon_sym_MOV] = ACTIONS(1),
    [anon_sym_SAV] = ACTIONS(1),
    [anon_sym_SWP] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [anon_sym_NEG] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_SHL] = ACTIONS(1),
    [anon_sym_SHR] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_RRLAST] = ACTIONS(1),
    [anon_sym_RLLAST] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JEZ] = ACTIONS(1),
    [anon_sym_JNZ] = ACTIONS(1),
    [anon_sym_JGZ] = ACTIONS(1),
    [anon_sym_JLZ] = ACTIONS(1),
    [anon_sym_JRO] = ACTIONS(1),
    [anon_sym_POUNDDEFINE] = ACTIONS(1),
    [anon_sym_POUNDUNDEFINE] = ACTIONS(1),
    [anon_sym_POUNDBWTM] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__endofline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_program] = STATE(19),
    [sym_program_start] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_BANGBEGINPROGRAM] = ACTIONS(5),
    [sym_external_text] = ACTIONS(7),
  },
  [2] = {
    [sym_program_end] = STATE(23),
    [sym_statement] = STATE(47),
    [sym_line_label] = STATE(5),
    [sym_command] = STATE(25),
    [sym__generic_comment] = STATE(47),
    [sym_macro] = STATE(47),
    [aux_sym_program_repeat1] = STATE(4),
    [anon_sym_POUND_BANGENDPROGRAM] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_MOV] = ACTIONS(15),
    [anon_sym_SAV] = ACTIONS(13),
    [anon_sym_SWP] = ACTIONS(13),
    [anon_sym_ADD] = ACTIONS(17),
    [anon_sym_SUB] = ACTIONS(17),
    [anon_sym_MUL] = ACTIONS(17),
    [anon_sym_DIV] = ACTIONS(17),
    [anon_sym_NEG] = ACTIONS(13),
    [anon_sym_AND] = ACTIONS(17),
    [anon_sym_OR] = ACTIONS(17),
    [anon_sym_XOR] = ACTIONS(17),
    [anon_sym_SHL] = ACTIONS(17),
    [anon_sym_SHR] = ACTIONS(17),
    [anon_sym_NOT] = ACTIONS(13),
    [anon_sym_RRLAST] = ACTIONS(13),
    [anon_sym_RLLAST] = ACTIONS(13),
    [anon_sym_JMP] = ACTIONS(19),
    [anon_sym_JEZ] = ACTIONS(19),
    [anon_sym_JNZ] = ACTIONS(19),
    [anon_sym_JGZ] = ACTIONS(19),
    [anon_sym_JLZ] = ACTIONS(19),
    [anon_sym_JRO] = ACTIONS(17),
    [anon_sym_POUNDDEFINE] = ACTIONS(21),
    [anon_sym_POUNDUNDEFINE] = ACTIONS(23),
    [anon_sym_POUNDBWTM] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(27),
  },
  [3] = {
    [sym_program_end] = STATE(29),
    [sym_statement] = STATE(47),
    [sym_line_label] = STATE(5),
    [sym_command] = STATE(25),
    [sym__generic_comment] = STATE(47),
    [sym_macro] = STATE(47),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_POUND_BANGENDPROGRAM] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_MOV] = ACTIONS(15),
    [anon_sym_SAV] = ACTIONS(13),
    [anon_sym_SWP] = ACTIONS(13),
    [anon_sym_ADD] = ACTIONS(17),
    [anon_sym_SUB] = ACTIONS(17),
    [anon_sym_MUL] = ACTIONS(17),
    [anon_sym_DIV] = ACTIONS(17),
    [anon_sym_NEG] = ACTIONS(13),
    [anon_sym_AND] = ACTIONS(17),
    [anon_sym_OR] = ACTIONS(17),
    [anon_sym_XOR] = ACTIONS(17),
    [anon_sym_SHL] = ACTIONS(17),
    [anon_sym_SHR] = ACTIONS(17),
    [anon_sym_NOT] = ACTIONS(13),
    [anon_sym_RRLAST] = ACTIONS(13),
    [anon_sym_RLLAST] = ACTIONS(13),
    [anon_sym_JMP] = ACTIONS(19),
    [anon_sym_JEZ] = ACTIONS(19),
    [anon_sym_JNZ] = ACTIONS(19),
    [anon_sym_JGZ] = ACTIONS(19),
    [anon_sym_JLZ] = ACTIONS(19),
    [anon_sym_JRO] = ACTIONS(17),
    [anon_sym_POUNDDEFINE] = ACTIONS(21),
    [anon_sym_POUNDUNDEFINE] = ACTIONS(23),
    [anon_sym_POUNDBWTM] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(27),
  },
  [4] = {
    [sym_statement] = STATE(47),
    [sym_line_label] = STATE(5),
    [sym_command] = STATE(25),
    [sym__generic_comment] = STATE(47),
    [sym_macro] = STATE(47),
    [aux_sym_program_repeat1] = STATE(4),
    [anon_sym_POUND_BANGENDPROGRAM] = ACTIONS(29),
    [sym_label] = ACTIONS(31),
    [anon_sym_NOP] = ACTIONS(34),
    [anon_sym_MOV] = ACTIONS(37),
    [anon_sym_SAV] = ACTIONS(34),
    [anon_sym_SWP] = ACTIONS(34),
    [anon_sym_ADD] = ACTIONS(40),
    [anon_sym_SUB] = ACTIONS(40),
    [anon_sym_MUL] = ACTIONS(40),
    [anon_sym_DIV] = ACTIONS(40),
    [anon_sym_NEG] = ACTIONS(34),
    [anon_sym_AND] = ACTIONS(40),
    [anon_sym_OR] = ACTIONS(40),
    [anon_sym_XOR] = ACTIONS(40),
    [anon_sym_SHL] = ACTIONS(40),
    [anon_sym_SHR] = ACTIONS(40),
    [anon_sym_NOT] = ACTIONS(34),
    [anon_sym_RRLAST] = ACTIONS(34),
    [anon_sym_RLLAST] = ACTIONS(34),
    [anon_sym_JMP] = ACTIONS(43),
    [anon_sym_JEZ] = ACTIONS(43),
    [anon_sym_JNZ] = ACTIONS(43),
    [anon_sym_JGZ] = ACTIONS(43),
    [anon_sym_JLZ] = ACTIONS(43),
    [anon_sym_JRO] = ACTIONS(40),
    [anon_sym_POUNDDEFINE] = ACTIONS(46),
    [anon_sym_POUNDUNDEFINE] = ACTIONS(49),
    [anon_sym_POUNDBWTM] = ACTIONS(52),
    [sym_line_comment] = ACTIONS(55),
  },
  [5] = {
    [sym_statement] = STATE(42),
    [sym_command] = STATE(25),
    [sym__generic_comment] = STATE(42),
    [sym_macro] = STATE(42),
    [anon_sym_NOP] = ACTIONS(58),
    [anon_sym_MOV] = ACTIONS(60),
    [anon_sym_SAV] = ACTIONS(58),
    [anon_sym_SWP] = ACTIONS(58),
    [anon_sym_ADD] = ACTIONS(62),
    [anon_sym_SUB] = ACTIONS(62),
    [anon_sym_MUL] = ACTIONS(62),
    [anon_sym_DIV] = ACTIONS(62),
    [anon_sym_NEG] = ACTIONS(58),
    [anon_sym_AND] = ACTIONS(62),
    [anon_sym_OR] = ACTIONS(62),
    [anon_sym_XOR] = ACTIONS(62),
    [anon_sym_SHL] = ACTIONS(62),
    [anon_sym_SHR] = ACTIONS(62),
    [anon_sym_NOT] = ACTIONS(58),
    [anon_sym_RRLAST] = ACTIONS(58),
    [anon_sym_RLLAST] = ACTIONS(58),
    [anon_sym_JMP] = ACTIONS(64),
    [anon_sym_JEZ] = ACTIONS(64),
    [anon_sym_JNZ] = ACTIONS(64),
    [anon_sym_JGZ] = ACTIONS(64),
    [anon_sym_JLZ] = ACTIONS(64),
    [anon_sym_JRO] = ACTIONS(62),
    [anon_sym_POUNDDEFINE] = ACTIONS(21),
    [anon_sym_POUNDUNDEFINE] = ACTIONS(23),
    [anon_sym_POUNDBWTM] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(66),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(68), 4,
      anon_sym_POUND_BANGENDPROGRAM,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
    ACTIONS(70), 25,
      sym_label,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      sym_line_comment,
  [34] = 2,
    ACTIONS(29), 4,
      anon_sym_POUND_BANGENDPROGRAM,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
    ACTIONS(72), 25,
      sym_label,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      sym_line_comment,
  [68] = 2,
    ACTIONS(74), 4,
      anon_sym_POUND_BANGENDPROGRAM,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
    ACTIONS(76), 25,
      sym_label,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      sym_line_comment,
  [102] = 3,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      sym__whitespace,
    ACTIONS(78), 26,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
  [137] = 3,
    ACTIONS(86), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      sym__whitespace,
    ACTIONS(84), 26,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
  [172] = 2,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(78), 26,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
  [204] = 2,
    ACTIONS(92), 1,
      sym_line_comment,
    ACTIONS(90), 26,
      anon_sym_NOP,
      anon_sym_MOV,
      anon_sym_SAV,
      anon_sym_SWP,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_NEG,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_XOR,
      anon_sym_SHL,
      anon_sym_SHR,
      anon_sym_NOT,
      anon_sym_RRLAST,
      anon_sym_RLLAST,
      anon_sym_JMP,
      anon_sym_JEZ,
      anon_sym_JNZ,
      anon_sym_JGZ,
      anon_sym_JLZ,
      anon_sym_JRO,
      anon_sym_POUNDDEFINE,
      anon_sym_POUNDUNDEFINE,
      anon_sym_POUNDBWTM,
  [236] = 5,
    ACTIONS(96), 1,
      sym_unknown_port,
    ACTIONS(98), 1,
      aux_sym_arg_literal_token1,
    ACTIONS(100), 1,
      aux_sym_arg_literal_token2,
    STATE(53), 4,
      sym__port,
      sym_default_port,
      sym__arg,
      sym_arg_literal,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [261] = 5,
    ACTIONS(98), 1,
      aux_sym_arg_literal_token1,
    ACTIONS(100), 1,
      aux_sym_arg_literal_token2,
    ACTIONS(102), 1,
      sym_unknown_port,
    STATE(30), 4,
      sym__port,
      sym_default_port,
      sym__arg,
      sym_arg_literal,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [286] = 5,
    ACTIONS(98), 1,
      aux_sym_arg_literal_token1,
    ACTIONS(100), 1,
      aux_sym_arg_literal_token2,
    ACTIONS(104), 1,
      sym_unknown_port,
    STATE(44), 4,
      sym__port,
      sym_default_port,
      sym__arg,
      sym_arg_literal,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [311] = 3,
    ACTIONS(106), 1,
      sym_unknown_port,
    STATE(46), 2,
      sym__port,
      sym_default_port,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [328] = 3,
    ACTIONS(108), 1,
      sym_unknown_port,
    STATE(45), 2,
      sym__port,
      sym_default_port,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [345] = 3,
    ACTIONS(110), 1,
      sym_unknown_port,
    STATE(27), 2,
      sym__port,
      sym_default_port,
    ACTIONS(94), 7,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_ANY,
      anon_sym_NUL,
      anon_sym_LAST,
  [362] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_BANGBEGINPROGRAM,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym_external_text,
    STATE(3), 1,
      sym_program_start,
    STATE(20), 2,
      sym_program,
      aux_sym_source_file_repeat1,
  [379] = 5,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_POUND_BANGBEGINPROGRAM,
    ACTIONS(121), 1,
      sym_external_text,
    STATE(3), 1,
      sym_program_start,
    STATE(20), 2,
      sym_program,
      aux_sym_source_file_repeat1,
  [396] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND_BANGBEGINPROGRAM,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_program_start,
    STATE(28), 1,
      sym_program,
  [409] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND_BANGBEGINPROGRAM,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_program_start,
    STATE(28), 1,
      sym_program,
  [422] = 1,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_BANGBEGINPROGRAM,
      sym_external_text,
  [428] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND_BANGBEGINPROGRAM,
    STATE(3), 1,
      sym_program_start,
    STATE(28), 1,
      sym_program,
  [438] = 3,
    ACTIONS(128), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(132), 1,
      sym__endofline,
  [448] = 1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_BANGBEGINPROGRAM,
      sym_external_text,
  [454] = 2,
    ACTIONS(138), 1,
      sym__whitespace,
    ACTIONS(136), 2,
      sym_line_comment,
      sym__endofline,
  [462] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_BANGBEGINPROGRAM,
      sym_external_text,
  [468] = 1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_BANGBEGINPROGRAM,
      sym_external_text,
  [474] = 2,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(142), 2,
      sym_line_comment,
      sym__endofline,
  [482] = 2,
    ACTIONS(148), 1,
      sym__whitespace,
    ACTIONS(146), 2,
      sym_line_comment,
      sym__endofline,
  [490] = 2,
    ACTIONS(152), 1,
      sym__whitespace,
    ACTIONS(150), 2,
      sym_line_comment,
      sym__endofline,
  [498] = 2,
    ACTIONS(156), 1,
      sym__whitespace,
    ACTIONS(154), 2,
      sym_line_comment,
      sym__endofline,
  [506] = 2,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      sym__whitespace,
  [513] = 1,
    ACTIONS(162), 1,
      sym__endofline,
  [517] = 1,
    ACTIONS(164), 1,
      sym__endofline,
  [521] = 1,
    ACTIONS(166), 1,
      sym_line_comment,
  [525] = 1,
    ACTIONS(168), 1,
      sym__whitespace,
  [529] = 1,
    ACTIONS(170), 1,
      sym__whitespace,
  [533] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [537] = 1,
    ACTIONS(174), 1,
      sym__whitespace,
  [541] = 1,
    ACTIONS(176), 1,
      sym__endofline,
  [545] = 1,
    ACTIONS(178), 1,
      sym__whitespace,
  [549] = 1,
    ACTIONS(180), 1,
      sym__whitespace,
  [553] = 1,
    ACTIONS(182), 1,
      sym__endofline,
  [557] = 1,
    ACTIONS(184), 1,
      sym__whitespace,
  [561] = 1,
    ACTIONS(186), 1,
      sym__endofline,
  [565] = 1,
    ACTIONS(188), 1,
      sym__endofline,
  [569] = 1,
    ACTIONS(190), 1,
      sym__endofline,
  [573] = 1,
    ACTIONS(192), 1,
      sym_label,
  [577] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [581] = 1,
    ACTIONS(196), 1,
      sym__endofline,
  [585] = 1,
    ACTIONS(198), 1,
      sym__endofline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 409,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 428,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 448,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 468,
  [SMALL_STATE(30)] = 474,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 498,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 513,
  [SMALL_STATE(36)] = 517,
  [SMALL_STATE(37)] = 521,
  [SMALL_STATE(38)] = 525,
  [SMALL_STATE(39)] = 529,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 545,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 553,
  [SMALL_STATE(46)] = 557,
  [SMALL_STATE(47)] = 561,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 569,
  [SMALL_STATE(50)] = 573,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 581,
  [SMALL_STATE(53)] = 585,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_start, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_program_start, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_label, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_label, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_label, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_label, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_label, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_label, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_end, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_port, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_port, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_literal, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_literal, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 5, .production_id = 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TIS3D(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
