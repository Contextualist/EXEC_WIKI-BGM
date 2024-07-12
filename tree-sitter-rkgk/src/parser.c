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
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

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
  sym_role = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_credit_block_repeat1 = 76,
  aux_sym_credit_field_repeat1 = 77,
  aux_sym_credit_field_repeat2 = 78,
  aux_sym_song_title_repeat1 = 79,
  alias_sym_creator_sep = 80,
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
  [9] = {.index = 7, .length = 3},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 4},
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
    {field_title, 1},
  [5] =
    {field_title, 2, .inherited = true},
  [6] =
    {field_creator, 1},
  [7] =
    {field_creator, 1},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [10] =
    {field_creator, 1},
    {field_creatorSeparator, 0},
  [12] =
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
  [7] = {
    [2] = sym_song,
  },
  [10] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__song, 2,
    sym__song,
    sym_song,
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
  [8] = 7,
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 17,
  [23] = 23,
  [24] = 13,
  [25] = 18,
  [26] = 26,
  [27] = 21,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 20,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 35,
  [40] = 31,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 13,
  [49] = 18,
  [50] = 50,
  [51] = 51,
  [52] = 15,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 51,
  [60] = 56,
  [61] = 23,
  [62] = 50,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 69,
};

static TSCharacterRange sym_creator_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x300a},
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
      if (eof) ADVANCE(189);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'V') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == 0x300a) ADVANCE(190);
      if (lookahead == 0x300b) ADVANCE(192);
      if (lookahead == 0x30a2) ADVANCE(221);
      if (lookahead == 0x30a4) ADVANCE(220);
      if (lookahead == 0x30dc) ADVANCE(222);
      if (lookahead == 0x30ec) ADVANCE(223);
      if (lookahead == 0x4f5c) ADVANCE(228);
      if (lookahead == 0x51fa) ADVANCE(231);
      if (lookahead == 0x5236) ADVANCE(224);
      if (lookahead == 0x5382) ADVANCE(232);
      if (lookahead == 0x539f) ADVANCE(225);
      if (lookahead == 0x5f55) ADVANCE(233);
      if (lookahead == 0x63d2) ADVANCE(227);
      if (lookahead == 0x6b4c) ADVANCE(226);
      if (lookahead == 0x7de8) ADVANCE(229);
      if (lookahead == 0x811a) ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 0x300b) ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(524);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(236);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        'A', 346,
        'C', 287,
        'I', 303,
        'L', 239,
        'M', 375,
        'P', 272,
        'R', 263,
        'V', 323,
        'a', 356,
        'c', 298,
        'i', 308,
        'l', 245,
        'm', 380,
        'p', 279,
        'r', 280,
        'v', 324,
        0x30a2, 389,
        0x30a4, 386,
        0x30dc, 391,
        0x30ec, 392,
        0x4f5c, 399,
        0x51fa, 405,
        0x5236, 394,
        0x5382, 406,
        0x539f, 395,
        0x5f55, 407,
        0x63d2, 397,
        0x6b4c, 396,
        0x7de8, 400,
        0x811a, 404,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(7);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 110,
        'C', 58,
        'I', 70,
        'L', 8,
        'M', 147,
        'P', 43,
        'R', 33,
        'V', 94,
        'a', 126,
        'c', 69,
        'i', 79,
        'l', 15,
        'm', 152,
        'p', 50,
        'r', 51,
        'v', 95,
        0x30a2, 161,
        0x30a4, 158,
        0x30dc, 163,
        0x30ec, 164,
        0x4f5c, 171,
        0x51fa, 177,
        0x5236, 166,
        0x5382, 178,
        0x539f, 167,
        0x5f55, 179,
        0x63d2, 169,
        0x6b4c, 168,
        0x7de8, 172,
        0x811a, 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(113);
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
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 0x30ab) ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 0x30b8) ADVANCE(487);
      END_STATE();
    case 155:
      if (lookahead == 0x30b9) ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 0x30c8) ADVANCE(489);
      END_STATE();
    case 157:
      if (lookahead == 0x30d9) ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 0x30e9) ADVANCE(155);
      END_STATE();
    case 159:
      if (lookahead == 0x30eb) ADVANCE(485);
      END_STATE();
    case 160:
      if (lookahead == 0x30eb) ADVANCE(491);
      END_STATE();
    case 161:
      if (lookahead == 0x30ec) ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 0x30f3) ADVANCE(154);
      END_STATE();
    case 163:
      if (lookahead == 0x30fc) ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 0x30fc) ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 0x4eba) ADVANCE(515);
      END_STATE();
    case 166:
      if (lookahead == 0x4f5c) ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 0x4f5c) ADVANCE(521);
      END_STATE();
    case 168:
      if (lookahead == 0x5531) ADVANCE(493);
      END_STATE();
    case 169:
      if (lookahead == 0x56fe) ADVANCE(513);
      END_STATE();
    case 170:
      if (lookahead == 0x65b9) ADVANCE(517);
      END_STATE();
    case 171:
      if (lookahead == 0x66f2) ADVANCE(503);
      if (lookahead == 0x7de8) ADVANCE(173);
      if (lookahead == 0x8a5e) ADVANCE(507);
      END_STATE();
    case 172:
      if (lookahead == 0x66f2) ADVANCE(505);
      END_STATE();
    case 173:
      if (lookahead == 0x66f2) ADVANCE(501);
      END_STATE();
    case 174:
      if (lookahead == 0x66f2) ADVANCE(497);
      if (lookahead == 0x7de8) ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 0x66f2) ADVANCE(495);
      END_STATE();
    case 176:
      if (lookahead == 0x672c) ADVANCE(511);
      END_STATE();
    case 177:
      if (lookahead == 0x7248) ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == 0x724c) ADVANCE(509);
      END_STATE();
    case 179:
      if (lookahead == 0x97f3) ADVANCE(519);
      END_STATE();
    case 180:
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 181:
      if (eof) ADVANCE(189);
      if (lookahead == '\n') SKIP(182);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'V') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == 0x300a) ADVANCE(190);
      if (lookahead == 0x30a2) ADVANCE(221);
      if (lookahead == 0x30a4) ADVANCE(220);
      if (lookahead == 0x30dc) ADVANCE(222);
      if (lookahead == 0x30ec) ADVANCE(223);
      if (lookahead == 0x4f5c) ADVANCE(228);
      if (lookahead == 0x51fa) ADVANCE(231);
      if (lookahead == 0x5236) ADVANCE(224);
      if (lookahead == 0x5382) ADVANCE(232);
      if (lookahead == 0x539f) ADVANCE(225);
      if (lookahead == 0x5f55) ADVANCE(233);
      if (lookahead == 0x63d2) ADVANCE(227);
      if (lookahead == 0x6b4c) ADVANCE(226);
      if (lookahead == 0x7de8) ADVANCE(229);
      if (lookahead == 0x811a) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(200);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(524);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 182:
      if (eof) ADVANCE(189);
      if (lookahead == '\n') SKIP(182);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'V') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == 0x300a) ADVANCE(190);
      if (lookahead == 0x30a2) ADVANCE(221);
      if (lookahead == 0x30a4) ADVANCE(220);
      if (lookahead == 0x30dc) ADVANCE(222);
      if (lookahead == 0x30ec) ADVANCE(223);
      if (lookahead == 0x4f5c) ADVANCE(228);
      if (lookahead == 0x51fa) ADVANCE(231);
      if (lookahead == 0x5236) ADVANCE(224);
      if (lookahead == 0x5382) ADVANCE(232);
      if (lookahead == 0x539f) ADVANCE(225);
      if (lookahead == 0x5f55) ADVANCE(233);
      if (lookahead == 0x63d2) ADVANCE(227);
      if (lookahead == 0x6b4c) ADVANCE(226);
      if (lookahead == 0x7de8) ADVANCE(229);
      if (lookahead == 0x811a) ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 183:
      if (eof) ADVANCE(189);
      if (lookahead == '\n') SKIP(183);
      if (lookahead == '@') ADVANCE(193);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == 'V') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == 0x30a2) ADVANCE(221);
      if (lookahead == 0x30a4) ADVANCE(220);
      if (lookahead == 0x30dc) ADVANCE(222);
      if (lookahead == 0x30ec) ADVANCE(223);
      if (lookahead == 0x4f5c) ADVANCE(228);
      if (lookahead == 0x51fa) ADVANCE(231);
      if (lookahead == 0x5236) ADVANCE(224);
      if (lookahead == 0x5382) ADVANCE(232);
      if (lookahead == 0x539f) ADVANCE(225);
      if (lookahead == 0x5f55) ADVANCE(233);
      if (lookahead == 0x63d2) ADVANCE(227);
      if (lookahead == 0x6b4c) ADVANCE(226);
      if (lookahead == 0x7de8) ADVANCE(229);
      if (lookahead == 0x811a) ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 184:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '\n', 194,
        'A', 346,
        'C', 287,
        'I', 303,
        'L', 239,
        'M', 375,
        'P', 272,
        'R', 263,
        'V', 323,
        'a', 356,
        'c', 298,
        'i', 308,
        'l', 245,
        'm', 380,
        'p', 279,
        'r', 280,
        'v', 324,
        0x300a, 191,
        0x30a2, 389,
        0x30a4, 386,
        0x30dc, 391,
        0x30ec, 392,
        0x4f5c, 399,
        0x51fa, 405,
        0x5236, 394,
        0x5382, 406,
        0x539f, 395,
        0x5f55, 407,
        0x63d2, 397,
        0x6b4c, 396,
        0x7de8, 400,
        0x811a, 404,
        '\t', 197,
        ' ', 197,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(196);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 185:
      if (eof) ADVANCE(189);
      if (lookahead == '\n') SKIP(185);
      if (lookahead == 0x300a) ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '@', 193,
        'A', 110,
        'C', 58,
        'I', 70,
        'L', 8,
        'M', 147,
        'P', 43,
        'R', 33,
        'V', 94,
        'a', 126,
        'c', 69,
        'f', 34,
        'i', 79,
        'l', 15,
        'm', 152,
        'p', 50,
        'r', 51,
        'v', 95,
        0x300b, 192,
        0x30a2, 161,
        0x30a4, 158,
        0x30dc, 163,
        0x30ec, 164,
        0x4f5c, 171,
        0x51fa, 177,
        0x5236, 166,
        0x5382, 178,
        0x539f, 167,
        0x5f55, 179,
        0x63d2, 169,
        0x6b4c, 168,
        0x7de8, 172,
        0x811a, 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(186);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '@', 193,
        'A', 110,
        'C', 58,
        'I', 70,
        'L', 8,
        'M', 147,
        'P', 43,
        'R', 33,
        'V', 94,
        'a', 126,
        'c', 69,
        'i', 79,
        'l', 15,
        'm', 152,
        'p', 50,
        'r', 51,
        'v', 95,
        0x300b, 192,
        0x30a2, 161,
        0x30a4, 158,
        0x30dc, 163,
        0x30ec, 164,
        0x4f5c, 171,
        0x51fa, 177,
        0x5236, 166,
        0x5382, 178,
        0x539f, 167,
        0x5f55, 179,
        0x63d2, 169,
        0x6b4c, 168,
        0x7de8, 172,
        0x811a, 176,
        '\t', 523,
        ' ', 523,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(188);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(524);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '@', 193,
        'A', 110,
        'C', 58,
        'I', 70,
        'L', 8,
        'M', 147,
        'P', 43,
        'R', 33,
        'V', 94,
        'a', 126,
        'c', 69,
        'i', 79,
        'l', 15,
        'm', 152,
        'p', 50,
        'r', 51,
        'v', 95,
        0x300b, 192,
        0x30a2, 161,
        0x30a4, 158,
        0x30dc, 163,
        0x30ec, 164,
        0x4f5c, 171,
        0x51fa, 177,
        0x5236, 166,
        0x5382, 178,
        0x539f, 167,
        0x5f55, 179,
        0x63d2, 169,
        0x6b4c, 168,
        0x7de8, 172,
        0x811a, 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_u300a);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 194,
        'A', 215,
        'C', 209,
        'I', 211,
        'L', 201,
        'M', 217,
        'P', 205,
        'R', 203,
        'V', 213,
        'a', 216,
        'c', 210,
        'i', 212,
        'l', 202,
        'm', 218,
        'p', 206,
        'r', 207,
        'v', 214,
        0x300a, 190,
        0x30a2, 221,
        0x30a4, 220,
        0x30dc, 222,
        0x30ec, 223,
        0x4f5c, 228,
        0x51fa, 231,
        0x5236, 224,
        0x5382, 232,
        0x539f, 225,
        0x5f55, 233,
        0x63d2, 227,
        0x6b4c, 226,
        0x7de8, 229,
        0x811a, 230,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '@', 193,
        'A', 215,
        'C', 209,
        'I', 211,
        'L', 201,
        'M', 217,
        'P', 205,
        'R', 203,
        'V', 213,
        'a', 216,
        'c', 210,
        'f', 204,
        'i', 212,
        'l', 202,
        'm', 218,
        'p', 206,
        'r', 207,
        'v', 214,
        0x300a, 190,
        0x300b, 192,
        0x30a2, 221,
        0x30a4, 220,
        0x30dc, 222,
        0x30ec, 223,
        0x4f5c, 228,
        0x51fa, 231,
        0x5236, 224,
        0x5382, 232,
        0x539f, 225,
        0x5f55, 233,
        0x63d2, 227,
        0x6b4c, 226,
        0x7de8, 229,
        0x811a, 230,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '@', 193,
        'A', 215,
        'C', 209,
        'I', 211,
        'L', 201,
        'M', 217,
        'P', 205,
        'R', 203,
        'V', 213,
        'a', 216,
        'c', 210,
        'f', 204,
        'i', 212,
        'l', 202,
        'm', 218,
        'p', 206,
        'r', 207,
        'v', 214,
        0x30a2, 221,
        0x30a4, 220,
        0x30dc, 222,
        0x30ec, 223,
        0x4f5c, 228,
        0x51fa, 231,
        0x5236, 224,
        0x5382, 232,
        0x539f, 225,
        0x5f55, 233,
        0x63d2, 227,
        0x6b4c, 226,
        0x7de8, 229,
        0x811a, 230,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 215,
        'C', 209,
        'I', 211,
        'L', 201,
        'M', 217,
        'P', 205,
        'R', 203,
        'V', 213,
        'a', 216,
        'c', 210,
        'i', 212,
        'l', 202,
        'm', 218,
        'p', 206,
        'r', 207,
        'v', 214,
        0x300a, 190,
        0x30a2, 221,
        0x30a4, 220,
        0x30dc, 222,
        0x30ec, 223,
        0x4f5c, 228,
        0x51fa, 231,
        0x5236, 224,
        0x5382, 232,
        0x539f, 225,
        0x5f55, 233,
        0x63d2, 227,
        0x6b4c, 226,
        0x7de8, 229,
        0x811a, 230,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 0x300b) ADVANCE(192);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(190);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(155);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(162);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(153);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(157);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(165);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(521);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(493);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(513);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(503);
      if (lookahead == 0x7de8) ADVANCE(173);
      if (lookahead == 0x8a5e) ADVANCE(507);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(505);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(511);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(170);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(509);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(519);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(196);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 346,
        'C', 287,
        'I', 303,
        'L', 239,
        'M', 375,
        'P', 272,
        'R', 263,
        'V', 323,
        'a', 356,
        'c', 298,
        'i', 308,
        'l', 245,
        'm', 380,
        'p', 279,
        'r', 280,
        'v', 324,
        0x300a, 191,
        0x30a2, 389,
        0x30a4, 386,
        0x30dc, 391,
        0x30ec, 392,
        0x4f5c, 399,
        0x51fa, 405,
        0x5236, 394,
        0x5382, 406,
        0x539f, 395,
        0x5f55, 407,
        0x63d2, 397,
        0x6b4c, 396,
        0x7de8, 400,
        0x811a, 404,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 346,
        'C', 287,
        'I', 303,
        'L', 239,
        'M', 375,
        'P', 272,
        'R', 263,
        'V', 323,
        'a', 356,
        'c', 298,
        'i', 308,
        'l', 245,
        'm', 380,
        'p', 279,
        'r', 280,
        'v', 324,
        0x30a2, 389,
        0x30a4, 386,
        0x30dc, 391,
        0x30ec, 392,
        0x4f5c, 399,
        0x51fa, 405,
        0x5236, 394,
        0x5382, 406,
        0x539f, 395,
        0x5f55, 407,
        0x63d2, 397,
        0x6b4c, 396,
        0x7de8, 400,
        0x811a, 404,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'y') ADVANCE(340);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(313);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(300);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(302);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(322);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(271);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(273);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(433);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(410);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(435);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(304);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(331);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(274);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(305);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(334);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(296);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(297);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(254);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(320);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(299);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(325);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(301);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(342);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(343);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(321);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(258);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(333);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(335);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(266);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(268);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(309);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(249);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(250);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(251);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(252);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(326);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(328);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(330);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(332);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(318);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(319);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(310);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(306);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(264);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(265);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(307);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(338);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(277);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(285);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(283);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(284);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(286);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(259);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(314);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(315);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(316);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(317);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(353);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(261);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(327);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(329);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(240);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(288);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(281);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(339);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(311);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(253);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(260);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(290);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(312);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(256);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(262);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(246);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(282);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(267);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(269);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(289);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(291);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(465);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(292);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(293);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(294);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(295);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(363);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(255);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(257);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(387);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(494);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(504);
      if (lookahead == 0x7de8) ADVANCE(401);
      if (lookahead == 0x8a5e) ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(498);
      if (lookahead == 0x7de8) ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 's') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 's') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(241);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(242);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(243);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(244);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(174);
      if (lookahead == 0x66f2) ADVANCE(499);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(402);
      if (lookahead == 0x66f2) ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(408);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 523,
        ' ', 523,
        '&', 524,
        ',', 524,
        '/', 524,
        ':', 524,
        0x3000, 524,
        0x3001, 524,
        0x30fb, 524,
        0xff06, 524,
        0xff1a, 524,
        0xff1b, 524,
      );
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 524,
        ' ', 524,
        '&', 524,
        ',', 524,
        '/', 524,
        ':', 524,
        0x3000, 524,
        0x3001, 524,
        0x30fb, 524,
        0xff06, 524,
        0xff1a, 524,
        0xff1b, 524,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 182},
  [2] = {.lex_state = 186},
  [3] = {.lex_state = 182},
  [4] = {.lex_state = 186},
  [5] = {.lex_state = 186},
  [6] = {.lex_state = 186},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 186},
  [11] = {.lex_state = 186},
  [12] = {.lex_state = 187},
  [13] = {.lex_state = 183},
  [14] = {.lex_state = 184},
  [15] = {.lex_state = 187},
  [16] = {.lex_state = 187},
  [17] = {.lex_state = 184},
  [18] = {.lex_state = 183},
  [19] = {.lex_state = 184},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 184},
  [23] = {.lex_state = 187},
  [24] = {.lex_state = 183},
  [25] = {.lex_state = 183},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 181},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 182},
  [31] = {.lex_state = 182},
  [32] = {.lex_state = 186},
  [33] = {.lex_state = 182},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 182},
  [36] = {.lex_state = 186},
  [37] = {.lex_state = 186},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 182},
  [40] = {.lex_state = 182},
  [41] = {.lex_state = 182},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 185},
  [45] = {.lex_state = 185},
  [46] = {.lex_state = 185},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 185},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 185},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 185},
  [56] = {.lex_state = 185},
  [57] = {.lex_state = 185},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 185},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 185},
  [63] = {.lex_state = 180},
  [64] = {.lex_state = 187},
  [65] = {.lex_state = 180},
  [66] = {.lex_state = 186},
  [67] = {.lex_state = 187},
  [68] = {.lex_state = 180},
  [69] = {.lex_state = 0},
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
    [sym_source_file] = STATE(69),
    [sym__song] = STATE(5),
    [sym_song] = STATE(57),
    [sym_credit_block] = STATE(44),
    [sym_credit_field] = STATE(8),
    [sym__song_title] = STATE(37),
    [sym_song_title] = STATE(11),
    [sym_role] = STATE(67),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym_credit_block_repeat1] = STATE(8),
    [aux_sym_credit_field_repeat1] = STATE(26),
    [aux_sym_song_title_repeat1] = STATE(13),
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
    [sym_credit_block] = STATE(56),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(29),
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
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_u300a] = ACTIONS(17),
    [aux_sym_song_title_token1] = ACTIONS(17),
    [anon_sym_Music] = ACTIONS(19),
    [anon_sym_music] = ACTIONS(19),
    [anon_sym_Composition] = ACTIONS(19),
    [anon_sym_composition] = ACTIONS(19),
    [anon_sym_Composer] = ACTIONS(19),
    [anon_sym_composer] = ACTIONS(19),
    [anon_sym_Compose] = ACTIONS(19),
    [anon_sym_compose] = ACTIONS(19),
    [anon_sym_Lyrics] = ACTIONS(19),
    [anon_sym_lyrics] = ACTIONS(19),
    [anon_sym_Lyricist] = ACTIONS(19),
    [anon_sym_lyricist] = ACTIONS(19),
    [anon_sym_Lyric] = ACTIONS(19),
    [anon_sym_lyric] = ACTIONS(19),
    [anon_sym_Arrangement] = ACTIONS(19),
    [anon_sym_arrangement] = ACTIONS(19),
    [anon_sym_Arranger] = ACTIONS(19),
    [anon_sym_arranger] = ACTIONS(19),
    [anon_sym_Arrange] = ACTIONS(19),
    [anon_sym_arrange] = ACTIONS(19),
    [anon_sym_Vocal] = ACTIONS(19),
    [anon_sym_vocal] = ACTIONS(19),
    [anon_sym_Vo] = ACTIONS(19),
    [anon_sym_vo] = ACTIONS(19),
    [anon_sym_Performer] = ACTIONS(19),
    [anon_sym_performer] = ACTIONS(19),
    [anon_sym_Illustration] = ACTIONS(19),
    [anon_sym_illustration] = ACTIONS(19),
    [anon_sym_Illust] = ACTIONS(19),
    [anon_sym_illust] = ACTIONS(19),
    [anon_sym_Label] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_Circle] = ACTIONS(19),
    [anon_sym_circle] = ACTIONS(19),
    [anon_sym_Producer] = ACTIONS(19),
    [anon_sym_producer] = ACTIONS(19),
    [anon_sym_Recording] = ACTIONS(19),
    [anon_sym_recording] = ACTIONS(19),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(19),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(19),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(19),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(19),
    [anon_sym_u6b4cu5531] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu66f2] = ACTIONS(19),
    [anon_sym_u7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5e] = ACTIONS(19),
    [anon_sym_u5382u724c] = ACTIONS(19),
    [anon_sym_u811au672c] = ACTIONS(19),
    [anon_sym_u63d2u56fe] = ACTIONS(19),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(19),
    [anon_sym_u51fau7248u65b9] = ACTIONS(19),
    [anon_sym_u5f55u97f3] = ACTIONS(19),
    [anon_sym_u539fu4f5c] = ACTIONS(19),
  },
  [4] = {
    [sym_credit_block] = STATE(56),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(22),
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
    [sym_credit_block] = STATE(56),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(24),
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
    [sym_credit_block] = STATE(56),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(29),
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
  [7] = {
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(29),
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
    [sym_credit_field] = STATE(9),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(9),
    [aux_sym_credit_field_repeat1] = STATE(26),
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
  [9] = {
    [sym_credit_field] = STATE(9),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(9),
    [aux_sym_credit_field_repeat1] = STATE(26),
    [anon_sym_u300a] = ACTIONS(17),
    [aux_sym_song_title_token1] = ACTIONS(17),
    [anon_sym_Music] = ACTIONS(19),
    [anon_sym_music] = ACTIONS(19),
    [anon_sym_Composition] = ACTIONS(19),
    [anon_sym_composition] = ACTIONS(19),
    [anon_sym_Composer] = ACTIONS(19),
    [anon_sym_composer] = ACTIONS(19),
    [anon_sym_Compose] = ACTIONS(19),
    [anon_sym_compose] = ACTIONS(19),
    [anon_sym_Lyrics] = ACTIONS(19),
    [anon_sym_lyrics] = ACTIONS(19),
    [anon_sym_Lyricist] = ACTIONS(19),
    [anon_sym_lyricist] = ACTIONS(19),
    [anon_sym_Lyric] = ACTIONS(19),
    [anon_sym_lyric] = ACTIONS(19),
    [anon_sym_Arrangement] = ACTIONS(19),
    [anon_sym_arrangement] = ACTIONS(19),
    [anon_sym_Arranger] = ACTIONS(19),
    [anon_sym_arranger] = ACTIONS(19),
    [anon_sym_Arrange] = ACTIONS(19),
    [anon_sym_arrange] = ACTIONS(19),
    [anon_sym_Vocal] = ACTIONS(19),
    [anon_sym_vocal] = ACTIONS(19),
    [anon_sym_Vo] = ACTIONS(19),
    [anon_sym_vo] = ACTIONS(19),
    [anon_sym_Performer] = ACTIONS(19),
    [anon_sym_performer] = ACTIONS(19),
    [anon_sym_Illustration] = ACTIONS(19),
    [anon_sym_illustration] = ACTIONS(19),
    [anon_sym_Illust] = ACTIONS(19),
    [anon_sym_illust] = ACTIONS(19),
    [anon_sym_Label] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_Circle] = ACTIONS(19),
    [anon_sym_circle] = ACTIONS(19),
    [anon_sym_Producer] = ACTIONS(19),
    [anon_sym_producer] = ACTIONS(19),
    [anon_sym_Recording] = ACTIONS(19),
    [anon_sym_recording] = ACTIONS(19),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(19),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(19),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(19),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(19),
    [anon_sym_u6b4cu5531] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu66f2] = ACTIONS(19),
    [anon_sym_u7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5e] = ACTIONS(19),
    [anon_sym_u5382u724c] = ACTIONS(19),
    [anon_sym_u811au672c] = ACTIONS(19),
    [anon_sym_u63d2u56fe] = ACTIONS(19),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(19),
    [anon_sym_u51fau7248u65b9] = ACTIONS(19),
    [anon_sym_u5f55u97f3] = ACTIONS(19),
    [anon_sym_u539fu4f5c] = ACTIONS(19),
  },
  [10] = {
    [sym_credit_block] = STATE(60),
    [sym_credit_field] = STATE(8),
    [sym_role] = STATE(67),
    [aux_sym_credit_block_repeat1] = STATE(8),
    [aux_sym_credit_field_repeat1] = STATE(26),
    [anon_sym_AT] = ACTIONS(30),
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
    [sym_feat_field] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_u300b] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [aux_sym_feat_field_token1] = ACTIONS(34),
    [anon_sym_Music] = ACTIONS(32),
    [anon_sym_music] = ACTIONS(32),
    [anon_sym_Composition] = ACTIONS(32),
    [anon_sym_composition] = ACTIONS(32),
    [anon_sym_Composer] = ACTIONS(32),
    [anon_sym_composer] = ACTIONS(32),
    [anon_sym_Compose] = ACTIONS(36),
    [anon_sym_compose] = ACTIONS(36),
    [anon_sym_Lyrics] = ACTIONS(32),
    [anon_sym_lyrics] = ACTIONS(32),
    [anon_sym_Lyricist] = ACTIONS(32),
    [anon_sym_lyricist] = ACTIONS(32),
    [anon_sym_Lyric] = ACTIONS(36),
    [anon_sym_lyric] = ACTIONS(36),
    [anon_sym_Arrangement] = ACTIONS(32),
    [anon_sym_arrangement] = ACTIONS(32),
    [anon_sym_Arranger] = ACTIONS(32),
    [anon_sym_arranger] = ACTIONS(32),
    [anon_sym_Arrange] = ACTIONS(36),
    [anon_sym_arrange] = ACTIONS(36),
    [anon_sym_Vocal] = ACTIONS(32),
    [anon_sym_vocal] = ACTIONS(32),
    [anon_sym_Vo] = ACTIONS(36),
    [anon_sym_vo] = ACTIONS(36),
    [anon_sym_Performer] = ACTIONS(32),
    [anon_sym_performer] = ACTIONS(32),
    [anon_sym_Illustration] = ACTIONS(32),
    [anon_sym_illustration] = ACTIONS(32),
    [anon_sym_Illust] = ACTIONS(36),
    [anon_sym_illust] = ACTIONS(36),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(36),
    [anon_sym_u5382u724c] = ACTIONS(32),
    [anon_sym_u811au672c] = ACTIONS(32),
    [anon_sym_u63d2u56fe] = ACTIONS(32),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(32),
    [anon_sym_u51fau7248u65b9] = ACTIONS(32),
    [anon_sym_u5f55u97f3] = ACTIONS(32),
    [anon_sym_u539fu4f5c] = ACTIONS(32),
  },
  [12] = {
    [aux_sym_credit_field_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_u300b] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(40),
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
    [sym__sep] = ACTIONS(42),
  },
  [13] = {
    [aux_sym_song_title_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_song_title_token1] = ACTIONS(48),
    [aux_sym_feat_field_token1] = ACTIONS(46),
    [anon_sym_Music] = ACTIONS(46),
    [anon_sym_music] = ACTIONS(46),
    [anon_sym_Composition] = ACTIONS(46),
    [anon_sym_composition] = ACTIONS(46),
    [anon_sym_Composer] = ACTIONS(46),
    [anon_sym_composer] = ACTIONS(46),
    [anon_sym_Compose] = ACTIONS(46),
    [anon_sym_compose] = ACTIONS(46),
    [anon_sym_Lyrics] = ACTIONS(46),
    [anon_sym_lyrics] = ACTIONS(46),
    [anon_sym_Lyricist] = ACTIONS(46),
    [anon_sym_lyricist] = ACTIONS(46),
    [anon_sym_Lyric] = ACTIONS(46),
    [anon_sym_lyric] = ACTIONS(46),
    [anon_sym_Arrangement] = ACTIONS(46),
    [anon_sym_arrangement] = ACTIONS(46),
    [anon_sym_Arranger] = ACTIONS(46),
    [anon_sym_arranger] = ACTIONS(46),
    [anon_sym_Arrange] = ACTIONS(46),
    [anon_sym_arrange] = ACTIONS(46),
    [anon_sym_Vocal] = ACTIONS(46),
    [anon_sym_vocal] = ACTIONS(46),
    [anon_sym_Vo] = ACTIONS(46),
    [anon_sym_vo] = ACTIONS(46),
    [anon_sym_Performer] = ACTIONS(46),
    [anon_sym_performer] = ACTIONS(46),
    [anon_sym_Illustration] = ACTIONS(46),
    [anon_sym_illustration] = ACTIONS(46),
    [anon_sym_Illust] = ACTIONS(46),
    [anon_sym_illust] = ACTIONS(46),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(46),
    [anon_sym_u5382u724c] = ACTIONS(46),
    [anon_sym_u811au672c] = ACTIONS(46),
    [anon_sym_u63d2u56fe] = ACTIONS(46),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(46),
    [anon_sym_u51fau7248u65b9] = ACTIONS(46),
    [anon_sym_u5f55u97f3] = ACTIONS(46),
    [anon_sym_u539fu4f5c] = ACTIONS(46),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_u300a] = ACTIONS(52),
    [anon_sym_LF] = ACTIONS(54),
    [aux_sym_song_title_token1] = ACTIONS(52),
    [sym_creator_name] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(52),
    [anon_sym_music] = ACTIONS(52),
    [anon_sym_Composition] = ACTIONS(52),
    [anon_sym_composition] = ACTIONS(52),
    [anon_sym_Composer] = ACTIONS(52),
    [anon_sym_composer] = ACTIONS(52),
    [anon_sym_Compose] = ACTIONS(52),
    [anon_sym_compose] = ACTIONS(52),
    [anon_sym_Lyrics] = ACTIONS(52),
    [anon_sym_lyrics] = ACTIONS(52),
    [anon_sym_Lyricist] = ACTIONS(52),
    [anon_sym_lyricist] = ACTIONS(52),
    [anon_sym_Lyric] = ACTIONS(52),
    [anon_sym_lyric] = ACTIONS(52),
    [anon_sym_Arrangement] = ACTIONS(52),
    [anon_sym_arrangement] = ACTIONS(52),
    [anon_sym_Arranger] = ACTIONS(52),
    [anon_sym_arranger] = ACTIONS(52),
    [anon_sym_Arrange] = ACTIONS(52),
    [anon_sym_arrange] = ACTIONS(52),
    [anon_sym_Vocal] = ACTIONS(52),
    [anon_sym_vocal] = ACTIONS(52),
    [anon_sym_Vo] = ACTIONS(52),
    [anon_sym_vo] = ACTIONS(52),
    [anon_sym_Performer] = ACTIONS(52),
    [anon_sym_performer] = ACTIONS(52),
    [anon_sym_Illustration] = ACTIONS(52),
    [anon_sym_illustration] = ACTIONS(52),
    [anon_sym_Illust] = ACTIONS(52),
    [anon_sym_illust] = ACTIONS(52),
    [anon_sym_Label] = ACTIONS(52),
    [anon_sym_label] = ACTIONS(52),
    [anon_sym_Circle] = ACTIONS(52),
    [anon_sym_circle] = ACTIONS(52),
    [anon_sym_Producer] = ACTIONS(52),
    [anon_sym_producer] = ACTIONS(52),
    [anon_sym_Recording] = ACTIONS(52),
    [anon_sym_recording] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u6b4cu5531] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu66f2] = ACTIONS(52),
    [anon_sym_u7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5e] = ACTIONS(52),
    [anon_sym_u5382u724c] = ACTIONS(52),
    [anon_sym_u811au672c] = ACTIONS(52),
    [anon_sym_u63d2u56fe] = ACTIONS(52),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(52),
    [anon_sym_u51fau7248u65b9] = ACTIONS(52),
    [anon_sym_u5f55u97f3] = ACTIONS(52),
    [anon_sym_u539fu4f5c] = ACTIONS(52),
  },
  [15] = {
    [aux_sym_credit_field_repeat2] = STATE(15),
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
  [16] = {
    [aux_sym_credit_field_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_u300b] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(67),
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
    [sym__sep] = ACTIONS(42),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(73),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [sym_creator_name] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(71),
    [anon_sym_music] = ACTIONS(71),
    [anon_sym_Composition] = ACTIONS(71),
    [anon_sym_composition] = ACTIONS(71),
    [anon_sym_Composer] = ACTIONS(71),
    [anon_sym_composer] = ACTIONS(71),
    [anon_sym_Compose] = ACTIONS(71),
    [anon_sym_compose] = ACTIONS(71),
    [anon_sym_Lyrics] = ACTIONS(71),
    [anon_sym_lyrics] = ACTIONS(71),
    [anon_sym_Lyricist] = ACTIONS(71),
    [anon_sym_lyricist] = ACTIONS(71),
    [anon_sym_Lyric] = ACTIONS(71),
    [anon_sym_lyric] = ACTIONS(71),
    [anon_sym_Arrangement] = ACTIONS(71),
    [anon_sym_arrangement] = ACTIONS(71),
    [anon_sym_Arranger] = ACTIONS(71),
    [anon_sym_arranger] = ACTIONS(71),
    [anon_sym_Arrange] = ACTIONS(71),
    [anon_sym_arrange] = ACTIONS(71),
    [anon_sym_Vocal] = ACTIONS(71),
    [anon_sym_vocal] = ACTIONS(71),
    [anon_sym_Vo] = ACTIONS(71),
    [anon_sym_vo] = ACTIONS(71),
    [anon_sym_Performer] = ACTIONS(71),
    [anon_sym_performer] = ACTIONS(71),
    [anon_sym_Illustration] = ACTIONS(71),
    [anon_sym_illustration] = ACTIONS(71),
    [anon_sym_Illust] = ACTIONS(71),
    [anon_sym_illust] = ACTIONS(71),
    [anon_sym_Label] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_Circle] = ACTIONS(71),
    [anon_sym_circle] = ACTIONS(71),
    [anon_sym_Producer] = ACTIONS(71),
    [anon_sym_producer] = ACTIONS(71),
    [anon_sym_Recording] = ACTIONS(71),
    [anon_sym_recording] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
  },
  [18] = {
    [aux_sym_song_title_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(77),
    [aux_sym_song_title_token1] = ACTIONS(79),
    [aux_sym_feat_field_token1] = ACTIONS(77),
    [anon_sym_Music] = ACTIONS(77),
    [anon_sym_music] = ACTIONS(77),
    [anon_sym_Composition] = ACTIONS(77),
    [anon_sym_composition] = ACTIONS(77),
    [anon_sym_Composer] = ACTIONS(77),
    [anon_sym_composer] = ACTIONS(77),
    [anon_sym_Compose] = ACTIONS(77),
    [anon_sym_compose] = ACTIONS(77),
    [anon_sym_Lyrics] = ACTIONS(77),
    [anon_sym_lyrics] = ACTIONS(77),
    [anon_sym_Lyricist] = ACTIONS(77),
    [anon_sym_lyricist] = ACTIONS(77),
    [anon_sym_Lyric] = ACTIONS(77),
    [anon_sym_lyric] = ACTIONS(77),
    [anon_sym_Arrangement] = ACTIONS(77),
    [anon_sym_arrangement] = ACTIONS(77),
    [anon_sym_Arranger] = ACTIONS(77),
    [anon_sym_arranger] = ACTIONS(77),
    [anon_sym_Arrange] = ACTIONS(77),
    [anon_sym_arrange] = ACTIONS(77),
    [anon_sym_Vocal] = ACTIONS(77),
    [anon_sym_vocal] = ACTIONS(77),
    [anon_sym_Vo] = ACTIONS(77),
    [anon_sym_vo] = ACTIONS(77),
    [anon_sym_Performer] = ACTIONS(77),
    [anon_sym_performer] = ACTIONS(77),
    [anon_sym_Illustration] = ACTIONS(77),
    [anon_sym_illustration] = ACTIONS(77),
    [anon_sym_Illust] = ACTIONS(77),
    [anon_sym_illust] = ACTIONS(77),
    [anon_sym_Label] = ACTIONS(77),
    [anon_sym_label] = ACTIONS(77),
    [anon_sym_Circle] = ACTIONS(77),
    [anon_sym_circle] = ACTIONS(77),
    [anon_sym_Producer] = ACTIONS(77),
    [anon_sym_producer] = ACTIONS(77),
    [anon_sym_Recording] = ACTIONS(77),
    [anon_sym_recording] = ACTIONS(77),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(77),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(77),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(77),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(77),
    [anon_sym_u6b4cu5531] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(77),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu66f2] = ACTIONS(77),
    [anon_sym_u7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5e] = ACTIONS(77),
    [anon_sym_u5382u724c] = ACTIONS(77),
    [anon_sym_u811au672c] = ACTIONS(77),
    [anon_sym_u63d2u56fe] = ACTIONS(77),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(77),
    [anon_sym_u51fau7248u65b9] = ACTIONS(77),
    [anon_sym_u5f55u97f3] = ACTIONS(77),
    [anon_sym_u539fu4f5c] = ACTIONS(77),
  },
  [19] = {
    [anon_sym_u300a] = ACTIONS(52),
    [anon_sym_LF] = ACTIONS(82),
    [aux_sym_song_title_token1] = ACTIONS(52),
    [sym_creator_name] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(52),
    [anon_sym_music] = ACTIONS(52),
    [anon_sym_Composition] = ACTIONS(52),
    [anon_sym_composition] = ACTIONS(52),
    [anon_sym_Composer] = ACTIONS(52),
    [anon_sym_composer] = ACTIONS(52),
    [anon_sym_Compose] = ACTIONS(52),
    [anon_sym_compose] = ACTIONS(52),
    [anon_sym_Lyrics] = ACTIONS(52),
    [anon_sym_lyrics] = ACTIONS(52),
    [anon_sym_Lyricist] = ACTIONS(52),
    [anon_sym_lyricist] = ACTIONS(52),
    [anon_sym_Lyric] = ACTIONS(52),
    [anon_sym_lyric] = ACTIONS(52),
    [anon_sym_Arrangement] = ACTIONS(52),
    [anon_sym_arrangement] = ACTIONS(52),
    [anon_sym_Arranger] = ACTIONS(52),
    [anon_sym_arranger] = ACTIONS(52),
    [anon_sym_Arrange] = ACTIONS(52),
    [anon_sym_arrange] = ACTIONS(52),
    [anon_sym_Vocal] = ACTIONS(52),
    [anon_sym_vocal] = ACTIONS(52),
    [anon_sym_Vo] = ACTIONS(52),
    [anon_sym_vo] = ACTIONS(52),
    [anon_sym_Performer] = ACTIONS(52),
    [anon_sym_performer] = ACTIONS(52),
    [anon_sym_Illustration] = ACTIONS(52),
    [anon_sym_illustration] = ACTIONS(52),
    [anon_sym_Illust] = ACTIONS(52),
    [anon_sym_illust] = ACTIONS(52),
    [anon_sym_Label] = ACTIONS(52),
    [anon_sym_label] = ACTIONS(52),
    [anon_sym_Circle] = ACTIONS(52),
    [anon_sym_circle] = ACTIONS(52),
    [anon_sym_Producer] = ACTIONS(52),
    [anon_sym_producer] = ACTIONS(52),
    [anon_sym_Recording] = ACTIONS(52),
    [anon_sym_recording] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u6b4cu5531] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu66f2] = ACTIONS(52),
    [anon_sym_u7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5e] = ACTIONS(52),
    [anon_sym_u5382u724c] = ACTIONS(52),
    [anon_sym_u811au672c] = ACTIONS(52),
    [anon_sym_u63d2u56fe] = ACTIONS(52),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(52),
    [anon_sym_u51fau7248u65b9] = ACTIONS(52),
    [anon_sym_u5f55u97f3] = ACTIONS(52),
    [anon_sym_u539fu4f5c] = ACTIONS(52),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_u300a] = ACTIONS(86),
    [aux_sym_song_title_token1] = ACTIONS(86),
    [anon_sym_Music] = ACTIONS(86),
    [anon_sym_music] = ACTIONS(86),
    [anon_sym_Composition] = ACTIONS(86),
    [anon_sym_composition] = ACTIONS(86),
    [anon_sym_Composer] = ACTIONS(86),
    [anon_sym_composer] = ACTIONS(86),
    [anon_sym_Compose] = ACTIONS(86),
    [anon_sym_compose] = ACTIONS(86),
    [anon_sym_Lyrics] = ACTIONS(86),
    [anon_sym_lyrics] = ACTIONS(86),
    [anon_sym_Lyricist] = ACTIONS(86),
    [anon_sym_lyricist] = ACTIONS(86),
    [anon_sym_Lyric] = ACTIONS(86),
    [anon_sym_lyric] = ACTIONS(86),
    [anon_sym_Arrangement] = ACTIONS(86),
    [anon_sym_arrangement] = ACTIONS(86),
    [anon_sym_Arranger] = ACTIONS(86),
    [anon_sym_arranger] = ACTIONS(86),
    [anon_sym_Arrange] = ACTIONS(86),
    [anon_sym_arrange] = ACTIONS(86),
    [anon_sym_Vocal] = ACTIONS(86),
    [anon_sym_vocal] = ACTIONS(86),
    [anon_sym_Vo] = ACTIONS(86),
    [anon_sym_vo] = ACTIONS(86),
    [anon_sym_Performer] = ACTIONS(86),
    [anon_sym_performer] = ACTIONS(86),
    [anon_sym_Illustration] = ACTIONS(86),
    [anon_sym_illustration] = ACTIONS(86),
    [anon_sym_Illust] = ACTIONS(86),
    [anon_sym_illust] = ACTIONS(86),
    [anon_sym_Label] = ACTIONS(86),
    [anon_sym_label] = ACTIONS(86),
    [anon_sym_Circle] = ACTIONS(86),
    [anon_sym_circle] = ACTIONS(86),
    [anon_sym_Producer] = ACTIONS(86),
    [anon_sym_producer] = ACTIONS(86),
    [anon_sym_Recording] = ACTIONS(86),
    [anon_sym_recording] = ACTIONS(86),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(86),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(86),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(86),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(86),
    [anon_sym_u6b4cu5531] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(86),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu66f2] = ACTIONS(86),
    [anon_sym_u7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5e] = ACTIONS(86),
    [anon_sym_u5382u724c] = ACTIONS(86),
    [anon_sym_u811au672c] = ACTIONS(86),
    [anon_sym_u63d2u56fe] = ACTIONS(86),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(86),
    [anon_sym_u51fau7248u65b9] = ACTIONS(86),
    [anon_sym_u5f55u97f3] = ACTIONS(86),
    [anon_sym_u539fu4f5c] = ACTIONS(86),
    [sym__sep] = ACTIONS(88),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_u300a] = ACTIONS(92),
    [aux_sym_song_title_token1] = ACTIONS(92),
    [anon_sym_Music] = ACTIONS(92),
    [anon_sym_music] = ACTIONS(92),
    [anon_sym_Composition] = ACTIONS(92),
    [anon_sym_composition] = ACTIONS(92),
    [anon_sym_Composer] = ACTIONS(92),
    [anon_sym_composer] = ACTIONS(92),
    [anon_sym_Compose] = ACTIONS(92),
    [anon_sym_compose] = ACTIONS(92),
    [anon_sym_Lyrics] = ACTIONS(92),
    [anon_sym_lyrics] = ACTIONS(92),
    [anon_sym_Lyricist] = ACTIONS(92),
    [anon_sym_lyricist] = ACTIONS(92),
    [anon_sym_Lyric] = ACTIONS(92),
    [anon_sym_lyric] = ACTIONS(92),
    [anon_sym_Arrangement] = ACTIONS(92),
    [anon_sym_arrangement] = ACTIONS(92),
    [anon_sym_Arranger] = ACTIONS(92),
    [anon_sym_arranger] = ACTIONS(92),
    [anon_sym_Arrange] = ACTIONS(92),
    [anon_sym_arrange] = ACTIONS(92),
    [anon_sym_Vocal] = ACTIONS(92),
    [anon_sym_vocal] = ACTIONS(92),
    [anon_sym_Vo] = ACTIONS(92),
    [anon_sym_vo] = ACTIONS(92),
    [anon_sym_Performer] = ACTIONS(92),
    [anon_sym_performer] = ACTIONS(92),
    [anon_sym_Illustration] = ACTIONS(92),
    [anon_sym_illustration] = ACTIONS(92),
    [anon_sym_Illust] = ACTIONS(92),
    [anon_sym_illust] = ACTIONS(92),
    [anon_sym_Label] = ACTIONS(92),
    [anon_sym_label] = ACTIONS(92),
    [anon_sym_Circle] = ACTIONS(92),
    [anon_sym_circle] = ACTIONS(92),
    [anon_sym_Producer] = ACTIONS(92),
    [anon_sym_producer] = ACTIONS(92),
    [anon_sym_Recording] = ACTIONS(92),
    [anon_sym_recording] = ACTIONS(92),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(92),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(92),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(92),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(92),
    [anon_sym_u6b4cu5531] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu66f2] = ACTIONS(92),
    [anon_sym_u7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5e] = ACTIONS(92),
    [anon_sym_u5382u724c] = ACTIONS(92),
    [anon_sym_u811au672c] = ACTIONS(92),
    [anon_sym_u63d2u56fe] = ACTIONS(92),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(92),
    [anon_sym_u51fau7248u65b9] = ACTIONS(92),
    [anon_sym_u5f55u97f3] = ACTIONS(92),
    [anon_sym_u539fu4f5c] = ACTIONS(92),
    [sym__sep] = ACTIONS(94),
  },
  [22] = {
    [anon_sym_u300a] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(96),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [sym_creator_name] = ACTIONS(56),
    [anon_sym_Music] = ACTIONS(71),
    [anon_sym_music] = ACTIONS(71),
    [anon_sym_Composition] = ACTIONS(71),
    [anon_sym_composition] = ACTIONS(71),
    [anon_sym_Composer] = ACTIONS(71),
    [anon_sym_composer] = ACTIONS(71),
    [anon_sym_Compose] = ACTIONS(71),
    [anon_sym_compose] = ACTIONS(71),
    [anon_sym_Lyrics] = ACTIONS(71),
    [anon_sym_lyrics] = ACTIONS(71),
    [anon_sym_Lyricist] = ACTIONS(71),
    [anon_sym_lyricist] = ACTIONS(71),
    [anon_sym_Lyric] = ACTIONS(71),
    [anon_sym_lyric] = ACTIONS(71),
    [anon_sym_Arrangement] = ACTIONS(71),
    [anon_sym_arrangement] = ACTIONS(71),
    [anon_sym_Arranger] = ACTIONS(71),
    [anon_sym_arranger] = ACTIONS(71),
    [anon_sym_Arrange] = ACTIONS(71),
    [anon_sym_arrange] = ACTIONS(71),
    [anon_sym_Vocal] = ACTIONS(71),
    [anon_sym_vocal] = ACTIONS(71),
    [anon_sym_Vo] = ACTIONS(71),
    [anon_sym_vo] = ACTIONS(71),
    [anon_sym_Performer] = ACTIONS(71),
    [anon_sym_performer] = ACTIONS(71),
    [anon_sym_Illustration] = ACTIONS(71),
    [anon_sym_illustration] = ACTIONS(71),
    [anon_sym_Illust] = ACTIONS(71),
    [anon_sym_illust] = ACTIONS(71),
    [anon_sym_Label] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_Circle] = ACTIONS(71),
    [anon_sym_circle] = ACTIONS(71),
    [anon_sym_Producer] = ACTIONS(71),
    [anon_sym_producer] = ACTIONS(71),
    [anon_sym_Recording] = ACTIONS(71),
    [anon_sym_recording] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_u300b] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_Music] = ACTIONS(100),
    [anon_sym_music] = ACTIONS(100),
    [anon_sym_Composition] = ACTIONS(100),
    [anon_sym_composition] = ACTIONS(100),
    [anon_sym_Composer] = ACTIONS(100),
    [anon_sym_composer] = ACTIONS(100),
    [anon_sym_Compose] = ACTIONS(100),
    [anon_sym_compose] = ACTIONS(100),
    [anon_sym_Lyrics] = ACTIONS(100),
    [anon_sym_lyrics] = ACTIONS(100),
    [anon_sym_Lyricist] = ACTIONS(100),
    [anon_sym_lyricist] = ACTIONS(100),
    [anon_sym_Lyric] = ACTIONS(100),
    [anon_sym_lyric] = ACTIONS(100),
    [anon_sym_Arrangement] = ACTIONS(100),
    [anon_sym_arrangement] = ACTIONS(100),
    [anon_sym_Arranger] = ACTIONS(100),
    [anon_sym_arranger] = ACTIONS(100),
    [anon_sym_Arrange] = ACTIONS(100),
    [anon_sym_arrange] = ACTIONS(100),
    [anon_sym_Vocal] = ACTIONS(100),
    [anon_sym_vocal] = ACTIONS(100),
    [anon_sym_Vo] = ACTIONS(100),
    [anon_sym_vo] = ACTIONS(100),
    [anon_sym_Performer] = ACTIONS(100),
    [anon_sym_performer] = ACTIONS(100),
    [anon_sym_Illustration] = ACTIONS(100),
    [anon_sym_illustration] = ACTIONS(100),
    [anon_sym_Illust] = ACTIONS(100),
    [anon_sym_illust] = ACTIONS(100),
    [anon_sym_Label] = ACTIONS(100),
    [anon_sym_label] = ACTIONS(100),
    [anon_sym_Circle] = ACTIONS(100),
    [anon_sym_circle] = ACTIONS(100),
    [anon_sym_Producer] = ACTIONS(100),
    [anon_sym_producer] = ACTIONS(100),
    [anon_sym_Recording] = ACTIONS(100),
    [anon_sym_recording] = ACTIONS(100),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(100),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(100),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(100),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(100),
    [anon_sym_u6b4cu5531] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu66f2] = ACTIONS(100),
    [anon_sym_u7de8u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5e] = ACTIONS(100),
    [anon_sym_u5382u724c] = ACTIONS(100),
    [anon_sym_u811au672c] = ACTIONS(100),
    [anon_sym_u63d2u56fe] = ACTIONS(100),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(100),
    [anon_sym_u51fau7248u65b9] = ACTIONS(100),
    [anon_sym_u5f55u97f3] = ACTIONS(100),
    [anon_sym_u539fu4f5c] = ACTIONS(100),
    [sym__sep] = ACTIONS(98),
  },
  [24] = {
    [aux_sym_song_title_repeat1] = STATE(25),
    [anon_sym_AT] = ACTIONS(46),
    [aux_sym_song_title_token1] = ACTIONS(102),
    [aux_sym_feat_field_token1] = ACTIONS(46),
    [anon_sym_Music] = ACTIONS(46),
    [anon_sym_music] = ACTIONS(46),
    [anon_sym_Composition] = ACTIONS(46),
    [anon_sym_composition] = ACTIONS(46),
    [anon_sym_Composer] = ACTIONS(46),
    [anon_sym_composer] = ACTIONS(46),
    [anon_sym_Compose] = ACTIONS(46),
    [anon_sym_compose] = ACTIONS(46),
    [anon_sym_Lyrics] = ACTIONS(46),
    [anon_sym_lyrics] = ACTIONS(46),
    [anon_sym_Lyricist] = ACTIONS(46),
    [anon_sym_lyricist] = ACTIONS(46),
    [anon_sym_Lyric] = ACTIONS(46),
    [anon_sym_lyric] = ACTIONS(46),
    [anon_sym_Arrangement] = ACTIONS(46),
    [anon_sym_arrangement] = ACTIONS(46),
    [anon_sym_Arranger] = ACTIONS(46),
    [anon_sym_arranger] = ACTIONS(46),
    [anon_sym_Arrange] = ACTIONS(46),
    [anon_sym_arrange] = ACTIONS(46),
    [anon_sym_Vocal] = ACTIONS(46),
    [anon_sym_vocal] = ACTIONS(46),
    [anon_sym_Vo] = ACTIONS(46),
    [anon_sym_vo] = ACTIONS(46),
    [anon_sym_Performer] = ACTIONS(46),
    [anon_sym_performer] = ACTIONS(46),
    [anon_sym_Illustration] = ACTIONS(46),
    [anon_sym_illustration] = ACTIONS(46),
    [anon_sym_Illust] = ACTIONS(46),
    [anon_sym_illust] = ACTIONS(46),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(46),
    [anon_sym_u5382u724c] = ACTIONS(46),
    [anon_sym_u811au672c] = ACTIONS(46),
    [anon_sym_u63d2u56fe] = ACTIONS(46),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(46),
    [anon_sym_u51fau7248u65b9] = ACTIONS(46),
    [anon_sym_u5f55u97f3] = ACTIONS(46),
    [anon_sym_u539fu4f5c] = ACTIONS(46),
  },
  [25] = {
    [aux_sym_song_title_repeat1] = STATE(25),
    [anon_sym_AT] = ACTIONS(77),
    [aux_sym_song_title_token1] = ACTIONS(104),
    [aux_sym_feat_field_token1] = ACTIONS(77),
    [anon_sym_Music] = ACTIONS(77),
    [anon_sym_music] = ACTIONS(77),
    [anon_sym_Composition] = ACTIONS(77),
    [anon_sym_composition] = ACTIONS(77),
    [anon_sym_Composer] = ACTIONS(77),
    [anon_sym_composer] = ACTIONS(77),
    [anon_sym_Compose] = ACTIONS(77),
    [anon_sym_compose] = ACTIONS(77),
    [anon_sym_Lyrics] = ACTIONS(77),
    [anon_sym_lyrics] = ACTIONS(77),
    [anon_sym_Lyricist] = ACTIONS(77),
    [anon_sym_lyricist] = ACTIONS(77),
    [anon_sym_Lyric] = ACTIONS(77),
    [anon_sym_lyric] = ACTIONS(77),
    [anon_sym_Arrangement] = ACTIONS(77),
    [anon_sym_arrangement] = ACTIONS(77),
    [anon_sym_Arranger] = ACTIONS(77),
    [anon_sym_arranger] = ACTIONS(77),
    [anon_sym_Arrange] = ACTIONS(77),
    [anon_sym_arrange] = ACTIONS(77),
    [anon_sym_Vocal] = ACTIONS(77),
    [anon_sym_vocal] = ACTIONS(77),
    [anon_sym_Vo] = ACTIONS(77),
    [anon_sym_vo] = ACTIONS(77),
    [anon_sym_Performer] = ACTIONS(77),
    [anon_sym_performer] = ACTIONS(77),
    [anon_sym_Illustration] = ACTIONS(77),
    [anon_sym_illustration] = ACTIONS(77),
    [anon_sym_Illust] = ACTIONS(77),
    [anon_sym_illust] = ACTIONS(77),
    [anon_sym_Label] = ACTIONS(77),
    [anon_sym_label] = ACTIONS(77),
    [anon_sym_Circle] = ACTIONS(77),
    [anon_sym_circle] = ACTIONS(77),
    [anon_sym_Producer] = ACTIONS(77),
    [anon_sym_producer] = ACTIONS(77),
    [anon_sym_Recording] = ACTIONS(77),
    [anon_sym_recording] = ACTIONS(77),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(77),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(77),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(77),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(77),
    [anon_sym_u6b4cu5531] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(77),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu66f2] = ACTIONS(77),
    [anon_sym_u7de8u66f2] = ACTIONS(77),
    [anon_sym_u4f5cu8a5e] = ACTIONS(77),
    [anon_sym_u5382u724c] = ACTIONS(77),
    [anon_sym_u811au672c] = ACTIONS(77),
    [anon_sym_u63d2u56fe] = ACTIONS(77),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(77),
    [anon_sym_u51fau7248u65b9] = ACTIONS(77),
    [anon_sym_u5f55u97f3] = ACTIONS(77),
    [anon_sym_u539fu4f5c] = ACTIONS(77),
  },
  [26] = {
    [sym_role] = STATE(67),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [sym_creator_name] = ACTIONS(107),
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
  [27] = {
    [anon_sym_u300a] = ACTIONS(92),
    [aux_sym_song_title_token1] = ACTIONS(92),
    [anon_sym_Music] = ACTIONS(92),
    [anon_sym_music] = ACTIONS(92),
    [anon_sym_Composition] = ACTIONS(92),
    [anon_sym_composition] = ACTIONS(92),
    [anon_sym_Composer] = ACTIONS(92),
    [anon_sym_composer] = ACTIONS(92),
    [anon_sym_Compose] = ACTIONS(92),
    [anon_sym_compose] = ACTIONS(92),
    [anon_sym_Lyrics] = ACTIONS(92),
    [anon_sym_lyrics] = ACTIONS(92),
    [anon_sym_Lyricist] = ACTIONS(92),
    [anon_sym_lyricist] = ACTIONS(92),
    [anon_sym_Lyric] = ACTIONS(92),
    [anon_sym_lyric] = ACTIONS(92),
    [anon_sym_Arrangement] = ACTIONS(92),
    [anon_sym_arrangement] = ACTIONS(92),
    [anon_sym_Arranger] = ACTIONS(92),
    [anon_sym_arranger] = ACTIONS(92),
    [anon_sym_Arrange] = ACTIONS(92),
    [anon_sym_arrange] = ACTIONS(92),
    [anon_sym_Vocal] = ACTIONS(92),
    [anon_sym_vocal] = ACTIONS(92),
    [anon_sym_Vo] = ACTIONS(92),
    [anon_sym_vo] = ACTIONS(92),
    [anon_sym_Performer] = ACTIONS(92),
    [anon_sym_performer] = ACTIONS(92),
    [anon_sym_Illustration] = ACTIONS(92),
    [anon_sym_illustration] = ACTIONS(92),
    [anon_sym_Illust] = ACTIONS(92),
    [anon_sym_illust] = ACTIONS(92),
    [anon_sym_Label] = ACTIONS(92),
    [anon_sym_label] = ACTIONS(92),
    [anon_sym_Circle] = ACTIONS(92),
    [anon_sym_circle] = ACTIONS(92),
    [anon_sym_Producer] = ACTIONS(92),
    [anon_sym_producer] = ACTIONS(92),
    [anon_sym_Recording] = ACTIONS(92),
    [anon_sym_recording] = ACTIONS(92),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(92),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(92),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(92),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(92),
    [anon_sym_u6b4cu5531] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu66f2] = ACTIONS(92),
    [anon_sym_u7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5e] = ACTIONS(92),
    [anon_sym_u5382u724c] = ACTIONS(92),
    [anon_sym_u811au672c] = ACTIONS(92),
    [anon_sym_u63d2u56fe] = ACTIONS(92),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(92),
    [anon_sym_u51fau7248u65b9] = ACTIONS(92),
    [anon_sym_u5f55u97f3] = ACTIONS(92),
    [anon_sym_u539fu4f5c] = ACTIONS(92),
    [sym__sep] = ACTIONS(109),
  },
  [28] = {
    [sym_role] = STATE(67),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [sym_creator_name] = ACTIONS(111),
    [anon_sym_Music] = ACTIONS(113),
    [anon_sym_music] = ACTIONS(113),
    [anon_sym_Composition] = ACTIONS(113),
    [anon_sym_composition] = ACTIONS(113),
    [anon_sym_Composer] = ACTIONS(113),
    [anon_sym_composer] = ACTIONS(113),
    [anon_sym_Compose] = ACTIONS(113),
    [anon_sym_compose] = ACTIONS(113),
    [anon_sym_Lyrics] = ACTIONS(113),
    [anon_sym_lyrics] = ACTIONS(113),
    [anon_sym_Lyricist] = ACTIONS(113),
    [anon_sym_lyricist] = ACTIONS(113),
    [anon_sym_Lyric] = ACTIONS(113),
    [anon_sym_lyric] = ACTIONS(113),
    [anon_sym_Arrangement] = ACTIONS(113),
    [anon_sym_arrangement] = ACTIONS(113),
    [anon_sym_Arranger] = ACTIONS(113),
    [anon_sym_arranger] = ACTIONS(113),
    [anon_sym_Arrange] = ACTIONS(113),
    [anon_sym_arrange] = ACTIONS(113),
    [anon_sym_Vocal] = ACTIONS(113),
    [anon_sym_vocal] = ACTIONS(113),
    [anon_sym_Vo] = ACTIONS(113),
    [anon_sym_vo] = ACTIONS(113),
    [anon_sym_Performer] = ACTIONS(113),
    [anon_sym_performer] = ACTIONS(113),
    [anon_sym_Illustration] = ACTIONS(113),
    [anon_sym_illustration] = ACTIONS(113),
    [anon_sym_Illust] = ACTIONS(113),
    [anon_sym_illust] = ACTIONS(113),
    [anon_sym_Label] = ACTIONS(113),
    [anon_sym_label] = ACTIONS(113),
    [anon_sym_Circle] = ACTIONS(113),
    [anon_sym_circle] = ACTIONS(113),
    [anon_sym_Producer] = ACTIONS(113),
    [anon_sym_producer] = ACTIONS(113),
    [anon_sym_Recording] = ACTIONS(113),
    [anon_sym_recording] = ACTIONS(113),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(113),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(113),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(113),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(113),
    [anon_sym_u6b4cu5531] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu66f2] = ACTIONS(113),
    [anon_sym_u7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5e] = ACTIONS(113),
    [anon_sym_u5382u724c] = ACTIONS(113),
    [anon_sym_u811au672c] = ACTIONS(113),
    [anon_sym_u63d2u56fe] = ACTIONS(113),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(113),
    [anon_sym_u51fau7248u65b9] = ACTIONS(113),
    [anon_sym_u5f55u97f3] = ACTIONS(113),
    [anon_sym_u539fu4f5c] = ACTIONS(113),
  },
  [29] = {
    [sym_role] = STATE(67),
    [aux_sym_credit_field_repeat1] = STATE(28),
    [sym_creator_name] = ACTIONS(116),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_u300a] = ACTIONS(52),
    [aux_sym_song_title_token1] = ACTIONS(52),
    [anon_sym_Music] = ACTIONS(52),
    [anon_sym_music] = ACTIONS(52),
    [anon_sym_Composition] = ACTIONS(52),
    [anon_sym_composition] = ACTIONS(52),
    [anon_sym_Composer] = ACTIONS(52),
    [anon_sym_composer] = ACTIONS(52),
    [anon_sym_Compose] = ACTIONS(52),
    [anon_sym_compose] = ACTIONS(52),
    [anon_sym_Lyrics] = ACTIONS(52),
    [anon_sym_lyrics] = ACTIONS(52),
    [anon_sym_Lyricist] = ACTIONS(52),
    [anon_sym_lyricist] = ACTIONS(52),
    [anon_sym_Lyric] = ACTIONS(52),
    [anon_sym_lyric] = ACTIONS(52),
    [anon_sym_Arrangement] = ACTIONS(52),
    [anon_sym_arrangement] = ACTIONS(52),
    [anon_sym_Arranger] = ACTIONS(52),
    [anon_sym_arranger] = ACTIONS(52),
    [anon_sym_Arrange] = ACTIONS(52),
    [anon_sym_arrange] = ACTIONS(52),
    [anon_sym_Vocal] = ACTIONS(52),
    [anon_sym_vocal] = ACTIONS(52),
    [anon_sym_Vo] = ACTIONS(52),
    [anon_sym_vo] = ACTIONS(52),
    [anon_sym_Performer] = ACTIONS(52),
    [anon_sym_performer] = ACTIONS(52),
    [anon_sym_Illustration] = ACTIONS(52),
    [anon_sym_illustration] = ACTIONS(52),
    [anon_sym_Illust] = ACTIONS(52),
    [anon_sym_illust] = ACTIONS(52),
    [anon_sym_Label] = ACTIONS(52),
    [anon_sym_label] = ACTIONS(52),
    [anon_sym_Circle] = ACTIONS(52),
    [anon_sym_circle] = ACTIONS(52),
    [anon_sym_Producer] = ACTIONS(52),
    [anon_sym_producer] = ACTIONS(52),
    [anon_sym_Recording] = ACTIONS(52),
    [anon_sym_recording] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u6b4cu5531] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu66f2] = ACTIONS(52),
    [anon_sym_u7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5e] = ACTIONS(52),
    [anon_sym_u5382u724c] = ACTIONS(52),
    [anon_sym_u811au672c] = ACTIONS(52),
    [anon_sym_u63d2u56fe] = ACTIONS(52),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(52),
    [anon_sym_u51fau7248u65b9] = ACTIONS(52),
    [anon_sym_u5f55u97f3] = ACTIONS(52),
    [anon_sym_u539fu4f5c] = ACTIONS(52),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [anon_sym_Music] = ACTIONS(71),
    [anon_sym_music] = ACTIONS(71),
    [anon_sym_Composition] = ACTIONS(71),
    [anon_sym_composition] = ACTIONS(71),
    [anon_sym_Composer] = ACTIONS(71),
    [anon_sym_composer] = ACTIONS(71),
    [anon_sym_Compose] = ACTIONS(71),
    [anon_sym_compose] = ACTIONS(71),
    [anon_sym_Lyrics] = ACTIONS(71),
    [anon_sym_lyrics] = ACTIONS(71),
    [anon_sym_Lyricist] = ACTIONS(71),
    [anon_sym_lyricist] = ACTIONS(71),
    [anon_sym_Lyric] = ACTIONS(71),
    [anon_sym_lyric] = ACTIONS(71),
    [anon_sym_Arrangement] = ACTIONS(71),
    [anon_sym_arrangement] = ACTIONS(71),
    [anon_sym_Arranger] = ACTIONS(71),
    [anon_sym_arranger] = ACTIONS(71),
    [anon_sym_Arrange] = ACTIONS(71),
    [anon_sym_arrange] = ACTIONS(71),
    [anon_sym_Vocal] = ACTIONS(71),
    [anon_sym_vocal] = ACTIONS(71),
    [anon_sym_Vo] = ACTIONS(71),
    [anon_sym_vo] = ACTIONS(71),
    [anon_sym_Performer] = ACTIONS(71),
    [anon_sym_performer] = ACTIONS(71),
    [anon_sym_Illustration] = ACTIONS(71),
    [anon_sym_illustration] = ACTIONS(71),
    [anon_sym_Illust] = ACTIONS(71),
    [anon_sym_illust] = ACTIONS(71),
    [anon_sym_Label] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_Circle] = ACTIONS(71),
    [anon_sym_circle] = ACTIONS(71),
    [anon_sym_Producer] = ACTIONS(71),
    [anon_sym_producer] = ACTIONS(71),
    [anon_sym_Recording] = ACTIONS(71),
    [anon_sym_recording] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_u300b] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_Music] = ACTIONS(118),
    [anon_sym_music] = ACTIONS(118),
    [anon_sym_Composition] = ACTIONS(118),
    [anon_sym_composition] = ACTIONS(118),
    [anon_sym_Composer] = ACTIONS(118),
    [anon_sym_composer] = ACTIONS(118),
    [anon_sym_Compose] = ACTIONS(120),
    [anon_sym_compose] = ACTIONS(120),
    [anon_sym_Lyrics] = ACTIONS(118),
    [anon_sym_lyrics] = ACTIONS(118),
    [anon_sym_Lyricist] = ACTIONS(118),
    [anon_sym_lyricist] = ACTIONS(118),
    [anon_sym_Lyric] = ACTIONS(120),
    [anon_sym_lyric] = ACTIONS(120),
    [anon_sym_Arrangement] = ACTIONS(118),
    [anon_sym_arrangement] = ACTIONS(118),
    [anon_sym_Arranger] = ACTIONS(118),
    [anon_sym_arranger] = ACTIONS(118),
    [anon_sym_Arrange] = ACTIONS(120),
    [anon_sym_arrange] = ACTIONS(120),
    [anon_sym_Vocal] = ACTIONS(118),
    [anon_sym_vocal] = ACTIONS(118),
    [anon_sym_Vo] = ACTIONS(120),
    [anon_sym_vo] = ACTIONS(120),
    [anon_sym_Performer] = ACTIONS(118),
    [anon_sym_performer] = ACTIONS(118),
    [anon_sym_Illustration] = ACTIONS(118),
    [anon_sym_illustration] = ACTIONS(118),
    [anon_sym_Illust] = ACTIONS(120),
    [anon_sym_illust] = ACTIONS(120),
    [anon_sym_Label] = ACTIONS(118),
    [anon_sym_label] = ACTIONS(118),
    [anon_sym_Circle] = ACTIONS(118),
    [anon_sym_circle] = ACTIONS(118),
    [anon_sym_Producer] = ACTIONS(118),
    [anon_sym_producer] = ACTIONS(118),
    [anon_sym_Recording] = ACTIONS(118),
    [anon_sym_recording] = ACTIONS(118),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(118),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(118),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(118),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(118),
    [anon_sym_u6b4cu5531] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu66f2] = ACTIONS(118),
    [anon_sym_u7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5e] = ACTIONS(120),
    [anon_sym_u5382u724c] = ACTIONS(118),
    [anon_sym_u811au672c] = ACTIONS(118),
    [anon_sym_u63d2u56fe] = ACTIONS(118),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(118),
    [anon_sym_u51fau7248u65b9] = ACTIONS(118),
    [anon_sym_u5f55u97f3] = ACTIONS(118),
    [anon_sym_u539fu4f5c] = ACTIONS(118),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(124),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [anon_sym_Music] = ACTIONS(124),
    [anon_sym_music] = ACTIONS(124),
    [anon_sym_Composition] = ACTIONS(124),
    [anon_sym_composition] = ACTIONS(124),
    [anon_sym_Composer] = ACTIONS(124),
    [anon_sym_composer] = ACTIONS(124),
    [anon_sym_Compose] = ACTIONS(124),
    [anon_sym_compose] = ACTIONS(124),
    [anon_sym_Lyrics] = ACTIONS(124),
    [anon_sym_lyrics] = ACTIONS(124),
    [anon_sym_Lyricist] = ACTIONS(124),
    [anon_sym_lyricist] = ACTIONS(124),
    [anon_sym_Lyric] = ACTIONS(124),
    [anon_sym_lyric] = ACTIONS(124),
    [anon_sym_Arrangement] = ACTIONS(124),
    [anon_sym_arrangement] = ACTIONS(124),
    [anon_sym_Arranger] = ACTIONS(124),
    [anon_sym_arranger] = ACTIONS(124),
    [anon_sym_Arrange] = ACTIONS(124),
    [anon_sym_arrange] = ACTIONS(124),
    [anon_sym_Vocal] = ACTIONS(124),
    [anon_sym_vocal] = ACTIONS(124),
    [anon_sym_Vo] = ACTIONS(124),
    [anon_sym_vo] = ACTIONS(124),
    [anon_sym_Performer] = ACTIONS(124),
    [anon_sym_performer] = ACTIONS(124),
    [anon_sym_Illustration] = ACTIONS(124),
    [anon_sym_illustration] = ACTIONS(124),
    [anon_sym_Illust] = ACTIONS(124),
    [anon_sym_illust] = ACTIONS(124),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
  },
  [34] = {
    [anon_sym_u300a] = ACTIONS(86),
    [aux_sym_song_title_token1] = ACTIONS(86),
    [anon_sym_Music] = ACTIONS(86),
    [anon_sym_music] = ACTIONS(86),
    [anon_sym_Composition] = ACTIONS(86),
    [anon_sym_composition] = ACTIONS(86),
    [anon_sym_Composer] = ACTIONS(86),
    [anon_sym_composer] = ACTIONS(86),
    [anon_sym_Compose] = ACTIONS(86),
    [anon_sym_compose] = ACTIONS(86),
    [anon_sym_Lyrics] = ACTIONS(86),
    [anon_sym_lyrics] = ACTIONS(86),
    [anon_sym_Lyricist] = ACTIONS(86),
    [anon_sym_lyricist] = ACTIONS(86),
    [anon_sym_Lyric] = ACTIONS(86),
    [anon_sym_lyric] = ACTIONS(86),
    [anon_sym_Arrangement] = ACTIONS(86),
    [anon_sym_arrangement] = ACTIONS(86),
    [anon_sym_Arranger] = ACTIONS(86),
    [anon_sym_arranger] = ACTIONS(86),
    [anon_sym_Arrange] = ACTIONS(86),
    [anon_sym_arrange] = ACTIONS(86),
    [anon_sym_Vocal] = ACTIONS(86),
    [anon_sym_vocal] = ACTIONS(86),
    [anon_sym_Vo] = ACTIONS(86),
    [anon_sym_vo] = ACTIONS(86),
    [anon_sym_Performer] = ACTIONS(86),
    [anon_sym_performer] = ACTIONS(86),
    [anon_sym_Illustration] = ACTIONS(86),
    [anon_sym_illustration] = ACTIONS(86),
    [anon_sym_Illust] = ACTIONS(86),
    [anon_sym_illust] = ACTIONS(86),
    [anon_sym_Label] = ACTIONS(86),
    [anon_sym_label] = ACTIONS(86),
    [anon_sym_Circle] = ACTIONS(86),
    [anon_sym_circle] = ACTIONS(86),
    [anon_sym_Producer] = ACTIONS(86),
    [anon_sym_producer] = ACTIONS(86),
    [anon_sym_Recording] = ACTIONS(86),
    [anon_sym_recording] = ACTIONS(86),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(86),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(86),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(86),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(86),
    [anon_sym_u6b4cu5531] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(86),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu66f2] = ACTIONS(86),
    [anon_sym_u7de8u66f2] = ACTIONS(86),
    [anon_sym_u4f5cu8a5e] = ACTIONS(86),
    [anon_sym_u5382u724c] = ACTIONS(86),
    [anon_sym_u811au672c] = ACTIONS(86),
    [anon_sym_u63d2u56fe] = ACTIONS(86),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(86),
    [anon_sym_u51fau7248u65b9] = ACTIONS(86),
    [anon_sym_u5f55u97f3] = ACTIONS(86),
    [anon_sym_u539fu4f5c] = ACTIONS(86),
    [sym__sep] = ACTIONS(126),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_u300a] = ACTIONS(130),
    [aux_sym_song_title_token1] = ACTIONS(130),
    [anon_sym_Music] = ACTIONS(130),
    [anon_sym_music] = ACTIONS(130),
    [anon_sym_Composition] = ACTIONS(130),
    [anon_sym_composition] = ACTIONS(130),
    [anon_sym_Composer] = ACTIONS(130),
    [anon_sym_composer] = ACTIONS(130),
    [anon_sym_Compose] = ACTIONS(130),
    [anon_sym_compose] = ACTIONS(130),
    [anon_sym_Lyrics] = ACTIONS(130),
    [anon_sym_lyrics] = ACTIONS(130),
    [anon_sym_Lyricist] = ACTIONS(130),
    [anon_sym_lyricist] = ACTIONS(130),
    [anon_sym_Lyric] = ACTIONS(130),
    [anon_sym_lyric] = ACTIONS(130),
    [anon_sym_Arrangement] = ACTIONS(130),
    [anon_sym_arrangement] = ACTIONS(130),
    [anon_sym_Arranger] = ACTIONS(130),
    [anon_sym_arranger] = ACTIONS(130),
    [anon_sym_Arrange] = ACTIONS(130),
    [anon_sym_arrange] = ACTIONS(130),
    [anon_sym_Vocal] = ACTIONS(130),
    [anon_sym_vocal] = ACTIONS(130),
    [anon_sym_Vo] = ACTIONS(130),
    [anon_sym_vo] = ACTIONS(130),
    [anon_sym_Performer] = ACTIONS(130),
    [anon_sym_performer] = ACTIONS(130),
    [anon_sym_Illustration] = ACTIONS(130),
    [anon_sym_illustration] = ACTIONS(130),
    [anon_sym_Illust] = ACTIONS(130),
    [anon_sym_illust] = ACTIONS(130),
    [anon_sym_Label] = ACTIONS(130),
    [anon_sym_label] = ACTIONS(130),
    [anon_sym_Circle] = ACTIONS(130),
    [anon_sym_circle] = ACTIONS(130),
    [anon_sym_Producer] = ACTIONS(130),
    [anon_sym_producer] = ACTIONS(130),
    [anon_sym_Recording] = ACTIONS(130),
    [anon_sym_recording] = ACTIONS(130),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(130),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(130),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(130),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(130),
    [anon_sym_u6b4cu5531] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(130),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu66f2] = ACTIONS(130),
    [anon_sym_u7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5e] = ACTIONS(130),
    [anon_sym_u5382u724c] = ACTIONS(130),
    [anon_sym_u811au672c] = ACTIONS(130),
    [anon_sym_u63d2u56fe] = ACTIONS(130),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(130),
    [anon_sym_u51fau7248u65b9] = ACTIONS(130),
    [anon_sym_u5f55u97f3] = ACTIONS(130),
    [anon_sym_u539fu4f5c] = ACTIONS(130),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_Music] = ACTIONS(132),
    [anon_sym_music] = ACTIONS(132),
    [anon_sym_Composition] = ACTIONS(132),
    [anon_sym_composition] = ACTIONS(132),
    [anon_sym_Composer] = ACTIONS(132),
    [anon_sym_composer] = ACTIONS(132),
    [anon_sym_Compose] = ACTIONS(134),
    [anon_sym_compose] = ACTIONS(134),
    [anon_sym_Lyrics] = ACTIONS(132),
    [anon_sym_lyrics] = ACTIONS(132),
    [anon_sym_Lyricist] = ACTIONS(132),
    [anon_sym_lyricist] = ACTIONS(132),
    [anon_sym_Lyric] = ACTIONS(134),
    [anon_sym_lyric] = ACTIONS(134),
    [anon_sym_Arrangement] = ACTIONS(132),
    [anon_sym_arrangement] = ACTIONS(132),
    [anon_sym_Arranger] = ACTIONS(132),
    [anon_sym_arranger] = ACTIONS(132),
    [anon_sym_Arrange] = ACTIONS(134),
    [anon_sym_arrange] = ACTIONS(134),
    [anon_sym_Vocal] = ACTIONS(132),
    [anon_sym_vocal] = ACTIONS(132),
    [anon_sym_Vo] = ACTIONS(134),
    [anon_sym_vo] = ACTIONS(134),
    [anon_sym_Performer] = ACTIONS(132),
    [anon_sym_performer] = ACTIONS(132),
    [anon_sym_Illustration] = ACTIONS(132),
    [anon_sym_illustration] = ACTIONS(132),
    [anon_sym_Illust] = ACTIONS(134),
    [anon_sym_illust] = ACTIONS(134),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(134),
    [anon_sym_u5382u724c] = ACTIONS(132),
    [anon_sym_u811au672c] = ACTIONS(132),
    [anon_sym_u63d2u56fe] = ACTIONS(132),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(132),
    [anon_sym_u51fau7248u65b9] = ACTIONS(132),
    [anon_sym_u5f55u97f3] = ACTIONS(132),
    [anon_sym_u539fu4f5c] = ACTIONS(132),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_Music] = ACTIONS(136),
    [anon_sym_music] = ACTIONS(136),
    [anon_sym_Composition] = ACTIONS(136),
    [anon_sym_composition] = ACTIONS(136),
    [anon_sym_Composer] = ACTIONS(136),
    [anon_sym_composer] = ACTIONS(136),
    [anon_sym_Compose] = ACTIONS(138),
    [anon_sym_compose] = ACTIONS(138),
    [anon_sym_Lyrics] = ACTIONS(136),
    [anon_sym_lyrics] = ACTIONS(136),
    [anon_sym_Lyricist] = ACTIONS(136),
    [anon_sym_lyricist] = ACTIONS(136),
    [anon_sym_Lyric] = ACTIONS(138),
    [anon_sym_lyric] = ACTIONS(138),
    [anon_sym_Arrangement] = ACTIONS(136),
    [anon_sym_arrangement] = ACTIONS(136),
    [anon_sym_Arranger] = ACTIONS(136),
    [anon_sym_arranger] = ACTIONS(136),
    [anon_sym_Arrange] = ACTIONS(138),
    [anon_sym_arrange] = ACTIONS(138),
    [anon_sym_Vocal] = ACTIONS(136),
    [anon_sym_vocal] = ACTIONS(136),
    [anon_sym_Vo] = ACTIONS(138),
    [anon_sym_vo] = ACTIONS(138),
    [anon_sym_Performer] = ACTIONS(136),
    [anon_sym_performer] = ACTIONS(136),
    [anon_sym_Illustration] = ACTIONS(136),
    [anon_sym_illustration] = ACTIONS(136),
    [anon_sym_Illust] = ACTIONS(138),
    [anon_sym_illust] = ACTIONS(138),
    [anon_sym_Label] = ACTIONS(136),
    [anon_sym_label] = ACTIONS(136),
    [anon_sym_Circle] = ACTIONS(136),
    [anon_sym_circle] = ACTIONS(136),
    [anon_sym_Producer] = ACTIONS(136),
    [anon_sym_producer] = ACTIONS(136),
    [anon_sym_Recording] = ACTIONS(136),
    [anon_sym_recording] = ACTIONS(136),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(136),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(136),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(136),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(136),
    [anon_sym_u6b4cu5531] = ACTIONS(136),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(136),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(136),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(136),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(136),
    [anon_sym_u4f5cu66f2] = ACTIONS(136),
    [anon_sym_u7de8u66f2] = ACTIONS(136),
    [anon_sym_u4f5cu8a5e] = ACTIONS(138),
    [anon_sym_u5382u724c] = ACTIONS(136),
    [anon_sym_u811au672c] = ACTIONS(136),
    [anon_sym_u63d2u56fe] = ACTIONS(136),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(136),
    [anon_sym_u51fau7248u65b9] = ACTIONS(136),
    [anon_sym_u5f55u97f3] = ACTIONS(136),
    [anon_sym_u539fu4f5c] = ACTIONS(136),
  },
  [38] = {
    [anon_sym_u300a] = ACTIONS(52),
    [aux_sym_song_title_token1] = ACTIONS(52),
    [anon_sym_Music] = ACTIONS(52),
    [anon_sym_music] = ACTIONS(52),
    [anon_sym_Composition] = ACTIONS(52),
    [anon_sym_composition] = ACTIONS(52),
    [anon_sym_Composer] = ACTIONS(52),
    [anon_sym_composer] = ACTIONS(52),
    [anon_sym_Compose] = ACTIONS(52),
    [anon_sym_compose] = ACTIONS(52),
    [anon_sym_Lyrics] = ACTIONS(52),
    [anon_sym_lyrics] = ACTIONS(52),
    [anon_sym_Lyricist] = ACTIONS(52),
    [anon_sym_lyricist] = ACTIONS(52),
    [anon_sym_Lyric] = ACTIONS(52),
    [anon_sym_lyric] = ACTIONS(52),
    [anon_sym_Arrangement] = ACTIONS(52),
    [anon_sym_arrangement] = ACTIONS(52),
    [anon_sym_Arranger] = ACTIONS(52),
    [anon_sym_arranger] = ACTIONS(52),
    [anon_sym_Arrange] = ACTIONS(52),
    [anon_sym_arrange] = ACTIONS(52),
    [anon_sym_Vocal] = ACTIONS(52),
    [anon_sym_vocal] = ACTIONS(52),
    [anon_sym_Vo] = ACTIONS(52),
    [anon_sym_vo] = ACTIONS(52),
    [anon_sym_Performer] = ACTIONS(52),
    [anon_sym_performer] = ACTIONS(52),
    [anon_sym_Illustration] = ACTIONS(52),
    [anon_sym_illustration] = ACTIONS(52),
    [anon_sym_Illust] = ACTIONS(52),
    [anon_sym_illust] = ACTIONS(52),
    [anon_sym_Label] = ACTIONS(52),
    [anon_sym_label] = ACTIONS(52),
    [anon_sym_Circle] = ACTIONS(52),
    [anon_sym_circle] = ACTIONS(52),
    [anon_sym_Producer] = ACTIONS(52),
    [anon_sym_producer] = ACTIONS(52),
    [anon_sym_Recording] = ACTIONS(52),
    [anon_sym_recording] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u6b4cu5531] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(52),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu66f2] = ACTIONS(52),
    [anon_sym_u7de8u66f2] = ACTIONS(52),
    [anon_sym_u4f5cu8a5e] = ACTIONS(52),
    [anon_sym_u5382u724c] = ACTIONS(52),
    [anon_sym_u811au672c] = ACTIONS(52),
    [anon_sym_u63d2u56fe] = ACTIONS(52),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(52),
    [anon_sym_u51fau7248u65b9] = ACTIONS(52),
    [anon_sym_u5f55u97f3] = ACTIONS(52),
    [anon_sym_u539fu4f5c] = ACTIONS(52),
  },
  [39] = {
    [anon_sym_u300a] = ACTIONS(130),
    [aux_sym_song_title_token1] = ACTIONS(130),
    [anon_sym_Music] = ACTIONS(130),
    [anon_sym_music] = ACTIONS(130),
    [anon_sym_Composition] = ACTIONS(130),
    [anon_sym_composition] = ACTIONS(130),
    [anon_sym_Composer] = ACTIONS(130),
    [anon_sym_composer] = ACTIONS(130),
    [anon_sym_Compose] = ACTIONS(130),
    [anon_sym_compose] = ACTIONS(130),
    [anon_sym_Lyrics] = ACTIONS(130),
    [anon_sym_lyrics] = ACTIONS(130),
    [anon_sym_Lyricist] = ACTIONS(130),
    [anon_sym_lyricist] = ACTIONS(130),
    [anon_sym_Lyric] = ACTIONS(130),
    [anon_sym_lyric] = ACTIONS(130),
    [anon_sym_Arrangement] = ACTIONS(130),
    [anon_sym_arrangement] = ACTIONS(130),
    [anon_sym_Arranger] = ACTIONS(130),
    [anon_sym_arranger] = ACTIONS(130),
    [anon_sym_Arrange] = ACTIONS(130),
    [anon_sym_arrange] = ACTIONS(130),
    [anon_sym_Vocal] = ACTIONS(130),
    [anon_sym_vocal] = ACTIONS(130),
    [anon_sym_Vo] = ACTIONS(130),
    [anon_sym_vo] = ACTIONS(130),
    [anon_sym_Performer] = ACTIONS(130),
    [anon_sym_performer] = ACTIONS(130),
    [anon_sym_Illustration] = ACTIONS(130),
    [anon_sym_illustration] = ACTIONS(130),
    [anon_sym_Illust] = ACTIONS(130),
    [anon_sym_illust] = ACTIONS(130),
    [anon_sym_Label] = ACTIONS(130),
    [anon_sym_label] = ACTIONS(130),
    [anon_sym_Circle] = ACTIONS(130),
    [anon_sym_circle] = ACTIONS(130),
    [anon_sym_Producer] = ACTIONS(130),
    [anon_sym_producer] = ACTIONS(130),
    [anon_sym_Recording] = ACTIONS(130),
    [anon_sym_recording] = ACTIONS(130),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(130),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(130),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(130),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(130),
    [anon_sym_u6b4cu5531] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(130),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu66f2] = ACTIONS(130),
    [anon_sym_u7de8u66f2] = ACTIONS(130),
    [anon_sym_u4f5cu8a5e] = ACTIONS(130),
    [anon_sym_u5382u724c] = ACTIONS(130),
    [anon_sym_u811au672c] = ACTIONS(130),
    [anon_sym_u63d2u56fe] = ACTIONS(130),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(130),
    [anon_sym_u51fau7248u65b9] = ACTIONS(130),
    [anon_sym_u5f55u97f3] = ACTIONS(130),
    [anon_sym_u539fu4f5c] = ACTIONS(130),
  },
  [40] = {
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [anon_sym_Music] = ACTIONS(71),
    [anon_sym_music] = ACTIONS(71),
    [anon_sym_Composition] = ACTIONS(71),
    [anon_sym_composition] = ACTIONS(71),
    [anon_sym_Composer] = ACTIONS(71),
    [anon_sym_composer] = ACTIONS(71),
    [anon_sym_Compose] = ACTIONS(71),
    [anon_sym_compose] = ACTIONS(71),
    [anon_sym_Lyrics] = ACTIONS(71),
    [anon_sym_lyrics] = ACTIONS(71),
    [anon_sym_Lyricist] = ACTIONS(71),
    [anon_sym_lyricist] = ACTIONS(71),
    [anon_sym_Lyric] = ACTIONS(71),
    [anon_sym_lyric] = ACTIONS(71),
    [anon_sym_Arrangement] = ACTIONS(71),
    [anon_sym_arrangement] = ACTIONS(71),
    [anon_sym_Arranger] = ACTIONS(71),
    [anon_sym_arranger] = ACTIONS(71),
    [anon_sym_Arrange] = ACTIONS(71),
    [anon_sym_arrange] = ACTIONS(71),
    [anon_sym_Vocal] = ACTIONS(71),
    [anon_sym_vocal] = ACTIONS(71),
    [anon_sym_Vo] = ACTIONS(71),
    [anon_sym_vo] = ACTIONS(71),
    [anon_sym_Performer] = ACTIONS(71),
    [anon_sym_performer] = ACTIONS(71),
    [anon_sym_Illustration] = ACTIONS(71),
    [anon_sym_illustration] = ACTIONS(71),
    [anon_sym_Illust] = ACTIONS(71),
    [anon_sym_illust] = ACTIONS(71),
    [anon_sym_Label] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_Circle] = ACTIONS(71),
    [anon_sym_circle] = ACTIONS(71),
    [anon_sym_Producer] = ACTIONS(71),
    [anon_sym_producer] = ACTIONS(71),
    [anon_sym_Recording] = ACTIONS(71),
    [anon_sym_recording] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
  },
  [41] = {
    [anon_sym_u300a] = ACTIONS(124),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [anon_sym_Music] = ACTIONS(124),
    [anon_sym_music] = ACTIONS(124),
    [anon_sym_Composition] = ACTIONS(124),
    [anon_sym_composition] = ACTIONS(124),
    [anon_sym_Composer] = ACTIONS(124),
    [anon_sym_composer] = ACTIONS(124),
    [anon_sym_Compose] = ACTIONS(124),
    [anon_sym_compose] = ACTIONS(124),
    [anon_sym_Lyrics] = ACTIONS(124),
    [anon_sym_lyrics] = ACTIONS(124),
    [anon_sym_Lyricist] = ACTIONS(124),
    [anon_sym_lyricist] = ACTIONS(124),
    [anon_sym_Lyric] = ACTIONS(124),
    [anon_sym_lyric] = ACTIONS(124),
    [anon_sym_Arrangement] = ACTIONS(124),
    [anon_sym_arrangement] = ACTIONS(124),
    [anon_sym_Arranger] = ACTIONS(124),
    [anon_sym_arranger] = ACTIONS(124),
    [anon_sym_Arrange] = ACTIONS(124),
    [anon_sym_arrange] = ACTIONS(124),
    [anon_sym_Vocal] = ACTIONS(124),
    [anon_sym_vocal] = ACTIONS(124),
    [anon_sym_Vo] = ACTIONS(124),
    [anon_sym_vo] = ACTIONS(124),
    [anon_sym_Performer] = ACTIONS(124),
    [anon_sym_performer] = ACTIONS(124),
    [anon_sym_Illustration] = ACTIONS(124),
    [anon_sym_illustration] = ACTIONS(124),
    [anon_sym_Illust] = ACTIONS(124),
    [anon_sym_illust] = ACTIONS(124),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
  },
  [42] = {
    [sym_creator_name] = ACTIONS(111),
    [anon_sym_Music] = ACTIONS(111),
    [anon_sym_music] = ACTIONS(111),
    [anon_sym_Composition] = ACTIONS(111),
    [anon_sym_composition] = ACTIONS(111),
    [anon_sym_Composer] = ACTIONS(111),
    [anon_sym_composer] = ACTIONS(111),
    [anon_sym_Compose] = ACTIONS(111),
    [anon_sym_compose] = ACTIONS(111),
    [anon_sym_Lyrics] = ACTIONS(111),
    [anon_sym_lyrics] = ACTIONS(111),
    [anon_sym_Lyricist] = ACTIONS(111),
    [anon_sym_lyricist] = ACTIONS(111),
    [anon_sym_Lyric] = ACTIONS(111),
    [anon_sym_lyric] = ACTIONS(111),
    [anon_sym_Arrangement] = ACTIONS(111),
    [anon_sym_arrangement] = ACTIONS(111),
    [anon_sym_Arranger] = ACTIONS(111),
    [anon_sym_arranger] = ACTIONS(111),
    [anon_sym_Arrange] = ACTIONS(111),
    [anon_sym_arrange] = ACTIONS(111),
    [anon_sym_Vocal] = ACTIONS(111),
    [anon_sym_vocal] = ACTIONS(111),
    [anon_sym_Vo] = ACTIONS(111),
    [anon_sym_vo] = ACTIONS(111),
    [anon_sym_Performer] = ACTIONS(111),
    [anon_sym_performer] = ACTIONS(111),
    [anon_sym_Illustration] = ACTIONS(111),
    [anon_sym_illustration] = ACTIONS(111),
    [anon_sym_Illust] = ACTIONS(111),
    [anon_sym_illust] = ACTIONS(111),
    [anon_sym_Label] = ACTIONS(111),
    [anon_sym_label] = ACTIONS(111),
    [anon_sym_Circle] = ACTIONS(111),
    [anon_sym_circle] = ACTIONS(111),
    [anon_sym_Producer] = ACTIONS(111),
    [anon_sym_producer] = ACTIONS(111),
    [anon_sym_Recording] = ACTIONS(111),
    [anon_sym_recording] = ACTIONS(111),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(111),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(111),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(111),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu66f2] = ACTIONS(111),
    [anon_sym_u7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(111),
    [anon_sym_u811au672c] = ACTIONS(111),
    [anon_sym_u63d2u56fe] = ACTIONS(111),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(111),
    [anon_sym_u51fau7248u65b9] = ACTIONS(111),
    [anon_sym_u5f55u97f3] = ACTIONS(111),
    [anon_sym_u539fu4f5c] = ACTIONS(111),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__song,
    STATE(11), 1,
      sym_song_title,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(37), 1,
      sym__song_title,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_song,
  [25] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(6), 1,
      sym__song,
    STATE(11), 1,
      sym_song_title,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(37), 1,
      sym__song_title,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_song,
  [50] = 8,
    ACTIONS(3), 1,
      anon_sym_u300a,
    ACTIONS(5), 1,
      aux_sym_song_title_token1,
    STATE(4), 1,
      sym__song,
    STATE(11), 1,
      sym_song_title,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(37), 1,
      sym__song_title,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
    STATE(53), 1,
      sym_song,
  [75] = 7,
    ACTIONS(140), 1,
      anon_sym_u300a,
    ACTIONS(143), 1,
      aux_sym_song_title_token1,
    STATE(10), 1,
      sym__song,
    STATE(11), 1,
      sym_song_title,
    STATE(24), 1,
      aux_sym_song_title_repeat1,
    STATE(37), 1,
      sym__song_title,
    STATE(46), 2,
      sym_song,
      aux_sym_source_file_repeat1,
  [98] = 4,
    ACTIONS(146), 1,
      aux_sym_song_title_token1,
    STATE(11), 1,
      sym_song_title,
    STATE(48), 1,
      aux_sym_song_title_repeat1,
    STATE(66), 1,
      sym__song_title,
  [111] = 3,
    ACTIONS(148), 1,
      aux_sym_song_title_token1,
    STATE(49), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(46), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [122] = 3,
    ACTIONS(150), 1,
      aux_sym_song_title_token1,
    STATE(49), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(77), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [133] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [141] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      sym__sep,
    STATE(52), 1,
      aux_sym_credit_field_repeat2,
  [151] = 3,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      sym__sep,
    STATE(52), 1,
      aux_sym_credit_field_repeat2,
  [161] = 2,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [169] = 3,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      sym__sep,
    STATE(51), 1,
      aux_sym_credit_field_repeat2,
  [179] = 2,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [187] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [195] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [203] = 3,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      sym__sep,
    STATE(59), 1,
      aux_sym_credit_field_repeat2,
  [213] = 3,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      sym__sep,
    STATE(52), 1,
      aux_sym_credit_field_repeat2,
  [223] = 1,
    ACTIONS(155), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [228] = 2,
    ACTIONS(98), 1,
      sym__sep,
    ACTIONS(100), 1,
      anon_sym_LF,
  [235] = 1,
    ACTIONS(155), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [240] = 1,
    ACTIONS(184), 1,
      sym_creator_name,
  [244] = 1,
    ACTIONS(186), 1,
      sym__sep,
  [248] = 1,
    ACTIONS(188), 1,
      sym_creator_name,
  [252] = 1,
    ACTIONS(190), 1,
      anon_sym_u300b,
  [256] = 1,
    ACTIONS(192), 1,
      sym__sep,
  [260] = 1,
    ACTIONS(194), 1,
      sym_creator_name,
  [264] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 25,
  [SMALL_STATE(45)] = 50,
  [SMALL_STATE(46)] = 75,
  [SMALL_STATE(47)] = 98,
  [SMALL_STATE(48)] = 111,
  [SMALL_STATE(49)] = 122,
  [SMALL_STATE(50)] = 133,
  [SMALL_STATE(51)] = 141,
  [SMALL_STATE(52)] = 151,
  [SMALL_STATE(53)] = 161,
  [SMALL_STATE(54)] = 169,
  [SMALL_STATE(55)] = 179,
  [SMALL_STATE(56)] = 187,
  [SMALL_STATE(57)] = 195,
  [SMALL_STATE(58)] = 203,
  [SMALL_STATE(59)] = 213,
  [SMALL_STATE(60)] = 223,
  [SMALL_STATE(61)] = 228,
  [SMALL_STATE(62)] = 235,
  [SMALL_STATE(63)] = 240,
  [SMALL_STATE(64)] = 244,
  [SMALL_STATE(65)] = 248,
  [SMALL_STATE(66)] = 252,
  [SMALL_STATE(67)] = 256,
  [SMALL_STATE(68)] = 260,
  [SMALL_STATE(69)] = 264,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 9),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 8),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 8),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11), SHIFT_REPEAT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 8),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 8),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 8),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 8),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 9),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song, 3, 0, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song, 3, 0, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song, 1, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song, 1, 0, 3),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11), SHIFT_REPEAT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
