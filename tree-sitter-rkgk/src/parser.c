#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_u300a = 1,
  anon_sym_u300b = 2,
  anon_sym_AT = 3,
  anon_sym_LF = 4,
  aux_sym_song_title_token1 = 5,
  aux_sym_feat_field_token1 = 6,
  sym_creator_name = 7,
  anon_sym_Music = 8,
  anon_sym_music = 9,
  anon_sym_Composition = 10,
  anon_sym_composition = 11,
  anon_sym_Composer = 12,
  anon_sym_composer = 13,
  anon_sym_Compose = 14,
  anon_sym_compose = 15,
  anon_sym_Lyrics = 16,
  anon_sym_lyrics = 17,
  anon_sym_Lyricist = 18,
  anon_sym_lyricist = 19,
  anon_sym_Lyric = 20,
  anon_sym_lyric = 21,
  anon_sym_Arrangement = 22,
  anon_sym_arrangement = 23,
  anon_sym_Arranger = 24,
  anon_sym_arranger = 25,
  anon_sym_Arrange = 26,
  anon_sym_arrange = 27,
  anon_sym_Vocal = 28,
  anon_sym_vocal = 29,
  anon_sym_Vo = 30,
  anon_sym_vo = 31,
  anon_sym_Performer = 32,
  anon_sym_performer = 33,
  anon_sym_Illustration = 34,
  anon_sym_illustration = 35,
  anon_sym_Illust = 36,
  anon_sym_illust = 37,
  anon_sym_Label = 38,
  anon_sym_label = 39,
  anon_sym_Circle = 40,
  anon_sym_circle = 41,
  anon_sym_Producer = 42,
  anon_sym_producer = 43,
  anon_sym_Recording = 44,
  anon_sym_recording = 45,
  anon_sym_u30dcu30fcu30abu30eb = 46,
  anon_sym_u30a2u30ecu30f3u30b8 = 47,
  anon_sym_u30a4u30e9u30b9u30c8 = 48,
  anon_sym_u30ecu30fcu30d9u30eb = 49,
  anon_sym_u6b4cu5531 = 50,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 51,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 52,
  anon_sym_u4f5cu8a5eu66f2 = 53,
  anon_sym_u4f5cu7de8u66f2 = 54,
  anon_sym_u4f5cu66f2 = 55,
  anon_sym_u7de8u66f2 = 56,
  anon_sym_u4f5cu8a5e = 57,
  anon_sym_u5382u724c = 58,
  anon_sym_u811au672c = 59,
  anon_sym_u63d2u56fe = 60,
  anon_sym_u5236u4f5cu4eba = 61,
  anon_sym_u51fau7248u65b9 = 62,
  anon_sym_u5f55u97f3 = 63,
  anon_sym_u539fu4f5c = 64,
  sym__sep = 65,
  sym_source_file = 66,
  sym__song = 67,
  sym_song = 68,
  sym_credit_block = 69,
  sym_credit_field = 70,
  sym__song_title = 71,
  sym_song_title = 72,
  sym_feat_field = 73,
  sym__creator = 74,
  sym_role = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_credit_block_repeat1 = 77,
  aux_sym_credit_field_repeat1 = 78,
  aux_sym_credit_field_repeat2 = 79,
  aux_sym_song_title_repeat1 = 80,
  alias_sym_creator_sep = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_u300a] = "\u300a",
  [anon_sym_u300b] = "\u300b",
  [anon_sym_AT] = "@",
  [anon_sym_LF] = "\n",
  [aux_sym_song_title_token1] = "song_title_token1",
  [aux_sym_feat_field_token1] = "feat",
  [sym_creator_name] = "creator_name",
  [anon_sym_Music] = "Music",
  [anon_sym_music] = "music",
  [anon_sym_Composition] = "Composition",
  [anon_sym_composition] = "composition",
  [anon_sym_Composer] = "Composer",
  [anon_sym_composer] = "composer",
  [anon_sym_Compose] = "Compose",
  [anon_sym_compose] = "compose",
  [anon_sym_Lyrics] = "Lyrics",
  [anon_sym_lyrics] = "lyrics",
  [anon_sym_Lyricist] = "Lyricist",
  [anon_sym_lyricist] = "lyricist",
  [anon_sym_Lyric] = "Lyric",
  [anon_sym_lyric] = "lyric",
  [anon_sym_Arrangement] = "Arrangement",
  [anon_sym_arrangement] = "arrangement",
  [anon_sym_Arranger] = "Arranger",
  [anon_sym_arranger] = "arranger",
  [anon_sym_Arrange] = "Arrange",
  [anon_sym_arrange] = "arrange",
  [anon_sym_Vocal] = "Vocal",
  [anon_sym_vocal] = "vocal",
  [anon_sym_Vo] = "Vo",
  [anon_sym_vo] = "vo",
  [anon_sym_Performer] = "Performer",
  [anon_sym_performer] = "performer",
  [anon_sym_Illustration] = "Illustration",
  [anon_sym_illustration] = "illustration",
  [anon_sym_Illust] = "Illust",
  [anon_sym_illust] = "illust",
  [anon_sym_Label] = "Label",
  [anon_sym_label] = "label",
  [anon_sym_Circle] = "Circle",
  [anon_sym_circle] = "circle",
  [anon_sym_Producer] = "Producer",
  [anon_sym_producer] = "producer",
  [anon_sym_Recording] = "Recording",
  [anon_sym_recording] = "recording",
  [anon_sym_u30dcu30fcu30abu30eb] = "\u30dc\u30fc\u30ab\u30eb",
  [anon_sym_u30a2u30ecu30f3u30b8] = "\u30a2\u30ec\u30f3\u30b8",
  [anon_sym_u30a4u30e9u30b9u30c8] = "\u30a4\u30e9\u30b9\u30c8",
  [anon_sym_u30ecu30fcu30d9u30eb] = "\u30ec\u30fc\u30d9\u30eb",
  [anon_sym_u6b4cu5531] = "\u6b4c\u5531",
  [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = "\u4f5c\u8a5e\u4f5c\u7de8\u66f2",
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = "\u4f5c\u8a5e\u4f5c\u66f2",
  [anon_sym_u4f5cu8a5eu66f2] = "\u4f5c\u8a5e\u66f2",
  [anon_sym_u4f5cu7de8u66f2] = "\u4f5c\u7de8\u66f2",
  [anon_sym_u4f5cu66f2] = "\u4f5c\u66f2",
  [anon_sym_u7de8u66f2] = "\u7de8\u66f2",
  [anon_sym_u4f5cu8a5e] = "\u4f5c\u8a5e",
  [anon_sym_u5382u724c] = "\u5382\u724c",
  [anon_sym_u811au672c] = "\u811a\u672c",
  [anon_sym_u63d2u56fe] = "\u63d2\u56fe",
  [anon_sym_u5236u4f5cu4eba] = "\u5236\u4f5c\u4eba",
  [anon_sym_u51fau7248u65b9] = "\u51fa\u7248\u65b9",
  [anon_sym_u5f55u97f3] = "\u5f55\u97f3",
  [anon_sym_u539fu4f5c] = "\u539f\u4f5c",
  [sym__sep] = "_sep",
  [sym_source_file] = "source_file",
  [sym__song] = "_song",
  [sym_song] = "song",
  [sym_credit_block] = "credit_block",
  [sym_credit_field] = "credit_field",
  [sym__song_title] = "_song_title",
  [sym_song_title] = "song_title",
  [sym_feat_field] = "feat_field",
  [sym__creator] = "_creator",
  [sym_role] = "role",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_credit_block_repeat1] = "credit_block_repeat1",
  [aux_sym_credit_field_repeat1] = "credit_field_repeat1",
  [aux_sym_credit_field_repeat2] = "credit_field_repeat2",
  [aux_sym_song_title_repeat1] = "song_title_repeat1",
  [alias_sym_creator_sep] = "creator_sep",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_u300a] = anon_sym_u300a,
  [anon_sym_u300b] = anon_sym_u300b,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_song_title_token1] = aux_sym_song_title_token1,
  [aux_sym_feat_field_token1] = aux_sym_feat_field_token1,
  [sym_creator_name] = sym_creator_name,
  [anon_sym_Music] = anon_sym_Music,
  [anon_sym_music] = anon_sym_music,
  [anon_sym_Composition] = anon_sym_Composition,
  [anon_sym_composition] = anon_sym_composition,
  [anon_sym_Composer] = anon_sym_Composer,
  [anon_sym_composer] = anon_sym_composer,
  [anon_sym_Compose] = anon_sym_Compose,
  [anon_sym_compose] = anon_sym_compose,
  [anon_sym_Lyrics] = anon_sym_Lyrics,
  [anon_sym_lyrics] = anon_sym_lyrics,
  [anon_sym_Lyricist] = anon_sym_Lyricist,
  [anon_sym_lyricist] = anon_sym_lyricist,
  [anon_sym_Lyric] = anon_sym_Lyric,
  [anon_sym_lyric] = anon_sym_lyric,
  [anon_sym_Arrangement] = anon_sym_Arrangement,
  [anon_sym_arrangement] = anon_sym_arrangement,
  [anon_sym_Arranger] = anon_sym_Arranger,
  [anon_sym_arranger] = anon_sym_arranger,
  [anon_sym_Arrange] = anon_sym_Arrange,
  [anon_sym_arrange] = anon_sym_arrange,
  [anon_sym_Vocal] = anon_sym_Vocal,
  [anon_sym_vocal] = anon_sym_vocal,
  [anon_sym_Vo] = anon_sym_Vo,
  [anon_sym_vo] = anon_sym_vo,
  [anon_sym_Performer] = anon_sym_Performer,
  [anon_sym_performer] = anon_sym_performer,
  [anon_sym_Illustration] = anon_sym_Illustration,
  [anon_sym_illustration] = anon_sym_illustration,
  [anon_sym_Illust] = anon_sym_Illust,
  [anon_sym_illust] = anon_sym_illust,
  [anon_sym_Label] = anon_sym_Label,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_Circle] = anon_sym_Circle,
  [anon_sym_circle] = anon_sym_circle,
  [anon_sym_Producer] = anon_sym_Producer,
  [anon_sym_producer] = anon_sym_producer,
  [anon_sym_Recording] = anon_sym_Recording,
  [anon_sym_recording] = anon_sym_recording,
  [anon_sym_u30dcu30fcu30abu30eb] = anon_sym_u30dcu30fcu30abu30eb,
  [anon_sym_u30a2u30ecu30f3u30b8] = anon_sym_u30a2u30ecu30f3u30b8,
  [anon_sym_u30a4u30e9u30b9u30c8] = anon_sym_u30a4u30e9u30b9u30c8,
  [anon_sym_u30ecu30fcu30d9u30eb] = anon_sym_u30ecu30fcu30d9u30eb,
  [anon_sym_u6b4cu5531] = anon_sym_u6b4cu5531,
  [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = anon_sym_u4f5cu8a5eu4f5cu7de8u66f2,
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = anon_sym_u4f5cu8a5eu4f5cu66f2,
  [anon_sym_u4f5cu8a5eu66f2] = anon_sym_u4f5cu8a5eu66f2,
  [anon_sym_u4f5cu7de8u66f2] = anon_sym_u4f5cu7de8u66f2,
  [anon_sym_u4f5cu66f2] = anon_sym_u4f5cu66f2,
  [anon_sym_u7de8u66f2] = anon_sym_u7de8u66f2,
  [anon_sym_u4f5cu8a5e] = anon_sym_u4f5cu8a5e,
  [anon_sym_u5382u724c] = anon_sym_u5382u724c,
  [anon_sym_u811au672c] = anon_sym_u811au672c,
  [anon_sym_u63d2u56fe] = anon_sym_u63d2u56fe,
  [anon_sym_u5236u4f5cu4eba] = anon_sym_u5236u4f5cu4eba,
  [anon_sym_u51fau7248u65b9] = anon_sym_u51fau7248u65b9,
  [anon_sym_u5f55u97f3] = anon_sym_u5f55u97f3,
  [anon_sym_u539fu4f5c] = anon_sym_u539fu4f5c,
  [sym__sep] = sym__sep,
  [sym_source_file] = sym_source_file,
  [sym__song] = sym__song,
  [sym_song] = sym_song,
  [sym_credit_block] = sym_credit_block,
  [sym_credit_field] = sym_credit_field,
  [sym__song_title] = sym__song_title,
  [sym_song_title] = sym_song_title,
  [sym_feat_field] = sym_feat_field,
  [sym__creator] = sym__creator,
  [sym_role] = sym_role,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_credit_block_repeat1] = aux_sym_credit_block_repeat1,
  [aux_sym_credit_field_repeat1] = aux_sym_credit_field_repeat1,
  [aux_sym_credit_field_repeat2] = aux_sym_credit_field_repeat2,
  [aux_sym_song_title_repeat1] = aux_sym_song_title_repeat1,
  [alias_sym_creator_sep] = alias_sym_creator_sep,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_u300a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u300b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_song_title_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feat_field_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_creator_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Music] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_music] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Composition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_composition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Composer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_composer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lyrics] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lyrics] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lyricist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lyricist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lyric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lyric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arrangement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arrangement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arranger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arranger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Performer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_performer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Illustration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illustration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Illust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Circle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_circle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Producer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_producer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Recording] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recording] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u30dcu30fcu30abu30eb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u30a2u30ecu30f3u30b8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u30a4u30e9u30b9u30c8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u30ecu30fcu30d9u30eb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u6b4cu5531] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5eu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu7de8u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u7de8u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u5382u724c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u811au672c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u63d2u56fe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u5236u4f5cu4eba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u51fau7248u65b9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u5f55u97f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u539fu4f5c] = {
    .visible = true,
    .named = false,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__song] = {
    .visible = false,
    .named = true,
  },
  [sym_song] = {
    .visible = true,
    .named = true,
  },
  [sym_credit_block] = {
    .visible = true,
    .named = true,
  },
  [sym_credit_field] = {
    .visible = true,
    .named = true,
  },
  [sym__song_title] = {
    .visible = false,
    .named = true,
  },
  [sym_song_title] = {
    .visible = true,
    .named = true,
  },
  [sym_feat_field] = {
    .visible = true,
    .named = true,
  },
  [sym__creator] = {
    .visible = false,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credit_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credit_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credit_field_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_song_title_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_creator_sep] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_creator = 1,
  field_creatorSeparator = 2,
  field_role = 3,
  field_title = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_creator] = "creator",
  [field_creatorSeparator] = "creatorSeparator",
  [field_role] = "role",
  [field_title] = "title",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 1},
  [10] = {.index = 8, .length = 3},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role, 0},
  [1] =
    {field_title, 0, .inherited = true},
  [2] =
    {field_title, 0},
  [3] =
    {field_title, 1, .inherited = true},
  [4] =
    {field_creator, 0},
  [5] =
    {field_title, 1},
  [6] =
    {field_title, 2, .inherited = true},
  [7] =
    {field_creator, 1, .inherited = true},
  [8] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [11] =
    {field_creator, 1},
  [12] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [14] =
    {field_creator, 0, .inherited = true},
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0, .inherited = true},
    {field_creatorSeparator, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_song,
  },
  [5] = {
    [1] = sym_song,
  },
  [8] = {
    [2] = sym_song,
  },
  [11] = {
    [1] = sym_creator_name,
  },
  [12] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__song, 2,
    sym__song,
    sym_song,
  aux_sym_song_title_repeat1, 2,
    aux_sym_song_title_repeat1,
    sym_creator_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 8,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 15,
  [31] = 18,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 38,
  [39] = 26,
  [40] = 32,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 38,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 18,
  [52] = 52,
  [53] = 15,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 56,
  [60] = 18,
  [61] = 57,
  [62] = 62,
  [63] = 62,
  [64] = 26,
  [65] = 58,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 16,
  [70] = 70,
  [71] = 26,
  [72] = 27,
  [73] = 68,
  [74] = 24,
  [75] = 75,
  [76] = 25,
  [77] = 67,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static TSCharacterRange sym_creator_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x3009},
  {0x300c, 0x30fa}, {0x30fc, 0xff05}, {0xff07, 0xff19}, {0xff1c, 0x10ffff},
};

static TSCharacterRange sym__sep_character_set_1[] = {
  {'\t', '\t'}, {' ', ' '}, {'&', '&'}, {',', ','}, {'/', '/'}, {':', ':'}, {0x3000, 0x3001}, {0x30fb, 0x30fb},
  {0xff06, 0xff06}, {0xff1a, 0xff1b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'C') ADVANCE(210);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'V') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == 0x300a) ADVANCE(192);
      if (lookahead == 0x300b) ADVANCE(193);
      if (lookahead == 0x30a2) ADVANCE(223);
      if (lookahead == 0x30a4) ADVANCE(222);
      if (lookahead == 0x30dc) ADVANCE(224);
      if (lookahead == 0x30ec) ADVANCE(225);
      if (lookahead == 0x4f5c) ADVANCE(230);
      if (lookahead == 0x51fa) ADVANCE(233);
      if (lookahead == 0x5236) ADVANCE(226);
      if (lookahead == 0x5382) ADVANCE(234);
      if (lookahead == 0x539f) ADVANCE(227);
      if (lookahead == 0x5f55) ADVANCE(235);
      if (lookahead == 0x63d2) ADVANCE(229);
      if (lookahead == 0x6b4c) ADVANCE(228);
      if (lookahead == 0x7de8) ADVANCE(231);
      if (lookahead == 0x811a) ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 0x300b) ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(526);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 0x300b) ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(238);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 347,
        'C', 288,
        'I', 304,
        'L', 240,
        'M', 376,
        'P', 273,
        'R', 264,
        'V', 324,
        'a', 357,
        'c', 299,
        'i', 309,
        'l', 246,
        'm', 381,
        'p', 280,
        'r', 281,
        'v', 325,
        0x300a, 192,
        0x30a2, 390,
        0x30a4, 387,
        0x30dc, 392,
        0x30ec, 393,
        0x4f5c, 400,
        0x51fa, 406,
        0x5236, 395,
        0x5382, 407,
        0x539f, 396,
        0x5f55, 408,
        0x63d2, 398,
        0x6b4c, 397,
        0x7de8, 401,
        0x811a, 405,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(8);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 111,
        'C', 59,
        'I', 71,
        'L', 9,
        'M', 148,
        'P', 44,
        'R', 34,
        'V', 95,
        'a', 127,
        'c', 70,
        'i', 80,
        'l', 16,
        'm', 153,
        'p', 51,
        'r', 52,
        'v', 96,
        0x300a, 192,
        0x30a2, 164,
        0x30a4, 161,
        0x30dc, 166,
        0x30ec, 167,
        0x4f5c, 174,
        0x51fa, 180,
        0x5236, 169,
        0x5382, 181,
        0x539f, 170,
        0x5f55, 182,
        0x63d2, 172,
        0x6b4c, 171,
        0x7de8, 175,
        0x811a, 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(485);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == 0x300a) ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(155);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 155:
      if (lookahead == 0x300a) ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      END_STATE();
    case 156:
      if (lookahead == 0x30ab) ADVANCE(162);
      END_STATE();
    case 157:
      if (lookahead == 0x30b8) ADVANCE(489);
      END_STATE();
    case 158:
      if (lookahead == 0x30b9) ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 0x30c8) ADVANCE(491);
      END_STATE();
    case 160:
      if (lookahead == 0x30d9) ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 0x30e9) ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 0x30eb) ADVANCE(487);
      END_STATE();
    case 163:
      if (lookahead == 0x30eb) ADVANCE(493);
      END_STATE();
    case 164:
      if (lookahead == 0x30ec) ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 0x30f3) ADVANCE(157);
      END_STATE();
    case 166:
      if (lookahead == 0x30fc) ADVANCE(156);
      END_STATE();
    case 167:
      if (lookahead == 0x30fc) ADVANCE(160);
      END_STATE();
    case 168:
      if (lookahead == 0x4eba) ADVANCE(517);
      END_STATE();
    case 169:
      if (lookahead == 0x4f5c) ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == 0x4f5c) ADVANCE(523);
      END_STATE();
    case 171:
      if (lookahead == 0x5531) ADVANCE(495);
      END_STATE();
    case 172:
      if (lookahead == 0x56fe) ADVANCE(515);
      END_STATE();
    case 173:
      if (lookahead == 0x65b9) ADVANCE(519);
      END_STATE();
    case 174:
      if (lookahead == 0x66f2) ADVANCE(505);
      if (lookahead == 0x7de8) ADVANCE(176);
      if (lookahead == 0x8a5e) ADVANCE(509);
      END_STATE();
    case 175:
      if (lookahead == 0x66f2) ADVANCE(507);
      END_STATE();
    case 176:
      if (lookahead == 0x66f2) ADVANCE(503);
      END_STATE();
    case 177:
      if (lookahead == 0x66f2) ADVANCE(499);
      if (lookahead == 0x7de8) ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 0x66f2) ADVANCE(497);
      END_STATE();
    case 179:
      if (lookahead == 0x672c) ADVANCE(513);
      END_STATE();
    case 180:
      if (lookahead == 0x7248) ADVANCE(173);
      END_STATE();
    case 181:
      if (lookahead == 0x724c) ADVANCE(511);
      END_STATE();
    case 182:
      if (lookahead == 0x97f3) ADVANCE(521);
      END_STATE();
    case 183:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(184);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'C') ADVANCE(210);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'V') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == 0x300a) ADVANCE(192);
      if (lookahead == 0x30a2) ADVANCE(223);
      if (lookahead == 0x30a4) ADVANCE(222);
      if (lookahead == 0x30dc) ADVANCE(224);
      if (lookahead == 0x30ec) ADVANCE(225);
      if (lookahead == 0x4f5c) ADVANCE(230);
      if (lookahead == 0x51fa) ADVANCE(233);
      if (lookahead == 0x5236) ADVANCE(226);
      if (lookahead == 0x5382) ADVANCE(234);
      if (lookahead == 0x539f) ADVANCE(227);
      if (lookahead == 0x5f55) ADVANCE(235);
      if (lookahead == 0x63d2) ADVANCE(229);
      if (lookahead == 0x6b4c) ADVANCE(228);
      if (lookahead == 0x7de8) ADVANCE(231);
      if (lookahead == 0x811a) ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(201);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(526);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 184:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(184);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'C') ADVANCE(210);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'V') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == 0x300a) ADVANCE(192);
      if (lookahead == 0x30a2) ADVANCE(223);
      if (lookahead == 0x30a4) ADVANCE(222);
      if (lookahead == 0x30dc) ADVANCE(224);
      if (lookahead == 0x30ec) ADVANCE(225);
      if (lookahead == 0x4f5c) ADVANCE(230);
      if (lookahead == 0x51fa) ADVANCE(233);
      if (lookahead == 0x5236) ADVANCE(226);
      if (lookahead == 0x5382) ADVANCE(234);
      if (lookahead == 0x539f) ADVANCE(227);
      if (lookahead == 0x5f55) ADVANCE(235);
      if (lookahead == 0x63d2) ADVANCE(229);
      if (lookahead == 0x6b4c) ADVANCE(228);
      if (lookahead == 0x7de8) ADVANCE(231);
      if (lookahead == 0x811a) ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 185:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '\n', 195,
        'A', 347,
        'C', 288,
        'I', 304,
        'L', 240,
        'M', 376,
        'P', 273,
        'R', 264,
        'V', 324,
        'a', 357,
        'c', 299,
        'i', 309,
        'l', 246,
        'm', 381,
        'p', 280,
        'r', 281,
        'v', 325,
        0x300a, 192,
        0x30a2, 390,
        0x30a4, 387,
        0x30dc, 392,
        0x30ec, 393,
        0x4f5c, 400,
        0x51fa, 406,
        0x5236, 395,
        0x5382, 407,
        0x539f, 396,
        0x5f55, 408,
        0x63d2, 398,
        0x6b4c, 397,
        0x7de8, 401,
        0x811a, 405,
        '\t', 198,
        ' ', 198,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(197);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 186:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(186);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'C') ADVANCE(210);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'V') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == 0x30a2) ADVANCE(223);
      if (lookahead == 0x30a4) ADVANCE(222);
      if (lookahead == 0x30dc) ADVANCE(224);
      if (lookahead == 0x30ec) ADVANCE(225);
      if (lookahead == 0x4f5c) ADVANCE(230);
      if (lookahead == 0x51fa) ADVANCE(233);
      if (lookahead == 0x5236) ADVANCE(226);
      if (lookahead == 0x5382) ADVANCE(234);
      if (lookahead == 0x539f) ADVANCE(227);
      if (lookahead == 0x5f55) ADVANCE(235);
      if (lookahead == 0x63d2) ADVANCE(229);
      if (lookahead == 0x6b4c) ADVANCE(228);
      if (lookahead == 0x7de8) ADVANCE(231);
      if (lookahead == 0x811a) ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 187:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(187);
      if (lookahead == 0x300a) ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 188:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '@', 194,
        'A', 111,
        'C', 59,
        'I', 71,
        'L', 9,
        'M', 148,
        'P', 44,
        'R', 34,
        'V', 95,
        'a', 127,
        'c', 70,
        'f', 35,
        'i', 80,
        'l', 16,
        'm', 153,
        'p', 51,
        'r', 52,
        'v', 96,
        0x300b, 193,
        0x30a2, 164,
        0x30a4, 161,
        0x30dc, 166,
        0x30ec, 167,
        0x4f5c, 174,
        0x51fa, 180,
        0x5236, 169,
        0x5382, 181,
        0x539f, 170,
        0x5f55, 182,
        0x63d2, 172,
        0x6b4c, 171,
        0x7de8, 175,
        0x811a, 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '@', 194,
        'A', 111,
        'C', 59,
        'I', 71,
        'L', 9,
        'M', 148,
        'P', 44,
        'R', 34,
        'V', 95,
        'a', 127,
        'c', 70,
        'i', 80,
        'l', 16,
        'm', 153,
        'p', 51,
        'r', 52,
        'v', 96,
        0x300b, 193,
        0x30a2, 164,
        0x30a4, 161,
        0x30dc, 166,
        0x30ec, 167,
        0x4f5c, 174,
        0x51fa, 180,
        0x5236, 169,
        0x5382, 181,
        0x539f, 170,
        0x5f55, 182,
        0x63d2, 172,
        0x6b4c, 171,
        0x7de8, 175,
        0x811a, 179,
        '\t', 525,
        ' ', 525,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(190);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(526);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '@', 194,
        'A', 111,
        'C', 59,
        'I', 71,
        'L', 9,
        'M', 148,
        'P', 44,
        'R', 34,
        'V', 95,
        'a', 127,
        'c', 70,
        'i', 80,
        'l', 16,
        'm', 153,
        'p', 51,
        'r', 52,
        'v', 96,
        0x300b, 193,
        0x30a2, 164,
        0x30a4, 161,
        0x30dc, 166,
        0x30ec, 167,
        0x4f5c, 174,
        0x51fa, 180,
        0x5236, 169,
        0x5382, 181,
        0x539f, 170,
        0x5f55, 182,
        0x63d2, 172,
        0x6b4c, 171,
        0x7de8, 175,
        0x811a, 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 195,
        'A', 216,
        'C', 210,
        'I', 212,
        'L', 202,
        'M', 218,
        'P', 206,
        'R', 204,
        'V', 214,
        'a', 217,
        'c', 211,
        'i', 213,
        'l', 203,
        'm', 219,
        'p', 207,
        'r', 208,
        'v', 215,
        0x300a, 192,
        0x30a2, 223,
        0x30a4, 222,
        0x30dc, 224,
        0x30ec, 225,
        0x4f5c, 230,
        0x51fa, 233,
        0x5236, 226,
        0x5382, 234,
        0x539f, 227,
        0x5f55, 235,
        0x63d2, 229,
        0x6b4c, 228,
        0x7de8, 231,
        0x811a, 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '@', 194,
        'A', 216,
        'C', 210,
        'I', 212,
        'L', 202,
        'M', 218,
        'P', 206,
        'R', 204,
        'V', 214,
        'a', 217,
        'c', 211,
        'f', 205,
        'i', 213,
        'l', 203,
        'm', 219,
        'p', 207,
        'r', 208,
        'v', 215,
        0x300a, 192,
        0x300b, 193,
        0x30a2, 223,
        0x30a4, 222,
        0x30dc, 224,
        0x30ec, 225,
        0x4f5c, 230,
        0x51fa, 233,
        0x5236, 226,
        0x5382, 234,
        0x539f, 227,
        0x5f55, 235,
        0x63d2, 229,
        0x6b4c, 228,
        0x7de8, 231,
        0x811a, 232,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '@', 194,
        'A', 216,
        'C', 210,
        'I', 212,
        'L', 202,
        'M', 218,
        'P', 206,
        'R', 204,
        'V', 214,
        'a', 217,
        'c', 211,
        'f', 205,
        'i', 213,
        'l', 203,
        'm', 219,
        'p', 207,
        'r', 208,
        'v', 215,
        0x30a2, 223,
        0x30a4, 222,
        0x30dc, 224,
        0x30ec, 225,
        0x4f5c, 230,
        0x51fa, 233,
        0x5236, 226,
        0x5382, 234,
        0x539f, 227,
        0x5f55, 235,
        0x63d2, 229,
        0x6b4c, 228,
        0x7de8, 231,
        0x811a, 232,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 216,
        'C', 210,
        'I', 212,
        'L', 202,
        'M', 218,
        'P', 206,
        'R', 204,
        'V', 214,
        'a', 217,
        'c', 211,
        'i', 213,
        'l', 203,
        'm', 219,
        'p', 207,
        'r', 208,
        'v', 215,
        0x300a, 192,
        0x30a2, 223,
        0x30a4, 222,
        0x30dc, 224,
        0x30ec, 225,
        0x4f5c, 230,
        0x51fa, 233,
        0x5236, 226,
        0x5382, 234,
        0x539f, 227,
        0x5f55, 235,
        0x63d2, 229,
        0x6b4c, 228,
        0x7de8, 231,
        0x811a, 232,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 0x300b) ADVANCE(193);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(192);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300b) ADVANCE(193);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(158);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(165);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(156);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(160);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(168);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(523);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(495);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(515);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(505);
      if (lookahead == 0x7de8) ADVANCE(176);
      if (lookahead == 0x8a5e) ADVANCE(509);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(507);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(513);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(173);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(511);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(521);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(197);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 347,
        'C', 288,
        'I', 304,
        'L', 240,
        'M', 376,
        'P', 273,
        'R', 264,
        'V', 324,
        'a', 357,
        'c', 299,
        'i', 309,
        'l', 246,
        'm', 381,
        'p', 280,
        'r', 281,
        'v', 325,
        0x30a2, 390,
        0x30a4, 387,
        0x30dc, 392,
        0x30ec, 393,
        0x4f5c, 400,
        0x51fa, 406,
        0x5236, 395,
        0x5382, 407,
        0x539f, 396,
        0x5f55, 408,
        0x63d2, 398,
        0x6b4c, 397,
        0x7de8, 401,
        0x811a, 405,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(341);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(314);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(301);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(303);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'y') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(323);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(272);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(274);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(435);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(437);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(305);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(332);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(306);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(335);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(297);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(298);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(255);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(321);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(300);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'r') ADVANCE(326);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(302);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(343);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(322);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(259);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(334);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(267);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(269);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(310);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(250);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(251);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(252);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(253);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(327);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(329);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(331);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(333);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(319);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(320);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(311);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(454);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(307);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(265);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(266);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(308);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(338);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(339);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(277);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(278);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(286);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(466);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(284);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(285);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(287);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(457);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(260);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(315);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(316);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(361);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(317);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(318);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(352);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(262);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(328);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(330);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(241);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(289);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(282);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(340);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(312);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(254);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(261);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(291);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(313);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(257);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(263);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(247);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(283);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(268);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(270);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(290);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(292);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(469);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(293);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(294);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(295);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(296);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(256);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(258);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(389);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(494);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(506);
      if (lookahead == 0x7de8) ADVANCE(402);
      if (lookahead == 0x8a5e) ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(500);
      if (lookahead == 0x7de8) ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 's') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 's') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(242);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(243);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(244);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(245);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(177);
      if (lookahead == 0x66f2) ADVANCE(501);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(403);
      if (lookahead == 0x66f2) ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(410);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 525,
        ' ', 525,
        '&', 526,
        ',', 526,
        '/', 526,
        ':', 526,
        0x3000, 526,
        0x3001, 526,
        0x30fb, 526,
        0xff06, 526,
        0xff1a, 526,
        0xff1b, 526,
      );
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 526,
        ' ', 526,
        '&', 526,
        ',', 526,
        '/', 526,
        ':', 526,
        0x3000, 526,
        0x3001, 526,
        0x30fb, 526,
        0xff06, 526,
        0xff1a, 526,
        0xff1b, 526,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 184},
  [2] = {.lex_state = 188},
  [3] = {.lex_state = 188},
  [4] = {.lex_state = 188},
  [5] = {.lex_state = 188},
  [6] = {.lex_state = 184},
  [7] = {.lex_state = 184},
  [8] = {.lex_state = 185},
  [9] = {.lex_state = 185},
  [10] = {.lex_state = 188},
  [11] = {.lex_state = 184},
  [12] = {.lex_state = 184},
  [13] = {.lex_state = 188},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 186},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 186},
  [19] = {.lex_state = 185},
  [20] = {.lex_state = 185},
  [21] = {.lex_state = 189},
  [22] = {.lex_state = 189},
  [23] = {.lex_state = 183},
  [24] = {.lex_state = 189},
  [25] = {.lex_state = 189},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 189},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 183},
  [30] = {.lex_state = 186},
  [31] = {.lex_state = 186},
  [32] = {.lex_state = 184},
  [33] = {.lex_state = 188},
  [34] = {.lex_state = 183},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 184},
  [37] = {.lex_state = 183},
  [38] = {.lex_state = 184},
  [39] = {.lex_state = 186},
  [40] = {.lex_state = 184},
  [41] = {.lex_state = 184},
  [42] = {.lex_state = 188},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 188},
  [45] = {.lex_state = 184},
  [46] = {.lex_state = 184},
  [47] = {.lex_state = 187},
  [48] = {.lex_state = 187},
  [49] = {.lex_state = 187},
  [50] = {.lex_state = 187},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 154},
  [55] = {.lex_state = 187},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 154},
  [63] = {.lex_state = 154},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 187},
  [67] = {.lex_state = 187},
  [68] = {.lex_state = 187},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 187},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 187},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 188},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 189},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_u300a] = ACTIONS(1),
    [anon_sym_u300b] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_song_title_token1] = ACTIONS(1),
    [aux_sym_feat_field_token1] = ACTIONS(1),
    [anon_sym_Music] = ACTIONS(1),
    [anon_sym_music] = ACTIONS(1),
    [anon_sym_Composition] = ACTIONS(1),
    [anon_sym_composition] = ACTIONS(1),
    [anon_sym_Composer] = ACTIONS(1),
    [anon_sym_composer] = ACTIONS(1),
    [anon_sym_Compose] = ACTIONS(1),
    [anon_sym_compose] = ACTIONS(1),
    [anon_sym_Lyrics] = ACTIONS(1),
    [anon_sym_lyrics] = ACTIONS(1),
    [anon_sym_Lyricist] = ACTIONS(1),
    [anon_sym_lyricist] = ACTIONS(1),
    [anon_sym_Lyric] = ACTIONS(1),
    [anon_sym_lyric] = ACTIONS(1),
    [anon_sym_Arrangement] = ACTIONS(1),
    [anon_sym_arrangement] = ACTIONS(1),
    [anon_sym_Arranger] = ACTIONS(1),
    [anon_sym_arranger] = ACTIONS(1),
    [anon_sym_Arrange] = ACTIONS(1),
    [anon_sym_arrange] = ACTIONS(1),
    [anon_sym_Vocal] = ACTIONS(1),
    [anon_sym_vocal] = ACTIONS(1),
    [anon_sym_Vo] = ACTIONS(1),
    [anon_sym_vo] = ACTIONS(1),
    [anon_sym_Performer] = ACTIONS(1),
    [anon_sym_performer] = ACTIONS(1),
    [anon_sym_Illustration] = ACTIONS(1),
    [anon_sym_illustration] = ACTIONS(1),
    [anon_sym_Illust] = ACTIONS(1),
    [anon_sym_illust] = ACTIONS(1),
    [anon_sym_Label] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_Circle] = ACTIONS(1),
    [anon_sym_circle] = ACTIONS(1),
    [anon_sym_Producer] = ACTIONS(1),
    [anon_sym_producer] = ACTIONS(1),
    [anon_sym_Recording] = ACTIONS(1),
    [anon_sym_recording] = ACTIONS(1),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(1),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(1),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(1),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(1),
    [anon_sym_u6b4cu5531] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu66f2] = ACTIONS(1),
    [anon_sym_u7de8u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5e] = ACTIONS(1),
    [anon_sym_u5382u724c] = ACTIONS(1),
    [anon_sym_u811au672c] = ACTIONS(1),
    [anon_sym_u63d2u56fe] = ACTIONS(1),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(1),
    [anon_sym_u51fau7248u65b9] = ACTIONS(1),
    [anon_sym_u5f55u97f3] = ACTIONS(1),
    [anon_sym_u539fu4f5c] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym__song] = STATE(3),
    [sym_song] = STATE(55),
    [sym_credit_block] = STATE(48),
    [sym_credit_field] = STATE(12),
    [sym__song_title] = STATE(42),
    [sym_song_title] = STATE(13),
    [sym_role] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(49),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(14),
    [aux_sym_song_title_repeat1] = STATE(15),
    [anon_sym_u300a] = ACTIONS(3),
    [aux_sym_song_title_token1] = ACTIONS(5),
    [anon_sym_Music] = ACTIONS(7),
    [anon_sym_music] = ACTIONS(7),
    [anon_sym_Composition] = ACTIONS(7),
    [anon_sym_composition] = ACTIONS(7),
    [anon_sym_Composer] = ACTIONS(7),
    [anon_sym_composer] = ACTIONS(7),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(7),
    [anon_sym_lyrics] = ACTIONS(7),
    [anon_sym_Lyricist] = ACTIONS(7),
    [anon_sym_lyricist] = ACTIONS(7),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(7),
    [anon_sym_arrangement] = ACTIONS(7),
    [anon_sym_Arranger] = ACTIONS(7),
    [anon_sym_arranger] = ACTIONS(7),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(7),
    [anon_sym_vocal] = ACTIONS(7),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(7),
    [anon_sym_performer] = ACTIONS(7),
    [anon_sym_Illustration] = ACTIONS(7),
    [anon_sym_illustration] = ACTIONS(7),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_Circle] = ACTIONS(7),
    [anon_sym_circle] = ACTIONS(7),
    [anon_sym_Producer] = ACTIONS(7),
    [anon_sym_producer] = ACTIONS(7),
    [anon_sym_Recording] = ACTIONS(7),
    [anon_sym_recording] = ACTIONS(7),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(7),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(7),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(7),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(7),
    [anon_sym_u6b4cu5531] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu66f2] = ACTIONS(7),
    [anon_sym_u7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(7),
    [anon_sym_u811au672c] = ACTIONS(7),
    [anon_sym_u63d2u56fe] = ACTIONS(7),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(7),
    [anon_sym_u51fau7248u65b9] = ACTIONS(7),
    [anon_sym_u5f55u97f3] = ACTIONS(7),
    [anon_sym_u539fu4f5c] = ACTIONS(7),
  },
  [2] = {
    [sym_credit_block] = STATE(67),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
  },
  [3] = {
    [sym_credit_block] = STATE(67),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
  },
  [4] = {
    [sym_credit_block] = STATE(67),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
  },
  [5] = {
    [sym_credit_block] = STATE(67),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
  },
  [6] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(23),
    [anon_sym_music] = ACTIONS(23),
    [anon_sym_Composition] = ACTIONS(23),
    [anon_sym_composition] = ACTIONS(23),
    [anon_sym_Composer] = ACTIONS(23),
    [anon_sym_composer] = ACTIONS(23),
    [anon_sym_Compose] = ACTIONS(23),
    [anon_sym_compose] = ACTIONS(23),
    [anon_sym_Lyrics] = ACTIONS(23),
    [anon_sym_lyrics] = ACTIONS(23),
    [anon_sym_Lyricist] = ACTIONS(23),
    [anon_sym_lyricist] = ACTIONS(23),
    [anon_sym_Lyric] = ACTIONS(23),
    [anon_sym_lyric] = ACTIONS(23),
    [anon_sym_Arrangement] = ACTIONS(23),
    [anon_sym_arrangement] = ACTIONS(23),
    [anon_sym_Arranger] = ACTIONS(23),
    [anon_sym_arranger] = ACTIONS(23),
    [anon_sym_Arrange] = ACTIONS(23),
    [anon_sym_arrange] = ACTIONS(23),
    [anon_sym_Vocal] = ACTIONS(23),
    [anon_sym_vocal] = ACTIONS(23),
    [anon_sym_Vo] = ACTIONS(23),
    [anon_sym_vo] = ACTIONS(23),
    [anon_sym_Performer] = ACTIONS(23),
    [anon_sym_performer] = ACTIONS(23),
    [anon_sym_Illustration] = ACTIONS(23),
    [anon_sym_illustration] = ACTIONS(23),
    [anon_sym_Illust] = ACTIONS(23),
    [anon_sym_illust] = ACTIONS(23),
    [anon_sym_Label] = ACTIONS(23),
    [anon_sym_label] = ACTIONS(23),
    [anon_sym_Circle] = ACTIONS(23),
    [anon_sym_circle] = ACTIONS(23),
    [anon_sym_Producer] = ACTIONS(23),
    [anon_sym_producer] = ACTIONS(23),
    [anon_sym_Recording] = ACTIONS(23),
    [anon_sym_recording] = ACTIONS(23),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(23),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(23),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(23),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(23),
    [anon_sym_u6b4cu5531] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(23),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu66f2] = ACTIONS(23),
    [anon_sym_u7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5e] = ACTIONS(23),
    [anon_sym_u5382u724c] = ACTIONS(23),
    [anon_sym_u811au672c] = ACTIONS(23),
    [anon_sym_u63d2u56fe] = ACTIONS(23),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(23),
    [anon_sym_u51fau7248u65b9] = ACTIONS(23),
    [anon_sym_u5f55u97f3] = ACTIONS(23),
    [anon_sym_u539fu4f5c] = ACTIONS(23),
  },
  [7] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
    [anon_sym_Music] = ACTIONS(7),
    [anon_sym_music] = ACTIONS(7),
    [anon_sym_Composition] = ACTIONS(7),
    [anon_sym_composition] = ACTIONS(7),
    [anon_sym_Composer] = ACTIONS(7),
    [anon_sym_composer] = ACTIONS(7),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(7),
    [anon_sym_lyrics] = ACTIONS(7),
    [anon_sym_Lyricist] = ACTIONS(7),
    [anon_sym_lyricist] = ACTIONS(7),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(7),
    [anon_sym_arrangement] = ACTIONS(7),
    [anon_sym_Arranger] = ACTIONS(7),
    [anon_sym_arranger] = ACTIONS(7),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(7),
    [anon_sym_vocal] = ACTIONS(7),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(7),
    [anon_sym_performer] = ACTIONS(7),
    [anon_sym_Illustration] = ACTIONS(7),
    [anon_sym_illustration] = ACTIONS(7),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_Circle] = ACTIONS(7),
    [anon_sym_circle] = ACTIONS(7),
    [anon_sym_Producer] = ACTIONS(7),
    [anon_sym_producer] = ACTIONS(7),
    [anon_sym_Recording] = ACTIONS(7),
    [anon_sym_recording] = ACTIONS(7),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(7),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(7),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(7),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(7),
    [anon_sym_u6b4cu5531] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu66f2] = ACTIONS(7),
    [anon_sym_u7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(7),
    [anon_sym_u811au672c] = ACTIONS(7),
    [anon_sym_u63d2u56fe] = ACTIONS(7),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(7),
    [anon_sym_u51fau7248u65b9] = ACTIONS(7),
    [anon_sym_u5f55u97f3] = ACTIONS(7),
    [anon_sym_u539fu4f5c] = ACTIONS(7),
  },
  [8] = {
    [sym__creator] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_u300a] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(34),
    [aux_sym_song_title_token1] = ACTIONS(32),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(32),
    [anon_sym_music] = ACTIONS(32),
    [anon_sym_Composition] = ACTIONS(32),
    [anon_sym_composition] = ACTIONS(32),
    [anon_sym_Composer] = ACTIONS(32),
    [anon_sym_composer] = ACTIONS(32),
    [anon_sym_Compose] = ACTIONS(32),
    [anon_sym_compose] = ACTIONS(32),
    [anon_sym_Lyrics] = ACTIONS(32),
    [anon_sym_lyrics] = ACTIONS(32),
    [anon_sym_Lyricist] = ACTIONS(32),
    [anon_sym_lyricist] = ACTIONS(32),
    [anon_sym_Lyric] = ACTIONS(32),
    [anon_sym_lyric] = ACTIONS(32),
    [anon_sym_Arrangement] = ACTIONS(32),
    [anon_sym_arrangement] = ACTIONS(32),
    [anon_sym_Arranger] = ACTIONS(32),
    [anon_sym_arranger] = ACTIONS(32),
    [anon_sym_Arrange] = ACTIONS(32),
    [anon_sym_arrange] = ACTIONS(32),
    [anon_sym_Vocal] = ACTIONS(32),
    [anon_sym_vocal] = ACTIONS(32),
    [anon_sym_Vo] = ACTIONS(32),
    [anon_sym_vo] = ACTIONS(32),
    [anon_sym_Performer] = ACTIONS(32),
    [anon_sym_performer] = ACTIONS(32),
    [anon_sym_Illustration] = ACTIONS(32),
    [anon_sym_illustration] = ACTIONS(32),
    [anon_sym_Illust] = ACTIONS(32),
    [anon_sym_illust] = ACTIONS(32),
    [anon_sym_Label] = ACTIONS(32),
    [anon_sym_label] = ACTIONS(32),
    [anon_sym_Circle] = ACTIONS(32),
    [anon_sym_circle] = ACTIONS(32),
    [anon_sym_Producer] = ACTIONS(32),
    [anon_sym_producer] = ACTIONS(32),
    [anon_sym_Recording] = ACTIONS(32),
    [anon_sym_recording] = ACTIONS(32),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(32),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(32),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(32),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(32),
    [anon_sym_u6b4cu5531] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu66f2] = ACTIONS(32),
    [anon_sym_u7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5e] = ACTIONS(32),
    [anon_sym_u5382u724c] = ACTIONS(32),
    [anon_sym_u811au672c] = ACTIONS(32),
    [anon_sym_u63d2u56fe] = ACTIONS(32),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(32),
    [anon_sym_u51fau7248u65b9] = ACTIONS(32),
    [anon_sym_u5f55u97f3] = ACTIONS(32),
    [anon_sym_u539fu4f5c] = ACTIONS(32),
  },
  [9] = {
    [sym__creator] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_u300a] = ACTIONS(40),
    [anon_sym_LF] = ACTIONS(42),
    [aux_sym_song_title_token1] = ACTIONS(40),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(40),
    [anon_sym_music] = ACTIONS(40),
    [anon_sym_Composition] = ACTIONS(40),
    [anon_sym_composition] = ACTIONS(40),
    [anon_sym_Composer] = ACTIONS(40),
    [anon_sym_composer] = ACTIONS(40),
    [anon_sym_Compose] = ACTIONS(40),
    [anon_sym_compose] = ACTIONS(40),
    [anon_sym_Lyrics] = ACTIONS(40),
    [anon_sym_lyrics] = ACTIONS(40),
    [anon_sym_Lyricist] = ACTIONS(40),
    [anon_sym_lyricist] = ACTIONS(40),
    [anon_sym_Lyric] = ACTIONS(40),
    [anon_sym_lyric] = ACTIONS(40),
    [anon_sym_Arrangement] = ACTIONS(40),
    [anon_sym_arrangement] = ACTIONS(40),
    [anon_sym_Arranger] = ACTIONS(40),
    [anon_sym_arranger] = ACTIONS(40),
    [anon_sym_Arrange] = ACTIONS(40),
    [anon_sym_arrange] = ACTIONS(40),
    [anon_sym_Vocal] = ACTIONS(40),
    [anon_sym_vocal] = ACTIONS(40),
    [anon_sym_Vo] = ACTIONS(40),
    [anon_sym_vo] = ACTIONS(40),
    [anon_sym_Performer] = ACTIONS(40),
    [anon_sym_performer] = ACTIONS(40),
    [anon_sym_Illustration] = ACTIONS(40),
    [anon_sym_illustration] = ACTIONS(40),
    [anon_sym_Illust] = ACTIONS(40),
    [anon_sym_illust] = ACTIONS(40),
    [anon_sym_Label] = ACTIONS(40),
    [anon_sym_label] = ACTIONS(40),
    [anon_sym_Circle] = ACTIONS(40),
    [anon_sym_circle] = ACTIONS(40),
    [anon_sym_Producer] = ACTIONS(40),
    [anon_sym_producer] = ACTIONS(40),
    [anon_sym_Recording] = ACTIONS(40),
    [anon_sym_recording] = ACTIONS(40),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(40),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(40),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(40),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(40),
    [anon_sym_u6b4cu5531] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu66f2] = ACTIONS(40),
    [anon_sym_u7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5e] = ACTIONS(40),
    [anon_sym_u5382u724c] = ACTIONS(40),
    [anon_sym_u811au672c] = ACTIONS(40),
    [anon_sym_u63d2u56fe] = ACTIONS(40),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(40),
    [anon_sym_u51fau7248u65b9] = ACTIONS(40),
    [anon_sym_u5f55u97f3] = ACTIONS(40),
    [anon_sym_u539fu4f5c] = ACTIONS(40),
  },
  [10] = {
    [sym_credit_block] = STATE(77),
    [sym_credit_field] = STATE(12),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(14),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
  },
  [11] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [aux_sym_credit_field_repeat1] = STATE(14),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(23),
    [anon_sym_music] = ACTIONS(23),
    [anon_sym_Composition] = ACTIONS(23),
    [anon_sym_composition] = ACTIONS(23),
    [anon_sym_Composer] = ACTIONS(23),
    [anon_sym_composer] = ACTIONS(23),
    [anon_sym_Compose] = ACTIONS(23),
    [anon_sym_compose] = ACTIONS(23),
    [anon_sym_Lyrics] = ACTIONS(23),
    [anon_sym_lyrics] = ACTIONS(23),
    [anon_sym_Lyricist] = ACTIONS(23),
    [anon_sym_lyricist] = ACTIONS(23),
    [anon_sym_Lyric] = ACTIONS(23),
    [anon_sym_lyric] = ACTIONS(23),
    [anon_sym_Arrangement] = ACTIONS(23),
    [anon_sym_arrangement] = ACTIONS(23),
    [anon_sym_Arranger] = ACTIONS(23),
    [anon_sym_arranger] = ACTIONS(23),
    [anon_sym_Arrange] = ACTIONS(23),
    [anon_sym_arrange] = ACTIONS(23),
    [anon_sym_Vocal] = ACTIONS(23),
    [anon_sym_vocal] = ACTIONS(23),
    [anon_sym_Vo] = ACTIONS(23),
    [anon_sym_vo] = ACTIONS(23),
    [anon_sym_Performer] = ACTIONS(23),
    [anon_sym_performer] = ACTIONS(23),
    [anon_sym_Illustration] = ACTIONS(23),
    [anon_sym_illustration] = ACTIONS(23),
    [anon_sym_Illust] = ACTIONS(23),
    [anon_sym_illust] = ACTIONS(23),
    [anon_sym_Label] = ACTIONS(23),
    [anon_sym_label] = ACTIONS(23),
    [anon_sym_Circle] = ACTIONS(23),
    [anon_sym_circle] = ACTIONS(23),
    [anon_sym_Producer] = ACTIONS(23),
    [anon_sym_producer] = ACTIONS(23),
    [anon_sym_Recording] = ACTIONS(23),
    [anon_sym_recording] = ACTIONS(23),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(23),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(23),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(23),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(23),
    [anon_sym_u6b4cu5531] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(23),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu66f2] = ACTIONS(23),
    [anon_sym_u7de8u66f2] = ACTIONS(23),
    [anon_sym_u4f5cu8a5e] = ACTIONS(23),
    [anon_sym_u5382u724c] = ACTIONS(23),
    [anon_sym_u811au672c] = ACTIONS(23),
    [anon_sym_u63d2u56fe] = ACTIONS(23),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(23),
    [anon_sym_u51fau7248u65b9] = ACTIONS(23),
    [anon_sym_u5f55u97f3] = ACTIONS(23),
    [anon_sym_u539fu4f5c] = ACTIONS(23),
  },
  [12] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(80),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [aux_sym_credit_field_repeat1] = STATE(14),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
    [anon_sym_Music] = ACTIONS(7),
    [anon_sym_music] = ACTIONS(7),
    [anon_sym_Composition] = ACTIONS(7),
    [anon_sym_composition] = ACTIONS(7),
    [anon_sym_Composer] = ACTIONS(7),
    [anon_sym_composer] = ACTIONS(7),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(7),
    [anon_sym_lyrics] = ACTIONS(7),
    [anon_sym_Lyricist] = ACTIONS(7),
    [anon_sym_lyricist] = ACTIONS(7),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(7),
    [anon_sym_arrangement] = ACTIONS(7),
    [anon_sym_Arranger] = ACTIONS(7),
    [anon_sym_arranger] = ACTIONS(7),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(7),
    [anon_sym_vocal] = ACTIONS(7),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(7),
    [anon_sym_performer] = ACTIONS(7),
    [anon_sym_Illustration] = ACTIONS(7),
    [anon_sym_illustration] = ACTIONS(7),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_Circle] = ACTIONS(7),
    [anon_sym_circle] = ACTIONS(7),
    [anon_sym_Producer] = ACTIONS(7),
    [anon_sym_producer] = ACTIONS(7),
    [anon_sym_Recording] = ACTIONS(7),
    [anon_sym_recording] = ACTIONS(7),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(7),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(7),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(7),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(7),
    [anon_sym_u6b4cu5531] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu66f2] = ACTIONS(7),
    [anon_sym_u7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(7),
    [anon_sym_u811au672c] = ACTIONS(7),
    [anon_sym_u63d2u56fe] = ACTIONS(7),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(7),
    [anon_sym_u51fau7248u65b9] = ACTIONS(7),
    [anon_sym_u5f55u97f3] = ACTIONS(7),
    [anon_sym_u539fu4f5c] = ACTIONS(7),
  },
  [13] = {
    [sym_feat_field] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_u300b] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_feat_field_token1] = ACTIONS(48),
    [anon_sym_Music] = ACTIONS(46),
    [anon_sym_music] = ACTIONS(46),
    [anon_sym_Composition] = ACTIONS(46),
    [anon_sym_composition] = ACTIONS(46),
    [anon_sym_Composer] = ACTIONS(46),
    [anon_sym_composer] = ACTIONS(46),
    [anon_sym_Compose] = ACTIONS(50),
    [anon_sym_compose] = ACTIONS(50),
    [anon_sym_Lyrics] = ACTIONS(46),
    [anon_sym_lyrics] = ACTIONS(46),
    [anon_sym_Lyricist] = ACTIONS(46),
    [anon_sym_lyricist] = ACTIONS(46),
    [anon_sym_Lyric] = ACTIONS(50),
    [anon_sym_lyric] = ACTIONS(50),
    [anon_sym_Arrangement] = ACTIONS(46),
    [anon_sym_arrangement] = ACTIONS(46),
    [anon_sym_Arranger] = ACTIONS(46),
    [anon_sym_arranger] = ACTIONS(46),
    [anon_sym_Arrange] = ACTIONS(50),
    [anon_sym_arrange] = ACTIONS(50),
    [anon_sym_Vocal] = ACTIONS(46),
    [anon_sym_vocal] = ACTIONS(46),
    [anon_sym_Vo] = ACTIONS(50),
    [anon_sym_vo] = ACTIONS(50),
    [anon_sym_Performer] = ACTIONS(46),
    [anon_sym_performer] = ACTIONS(46),
    [anon_sym_Illustration] = ACTIONS(46),
    [anon_sym_illustration] = ACTIONS(46),
    [anon_sym_Illust] = ACTIONS(50),
    [anon_sym_illust] = ACTIONS(50),
    [anon_sym_Label] = ACTIONS(46),
    [anon_sym_label] = ACTIONS(46),
    [anon_sym_Circle] = ACTIONS(46),
    [anon_sym_circle] = ACTIONS(46),
    [anon_sym_Producer] = ACTIONS(46),
    [anon_sym_producer] = ACTIONS(46),
    [anon_sym_Recording] = ACTIONS(46),
    [anon_sym_recording] = ACTIONS(46),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(46),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(46),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(46),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(46),
    [anon_sym_u6b4cu5531] = ACTIONS(46),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(46),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(46),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(46),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(46),
    [anon_sym_u4f5cu66f2] = ACTIONS(46),
    [anon_sym_u7de8u66f2] = ACTIONS(46),
    [anon_sym_u4f5cu8a5e] = ACTIONS(50),
    [anon_sym_u5382u724c] = ACTIONS(46),
    [anon_sym_u811au672c] = ACTIONS(46),
    [anon_sym_u63d2u56fe] = ACTIONS(46),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(46),
    [anon_sym_u51fau7248u65b9] = ACTIONS(46),
    [anon_sym_u5f55u97f3] = ACTIONS(46),
    [anon_sym_u539fu4f5c] = ACTIONS(46),
  },
  [14] = {
    [sym__creator] = STATE(56),
    [sym_role] = STATE(80),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [anon_sym_u300a] = ACTIONS(52),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(7),
    [anon_sym_music] = ACTIONS(7),
    [anon_sym_Composition] = ACTIONS(7),
    [anon_sym_composition] = ACTIONS(7),
    [anon_sym_Composer] = ACTIONS(7),
    [anon_sym_composer] = ACTIONS(7),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(7),
    [anon_sym_lyrics] = ACTIONS(7),
    [anon_sym_Lyricist] = ACTIONS(7),
    [anon_sym_lyricist] = ACTIONS(7),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(7),
    [anon_sym_arrangement] = ACTIONS(7),
    [anon_sym_Arranger] = ACTIONS(7),
    [anon_sym_arranger] = ACTIONS(7),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(7),
    [anon_sym_vocal] = ACTIONS(7),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(7),
    [anon_sym_performer] = ACTIONS(7),
    [anon_sym_Illustration] = ACTIONS(7),
    [anon_sym_illustration] = ACTIONS(7),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_Circle] = ACTIONS(7),
    [anon_sym_circle] = ACTIONS(7),
    [anon_sym_Producer] = ACTIONS(7),
    [anon_sym_producer] = ACTIONS(7),
    [anon_sym_Recording] = ACTIONS(7),
    [anon_sym_recording] = ACTIONS(7),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(7),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(7),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(7),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(7),
    [anon_sym_u6b4cu5531] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu66f2] = ACTIONS(7),
    [anon_sym_u7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(7),
    [anon_sym_u811au672c] = ACTIONS(7),
    [anon_sym_u63d2u56fe] = ACTIONS(7),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(7),
    [anon_sym_u51fau7248u65b9] = ACTIONS(7),
    [anon_sym_u5f55u97f3] = ACTIONS(7),
    [anon_sym_u539fu4f5c] = ACTIONS(7),
  },
  [15] = {
    [aux_sym_song_title_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(56),
    [aux_sym_song_title_token1] = ACTIONS(5),
    [aux_sym_feat_field_token1] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(56),
    [anon_sym_music] = ACTIONS(56),
    [anon_sym_Composition] = ACTIONS(56),
    [anon_sym_composition] = ACTIONS(56),
    [anon_sym_Composer] = ACTIONS(56),
    [anon_sym_composer] = ACTIONS(56),
    [anon_sym_Compose] = ACTIONS(56),
    [anon_sym_compose] = ACTIONS(56),
    [anon_sym_Lyrics] = ACTIONS(56),
    [anon_sym_lyrics] = ACTIONS(56),
    [anon_sym_Lyricist] = ACTIONS(56),
    [anon_sym_lyricist] = ACTIONS(56),
    [anon_sym_Lyric] = ACTIONS(56),
    [anon_sym_lyric] = ACTIONS(56),
    [anon_sym_Arrangement] = ACTIONS(56),
    [anon_sym_arrangement] = ACTIONS(56),
    [anon_sym_Arranger] = ACTIONS(56),
    [anon_sym_arranger] = ACTIONS(56),
    [anon_sym_Arrange] = ACTIONS(56),
    [anon_sym_arrange] = ACTIONS(56),
    [anon_sym_Vocal] = ACTIONS(56),
    [anon_sym_vocal] = ACTIONS(56),
    [anon_sym_Vo] = ACTIONS(56),
    [anon_sym_vo] = ACTIONS(56),
    [anon_sym_Performer] = ACTIONS(56),
    [anon_sym_performer] = ACTIONS(56),
    [anon_sym_Illustration] = ACTIONS(56),
    [anon_sym_illustration] = ACTIONS(56),
    [anon_sym_Illust] = ACTIONS(56),
    [anon_sym_illust] = ACTIONS(56),
    [anon_sym_Label] = ACTIONS(56),
    [anon_sym_label] = ACTIONS(56),
    [anon_sym_Circle] = ACTIONS(56),
    [anon_sym_circle] = ACTIONS(56),
    [anon_sym_Producer] = ACTIONS(56),
    [anon_sym_producer] = ACTIONS(56),
    [anon_sym_Recording] = ACTIONS(56),
    [anon_sym_recording] = ACTIONS(56),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(56),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(56),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(56),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(56),
    [anon_sym_u6b4cu5531] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(56),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu66f2] = ACTIONS(56),
    [anon_sym_u7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5e] = ACTIONS(56),
    [anon_sym_u5382u724c] = ACTIONS(56),
    [anon_sym_u811au672c] = ACTIONS(56),
    [anon_sym_u63d2u56fe] = ACTIONS(56),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(56),
    [anon_sym_u51fau7248u65b9] = ACTIONS(56),
    [anon_sym_u5f55u97f3] = ACTIONS(56),
    [anon_sym_u539fu4f5c] = ACTIONS(56),
  },
  [16] = {
    [aux_sym_credit_field_repeat2] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_u300b] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_Music] = ACTIONS(60),
    [anon_sym_music] = ACTIONS(60),
    [anon_sym_Composition] = ACTIONS(60),
    [anon_sym_composition] = ACTIONS(60),
    [anon_sym_Composer] = ACTIONS(60),
    [anon_sym_composer] = ACTIONS(60),
    [anon_sym_Compose] = ACTIONS(60),
    [anon_sym_compose] = ACTIONS(60),
    [anon_sym_Lyrics] = ACTIONS(60),
    [anon_sym_lyrics] = ACTIONS(60),
    [anon_sym_Lyricist] = ACTIONS(60),
    [anon_sym_lyricist] = ACTIONS(60),
    [anon_sym_Lyric] = ACTIONS(60),
    [anon_sym_lyric] = ACTIONS(60),
    [anon_sym_Arrangement] = ACTIONS(60),
    [anon_sym_arrangement] = ACTIONS(60),
    [anon_sym_Arranger] = ACTIONS(60),
    [anon_sym_arranger] = ACTIONS(60),
    [anon_sym_Arrange] = ACTIONS(60),
    [anon_sym_arrange] = ACTIONS(60),
    [anon_sym_Vocal] = ACTIONS(60),
    [anon_sym_vocal] = ACTIONS(60),
    [anon_sym_Vo] = ACTIONS(60),
    [anon_sym_vo] = ACTIONS(60),
    [anon_sym_Performer] = ACTIONS(60),
    [anon_sym_performer] = ACTIONS(60),
    [anon_sym_Illustration] = ACTIONS(60),
    [anon_sym_illustration] = ACTIONS(60),
    [anon_sym_Illust] = ACTIONS(60),
    [anon_sym_illust] = ACTIONS(60),
    [anon_sym_Label] = ACTIONS(60),
    [anon_sym_label] = ACTIONS(60),
    [anon_sym_Circle] = ACTIONS(60),
    [anon_sym_circle] = ACTIONS(60),
    [anon_sym_Producer] = ACTIONS(60),
    [anon_sym_producer] = ACTIONS(60),
    [anon_sym_Recording] = ACTIONS(60),
    [anon_sym_recording] = ACTIONS(60),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(60),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(60),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(60),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(60),
    [anon_sym_u6b4cu5531] = ACTIONS(60),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(60),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(60),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(60),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(60),
    [anon_sym_u4f5cu66f2] = ACTIONS(60),
    [anon_sym_u7de8u66f2] = ACTIONS(60),
    [anon_sym_u4f5cu8a5e] = ACTIONS(60),
    [anon_sym_u5382u724c] = ACTIONS(60),
    [anon_sym_u811au672c] = ACTIONS(60),
    [anon_sym_u63d2u56fe] = ACTIONS(60),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(60),
    [anon_sym_u51fau7248u65b9] = ACTIONS(60),
    [anon_sym_u5f55u97f3] = ACTIONS(60),
    [anon_sym_u539fu4f5c] = ACTIONS(60),
    [sym__sep] = ACTIONS(62),
  },
  [17] = {
    [sym__creator] = STATE(59),
    [sym_role] = STATE(80),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [anon_sym_u300a] = ACTIONS(52),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(7),
    [anon_sym_music] = ACTIONS(7),
    [anon_sym_Composition] = ACTIONS(7),
    [anon_sym_composition] = ACTIONS(7),
    [anon_sym_Composer] = ACTIONS(7),
    [anon_sym_composer] = ACTIONS(7),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(7),
    [anon_sym_lyrics] = ACTIONS(7),
    [anon_sym_Lyricist] = ACTIONS(7),
    [anon_sym_lyricist] = ACTIONS(7),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(7),
    [anon_sym_arrangement] = ACTIONS(7),
    [anon_sym_Arranger] = ACTIONS(7),
    [anon_sym_arranger] = ACTIONS(7),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(7),
    [anon_sym_vocal] = ACTIONS(7),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(7),
    [anon_sym_performer] = ACTIONS(7),
    [anon_sym_Illustration] = ACTIONS(7),
    [anon_sym_illustration] = ACTIONS(7),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
    [anon_sym_Label] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_Circle] = ACTIONS(7),
    [anon_sym_circle] = ACTIONS(7),
    [anon_sym_Producer] = ACTIONS(7),
    [anon_sym_producer] = ACTIONS(7),
    [anon_sym_Recording] = ACTIONS(7),
    [anon_sym_recording] = ACTIONS(7),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(7),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(7),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(7),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(7),
    [anon_sym_u6b4cu5531] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(7),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu66f2] = ACTIONS(7),
    [anon_sym_u7de8u66f2] = ACTIONS(7),
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(7),
    [anon_sym_u811au672c] = ACTIONS(7),
    [anon_sym_u63d2u56fe] = ACTIONS(7),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(7),
    [anon_sym_u51fau7248u65b9] = ACTIONS(7),
    [anon_sym_u5f55u97f3] = ACTIONS(7),
    [anon_sym_u539fu4f5c] = ACTIONS(7),
  },
  [18] = {
    [aux_sym_song_title_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym_feat_field_token1] = ACTIONS(67),
    [anon_sym_Music] = ACTIONS(67),
    [anon_sym_music] = ACTIONS(67),
    [anon_sym_Composition] = ACTIONS(67),
    [anon_sym_composition] = ACTIONS(67),
    [anon_sym_Composer] = ACTIONS(67),
    [anon_sym_composer] = ACTIONS(67),
    [anon_sym_Compose] = ACTIONS(67),
    [anon_sym_compose] = ACTIONS(67),
    [anon_sym_Lyrics] = ACTIONS(67),
    [anon_sym_lyrics] = ACTIONS(67),
    [anon_sym_Lyricist] = ACTIONS(67),
    [anon_sym_lyricist] = ACTIONS(67),
    [anon_sym_Lyric] = ACTIONS(67),
    [anon_sym_lyric] = ACTIONS(67),
    [anon_sym_Arrangement] = ACTIONS(67),
    [anon_sym_arrangement] = ACTIONS(67),
    [anon_sym_Arranger] = ACTIONS(67),
    [anon_sym_arranger] = ACTIONS(67),
    [anon_sym_Arrange] = ACTIONS(67),
    [anon_sym_arrange] = ACTIONS(67),
    [anon_sym_Vocal] = ACTIONS(67),
    [anon_sym_vocal] = ACTIONS(67),
    [anon_sym_Vo] = ACTIONS(67),
    [anon_sym_vo] = ACTIONS(67),
    [anon_sym_Performer] = ACTIONS(67),
    [anon_sym_performer] = ACTIONS(67),
    [anon_sym_Illustration] = ACTIONS(67),
    [anon_sym_illustration] = ACTIONS(67),
    [anon_sym_Illust] = ACTIONS(67),
    [anon_sym_illust] = ACTIONS(67),
    [anon_sym_Label] = ACTIONS(67),
    [anon_sym_label] = ACTIONS(67),
    [anon_sym_Circle] = ACTIONS(67),
    [anon_sym_circle] = ACTIONS(67),
    [anon_sym_Producer] = ACTIONS(67),
    [anon_sym_producer] = ACTIONS(67),
    [anon_sym_Recording] = ACTIONS(67),
    [anon_sym_recording] = ACTIONS(67),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(67),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(67),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(67),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(67),
    [anon_sym_u6b4cu5531] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(67),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu66f2] = ACTIONS(67),
    [anon_sym_u7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5e] = ACTIONS(67),
    [anon_sym_u5382u724c] = ACTIONS(67),
    [anon_sym_u811au672c] = ACTIONS(67),
    [anon_sym_u63d2u56fe] = ACTIONS(67),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(67),
    [anon_sym_u51fau7248u65b9] = ACTIONS(67),
    [anon_sym_u5f55u97f3] = ACTIONS(67),
    [anon_sym_u539fu4f5c] = ACTIONS(67),
  },
  [19] = {
    [sym__creator] = STATE(72),
    [anon_sym_u300a] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(32),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(32),
    [anon_sym_music] = ACTIONS(32),
    [anon_sym_Composition] = ACTIONS(32),
    [anon_sym_composition] = ACTIONS(32),
    [anon_sym_Composer] = ACTIONS(32),
    [anon_sym_composer] = ACTIONS(32),
    [anon_sym_Compose] = ACTIONS(32),
    [anon_sym_compose] = ACTIONS(32),
    [anon_sym_Lyrics] = ACTIONS(32),
    [anon_sym_lyrics] = ACTIONS(32),
    [anon_sym_Lyricist] = ACTIONS(32),
    [anon_sym_lyricist] = ACTIONS(32),
    [anon_sym_Lyric] = ACTIONS(32),
    [anon_sym_lyric] = ACTIONS(32),
    [anon_sym_Arrangement] = ACTIONS(32),
    [anon_sym_arrangement] = ACTIONS(32),
    [anon_sym_Arranger] = ACTIONS(32),
    [anon_sym_arranger] = ACTIONS(32),
    [anon_sym_Arrange] = ACTIONS(32),
    [anon_sym_arrange] = ACTIONS(32),
    [anon_sym_Vocal] = ACTIONS(32),
    [anon_sym_vocal] = ACTIONS(32),
    [anon_sym_Vo] = ACTIONS(32),
    [anon_sym_vo] = ACTIONS(32),
    [anon_sym_Performer] = ACTIONS(32),
    [anon_sym_performer] = ACTIONS(32),
    [anon_sym_Illustration] = ACTIONS(32),
    [anon_sym_illustration] = ACTIONS(32),
    [anon_sym_Illust] = ACTIONS(32),
    [anon_sym_illust] = ACTIONS(32),
    [anon_sym_Label] = ACTIONS(32),
    [anon_sym_label] = ACTIONS(32),
    [anon_sym_Circle] = ACTIONS(32),
    [anon_sym_circle] = ACTIONS(32),
    [anon_sym_Producer] = ACTIONS(32),
    [anon_sym_producer] = ACTIONS(32),
    [anon_sym_Recording] = ACTIONS(32),
    [anon_sym_recording] = ACTIONS(32),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(32),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(32),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(32),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(32),
    [anon_sym_u6b4cu5531] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu66f2] = ACTIONS(32),
    [anon_sym_u7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5e] = ACTIONS(32),
    [anon_sym_u5382u724c] = ACTIONS(32),
    [anon_sym_u811au672c] = ACTIONS(32),
    [anon_sym_u63d2u56fe] = ACTIONS(32),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(32),
    [anon_sym_u51fau7248u65b9] = ACTIONS(32),
    [anon_sym_u5f55u97f3] = ACTIONS(32),
    [anon_sym_u539fu4f5c] = ACTIONS(32),
  },
  [20] = {
    [sym__creator] = STATE(72),
    [anon_sym_u300a] = ACTIONS(40),
    [anon_sym_LF] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(40),
    [sym_creator_name] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(40),
    [anon_sym_music] = ACTIONS(40),
    [anon_sym_Composition] = ACTIONS(40),
    [anon_sym_composition] = ACTIONS(40),
    [anon_sym_Composer] = ACTIONS(40),
    [anon_sym_composer] = ACTIONS(40),
    [anon_sym_Compose] = ACTIONS(40),
    [anon_sym_compose] = ACTIONS(40),
    [anon_sym_Lyrics] = ACTIONS(40),
    [anon_sym_lyrics] = ACTIONS(40),
    [anon_sym_Lyricist] = ACTIONS(40),
    [anon_sym_lyricist] = ACTIONS(40),
    [anon_sym_Lyric] = ACTIONS(40),
    [anon_sym_lyric] = ACTIONS(40),
    [anon_sym_Arrangement] = ACTIONS(40),
    [anon_sym_arrangement] = ACTIONS(40),
    [anon_sym_Arranger] = ACTIONS(40),
    [anon_sym_arranger] = ACTIONS(40),
    [anon_sym_Arrange] = ACTIONS(40),
    [anon_sym_arrange] = ACTIONS(40),
    [anon_sym_Vocal] = ACTIONS(40),
    [anon_sym_vocal] = ACTIONS(40),
    [anon_sym_Vo] = ACTIONS(40),
    [anon_sym_vo] = ACTIONS(40),
    [anon_sym_Performer] = ACTIONS(40),
    [anon_sym_performer] = ACTIONS(40),
    [anon_sym_Illustration] = ACTIONS(40),
    [anon_sym_illustration] = ACTIONS(40),
    [anon_sym_Illust] = ACTIONS(40),
    [anon_sym_illust] = ACTIONS(40),
    [anon_sym_Label] = ACTIONS(40),
    [anon_sym_label] = ACTIONS(40),
    [anon_sym_Circle] = ACTIONS(40),
    [anon_sym_circle] = ACTIONS(40),
    [anon_sym_Producer] = ACTIONS(40),
    [anon_sym_producer] = ACTIONS(40),
    [anon_sym_Recording] = ACTIONS(40),
    [anon_sym_recording] = ACTIONS(40),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(40),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(40),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(40),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(40),
    [anon_sym_u6b4cu5531] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu66f2] = ACTIONS(40),
    [anon_sym_u7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5e] = ACTIONS(40),
    [anon_sym_u5382u724c] = ACTIONS(40),
    [anon_sym_u811au672c] = ACTIONS(40),
    [anon_sym_u63d2u56fe] = ACTIONS(40),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(40),
    [anon_sym_u51fau7248u65b9] = ACTIONS(40),
    [anon_sym_u5f55u97f3] = ACTIONS(40),
    [anon_sym_u539fu4f5c] = ACTIONS(40),
  },
  [21] = {
    [aux_sym_credit_field_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_u300b] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_Music] = ACTIONS(78),
    [anon_sym_music] = ACTIONS(78),
    [anon_sym_Composition] = ACTIONS(78),
    [anon_sym_composition] = ACTIONS(78),
    [anon_sym_Composer] = ACTIONS(78),
    [anon_sym_composer] = ACTIONS(78),
    [anon_sym_Compose] = ACTIONS(78),
    [anon_sym_compose] = ACTIONS(78),
    [anon_sym_Lyrics] = ACTIONS(78),
    [anon_sym_lyrics] = ACTIONS(78),
    [anon_sym_Lyricist] = ACTIONS(78),
    [anon_sym_lyricist] = ACTIONS(78),
    [anon_sym_Lyric] = ACTIONS(78),
    [anon_sym_lyric] = ACTIONS(78),
    [anon_sym_Arrangement] = ACTIONS(78),
    [anon_sym_arrangement] = ACTIONS(78),
    [anon_sym_Arranger] = ACTIONS(78),
    [anon_sym_arranger] = ACTIONS(78),
    [anon_sym_Arrange] = ACTIONS(78),
    [anon_sym_arrange] = ACTIONS(78),
    [anon_sym_Vocal] = ACTIONS(78),
    [anon_sym_vocal] = ACTIONS(78),
    [anon_sym_Vo] = ACTIONS(78),
    [anon_sym_vo] = ACTIONS(78),
    [anon_sym_Performer] = ACTIONS(78),
    [anon_sym_performer] = ACTIONS(78),
    [anon_sym_Illustration] = ACTIONS(78),
    [anon_sym_illustration] = ACTIONS(78),
    [anon_sym_Illust] = ACTIONS(78),
    [anon_sym_illust] = ACTIONS(78),
    [anon_sym_Label] = ACTIONS(78),
    [anon_sym_label] = ACTIONS(78),
    [anon_sym_Circle] = ACTIONS(78),
    [anon_sym_circle] = ACTIONS(78),
    [anon_sym_Producer] = ACTIONS(78),
    [anon_sym_producer] = ACTIONS(78),
    [anon_sym_Recording] = ACTIONS(78),
    [anon_sym_recording] = ACTIONS(78),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(78),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(78),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(78),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(78),
    [anon_sym_u6b4cu5531] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu66f2] = ACTIONS(78),
    [anon_sym_u7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5e] = ACTIONS(78),
    [anon_sym_u5382u724c] = ACTIONS(78),
    [anon_sym_u811au672c] = ACTIONS(78),
    [anon_sym_u63d2u56fe] = ACTIONS(78),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(78),
    [anon_sym_u51fau7248u65b9] = ACTIONS(78),
    [anon_sym_u5f55u97f3] = ACTIONS(78),
    [anon_sym_u539fu4f5c] = ACTIONS(78),
    [sym__sep] = ACTIONS(80),
  },
  [22] = {
    [aux_sym_credit_field_repeat2] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_u300b] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_Music] = ACTIONS(84),
    [anon_sym_music] = ACTIONS(84),
    [anon_sym_Composition] = ACTIONS(84),
    [anon_sym_composition] = ACTIONS(84),
    [anon_sym_Composer] = ACTIONS(84),
    [anon_sym_composer] = ACTIONS(84),
    [anon_sym_Compose] = ACTIONS(84),
    [anon_sym_compose] = ACTIONS(84),
    [anon_sym_Lyrics] = ACTIONS(84),
    [anon_sym_lyrics] = ACTIONS(84),
    [anon_sym_Lyricist] = ACTIONS(84),
    [anon_sym_lyricist] = ACTIONS(84),
    [anon_sym_Lyric] = ACTIONS(84),
    [anon_sym_lyric] = ACTIONS(84),
    [anon_sym_Arrangement] = ACTIONS(84),
    [anon_sym_arrangement] = ACTIONS(84),
    [anon_sym_Arranger] = ACTIONS(84),
    [anon_sym_arranger] = ACTIONS(84),
    [anon_sym_Arrange] = ACTIONS(84),
    [anon_sym_arrange] = ACTIONS(84),
    [anon_sym_Vocal] = ACTIONS(84),
    [anon_sym_vocal] = ACTIONS(84),
    [anon_sym_Vo] = ACTIONS(84),
    [anon_sym_vo] = ACTIONS(84),
    [anon_sym_Performer] = ACTIONS(84),
    [anon_sym_performer] = ACTIONS(84),
    [anon_sym_Illustration] = ACTIONS(84),
    [anon_sym_illustration] = ACTIONS(84),
    [anon_sym_Illust] = ACTIONS(84),
    [anon_sym_illust] = ACTIONS(84),
    [anon_sym_Label] = ACTIONS(84),
    [anon_sym_label] = ACTIONS(84),
    [anon_sym_Circle] = ACTIONS(84),
    [anon_sym_circle] = ACTIONS(84),
    [anon_sym_Producer] = ACTIONS(84),
    [anon_sym_producer] = ACTIONS(84),
    [anon_sym_Recording] = ACTIONS(84),
    [anon_sym_recording] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [sym__sep] = ACTIONS(80),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_u300a] = ACTIONS(88),
    [aux_sym_song_title_token1] = ACTIONS(88),
    [anon_sym_Music] = ACTIONS(88),
    [anon_sym_music] = ACTIONS(88),
    [anon_sym_Composition] = ACTIONS(88),
    [anon_sym_composition] = ACTIONS(88),
    [anon_sym_Composer] = ACTIONS(88),
    [anon_sym_composer] = ACTIONS(88),
    [anon_sym_Compose] = ACTIONS(88),
    [anon_sym_compose] = ACTIONS(88),
    [anon_sym_Lyrics] = ACTIONS(88),
    [anon_sym_lyrics] = ACTIONS(88),
    [anon_sym_Lyricist] = ACTIONS(88),
    [anon_sym_lyricist] = ACTIONS(88),
    [anon_sym_Lyric] = ACTIONS(88),
    [anon_sym_lyric] = ACTIONS(88),
    [anon_sym_Arrangement] = ACTIONS(88),
    [anon_sym_arrangement] = ACTIONS(88),
    [anon_sym_Arranger] = ACTIONS(88),
    [anon_sym_arranger] = ACTIONS(88),
    [anon_sym_Arrange] = ACTIONS(88),
    [anon_sym_arrange] = ACTIONS(88),
    [anon_sym_Vocal] = ACTIONS(88),
    [anon_sym_vocal] = ACTIONS(88),
    [anon_sym_Vo] = ACTIONS(88),
    [anon_sym_vo] = ACTIONS(88),
    [anon_sym_Performer] = ACTIONS(88),
    [anon_sym_performer] = ACTIONS(88),
    [anon_sym_Illustration] = ACTIONS(88),
    [anon_sym_illustration] = ACTIONS(88),
    [anon_sym_Illust] = ACTIONS(88),
    [anon_sym_illust] = ACTIONS(88),
    [anon_sym_Label] = ACTIONS(88),
    [anon_sym_label] = ACTIONS(88),
    [anon_sym_Circle] = ACTIONS(88),
    [anon_sym_circle] = ACTIONS(88),
    [anon_sym_Producer] = ACTIONS(88),
    [anon_sym_producer] = ACTIONS(88),
    [anon_sym_Recording] = ACTIONS(88),
    [anon_sym_recording] = ACTIONS(88),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(88),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(88),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(88),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(88),
    [anon_sym_u6b4cu5531] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu66f2] = ACTIONS(88),
    [anon_sym_u7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5e] = ACTIONS(88),
    [anon_sym_u5382u724c] = ACTIONS(88),
    [anon_sym_u811au672c] = ACTIONS(88),
    [anon_sym_u63d2u56fe] = ACTIONS(88),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(88),
    [anon_sym_u51fau7248u65b9] = ACTIONS(88),
    [anon_sym_u5f55u97f3] = ACTIONS(88),
    [anon_sym_u539fu4f5c] = ACTIONS(88),
    [sym__sep] = ACTIONS(90),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_u300b] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_Music] = ACTIONS(94),
    [anon_sym_music] = ACTIONS(94),
    [anon_sym_Composition] = ACTIONS(94),
    [anon_sym_composition] = ACTIONS(94),
    [anon_sym_Composer] = ACTIONS(94),
    [anon_sym_composer] = ACTIONS(94),
    [anon_sym_Compose] = ACTIONS(94),
    [anon_sym_compose] = ACTIONS(94),
    [anon_sym_Lyrics] = ACTIONS(94),
    [anon_sym_lyrics] = ACTIONS(94),
    [anon_sym_Lyricist] = ACTIONS(94),
    [anon_sym_lyricist] = ACTIONS(94),
    [anon_sym_Lyric] = ACTIONS(94),
    [anon_sym_lyric] = ACTIONS(94),
    [anon_sym_Arrangement] = ACTIONS(94),
    [anon_sym_arrangement] = ACTIONS(94),
    [anon_sym_Arranger] = ACTIONS(94),
    [anon_sym_arranger] = ACTIONS(94),
    [anon_sym_Arrange] = ACTIONS(94),
    [anon_sym_arrange] = ACTIONS(94),
    [anon_sym_Vocal] = ACTIONS(94),
    [anon_sym_vocal] = ACTIONS(94),
    [anon_sym_Vo] = ACTIONS(94),
    [anon_sym_vo] = ACTIONS(94),
    [anon_sym_Performer] = ACTIONS(94),
    [anon_sym_performer] = ACTIONS(94),
    [anon_sym_Illustration] = ACTIONS(94),
    [anon_sym_illustration] = ACTIONS(94),
    [anon_sym_Illust] = ACTIONS(94),
    [anon_sym_illust] = ACTIONS(94),
    [anon_sym_Label] = ACTIONS(94),
    [anon_sym_label] = ACTIONS(94),
    [anon_sym_Circle] = ACTIONS(94),
    [anon_sym_circle] = ACTIONS(94),
    [anon_sym_Producer] = ACTIONS(94),
    [anon_sym_producer] = ACTIONS(94),
    [anon_sym_Recording] = ACTIONS(94),
    [anon_sym_recording] = ACTIONS(94),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(94),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(94),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(94),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(94),
    [anon_sym_u6b4cu5531] = ACTIONS(94),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(94),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(94),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(94),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(94),
    [anon_sym_u4f5cu66f2] = ACTIONS(94),
    [anon_sym_u7de8u66f2] = ACTIONS(94),
    [anon_sym_u4f5cu8a5e] = ACTIONS(94),
    [anon_sym_u5382u724c] = ACTIONS(94),
    [anon_sym_u811au672c] = ACTIONS(94),
    [anon_sym_u63d2u56fe] = ACTIONS(94),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(94),
    [anon_sym_u51fau7248u65b9] = ACTIONS(94),
    [anon_sym_u5f55u97f3] = ACTIONS(94),
    [anon_sym_u539fu4f5c] = ACTIONS(94),
    [sym__sep] = ACTIONS(92),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_u300b] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [anon_sym_Music] = ACTIONS(98),
    [anon_sym_music] = ACTIONS(98),
    [anon_sym_Composition] = ACTIONS(98),
    [anon_sym_composition] = ACTIONS(98),
    [anon_sym_Composer] = ACTIONS(98),
    [anon_sym_composer] = ACTIONS(98),
    [anon_sym_Compose] = ACTIONS(98),
    [anon_sym_compose] = ACTIONS(98),
    [anon_sym_Lyrics] = ACTIONS(98),
    [anon_sym_lyrics] = ACTIONS(98),
    [anon_sym_Lyricist] = ACTIONS(98),
    [anon_sym_lyricist] = ACTIONS(98),
    [anon_sym_Lyric] = ACTIONS(98),
    [anon_sym_lyric] = ACTIONS(98),
    [anon_sym_Arrangement] = ACTIONS(98),
    [anon_sym_arrangement] = ACTIONS(98),
    [anon_sym_Arranger] = ACTIONS(98),
    [anon_sym_arranger] = ACTIONS(98),
    [anon_sym_Arrange] = ACTIONS(98),
    [anon_sym_arrange] = ACTIONS(98),
    [anon_sym_Vocal] = ACTIONS(98),
    [anon_sym_vocal] = ACTIONS(98),
    [anon_sym_Vo] = ACTIONS(98),
    [anon_sym_vo] = ACTIONS(98),
    [anon_sym_Performer] = ACTIONS(98),
    [anon_sym_performer] = ACTIONS(98),
    [anon_sym_Illustration] = ACTIONS(98),
    [anon_sym_illustration] = ACTIONS(98),
    [anon_sym_Illust] = ACTIONS(98),
    [anon_sym_illust] = ACTIONS(98),
    [anon_sym_Label] = ACTIONS(98),
    [anon_sym_label] = ACTIONS(98),
    [anon_sym_Circle] = ACTIONS(98),
    [anon_sym_circle] = ACTIONS(98),
    [anon_sym_Producer] = ACTIONS(98),
    [anon_sym_producer] = ACTIONS(98),
    [anon_sym_Recording] = ACTIONS(98),
    [anon_sym_recording] = ACTIONS(98),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(98),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(98),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(98),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(98),
    [anon_sym_u6b4cu5531] = ACTIONS(98),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(98),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(98),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(98),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(98),
    [anon_sym_u4f5cu66f2] = ACTIONS(98),
    [anon_sym_u7de8u66f2] = ACTIONS(98),
    [anon_sym_u4f5cu8a5e] = ACTIONS(98),
    [anon_sym_u5382u724c] = ACTIONS(98),
    [anon_sym_u811au672c] = ACTIONS(98),
    [anon_sym_u63d2u56fe] = ACTIONS(98),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(98),
    [anon_sym_u51fau7248u65b9] = ACTIONS(98),
    [anon_sym_u5f55u97f3] = ACTIONS(98),
    [anon_sym_u539fu4f5c] = ACTIONS(98),
    [sym__sep] = ACTIONS(96),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(102),
    [aux_sym_song_title_token1] = ACTIONS(102),
    [aux_sym_feat_field_token1] = ACTIONS(102),
    [anon_sym_Music] = ACTIONS(102),
    [anon_sym_music] = ACTIONS(102),
    [anon_sym_Composition] = ACTIONS(102),
    [anon_sym_composition] = ACTIONS(102),
    [anon_sym_Composer] = ACTIONS(102),
    [anon_sym_composer] = ACTIONS(102),
    [anon_sym_Compose] = ACTIONS(102),
    [anon_sym_compose] = ACTIONS(102),
    [anon_sym_Lyrics] = ACTIONS(102),
    [anon_sym_lyrics] = ACTIONS(102),
    [anon_sym_Lyricist] = ACTIONS(102),
    [anon_sym_lyricist] = ACTIONS(102),
    [anon_sym_Lyric] = ACTIONS(102),
    [anon_sym_lyric] = ACTIONS(102),
    [anon_sym_Arrangement] = ACTIONS(102),
    [anon_sym_arrangement] = ACTIONS(102),
    [anon_sym_Arranger] = ACTIONS(102),
    [anon_sym_arranger] = ACTIONS(102),
    [anon_sym_Arrange] = ACTIONS(102),
    [anon_sym_arrange] = ACTIONS(102),
    [anon_sym_Vocal] = ACTIONS(102),
    [anon_sym_vocal] = ACTIONS(102),
    [anon_sym_Vo] = ACTIONS(102),
    [anon_sym_vo] = ACTIONS(102),
    [anon_sym_Performer] = ACTIONS(102),
    [anon_sym_performer] = ACTIONS(102),
    [anon_sym_Illustration] = ACTIONS(102),
    [anon_sym_illustration] = ACTIONS(102),
    [anon_sym_Illust] = ACTIONS(102),
    [anon_sym_illust] = ACTIONS(102),
    [anon_sym_Label] = ACTIONS(102),
    [anon_sym_label] = ACTIONS(102),
    [anon_sym_Circle] = ACTIONS(102),
    [anon_sym_circle] = ACTIONS(102),
    [anon_sym_Producer] = ACTIONS(102),
    [anon_sym_producer] = ACTIONS(102),
    [anon_sym_Recording] = ACTIONS(102),
    [anon_sym_recording] = ACTIONS(102),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(102),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(102),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(102),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(102),
    [anon_sym_u6b4cu5531] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu66f2] = ACTIONS(102),
    [anon_sym_u7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5e] = ACTIONS(102),
    [anon_sym_u5382u724c] = ACTIONS(102),
    [anon_sym_u811au672c] = ACTIONS(102),
    [anon_sym_u63d2u56fe] = ACTIONS(102),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(102),
    [anon_sym_u51fau7248u65b9] = ACTIONS(102),
    [anon_sym_u5f55u97f3] = ACTIONS(102),
    [anon_sym_u539fu4f5c] = ACTIONS(102),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_u300b] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_Music] = ACTIONS(106),
    [anon_sym_music] = ACTIONS(106),
    [anon_sym_Composition] = ACTIONS(106),
    [anon_sym_composition] = ACTIONS(106),
    [anon_sym_Composer] = ACTIONS(106),
    [anon_sym_composer] = ACTIONS(106),
    [anon_sym_Compose] = ACTIONS(106),
    [anon_sym_compose] = ACTIONS(106),
    [anon_sym_Lyrics] = ACTIONS(106),
    [anon_sym_lyrics] = ACTIONS(106),
    [anon_sym_Lyricist] = ACTIONS(106),
    [anon_sym_lyricist] = ACTIONS(106),
    [anon_sym_Lyric] = ACTIONS(106),
    [anon_sym_lyric] = ACTIONS(106),
    [anon_sym_Arrangement] = ACTIONS(106),
    [anon_sym_arrangement] = ACTIONS(106),
    [anon_sym_Arranger] = ACTIONS(106),
    [anon_sym_arranger] = ACTIONS(106),
    [anon_sym_Arrange] = ACTIONS(106),
    [anon_sym_arrange] = ACTIONS(106),
    [anon_sym_Vocal] = ACTIONS(106),
    [anon_sym_vocal] = ACTIONS(106),
    [anon_sym_Vo] = ACTIONS(106),
    [anon_sym_vo] = ACTIONS(106),
    [anon_sym_Performer] = ACTIONS(106),
    [anon_sym_performer] = ACTIONS(106),
    [anon_sym_Illustration] = ACTIONS(106),
    [anon_sym_illustration] = ACTIONS(106),
    [anon_sym_Illust] = ACTIONS(106),
    [anon_sym_illust] = ACTIONS(106),
    [anon_sym_Label] = ACTIONS(106),
    [anon_sym_label] = ACTIONS(106),
    [anon_sym_Circle] = ACTIONS(106),
    [anon_sym_circle] = ACTIONS(106),
    [anon_sym_Producer] = ACTIONS(106),
    [anon_sym_producer] = ACTIONS(106),
    [anon_sym_Recording] = ACTIONS(106),
    [anon_sym_recording] = ACTIONS(106),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(106),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(106),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(106),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(106),
    [anon_sym_u6b4cu5531] = ACTIONS(106),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(106),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(106),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(106),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(106),
    [anon_sym_u4f5cu66f2] = ACTIONS(106),
    [anon_sym_u7de8u66f2] = ACTIONS(106),
    [anon_sym_u4f5cu8a5e] = ACTIONS(106),
    [anon_sym_u5382u724c] = ACTIONS(106),
    [anon_sym_u811au672c] = ACTIONS(106),
    [anon_sym_u63d2u56fe] = ACTIONS(106),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(106),
    [anon_sym_u51fau7248u65b9] = ACTIONS(106),
    [anon_sym_u5f55u97f3] = ACTIONS(106),
    [anon_sym_u539fu4f5c] = ACTIONS(106),
    [sym__sep] = ACTIONS(104),
  },
  [28] = {
    [sym_role] = STATE(80),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(108),
    [anon_sym_Music] = ACTIONS(110),
    [anon_sym_music] = ACTIONS(110),
    [anon_sym_Composition] = ACTIONS(110),
    [anon_sym_composition] = ACTIONS(110),
    [anon_sym_Composer] = ACTIONS(110),
    [anon_sym_composer] = ACTIONS(110),
    [anon_sym_Compose] = ACTIONS(110),
    [anon_sym_compose] = ACTIONS(110),
    [anon_sym_Lyrics] = ACTIONS(110),
    [anon_sym_lyrics] = ACTIONS(110),
    [anon_sym_Lyricist] = ACTIONS(110),
    [anon_sym_lyricist] = ACTIONS(110),
    [anon_sym_Lyric] = ACTIONS(110),
    [anon_sym_lyric] = ACTIONS(110),
    [anon_sym_Arrangement] = ACTIONS(110),
    [anon_sym_arrangement] = ACTIONS(110),
    [anon_sym_Arranger] = ACTIONS(110),
    [anon_sym_arranger] = ACTIONS(110),
    [anon_sym_Arrange] = ACTIONS(110),
    [anon_sym_arrange] = ACTIONS(110),
    [anon_sym_Vocal] = ACTIONS(110),
    [anon_sym_vocal] = ACTIONS(110),
    [anon_sym_Vo] = ACTIONS(110),
    [anon_sym_vo] = ACTIONS(110),
    [anon_sym_Performer] = ACTIONS(110),
    [anon_sym_performer] = ACTIONS(110),
    [anon_sym_Illustration] = ACTIONS(110),
    [anon_sym_illustration] = ACTIONS(110),
    [anon_sym_Illust] = ACTIONS(110),
    [anon_sym_illust] = ACTIONS(110),
    [anon_sym_Label] = ACTIONS(110),
    [anon_sym_label] = ACTIONS(110),
    [anon_sym_Circle] = ACTIONS(110),
    [anon_sym_circle] = ACTIONS(110),
    [anon_sym_Producer] = ACTIONS(110),
    [anon_sym_producer] = ACTIONS(110),
    [anon_sym_Recording] = ACTIONS(110),
    [anon_sym_recording] = ACTIONS(110),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(110),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(110),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(110),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(110),
    [anon_sym_u6b4cu5531] = ACTIONS(110),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(110),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(110),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(110),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(110),
    [anon_sym_u4f5cu66f2] = ACTIONS(110),
    [anon_sym_u7de8u66f2] = ACTIONS(110),
    [anon_sym_u4f5cu8a5e] = ACTIONS(110),
    [anon_sym_u5382u724c] = ACTIONS(110),
    [anon_sym_u811au672c] = ACTIONS(110),
    [anon_sym_u63d2u56fe] = ACTIONS(110),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(110),
    [anon_sym_u51fau7248u65b9] = ACTIONS(110),
    [anon_sym_u5f55u97f3] = ACTIONS(110),
    [anon_sym_u539fu4f5c] = ACTIONS(110),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(115),
    [aux_sym_song_title_token1] = ACTIONS(115),
    [anon_sym_Music] = ACTIONS(115),
    [anon_sym_music] = ACTIONS(115),
    [anon_sym_Composition] = ACTIONS(115),
    [anon_sym_composition] = ACTIONS(115),
    [anon_sym_Composer] = ACTIONS(115),
    [anon_sym_composer] = ACTIONS(115),
    [anon_sym_Compose] = ACTIONS(115),
    [anon_sym_compose] = ACTIONS(115),
    [anon_sym_Lyrics] = ACTIONS(115),
    [anon_sym_lyrics] = ACTIONS(115),
    [anon_sym_Lyricist] = ACTIONS(115),
    [anon_sym_lyricist] = ACTIONS(115),
    [anon_sym_Lyric] = ACTIONS(115),
    [anon_sym_lyric] = ACTIONS(115),
    [anon_sym_Arrangement] = ACTIONS(115),
    [anon_sym_arrangement] = ACTIONS(115),
    [anon_sym_Arranger] = ACTIONS(115),
    [anon_sym_arranger] = ACTIONS(115),
    [anon_sym_Arrange] = ACTIONS(115),
    [anon_sym_arrange] = ACTIONS(115),
    [anon_sym_Vocal] = ACTIONS(115),
    [anon_sym_vocal] = ACTIONS(115),
    [anon_sym_Vo] = ACTIONS(115),
    [anon_sym_vo] = ACTIONS(115),
    [anon_sym_Performer] = ACTIONS(115),
    [anon_sym_performer] = ACTIONS(115),
    [anon_sym_Illustration] = ACTIONS(115),
    [anon_sym_illustration] = ACTIONS(115),
    [anon_sym_Illust] = ACTIONS(115),
    [anon_sym_illust] = ACTIONS(115),
    [anon_sym_Label] = ACTIONS(115),
    [anon_sym_label] = ACTIONS(115),
    [anon_sym_Circle] = ACTIONS(115),
    [anon_sym_circle] = ACTIONS(115),
    [anon_sym_Producer] = ACTIONS(115),
    [anon_sym_producer] = ACTIONS(115),
    [anon_sym_Recording] = ACTIONS(115),
    [anon_sym_recording] = ACTIONS(115),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(115),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(115),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(115),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(115),
    [anon_sym_u6b4cu5531] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(115),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu66f2] = ACTIONS(115),
    [anon_sym_u7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5e] = ACTIONS(115),
    [anon_sym_u5382u724c] = ACTIONS(115),
    [anon_sym_u811au672c] = ACTIONS(115),
    [anon_sym_u63d2u56fe] = ACTIONS(115),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(115),
    [anon_sym_u51fau7248u65b9] = ACTIONS(115),
    [anon_sym_u5f55u97f3] = ACTIONS(115),
    [anon_sym_u539fu4f5c] = ACTIONS(115),
    [sym__sep] = ACTIONS(117),
  },
  [30] = {
    [aux_sym_song_title_repeat1] = STATE(31),
    [anon_sym_AT] = ACTIONS(56),
    [aux_sym_song_title_token1] = ACTIONS(119),
    [aux_sym_feat_field_token1] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(56),
    [anon_sym_music] = ACTIONS(56),
    [anon_sym_Composition] = ACTIONS(56),
    [anon_sym_composition] = ACTIONS(56),
    [anon_sym_Composer] = ACTIONS(56),
    [anon_sym_composer] = ACTIONS(56),
    [anon_sym_Compose] = ACTIONS(56),
    [anon_sym_compose] = ACTIONS(56),
    [anon_sym_Lyrics] = ACTIONS(56),
    [anon_sym_lyrics] = ACTIONS(56),
    [anon_sym_Lyricist] = ACTIONS(56),
    [anon_sym_lyricist] = ACTIONS(56),
    [anon_sym_Lyric] = ACTIONS(56),
    [anon_sym_lyric] = ACTIONS(56),
    [anon_sym_Arrangement] = ACTIONS(56),
    [anon_sym_arrangement] = ACTIONS(56),
    [anon_sym_Arranger] = ACTIONS(56),
    [anon_sym_arranger] = ACTIONS(56),
    [anon_sym_Arrange] = ACTIONS(56),
    [anon_sym_arrange] = ACTIONS(56),
    [anon_sym_Vocal] = ACTIONS(56),
    [anon_sym_vocal] = ACTIONS(56),
    [anon_sym_Vo] = ACTIONS(56),
    [anon_sym_vo] = ACTIONS(56),
    [anon_sym_Performer] = ACTIONS(56),
    [anon_sym_performer] = ACTIONS(56),
    [anon_sym_Illustration] = ACTIONS(56),
    [anon_sym_illustration] = ACTIONS(56),
    [anon_sym_Illust] = ACTIONS(56),
    [anon_sym_illust] = ACTIONS(56),
    [anon_sym_Label] = ACTIONS(56),
    [anon_sym_label] = ACTIONS(56),
    [anon_sym_Circle] = ACTIONS(56),
    [anon_sym_circle] = ACTIONS(56),
    [anon_sym_Producer] = ACTIONS(56),
    [anon_sym_producer] = ACTIONS(56),
    [anon_sym_Recording] = ACTIONS(56),
    [anon_sym_recording] = ACTIONS(56),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(56),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(56),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(56),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(56),
    [anon_sym_u6b4cu5531] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(56),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu66f2] = ACTIONS(56),
    [anon_sym_u7de8u66f2] = ACTIONS(56),
    [anon_sym_u4f5cu8a5e] = ACTIONS(56),
    [anon_sym_u5382u724c] = ACTIONS(56),
    [anon_sym_u811au672c] = ACTIONS(56),
    [anon_sym_u63d2u56fe] = ACTIONS(56),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(56),
    [anon_sym_u51fau7248u65b9] = ACTIONS(56),
    [anon_sym_u5f55u97f3] = ACTIONS(56),
    [anon_sym_u539fu4f5c] = ACTIONS(56),
  },
  [31] = {
    [aux_sym_song_title_repeat1] = STATE(31),
    [anon_sym_AT] = ACTIONS(67),
    [aux_sym_song_title_token1] = ACTIONS(121),
    [aux_sym_feat_field_token1] = ACTIONS(67),
    [anon_sym_Music] = ACTIONS(67),
    [anon_sym_music] = ACTIONS(67),
    [anon_sym_Composition] = ACTIONS(67),
    [anon_sym_composition] = ACTIONS(67),
    [anon_sym_Composer] = ACTIONS(67),
    [anon_sym_composer] = ACTIONS(67),
    [anon_sym_Compose] = ACTIONS(67),
    [anon_sym_compose] = ACTIONS(67),
    [anon_sym_Lyrics] = ACTIONS(67),
    [anon_sym_lyrics] = ACTIONS(67),
    [anon_sym_Lyricist] = ACTIONS(67),
    [anon_sym_lyricist] = ACTIONS(67),
    [anon_sym_Lyric] = ACTIONS(67),
    [anon_sym_lyric] = ACTIONS(67),
    [anon_sym_Arrangement] = ACTIONS(67),
    [anon_sym_arrangement] = ACTIONS(67),
    [anon_sym_Arranger] = ACTIONS(67),
    [anon_sym_arranger] = ACTIONS(67),
    [anon_sym_Arrange] = ACTIONS(67),
    [anon_sym_arrange] = ACTIONS(67),
    [anon_sym_Vocal] = ACTIONS(67),
    [anon_sym_vocal] = ACTIONS(67),
    [anon_sym_Vo] = ACTIONS(67),
    [anon_sym_vo] = ACTIONS(67),
    [anon_sym_Performer] = ACTIONS(67),
    [anon_sym_performer] = ACTIONS(67),
    [anon_sym_Illustration] = ACTIONS(67),
    [anon_sym_illustration] = ACTIONS(67),
    [anon_sym_Illust] = ACTIONS(67),
    [anon_sym_illust] = ACTIONS(67),
    [anon_sym_Label] = ACTIONS(67),
    [anon_sym_label] = ACTIONS(67),
    [anon_sym_Circle] = ACTIONS(67),
    [anon_sym_circle] = ACTIONS(67),
    [anon_sym_Producer] = ACTIONS(67),
    [anon_sym_producer] = ACTIONS(67),
    [anon_sym_Recording] = ACTIONS(67),
    [anon_sym_recording] = ACTIONS(67),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(67),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(67),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(67),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(67),
    [anon_sym_u6b4cu5531] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(67),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu66f2] = ACTIONS(67),
    [anon_sym_u7de8u66f2] = ACTIONS(67),
    [anon_sym_u4f5cu8a5e] = ACTIONS(67),
    [anon_sym_u5382u724c] = ACTIONS(67),
    [anon_sym_u811au672c] = ACTIONS(67),
    [anon_sym_u63d2u56fe] = ACTIONS(67),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(67),
    [anon_sym_u51fau7248u65b9] = ACTIONS(67),
    [anon_sym_u5f55u97f3] = ACTIONS(67),
    [anon_sym_u539fu4f5c] = ACTIONS(67),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_u300a] = ACTIONS(40),
    [aux_sym_song_title_token1] = ACTIONS(40),
    [anon_sym_Music] = ACTIONS(40),
    [anon_sym_music] = ACTIONS(40),
    [anon_sym_Composition] = ACTIONS(40),
    [anon_sym_composition] = ACTIONS(40),
    [anon_sym_Composer] = ACTIONS(40),
    [anon_sym_composer] = ACTIONS(40),
    [anon_sym_Compose] = ACTIONS(40),
    [anon_sym_compose] = ACTIONS(40),
    [anon_sym_Lyrics] = ACTIONS(40),
    [anon_sym_lyrics] = ACTIONS(40),
    [anon_sym_Lyricist] = ACTIONS(40),
    [anon_sym_lyricist] = ACTIONS(40),
    [anon_sym_Lyric] = ACTIONS(40),
    [anon_sym_lyric] = ACTIONS(40),
    [anon_sym_Arrangement] = ACTIONS(40),
    [anon_sym_arrangement] = ACTIONS(40),
    [anon_sym_Arranger] = ACTIONS(40),
    [anon_sym_arranger] = ACTIONS(40),
    [anon_sym_Arrange] = ACTIONS(40),
    [anon_sym_arrange] = ACTIONS(40),
    [anon_sym_Vocal] = ACTIONS(40),
    [anon_sym_vocal] = ACTIONS(40),
    [anon_sym_Vo] = ACTIONS(40),
    [anon_sym_vo] = ACTIONS(40),
    [anon_sym_Performer] = ACTIONS(40),
    [anon_sym_performer] = ACTIONS(40),
    [anon_sym_Illustration] = ACTIONS(40),
    [anon_sym_illustration] = ACTIONS(40),
    [anon_sym_Illust] = ACTIONS(40),
    [anon_sym_illust] = ACTIONS(40),
    [anon_sym_Label] = ACTIONS(40),
    [anon_sym_label] = ACTIONS(40),
    [anon_sym_Circle] = ACTIONS(40),
    [anon_sym_circle] = ACTIONS(40),
    [anon_sym_Producer] = ACTIONS(40),
    [anon_sym_producer] = ACTIONS(40),
    [anon_sym_Recording] = ACTIONS(40),
    [anon_sym_recording] = ACTIONS(40),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(40),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(40),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(40),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(40),
    [anon_sym_u6b4cu5531] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu66f2] = ACTIONS(40),
    [anon_sym_u7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5e] = ACTIONS(40),
    [anon_sym_u5382u724c] = ACTIONS(40),
    [anon_sym_u811au672c] = ACTIONS(40),
    [anon_sym_u63d2u56fe] = ACTIONS(40),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(40),
    [anon_sym_u51fau7248u65b9] = ACTIONS(40),
    [anon_sym_u5f55u97f3] = ACTIONS(40),
    [anon_sym_u539fu4f5c] = ACTIONS(40),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_u300b] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_Music] = ACTIONS(124),
    [anon_sym_music] = ACTIONS(124),
    [anon_sym_Composition] = ACTIONS(124),
    [anon_sym_composition] = ACTIONS(124),
    [anon_sym_Composer] = ACTIONS(124),
    [anon_sym_composer] = ACTIONS(124),
    [anon_sym_Compose] = ACTIONS(126),
    [anon_sym_compose] = ACTIONS(126),
    [anon_sym_Lyrics] = ACTIONS(124),
    [anon_sym_lyrics] = ACTIONS(124),
    [anon_sym_Lyricist] = ACTIONS(124),
    [anon_sym_lyricist] = ACTIONS(124),
    [anon_sym_Lyric] = ACTIONS(126),
    [anon_sym_lyric] = ACTIONS(126),
    [anon_sym_Arrangement] = ACTIONS(124),
    [anon_sym_arrangement] = ACTIONS(124),
    [anon_sym_Arranger] = ACTIONS(124),
    [anon_sym_arranger] = ACTIONS(124),
    [anon_sym_Arrange] = ACTIONS(126),
    [anon_sym_arrange] = ACTIONS(126),
    [anon_sym_Vocal] = ACTIONS(124),
    [anon_sym_vocal] = ACTIONS(124),
    [anon_sym_Vo] = ACTIONS(126),
    [anon_sym_vo] = ACTIONS(126),
    [anon_sym_Performer] = ACTIONS(124),
    [anon_sym_performer] = ACTIONS(124),
    [anon_sym_Illustration] = ACTIONS(124),
    [anon_sym_illustration] = ACTIONS(124),
    [anon_sym_Illust] = ACTIONS(126),
    [anon_sym_illust] = ACTIONS(126),
    [anon_sym_Label] = ACTIONS(124),
    [anon_sym_label] = ACTIONS(124),
    [anon_sym_Circle] = ACTIONS(124),
    [anon_sym_circle] = ACTIONS(124),
    [anon_sym_Producer] = ACTIONS(124),
    [anon_sym_producer] = ACTIONS(124),
    [anon_sym_Recording] = ACTIONS(124),
    [anon_sym_recording] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(126),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
  },
  [34] = {
    [anon_sym_u300a] = ACTIONS(115),
    [aux_sym_song_title_token1] = ACTIONS(115),
    [anon_sym_Music] = ACTIONS(115),
    [anon_sym_music] = ACTIONS(115),
    [anon_sym_Composition] = ACTIONS(115),
    [anon_sym_composition] = ACTIONS(115),
    [anon_sym_Composer] = ACTIONS(115),
    [anon_sym_composer] = ACTIONS(115),
    [anon_sym_Compose] = ACTIONS(115),
    [anon_sym_compose] = ACTIONS(115),
    [anon_sym_Lyrics] = ACTIONS(115),
    [anon_sym_lyrics] = ACTIONS(115),
    [anon_sym_Lyricist] = ACTIONS(115),
    [anon_sym_lyricist] = ACTIONS(115),
    [anon_sym_Lyric] = ACTIONS(115),
    [anon_sym_lyric] = ACTIONS(115),
    [anon_sym_Arrangement] = ACTIONS(115),
    [anon_sym_arrangement] = ACTIONS(115),
    [anon_sym_Arranger] = ACTIONS(115),
    [anon_sym_arranger] = ACTIONS(115),
    [anon_sym_Arrange] = ACTIONS(115),
    [anon_sym_arrange] = ACTIONS(115),
    [anon_sym_Vocal] = ACTIONS(115),
    [anon_sym_vocal] = ACTIONS(115),
    [anon_sym_Vo] = ACTIONS(115),
    [anon_sym_vo] = ACTIONS(115),
    [anon_sym_Performer] = ACTIONS(115),
    [anon_sym_performer] = ACTIONS(115),
    [anon_sym_Illustration] = ACTIONS(115),
    [anon_sym_illustration] = ACTIONS(115),
    [anon_sym_Illust] = ACTIONS(115),
    [anon_sym_illust] = ACTIONS(115),
    [anon_sym_Label] = ACTIONS(115),
    [anon_sym_label] = ACTIONS(115),
    [anon_sym_Circle] = ACTIONS(115),
    [anon_sym_circle] = ACTIONS(115),
    [anon_sym_Producer] = ACTIONS(115),
    [anon_sym_producer] = ACTIONS(115),
    [anon_sym_Recording] = ACTIONS(115),
    [anon_sym_recording] = ACTIONS(115),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(115),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(115),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(115),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(115),
    [anon_sym_u6b4cu5531] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(115),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu66f2] = ACTIONS(115),
    [anon_sym_u7de8u66f2] = ACTIONS(115),
    [anon_sym_u4f5cu8a5e] = ACTIONS(115),
    [anon_sym_u5382u724c] = ACTIONS(115),
    [anon_sym_u811au672c] = ACTIONS(115),
    [anon_sym_u63d2u56fe] = ACTIONS(115),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(115),
    [anon_sym_u51fau7248u65b9] = ACTIONS(115),
    [anon_sym_u5f55u97f3] = ACTIONS(115),
    [anon_sym_u539fu4f5c] = ACTIONS(115),
    [sym__sep] = ACTIONS(128),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_u300a] = ACTIONS(32),
    [aux_sym_song_title_token1] = ACTIONS(32),
    [anon_sym_Music] = ACTIONS(32),
    [anon_sym_music] = ACTIONS(32),
    [anon_sym_Composition] = ACTIONS(32),
    [anon_sym_composition] = ACTIONS(32),
    [anon_sym_Composer] = ACTIONS(32),
    [anon_sym_composer] = ACTIONS(32),
    [anon_sym_Compose] = ACTIONS(32),
    [anon_sym_compose] = ACTIONS(32),
    [anon_sym_Lyrics] = ACTIONS(32),
    [anon_sym_lyrics] = ACTIONS(32),
    [anon_sym_Lyricist] = ACTIONS(32),
    [anon_sym_lyricist] = ACTIONS(32),
    [anon_sym_Lyric] = ACTIONS(32),
    [anon_sym_lyric] = ACTIONS(32),
    [anon_sym_Arrangement] = ACTIONS(32),
    [anon_sym_arrangement] = ACTIONS(32),
    [anon_sym_Arranger] = ACTIONS(32),
    [anon_sym_arranger] = ACTIONS(32),
    [anon_sym_Arrange] = ACTIONS(32),
    [anon_sym_arrange] = ACTIONS(32),
    [anon_sym_Vocal] = ACTIONS(32),
    [anon_sym_vocal] = ACTIONS(32),
    [anon_sym_Vo] = ACTIONS(32),
    [anon_sym_vo] = ACTIONS(32),
    [anon_sym_Performer] = ACTIONS(32),
    [anon_sym_performer] = ACTIONS(32),
    [anon_sym_Illustration] = ACTIONS(32),
    [anon_sym_illustration] = ACTIONS(32),
    [anon_sym_Illust] = ACTIONS(32),
    [anon_sym_illust] = ACTIONS(32),
    [anon_sym_Label] = ACTIONS(32),
    [anon_sym_label] = ACTIONS(32),
    [anon_sym_Circle] = ACTIONS(32),
    [anon_sym_circle] = ACTIONS(32),
    [anon_sym_Producer] = ACTIONS(32),
    [anon_sym_producer] = ACTIONS(32),
    [anon_sym_Recording] = ACTIONS(32),
    [anon_sym_recording] = ACTIONS(32),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(32),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(32),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(32),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(32),
    [anon_sym_u6b4cu5531] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu66f2] = ACTIONS(32),
    [anon_sym_u7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5e] = ACTIONS(32),
    [anon_sym_u5382u724c] = ACTIONS(32),
    [anon_sym_u811au672c] = ACTIONS(32),
    [anon_sym_u63d2u56fe] = ACTIONS(32),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(32),
    [anon_sym_u51fau7248u65b9] = ACTIONS(32),
    [anon_sym_u5f55u97f3] = ACTIONS(32),
    [anon_sym_u539fu4f5c] = ACTIONS(32),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_u300a] = ACTIONS(132),
    [aux_sym_song_title_token1] = ACTIONS(132),
    [anon_sym_Music] = ACTIONS(132),
    [anon_sym_music] = ACTIONS(132),
    [anon_sym_Composition] = ACTIONS(132),
    [anon_sym_composition] = ACTIONS(132),
    [anon_sym_Composer] = ACTIONS(132),
    [anon_sym_composer] = ACTIONS(132),
    [anon_sym_Compose] = ACTIONS(132),
    [anon_sym_compose] = ACTIONS(132),
    [anon_sym_Lyrics] = ACTIONS(132),
    [anon_sym_lyrics] = ACTIONS(132),
    [anon_sym_Lyricist] = ACTIONS(132),
    [anon_sym_lyricist] = ACTIONS(132),
    [anon_sym_Lyric] = ACTIONS(132),
    [anon_sym_lyric] = ACTIONS(132),
    [anon_sym_Arrangement] = ACTIONS(132),
    [anon_sym_arrangement] = ACTIONS(132),
    [anon_sym_Arranger] = ACTIONS(132),
    [anon_sym_arranger] = ACTIONS(132),
    [anon_sym_Arrange] = ACTIONS(132),
    [anon_sym_arrange] = ACTIONS(132),
    [anon_sym_Vocal] = ACTIONS(132),
    [anon_sym_vocal] = ACTIONS(132),
    [anon_sym_Vo] = ACTIONS(132),
    [anon_sym_vo] = ACTIONS(132),
    [anon_sym_Performer] = ACTIONS(132),
    [anon_sym_performer] = ACTIONS(132),
    [anon_sym_Illustration] = ACTIONS(132),
    [anon_sym_illustration] = ACTIONS(132),
    [anon_sym_Illust] = ACTIONS(132),
    [anon_sym_illust] = ACTIONS(132),
    [anon_sym_Label] = ACTIONS(132),
    [anon_sym_label] = ACTIONS(132),
    [anon_sym_Circle] = ACTIONS(132),
    [anon_sym_circle] = ACTIONS(132),
    [anon_sym_Producer] = ACTIONS(132),
    [anon_sym_producer] = ACTIONS(132),
    [anon_sym_Recording] = ACTIONS(132),
    [anon_sym_recording] = ACTIONS(132),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(132),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(132),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(132),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(132),
    [anon_sym_u6b4cu5531] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu66f2] = ACTIONS(132),
    [anon_sym_u7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5e] = ACTIONS(132),
    [anon_sym_u5382u724c] = ACTIONS(132),
    [anon_sym_u811au672c] = ACTIONS(132),
    [anon_sym_u63d2u56fe] = ACTIONS(132),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(132),
    [anon_sym_u51fau7248u65b9] = ACTIONS(132),
    [anon_sym_u5f55u97f3] = ACTIONS(132),
    [anon_sym_u539fu4f5c] = ACTIONS(132),
  },
  [37] = {
    [anon_sym_u300a] = ACTIONS(88),
    [aux_sym_song_title_token1] = ACTIONS(88),
    [anon_sym_Music] = ACTIONS(88),
    [anon_sym_music] = ACTIONS(88),
    [anon_sym_Composition] = ACTIONS(88),
    [anon_sym_composition] = ACTIONS(88),
    [anon_sym_Composer] = ACTIONS(88),
    [anon_sym_composer] = ACTIONS(88),
    [anon_sym_Compose] = ACTIONS(88),
    [anon_sym_compose] = ACTIONS(88),
    [anon_sym_Lyrics] = ACTIONS(88),
    [anon_sym_lyrics] = ACTIONS(88),
    [anon_sym_Lyricist] = ACTIONS(88),
    [anon_sym_lyricist] = ACTIONS(88),
    [anon_sym_Lyric] = ACTIONS(88),
    [anon_sym_lyric] = ACTIONS(88),
    [anon_sym_Arrangement] = ACTIONS(88),
    [anon_sym_arrangement] = ACTIONS(88),
    [anon_sym_Arranger] = ACTIONS(88),
    [anon_sym_arranger] = ACTIONS(88),
    [anon_sym_Arrange] = ACTIONS(88),
    [anon_sym_arrange] = ACTIONS(88),
    [anon_sym_Vocal] = ACTIONS(88),
    [anon_sym_vocal] = ACTIONS(88),
    [anon_sym_Vo] = ACTIONS(88),
    [anon_sym_vo] = ACTIONS(88),
    [anon_sym_Performer] = ACTIONS(88),
    [anon_sym_performer] = ACTIONS(88),
    [anon_sym_Illustration] = ACTIONS(88),
    [anon_sym_illustration] = ACTIONS(88),
    [anon_sym_Illust] = ACTIONS(88),
    [anon_sym_illust] = ACTIONS(88),
    [anon_sym_Label] = ACTIONS(88),
    [anon_sym_label] = ACTIONS(88),
    [anon_sym_Circle] = ACTIONS(88),
    [anon_sym_circle] = ACTIONS(88),
    [anon_sym_Producer] = ACTIONS(88),
    [anon_sym_producer] = ACTIONS(88),
    [anon_sym_Recording] = ACTIONS(88),
    [anon_sym_recording] = ACTIONS(88),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(88),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(88),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(88),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(88),
    [anon_sym_u6b4cu5531] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu66f2] = ACTIONS(88),
    [anon_sym_u7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5e] = ACTIONS(88),
    [anon_sym_u5382u724c] = ACTIONS(88),
    [anon_sym_u811au672c] = ACTIONS(88),
    [anon_sym_u63d2u56fe] = ACTIONS(88),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(88),
    [anon_sym_u51fau7248u65b9] = ACTIONS(88),
    [anon_sym_u5f55u97f3] = ACTIONS(88),
    [anon_sym_u539fu4f5c] = ACTIONS(88),
    [sym__sep] = ACTIONS(134),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_u300a] = ACTIONS(138),
    [aux_sym_song_title_token1] = ACTIONS(138),
    [anon_sym_Music] = ACTIONS(138),
    [anon_sym_music] = ACTIONS(138),
    [anon_sym_Composition] = ACTIONS(138),
    [anon_sym_composition] = ACTIONS(138),
    [anon_sym_Composer] = ACTIONS(138),
    [anon_sym_composer] = ACTIONS(138),
    [anon_sym_Compose] = ACTIONS(138),
    [anon_sym_compose] = ACTIONS(138),
    [anon_sym_Lyrics] = ACTIONS(138),
    [anon_sym_lyrics] = ACTIONS(138),
    [anon_sym_Lyricist] = ACTIONS(138),
    [anon_sym_lyricist] = ACTIONS(138),
    [anon_sym_Lyric] = ACTIONS(138),
    [anon_sym_lyric] = ACTIONS(138),
    [anon_sym_Arrangement] = ACTIONS(138),
    [anon_sym_arrangement] = ACTIONS(138),
    [anon_sym_Arranger] = ACTIONS(138),
    [anon_sym_arranger] = ACTIONS(138),
    [anon_sym_Arrange] = ACTIONS(138),
    [anon_sym_arrange] = ACTIONS(138),
    [anon_sym_Vocal] = ACTIONS(138),
    [anon_sym_vocal] = ACTIONS(138),
    [anon_sym_Vo] = ACTIONS(138),
    [anon_sym_vo] = ACTIONS(138),
    [anon_sym_Performer] = ACTIONS(138),
    [anon_sym_performer] = ACTIONS(138),
    [anon_sym_Illustration] = ACTIONS(138),
    [anon_sym_illustration] = ACTIONS(138),
    [anon_sym_Illust] = ACTIONS(138),
    [anon_sym_illust] = ACTIONS(138),
    [anon_sym_Label] = ACTIONS(138),
    [anon_sym_label] = ACTIONS(138),
    [anon_sym_Circle] = ACTIONS(138),
    [anon_sym_circle] = ACTIONS(138),
    [anon_sym_Producer] = ACTIONS(138),
    [anon_sym_producer] = ACTIONS(138),
    [anon_sym_Recording] = ACTIONS(138),
    [anon_sym_recording] = ACTIONS(138),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(138),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(138),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(138),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(138),
    [anon_sym_u6b4cu5531] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(138),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu66f2] = ACTIONS(138),
    [anon_sym_u7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5e] = ACTIONS(138),
    [anon_sym_u5382u724c] = ACTIONS(138),
    [anon_sym_u811au672c] = ACTIONS(138),
    [anon_sym_u63d2u56fe] = ACTIONS(138),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(138),
    [anon_sym_u51fau7248u65b9] = ACTIONS(138),
    [anon_sym_u5f55u97f3] = ACTIONS(138),
    [anon_sym_u539fu4f5c] = ACTIONS(138),
  },
  [39] = {
    [anon_sym_AT] = ACTIONS(102),
    [aux_sym_song_title_token1] = ACTIONS(102),
    [aux_sym_feat_field_token1] = ACTIONS(102),
    [anon_sym_Music] = ACTIONS(102),
    [anon_sym_music] = ACTIONS(102),
    [anon_sym_Composition] = ACTIONS(102),
    [anon_sym_composition] = ACTIONS(102),
    [anon_sym_Composer] = ACTIONS(102),
    [anon_sym_composer] = ACTIONS(102),
    [anon_sym_Compose] = ACTIONS(102),
    [anon_sym_compose] = ACTIONS(102),
    [anon_sym_Lyrics] = ACTIONS(102),
    [anon_sym_lyrics] = ACTIONS(102),
    [anon_sym_Lyricist] = ACTIONS(102),
    [anon_sym_lyricist] = ACTIONS(102),
    [anon_sym_Lyric] = ACTIONS(102),
    [anon_sym_lyric] = ACTIONS(102),
    [anon_sym_Arrangement] = ACTIONS(102),
    [anon_sym_arrangement] = ACTIONS(102),
    [anon_sym_Arranger] = ACTIONS(102),
    [anon_sym_arranger] = ACTIONS(102),
    [anon_sym_Arrange] = ACTIONS(102),
    [anon_sym_arrange] = ACTIONS(102),
    [anon_sym_Vocal] = ACTIONS(102),
    [anon_sym_vocal] = ACTIONS(102),
    [anon_sym_Vo] = ACTIONS(102),
    [anon_sym_vo] = ACTIONS(102),
    [anon_sym_Performer] = ACTIONS(102),
    [anon_sym_performer] = ACTIONS(102),
    [anon_sym_Illustration] = ACTIONS(102),
    [anon_sym_illustration] = ACTIONS(102),
    [anon_sym_Illust] = ACTIONS(102),
    [anon_sym_illust] = ACTIONS(102),
    [anon_sym_Label] = ACTIONS(102),
    [anon_sym_label] = ACTIONS(102),
    [anon_sym_Circle] = ACTIONS(102),
    [anon_sym_circle] = ACTIONS(102),
    [anon_sym_Producer] = ACTIONS(102),
    [anon_sym_producer] = ACTIONS(102),
    [anon_sym_Recording] = ACTIONS(102),
    [anon_sym_recording] = ACTIONS(102),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(102),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(102),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(102),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(102),
    [anon_sym_u6b4cu5531] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu66f2] = ACTIONS(102),
    [anon_sym_u7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5e] = ACTIONS(102),
    [anon_sym_u5382u724c] = ACTIONS(102),
    [anon_sym_u811au672c] = ACTIONS(102),
    [anon_sym_u63d2u56fe] = ACTIONS(102),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(102),
    [anon_sym_u51fau7248u65b9] = ACTIONS(102),
    [anon_sym_u5f55u97f3] = ACTIONS(102),
    [anon_sym_u539fu4f5c] = ACTIONS(102),
  },
  [40] = {
    [anon_sym_u300a] = ACTIONS(40),
    [aux_sym_song_title_token1] = ACTIONS(40),
    [anon_sym_Music] = ACTIONS(40),
    [anon_sym_music] = ACTIONS(40),
    [anon_sym_Composition] = ACTIONS(40),
    [anon_sym_composition] = ACTIONS(40),
    [anon_sym_Composer] = ACTIONS(40),
    [anon_sym_composer] = ACTIONS(40),
    [anon_sym_Compose] = ACTIONS(40),
    [anon_sym_compose] = ACTIONS(40),
    [anon_sym_Lyrics] = ACTIONS(40),
    [anon_sym_lyrics] = ACTIONS(40),
    [anon_sym_Lyricist] = ACTIONS(40),
    [anon_sym_lyricist] = ACTIONS(40),
    [anon_sym_Lyric] = ACTIONS(40),
    [anon_sym_lyric] = ACTIONS(40),
    [anon_sym_Arrangement] = ACTIONS(40),
    [anon_sym_arrangement] = ACTIONS(40),
    [anon_sym_Arranger] = ACTIONS(40),
    [anon_sym_arranger] = ACTIONS(40),
    [anon_sym_Arrange] = ACTIONS(40),
    [anon_sym_arrange] = ACTIONS(40),
    [anon_sym_Vocal] = ACTIONS(40),
    [anon_sym_vocal] = ACTIONS(40),
    [anon_sym_Vo] = ACTIONS(40),
    [anon_sym_vo] = ACTIONS(40),
    [anon_sym_Performer] = ACTIONS(40),
    [anon_sym_performer] = ACTIONS(40),
    [anon_sym_Illustration] = ACTIONS(40),
    [anon_sym_illustration] = ACTIONS(40),
    [anon_sym_Illust] = ACTIONS(40),
    [anon_sym_illust] = ACTIONS(40),
    [anon_sym_Label] = ACTIONS(40),
    [anon_sym_label] = ACTIONS(40),
    [anon_sym_Circle] = ACTIONS(40),
    [anon_sym_circle] = ACTIONS(40),
    [anon_sym_Producer] = ACTIONS(40),
    [anon_sym_producer] = ACTIONS(40),
    [anon_sym_Recording] = ACTIONS(40),
    [anon_sym_recording] = ACTIONS(40),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(40),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(40),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(40),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(40),
    [anon_sym_u6b4cu5531] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(40),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu66f2] = ACTIONS(40),
    [anon_sym_u7de8u66f2] = ACTIONS(40),
    [anon_sym_u4f5cu8a5e] = ACTIONS(40),
    [anon_sym_u5382u724c] = ACTIONS(40),
    [anon_sym_u811au672c] = ACTIONS(40),
    [anon_sym_u63d2u56fe] = ACTIONS(40),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(40),
    [anon_sym_u51fau7248u65b9] = ACTIONS(40),
    [anon_sym_u5f55u97f3] = ACTIONS(40),
    [anon_sym_u539fu4f5c] = ACTIONS(40),
  },
  [41] = {
    [anon_sym_u300a] = ACTIONS(32),
    [aux_sym_song_title_token1] = ACTIONS(32),
    [anon_sym_Music] = ACTIONS(32),
    [anon_sym_music] = ACTIONS(32),
    [anon_sym_Composition] = ACTIONS(32),
    [anon_sym_composition] = ACTIONS(32),
    [anon_sym_Composer] = ACTIONS(32),
    [anon_sym_composer] = ACTIONS(32),
    [anon_sym_Compose] = ACTIONS(32),
    [anon_sym_compose] = ACTIONS(32),
    [anon_sym_Lyrics] = ACTIONS(32),
    [anon_sym_lyrics] = ACTIONS(32),
    [anon_sym_Lyricist] = ACTIONS(32),
    [anon_sym_lyricist] = ACTIONS(32),
    [anon_sym_Lyric] = ACTIONS(32),
    [anon_sym_lyric] = ACTIONS(32),
    [anon_sym_Arrangement] = ACTIONS(32),
    [anon_sym_arrangement] = ACTIONS(32),
    [anon_sym_Arranger] = ACTIONS(32),
    [anon_sym_arranger] = ACTIONS(32),
    [anon_sym_Arrange] = ACTIONS(32),
    [anon_sym_arrange] = ACTIONS(32),
    [anon_sym_Vocal] = ACTIONS(32),
    [anon_sym_vocal] = ACTIONS(32),
    [anon_sym_Vo] = ACTIONS(32),
    [anon_sym_vo] = ACTIONS(32),
    [anon_sym_Performer] = ACTIONS(32),
    [anon_sym_performer] = ACTIONS(32),
    [anon_sym_Illustration] = ACTIONS(32),
    [anon_sym_illustration] = ACTIONS(32),
    [anon_sym_Illust] = ACTIONS(32),
    [anon_sym_illust] = ACTIONS(32),
    [anon_sym_Label] = ACTIONS(32),
    [anon_sym_label] = ACTIONS(32),
    [anon_sym_Circle] = ACTIONS(32),
    [anon_sym_circle] = ACTIONS(32),
    [anon_sym_Producer] = ACTIONS(32),
    [anon_sym_producer] = ACTIONS(32),
    [anon_sym_Recording] = ACTIONS(32),
    [anon_sym_recording] = ACTIONS(32),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(32),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(32),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(32),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(32),
    [anon_sym_u6b4cu5531] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(32),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu66f2] = ACTIONS(32),
    [anon_sym_u7de8u66f2] = ACTIONS(32),
    [anon_sym_u4f5cu8a5e] = ACTIONS(32),
    [anon_sym_u5382u724c] = ACTIONS(32),
    [anon_sym_u811au672c] = ACTIONS(32),
    [anon_sym_u63d2u56fe] = ACTIONS(32),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(32),
    [anon_sym_u51fau7248u65b9] = ACTIONS(32),
    [anon_sym_u5f55u97f3] = ACTIONS(32),
    [anon_sym_u539fu4f5c] = ACTIONS(32),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_Music] = ACTIONS(140),
    [anon_sym_music] = ACTIONS(140),
    [anon_sym_Composition] = ACTIONS(140),
    [anon_sym_composition] = ACTIONS(140),
    [anon_sym_Composer] = ACTIONS(140),
    [anon_sym_composer] = ACTIONS(140),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(140),
    [anon_sym_lyrics] = ACTIONS(140),
    [anon_sym_Lyricist] = ACTIONS(140),
    [anon_sym_lyricist] = ACTIONS(140),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(140),
    [anon_sym_arrangement] = ACTIONS(140),
    [anon_sym_Arranger] = ACTIONS(140),
    [anon_sym_arranger] = ACTIONS(140),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(140),
    [anon_sym_vocal] = ACTIONS(140),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(140),
    [anon_sym_performer] = ACTIONS(140),
    [anon_sym_Illustration] = ACTIONS(140),
    [anon_sym_illustration] = ACTIONS(140),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(140),
    [anon_sym_label] = ACTIONS(140),
    [anon_sym_Circle] = ACTIONS(140),
    [anon_sym_circle] = ACTIONS(140),
    [anon_sym_Producer] = ACTIONS(140),
    [anon_sym_producer] = ACTIONS(140),
    [anon_sym_Recording] = ACTIONS(140),
    [anon_sym_recording] = ACTIONS(140),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(140),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(140),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(140),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(140),
    [anon_sym_u6b4cu5531] = ACTIONS(140),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(140),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(140),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(140),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(140),
    [anon_sym_u4f5cu66f2] = ACTIONS(140),
    [anon_sym_u7de8u66f2] = ACTIONS(140),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(140),
    [anon_sym_u811au672c] = ACTIONS(140),
    [anon_sym_u63d2u56fe] = ACTIONS(140),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(140),
    [anon_sym_u51fau7248u65b9] = ACTIONS(140),
    [anon_sym_u5f55u97f3] = ACTIONS(140),
    [anon_sym_u539fu4f5c] = ACTIONS(140),
  },
  [43] = {
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(108),
    [anon_sym_Music] = ACTIONS(108),
    [anon_sym_music] = ACTIONS(108),
    [anon_sym_Composition] = ACTIONS(108),
    [anon_sym_composition] = ACTIONS(108),
    [anon_sym_Composer] = ACTIONS(108),
    [anon_sym_composer] = ACTIONS(108),
    [anon_sym_Compose] = ACTIONS(108),
    [anon_sym_compose] = ACTIONS(108),
    [anon_sym_Lyrics] = ACTIONS(108),
    [anon_sym_lyrics] = ACTIONS(108),
    [anon_sym_Lyricist] = ACTIONS(108),
    [anon_sym_lyricist] = ACTIONS(108),
    [anon_sym_Lyric] = ACTIONS(108),
    [anon_sym_lyric] = ACTIONS(108),
    [anon_sym_Arrangement] = ACTIONS(108),
    [anon_sym_arrangement] = ACTIONS(108),
    [anon_sym_Arranger] = ACTIONS(108),
    [anon_sym_arranger] = ACTIONS(108),
    [anon_sym_Arrange] = ACTIONS(108),
    [anon_sym_arrange] = ACTIONS(108),
    [anon_sym_Vocal] = ACTIONS(108),
    [anon_sym_vocal] = ACTIONS(108),
    [anon_sym_Vo] = ACTIONS(108),
    [anon_sym_vo] = ACTIONS(108),
    [anon_sym_Performer] = ACTIONS(108),
    [anon_sym_performer] = ACTIONS(108),
    [anon_sym_Illustration] = ACTIONS(108),
    [anon_sym_illustration] = ACTIONS(108),
    [anon_sym_Illust] = ACTIONS(108),
    [anon_sym_illust] = ACTIONS(108),
    [anon_sym_Label] = ACTIONS(108),
    [anon_sym_label] = ACTIONS(108),
    [anon_sym_Circle] = ACTIONS(108),
    [anon_sym_circle] = ACTIONS(108),
    [anon_sym_Producer] = ACTIONS(108),
    [anon_sym_producer] = ACTIONS(108),
    [anon_sym_Recording] = ACTIONS(108),
    [anon_sym_recording] = ACTIONS(108),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(108),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(108),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(108),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(108),
    [anon_sym_u6b4cu5531] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu66f2] = ACTIONS(108),
    [anon_sym_u7de8u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5e] = ACTIONS(108),
    [anon_sym_u5382u724c] = ACTIONS(108),
    [anon_sym_u811au672c] = ACTIONS(108),
    [anon_sym_u63d2u56fe] = ACTIONS(108),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(108),
    [anon_sym_u51fau7248u65b9] = ACTIONS(108),
    [anon_sym_u5f55u97f3] = ACTIONS(108),
    [anon_sym_u539fu4f5c] = ACTIONS(108),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_Music] = ACTIONS(144),
    [anon_sym_music] = ACTIONS(144),
    [anon_sym_Composition] = ACTIONS(144),
    [anon_sym_composition] = ACTIONS(144),
    [anon_sym_Composer] = ACTIONS(144),
    [anon_sym_composer] = ACTIONS(144),
    [anon_sym_Compose] = ACTIONS(146),
    [anon_sym_compose] = ACTIONS(146),
    [anon_sym_Lyrics] = ACTIONS(144),
    [anon_sym_lyrics] = ACTIONS(144),
    [anon_sym_Lyricist] = ACTIONS(144),
    [anon_sym_lyricist] = ACTIONS(144),
    [anon_sym_Lyric] = ACTIONS(146),
    [anon_sym_lyric] = ACTIONS(146),
    [anon_sym_Arrangement] = ACTIONS(144),
    [anon_sym_arrangement] = ACTIONS(144),
    [anon_sym_Arranger] = ACTIONS(144),
    [anon_sym_arranger] = ACTIONS(144),
    [anon_sym_Arrange] = ACTIONS(146),
    [anon_sym_arrange] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(144),
    [anon_sym_vocal] = ACTIONS(144),
    [anon_sym_Vo] = ACTIONS(146),
    [anon_sym_vo] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(144),
    [anon_sym_performer] = ACTIONS(144),
    [anon_sym_Illustration] = ACTIONS(144),
    [anon_sym_illustration] = ACTIONS(144),
    [anon_sym_Illust] = ACTIONS(146),
    [anon_sym_illust] = ACTIONS(146),
    [anon_sym_Label] = ACTIONS(144),
    [anon_sym_label] = ACTIONS(144),
    [anon_sym_Circle] = ACTIONS(144),
    [anon_sym_circle] = ACTIONS(144),
    [anon_sym_Producer] = ACTIONS(144),
    [anon_sym_producer] = ACTIONS(144),
    [anon_sym_Recording] = ACTIONS(144),
    [anon_sym_recording] = ACTIONS(144),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(144),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(144),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(144),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(144),
    [anon_sym_u6b4cu5531] = ACTIONS(144),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(144),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(144),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(144),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(144),
    [anon_sym_u4f5cu66f2] = ACTIONS(144),
    [anon_sym_u7de8u66f2] = ACTIONS(144),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(144),
    [anon_sym_u811au672c] = ACTIONS(144),
    [anon_sym_u63d2u56fe] = ACTIONS(144),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(144),
    [anon_sym_u51fau7248u65b9] = ACTIONS(144),
    [anon_sym_u5f55u97f3] = ACTIONS(144),
    [anon_sym_u539fu4f5c] = ACTIONS(144),
  },
  [45] = {
    [anon_sym_u300a] = ACTIONS(138),
    [aux_sym_song_title_token1] = ACTIONS(138),
    [anon_sym_Music] = ACTIONS(138),
    [anon_sym_music] = ACTIONS(138),
    [anon_sym_Composition] = ACTIONS(138),
    [anon_sym_composition] = ACTIONS(138),
    [anon_sym_Composer] = ACTIONS(138),
    [anon_sym_composer] = ACTIONS(138),
    [anon_sym_Compose] = ACTIONS(138),
    [anon_sym_compose] = ACTIONS(138),
    [anon_sym_Lyrics] = ACTIONS(138),
    [anon_sym_lyrics] = ACTIONS(138),
    [anon_sym_Lyricist] = ACTIONS(138),
    [anon_sym_lyricist] = ACTIONS(138),
    [anon_sym_Lyric] = ACTIONS(138),
    [anon_sym_lyric] = ACTIONS(138),
    [anon_sym_Arrangement] = ACTIONS(138),
    [anon_sym_arrangement] = ACTIONS(138),
    [anon_sym_Arranger] = ACTIONS(138),
    [anon_sym_arranger] = ACTIONS(138),
    [anon_sym_Arrange] = ACTIONS(138),
    [anon_sym_arrange] = ACTIONS(138),
    [anon_sym_Vocal] = ACTIONS(138),
    [anon_sym_vocal] = ACTIONS(138),
    [anon_sym_Vo] = ACTIONS(138),
    [anon_sym_vo] = ACTIONS(138),
    [anon_sym_Performer] = ACTIONS(138),
    [anon_sym_performer] = ACTIONS(138),
    [anon_sym_Illustration] = ACTIONS(138),
    [anon_sym_illustration] = ACTIONS(138),
    [anon_sym_Illust] = ACTIONS(138),
    [anon_sym_illust] = ACTIONS(138),
    [anon_sym_Label] = ACTIONS(138),
    [anon_sym_label] = ACTIONS(138),
    [anon_sym_Circle] = ACTIONS(138),
    [anon_sym_circle] = ACTIONS(138),
    [anon_sym_Producer] = ACTIONS(138),
    [anon_sym_producer] = ACTIONS(138),
    [anon_sym_Recording] = ACTIONS(138),
    [anon_sym_recording] = ACTIONS(138),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(138),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(138),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(138),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(138),
    [anon_sym_u6b4cu5531] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(138),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu66f2] = ACTIONS(138),
    [anon_sym_u7de8u66f2] = ACTIONS(138),
    [anon_sym_u4f5cu8a5e] = ACTIONS(138),
    [anon_sym_u5382u724c] = ACTIONS(138),
    [anon_sym_u811au672c] = ACTIONS(138),
    [anon_sym_u63d2u56fe] = ACTIONS(138),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(138),
    [anon_sym_u51fau7248u65b9] = ACTIONS(138),
    [anon_sym_u5f55u97f3] = ACTIONS(138),
    [anon_sym_u539fu4f5c] = ACTIONS(138),
  },
  [46] = {
    [anon_sym_u300a] = ACTIONS(132),
    [aux_sym_song_title_token1] = ACTIONS(132),
    [anon_sym_Music] = ACTIONS(132),
    [anon_sym_music] = ACTIONS(132),
    [anon_sym_Composition] = ACTIONS(132),
    [anon_sym_composition] = ACTIONS(132),
    [anon_sym_Composer] = ACTIONS(132),
    [anon_sym_composer] = ACTIONS(132),
    [anon_sym_Compose] = ACTIONS(132),
    [anon_sym_compose] = ACTIONS(132),
    [anon_sym_Lyrics] = ACTIONS(132),
    [anon_sym_lyrics] = ACTIONS(132),
    [anon_sym_Lyricist] = ACTIONS(132),
    [anon_sym_lyricist] = ACTIONS(132),
    [anon_sym_Lyric] = ACTIONS(132),
    [anon_sym_lyric] = ACTIONS(132),
    [anon_sym_Arrangement] = ACTIONS(132),
    [anon_sym_arrangement] = ACTIONS(132),
    [anon_sym_Arranger] = ACTIONS(132),
    [anon_sym_arranger] = ACTIONS(132),
    [anon_sym_Arrange] = ACTIONS(132),
    [anon_sym_arrange] = ACTIONS(132),
    [anon_sym_Vocal] = ACTIONS(132),
    [anon_sym_vocal] = ACTIONS(132),
    [anon_sym_Vo] = ACTIONS(132),
    [anon_sym_vo] = ACTIONS(132),
    [anon_sym_Performer] = ACTIONS(132),
    [anon_sym_performer] = ACTIONS(132),
    [anon_sym_Illustration] = ACTIONS(132),
    [anon_sym_illustration] = ACTIONS(132),
    [anon_sym_Illust] = ACTIONS(132),
    [anon_sym_illust] = ACTIONS(132),
    [anon_sym_Label] = ACTIONS(132),
    [anon_sym_label] = ACTIONS(132),
    [anon_sym_Circle] = ACTIONS(132),
    [anon_sym_circle] = ACTIONS(132),
    [anon_sym_Producer] = ACTIONS(132),
    [anon_sym_producer] = ACTIONS(132),
    [anon_sym_Recording] = ACTIONS(132),
    [anon_sym_recording] = ACTIONS(132),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(132),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(132),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(132),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(132),
    [anon_sym_u6b4cu5531] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu66f2] = ACTIONS(132),
    [anon_sym_u7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5e] = ACTIONS(132),
    [anon_sym_u5382u724c] = ACTIONS(132),
    [anon_sym_u811au672c] = ACTIONS(132),
    [anon_sym_u63d2u56fe] = ACTIONS(132),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(132),
    [anon_sym_u51fau7248u65b9] = ACTIONS(132),
    [anon_sym_u5f55u97f3] = ACTIONS(132),
    [anon_sym_u539fu4f5c] = ACTIONS(132),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(148), 1,
      anon_sym_u300a,
    ACTIONS(151), 1,
      aux_sym_song_title_token1,
    STATE(10), 1,
      sym__song,
    STATE(13), 1,
      sym_song_title,
    STATE(30), 1,
      aux_sym_song_title_repeat1,
    STATE(42), 1,
      sym__song_title,
    STATE(47), 2,
      sym_song,
      aux_sym_source_file_repeat1,
  [23] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(4), 1,
      sym__song,
    STATE(13), 1,
      sym_song_title,
    STATE(15), 1,
      aux_sym_song_title_repeat1,
    STATE(42), 1,
      sym__song_title,
    STATE(50), 1,
      aux_sym_source_file_repeat1,
    STATE(66), 1,
      sym_song,
  [48] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__song,
    STATE(13), 1,
      sym_song_title,
    STATE(15), 1,
      aux_sym_song_title_repeat1,
    STATE(42), 1,
      sym__song_title,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(66), 1,
      sym_song,
  [73] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(5), 1,
      sym__song,
    STATE(13), 1,
      sym_song_title,
    STATE(15), 1,
      aux_sym_song_title_repeat1,
    STATE(42), 1,
      sym__song_title,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(70), 1,
      sym_song,
  [98] = 3,
    ACTIONS(154), 1,
      aux_sym_song_title_token1,
    STATE(51), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(67), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [109] = 4,
    ACTIONS(157), 1,
      aux_sym_song_title_token1,
    STATE(13), 1,
      sym_song_title,
    STATE(53), 1,
      aux_sym_song_title_repeat1,
    STATE(79), 1,
      sym__song_title,
  [122] = 3,
    ACTIONS(159), 1,
      aux_sym_song_title_token1,
    STATE(51), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(56), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [133] = 3,
    ACTIONS(161), 1,
      anon_sym_u300a,
    ACTIONS(163), 1,
      sym_creator_name,
    STATE(21), 1,
      sym__creator,
  [143] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [151] = 3,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      sym__sep,
    STATE(61), 1,
      aux_sym_credit_field_repeat2,
  [161] = 3,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      sym__sep,
    STATE(69), 1,
      aux_sym_credit_field_repeat2,
  [171] = 3,
    ACTIONS(177), 1,
      anon_sym_u300b,
    ACTIONS(179), 1,
      aux_sym_song_title_token1,
    STATE(60), 1,
      aux_sym_song_title_repeat1,
  [181] = 3,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      sym__sep,
    STATE(57), 1,
      aux_sym_credit_field_repeat2,
  [191] = 3,
    ACTIONS(67), 1,
      anon_sym_u300b,
    ACTIONS(185), 1,
      aux_sym_song_title_token1,
    STATE(60), 1,
      aux_sym_song_title_repeat1,
  [201] = 3,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      sym__sep,
    STATE(69), 1,
      aux_sym_credit_field_repeat2,
  [211] = 3,
    ACTIONS(161), 1,
      anon_sym_u300a,
    ACTIONS(163), 1,
      sym_creator_name,
    STATE(27), 1,
      sym__creator,
  [221] = 3,
    ACTIONS(52), 1,
      anon_sym_u300a,
    ACTIONS(192), 1,
      sym_creator_name,
    STATE(72), 1,
      sym__creator,
  [231] = 1,
    ACTIONS(102), 3,
      anon_sym_u300b,
      aux_sym_song_title_token1,
      aux_sym_feat_field_token1,
  [237] = 3,
    ACTIONS(179), 1,
      aux_sym_song_title_token1,
    ACTIONS(194), 1,
      anon_sym_u300b,
    STATE(60), 1,
      aux_sym_song_title_repeat1,
  [247] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [255] = 2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [263] = 2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [271] = 3,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      sym__sep,
    STATE(69), 1,
      aux_sym_credit_field_repeat2,
  [281] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [289] = 1,
    ACTIONS(102), 2,
      anon_sym_u300b,
      aux_sym_song_title_token1,
  [294] = 2,
    ACTIONS(104), 1,
      sym__sep,
    ACTIONS(106), 1,
      anon_sym_LF,
  [301] = 1,
    ACTIONS(200), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [306] = 2,
    ACTIONS(92), 1,
      sym__sep,
    ACTIONS(94), 1,
      anon_sym_LF,
  [313] = 2,
    ACTIONS(207), 1,
      aux_sym_song_title_token1,
    STATE(65), 1,
      aux_sym_song_title_repeat1,
  [320] = 2,
    ACTIONS(96), 1,
      sym__sep,
    ACTIONS(98), 1,
      anon_sym_LF,
  [327] = 1,
    ACTIONS(200), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [332] = 2,
    ACTIONS(207), 1,
      aux_sym_song_title_token1,
    STATE(58), 1,
      aux_sym_song_title_repeat1,
  [339] = 1,
    ACTIONS(209), 1,
      anon_sym_u300b,
  [343] = 1,
    ACTIONS(211), 1,
      sym__sep,
  [347] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(215), 1,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 23,
  [SMALL_STATE(49)] = 48,
  [SMALL_STATE(50)] = 73,
  [SMALL_STATE(51)] = 98,
  [SMALL_STATE(52)] = 109,
  [SMALL_STATE(53)] = 122,
  [SMALL_STATE(54)] = 133,
  [SMALL_STATE(55)] = 143,
  [SMALL_STATE(56)] = 151,
  [SMALL_STATE(57)] = 161,
  [SMALL_STATE(58)] = 171,
  [SMALL_STATE(59)] = 181,
  [SMALL_STATE(60)] = 191,
  [SMALL_STATE(61)] = 201,
  [SMALL_STATE(62)] = 211,
  [SMALL_STATE(63)] = 221,
  [SMALL_STATE(64)] = 231,
  [SMALL_STATE(65)] = 237,
  [SMALL_STATE(66)] = 247,
  [SMALL_STATE(67)] = 255,
  [SMALL_STATE(68)] = 263,
  [SMALL_STATE(69)] = 271,
  [SMALL_STATE(70)] = 281,
  [SMALL_STATE(71)] = 289,
  [SMALL_STATE(72)] = 294,
  [SMALL_STATE(73)] = 301,
  [SMALL_STATE(74)] = 306,
  [SMALL_STATE(75)] = 313,
  [SMALL_STATE(76)] = 320,
  [SMALL_STATE(77)] = 327,
  [SMALL_STATE(78)] = 332,
  [SMALL_STATE(79)] = 339,
  [SMALL_STATE(80)] = 343,
  [SMALL_STATE(81)] = 347,
  [SMALL_STATE(82)] = 351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 10),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 10),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 9),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 9),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13), SHIFT_REPEAT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 9),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 10),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 10),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__creator, 3, 0, 11),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__creator, 3, 0, 11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__creator, 1, 0, 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__creator, 1, 0, 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song, 1, 0, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song, 1, 0, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song, 3, 0, 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song, 3, 0, 7),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 4),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13), SHIFT_REPEAT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rkgk(void) {
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
