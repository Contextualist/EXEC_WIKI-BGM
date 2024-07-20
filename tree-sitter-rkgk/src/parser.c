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
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 62
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 2
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_LF = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token1 = 4,
  anon_sym_u300a = 5,
  anon_sym_u300b = 6,
  aux_sym_feat_field_token1 = 7,
  aux_sym__quotable_creator_name_token1 = 8,
  sym_creator_name = 9,
  anon_sym_Music = 10,
  anon_sym_music = 11,
  anon_sym_Composition = 12,
  anon_sym_composition = 13,
  anon_sym_Composer = 14,
  anon_sym_composer = 15,
  anon_sym_Compose = 16,
  anon_sym_compose = 17,
  anon_sym_Lyrics = 18,
  anon_sym_lyrics = 19,
  anon_sym_Lyricist = 20,
  anon_sym_lyricist = 21,
  anon_sym_Lyric = 22,
  anon_sym_lyric = 23,
  anon_sym_Arrangement = 24,
  anon_sym_arrangement = 25,
  anon_sym_Arranger = 26,
  anon_sym_arranger = 27,
  anon_sym_Arrange = 28,
  anon_sym_arrange = 29,
  anon_sym_Vocal = 30,
  anon_sym_vocal = 31,
  anon_sym_Vo = 32,
  anon_sym_vo = 33,
  anon_sym_Performer = 34,
  anon_sym_performer = 35,
  anon_sym_Illustration = 36,
  anon_sym_illustration = 37,
  anon_sym_Illust = 38,
  anon_sym_illust = 39,
  anon_sym_Label = 40,
  anon_sym_label = 41,
  anon_sym_Circle = 42,
  anon_sym_circle = 43,
  anon_sym_Producer = 44,
  anon_sym_producer = 45,
  anon_sym_Recording = 46,
  anon_sym_recording = 47,
  anon_sym_u30dcu30fcu30abu30eb = 48,
  anon_sym_u30a2u30ecu30f3u30b8 = 49,
  anon_sym_u30a4u30e9u30b9u30c8 = 50,
  anon_sym_u30ecu30fcu30d9u30eb = 51,
  anon_sym_u6b4cu5531 = 52,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 53,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 54,
  anon_sym_u4f5cu8a5eu66f2 = 55,
  anon_sym_u4f5cu7de8u66f2 = 56,
  anon_sym_u4f5cu66f2 = 57,
  anon_sym_u7de8u66f2 = 58,
  anon_sym_u4f5cu8a5e = 59,
  anon_sym_u5382u724c = 60,
  anon_sym_u811au672c = 61,
  anon_sym_u63d2u56fe = 62,
  anon_sym_u5236u4f5cu4eba = 63,
  anon_sym_u51fau7248u65b9 = 64,
  anon_sym_u5f55u97f3 = 65,
  anon_sym_u539fu4f5c = 66,
  sym__sep = 67,
  sym__ssep = 68,
  sym_source_file = 69,
  sym_song = 70,
  sym_credit_block = 71,
  sym_credit_field = 72,
  sym__quotable_song_title_maybefeat_maybecomment = 73,
  sym__quotable_song_title_maybefeat = 74,
  sym__song_title_maybefeat = 75,
  sym_song_title = 76,
  sym_feat_field = 77,
  sym__quotable_creator_name = 78,
  sym_role = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_credit_block_repeat1 = 81,
  aux_sym_credit_field_repeat1 = 82,
  aux_sym_credit_field_repeat2 = 83,
  aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1 = 84,
  aux_sym_feat_field_repeat1 = 85,
  alias_sym_comment = 86,
  alias_sym_creator_sep = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = "_quotable_song_title_maybefeat_maybecomment_token1",
  [anon_sym_u300a] = "\u300a",
  [anon_sym_u300b] = "\u300b",
  [aux_sym_feat_field_token1] = "feat",
  [aux_sym__quotable_creator_name_token1] = "creator_name",
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
  [sym__ssep] = "_ssep",
  [sym_source_file] = "source_file",
  [sym_song] = "song",
  [sym_credit_block] = "credit_block",
  [sym_credit_field] = "credit_field",
  [sym__quotable_song_title_maybefeat_maybecomment] = "_quotable_song_title_maybefeat_maybecomment",
  [sym__quotable_song_title_maybefeat] = "_quotable_song_title_maybefeat",
  [sym__song_title_maybefeat] = "_song_title_maybefeat",
  [sym_song_title] = "song_title",
  [sym_feat_field] = "feat_field",
  [sym__quotable_creator_name] = "_quotable_creator_name",
  [sym_role] = "role",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_credit_block_repeat1] = "credit_block_repeat1",
  [aux_sym_credit_field_repeat1] = "credit_field_repeat1",
  [aux_sym_credit_field_repeat2] = "credit_field_repeat2",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = "_quotable_song_title_maybefeat_maybecomment_repeat1",
  [aux_sym_feat_field_repeat1] = "feat_field_repeat1",
  [alias_sym_comment] = "comment",
  [alias_sym_creator_sep] = "creator_sep",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [anon_sym_u300a] = anon_sym_u300a,
  [anon_sym_u300b] = anon_sym_u300b,
  [aux_sym_feat_field_token1] = aux_sym_feat_field_token1,
  [aux_sym__quotable_creator_name_token1] = sym_creator_name,
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
  [sym__ssep] = sym__ssep,
  [sym_source_file] = sym_source_file,
  [sym_song] = sym_song,
  [sym_credit_block] = sym_credit_block,
  [sym_credit_field] = sym_credit_field,
  [sym__quotable_song_title_maybefeat_maybecomment] = sym__quotable_song_title_maybefeat_maybecomment,
  [sym__quotable_song_title_maybefeat] = sym__quotable_song_title_maybefeat,
  [sym__song_title_maybefeat] = sym__song_title_maybefeat,
  [sym_song_title] = sym_song_title,
  [sym_feat_field] = sym_feat_field,
  [sym__quotable_creator_name] = sym__quotable_creator_name,
  [sym_role] = sym_role,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_credit_block_repeat1] = aux_sym_credit_block_repeat1,
  [aux_sym_credit_field_repeat1] = aux_sym_credit_field_repeat1,
  [aux_sym_credit_field_repeat2] = aux_sym_credit_field_repeat2,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [aux_sym_feat_field_repeat1] = aux_sym_feat_field_repeat1,
  [alias_sym_comment] = alias_sym_comment,
  [alias_sym_creator_sep] = alias_sym_creator_sep,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u300a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u300b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_feat_field_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quotable_creator_name_token1] = {
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
  [sym__ssep] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym__quotable_song_title_maybefeat_maybecomment] = {
    .visible = false,
    .named = true,
  },
  [sym__quotable_song_title_maybefeat] = {
    .visible = false,
    .named = true,
  },
  [sym__song_title_maybefeat] = {
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
  [sym__quotable_creator_name] = {
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
  [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feat_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_creator_sep] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_comment = 1,
  field_creator = 2,
  field_creatorSeparator = 3,
  field_role = 4,
  field_title = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment] = "comment",
  [field_creator] = "creator",
  [field_creatorSeparator] = "creatorSeparator",
  [field_role] = "role",
  [field_title] = "title",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 3},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role, 0},
  [1] =
    {field_comment, 0, .inherited = true},
    {field_title, 0, .inherited = true},
  [3] =
    {field_title, 0, .inherited = true},
  [4] =
    {field_title, 0},
  [5] =
    {field_comment, 1, .inherited = true},
    {field_title, 1, .inherited = true},
  [7] =
    {field_creator, 0},
  [8] =
    {field_title, 1},
  [9] =
    {field_comment, 2, .inherited = true},
    {field_title, 2, .inherited = true},
  [11] =
    {field_comment, 2},
    {field_title, 0, .inherited = true},
  [13] =
    {field_creator, 1, .inherited = true},
  [14] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [17] =
    {field_creator, 1},
  [18] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [20] =
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
  [9] = {
    [2] = sym_song,
  },
  [10] = {
    [2] = alias_sym_comment,
  },
  [14] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__quotable_song_title_maybefeat_maybecomment, 2,
    sym__quotable_song_title_maybefeat_maybecomment,
    sym_song,
  aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2,
    aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    alias_sym_comment,
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
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 8,
  [22] = 22,
  [23] = 15,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 13,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 12,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 29,
  [38] = 13,
  [39] = 26,
  [40] = 40,
  [41] = 24,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 13,
  [46] = 34,
  [47] = 47,
  [48] = 35,
  [49] = 49,
  [50] = 50,
  [51] = 36,
  [52] = 52,
  [53] = 24,
  [54] = 54,
  [55] = 52,
  [56] = 43,
  [57] = 57,
  [58] = 47,
  [59] = 54,
  [60] = 24,
  [61] = 50,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 11,
  [68] = 17,
  [69] = 8,
  [70] = 13,
  [71] = 71,
  [72] = 32,
  [73] = 29,
  [74] = 74,
  [75] = 75,
  [76] = 24,
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 74,
  [85] = 85,
  [86] = 26,
  [87] = 87,
  [88] = 87,
  [89] = 82,
  [90] = 20,
  [91] = 91,
  [92] = 92,
  [93] = 81,
  [94] = 91,
  [95] = 80,
  [96] = 28,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 102,
  [103] = 97,
  [104] = 104,
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
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == 'V') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == 0x300b) ADVANCE(243);
      if (lookahead == 0x30a2) ADVANCE(228);
      if (lookahead == 0x30a4) ADVANCE(227);
      if (lookahead == 0x30dc) ADVANCE(229);
      if (lookahead == 0x30ec) ADVANCE(230);
      if (lookahead == 0x4f5c) ADVANCE(235);
      if (lookahead == 0x51fa) ADVANCE(238);
      if (lookahead == 0x5236) ADVANCE(231);
      if (lookahead == 0x5382) ADVANCE(239);
      if (lookahead == 0x539f) ADVANCE(232);
      if (lookahead == 0x5f55) ADVANCE(240);
      if (lookahead == 0x63d2) ADVANCE(234);
      if (lookahead == 0x6b4c) ADVANCE(233);
      if (lookahead == 0x7de8) ADVANCE(236);
      if (lookahead == 0x811a) ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 0x300b) ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(535);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(536);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(247);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(245);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(200);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 357,
        'C', 298,
        'I', 314,
        'L', 250,
        'M', 386,
        'P', 283,
        'R', 274,
        'V', 334,
        'a', 367,
        'c', 309,
        'i', 319,
        'l', 256,
        'm', 391,
        'p', 290,
        'r', 291,
        'v', 335,
        0x300a, 242,
        0x30a2, 400,
        0x30a4, 397,
        0x30dc, 402,
        0x30ec, 403,
        0x4f5c, 410,
        0x51fa, 416,
        0x5236, 405,
        0x5382, 417,
        0x539f, 406,
        0x5f55, 418,
        0x63d2, 408,
        0x6b4c, 407,
        0x7de8, 411,
        0x811a, 415,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(9);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(249);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 112,
        'C', 60,
        'I', 72,
        'L', 10,
        'M', 149,
        'P', 45,
        'R', 35,
        'V', 96,
        'a', 128,
        'c', 71,
        'i', 81,
        'l', 17,
        'm', 154,
        'p', 52,
        'r', 53,
        'v', 97,
        0x300a, 242,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 175,
        0x51fa, 181,
        0x5236, 170,
        0x5382, 182,
        0x539f, 171,
        0x5f55, 183,
        0x63d2, 173,
        0x6b4c, 172,
        0x7de8, 176,
        0x811a, 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(76);
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
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(495);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == 0x300b) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(156);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 156:
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == 0x300b) ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156);
      END_STATE();
    case 157:
      if (lookahead == 0x30ab) ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 0x30b8) ADVANCE(499);
      END_STATE();
    case 159:
      if (lookahead == 0x30b9) ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 0x30c8) ADVANCE(501);
      END_STATE();
    case 161:
      if (lookahead == 0x30d9) ADVANCE(164);
      END_STATE();
    case 162:
      if (lookahead == 0x30e9) ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 0x30eb) ADVANCE(497);
      END_STATE();
    case 164:
      if (lookahead == 0x30eb) ADVANCE(503);
      END_STATE();
    case 165:
      if (lookahead == 0x30ec) ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 0x30f3) ADVANCE(158);
      END_STATE();
    case 167:
      if (lookahead == 0x30fc) ADVANCE(157);
      END_STATE();
    case 168:
      if (lookahead == 0x30fc) ADVANCE(161);
      END_STATE();
    case 169:
      if (lookahead == 0x4eba) ADVANCE(527);
      END_STATE();
    case 170:
      if (lookahead == 0x4f5c) ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 0x4f5c) ADVANCE(533);
      END_STATE();
    case 172:
      if (lookahead == 0x5531) ADVANCE(505);
      END_STATE();
    case 173:
      if (lookahead == 0x56fe) ADVANCE(525);
      END_STATE();
    case 174:
      if (lookahead == 0x65b9) ADVANCE(529);
      END_STATE();
    case 175:
      if (lookahead == 0x66f2) ADVANCE(515);
      if (lookahead == 0x7de8) ADVANCE(177);
      if (lookahead == 0x8a5e) ADVANCE(519);
      END_STATE();
    case 176:
      if (lookahead == 0x66f2) ADVANCE(517);
      END_STATE();
    case 177:
      if (lookahead == 0x66f2) ADVANCE(513);
      END_STATE();
    case 178:
      if (lookahead == 0x66f2) ADVANCE(509);
      if (lookahead == 0x7de8) ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 0x66f2) ADVANCE(507);
      END_STATE();
    case 180:
      if (lookahead == 0x672c) ADVANCE(523);
      END_STATE();
    case 181:
      if (lookahead == 0x7248) ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == 0x724c) ADVANCE(521);
      END_STATE();
    case 183:
      if (lookahead == 0x97f3) ADVANCE(531);
      END_STATE();
    case 184:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(185);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == 'V') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == 0x30a2) ADVANCE(228);
      if (lookahead == 0x30a4) ADVANCE(227);
      if (lookahead == 0x30dc) ADVANCE(229);
      if (lookahead == 0x30ec) ADVANCE(230);
      if (lookahead == 0x4f5c) ADVANCE(235);
      if (lookahead == 0x51fa) ADVANCE(238);
      if (lookahead == 0x5236) ADVANCE(231);
      if (lookahead == 0x5382) ADVANCE(239);
      if (lookahead == 0x539f) ADVANCE(232);
      if (lookahead == 0x5f55) ADVANCE(240);
      if (lookahead == 0x63d2) ADVANCE(234);
      if (lookahead == 0x6b4c) ADVANCE(233);
      if (lookahead == 0x7de8) ADVANCE(236);
      if (lookahead == 0x811a) ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(535);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(207);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(536);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 185:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(185);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == 'V') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == 0x30a2) ADVANCE(228);
      if (lookahead == 0x30a4) ADVANCE(227);
      if (lookahead == 0x30dc) ADVANCE(229);
      if (lookahead == 0x30ec) ADVANCE(230);
      if (lookahead == 0x4f5c) ADVANCE(235);
      if (lookahead == 0x51fa) ADVANCE(238);
      if (lookahead == 0x5236) ADVANCE(231);
      if (lookahead == 0x5382) ADVANCE(239);
      if (lookahead == 0x539f) ADVANCE(232);
      if (lookahead == 0x5f55) ADVANCE(240);
      if (lookahead == 0x63d2) ADVANCE(234);
      if (lookahead == 0x6b4c) ADVANCE(233);
      if (lookahead == 0x7de8) ADVANCE(236);
      if (lookahead == 0x811a) ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 186:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(186);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == 'V') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 0x30a2) ADVANCE(228);
      if (lookahead == 0x30a4) ADVANCE(227);
      if (lookahead == 0x30dc) ADVANCE(229);
      if (lookahead == 0x30ec) ADVANCE(230);
      if (lookahead == 0x4f5c) ADVANCE(235);
      if (lookahead == 0x51fa) ADVANCE(238);
      if (lookahead == 0x5236) ADVANCE(231);
      if (lookahead == 0x5382) ADVANCE(239);
      if (lookahead == 0x539f) ADVANCE(232);
      if (lookahead == 0x5f55) ADVANCE(240);
      if (lookahead == 0x63d2) ADVANCE(234);
      if (lookahead == 0x6b4c) ADVANCE(233);
      if (lookahead == 0x7de8) ADVANCE(236);
      if (lookahead == 0x811a) ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 187:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '\n', 198,
        'A', 357,
        'C', 298,
        'I', 314,
        'L', 250,
        'M', 386,
        'P', 283,
        'R', 274,
        'V', 334,
        'a', 367,
        'c', 309,
        'i', 319,
        'l', 256,
        'm', 391,
        'p', 290,
        'r', 291,
        'v', 335,
        0x300a, 242,
        0x30a2, 400,
        0x30a4, 397,
        0x30dc, 402,
        0x30ec, 403,
        0x4f5c, 410,
        0x51fa, 416,
        0x5236, 405,
        0x5382, 417,
        0x539f, 406,
        0x5f55, 418,
        0x63d2, 408,
        0x6b4c, 407,
        0x7de8, 411,
        0x811a, 415,
        '\t', 202,
        ' ', 202,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(249);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(201);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 188:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == 'V') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 0x30a2) ADVANCE(228);
      if (lookahead == 0x30a4) ADVANCE(227);
      if (lookahead == 0x30dc) ADVANCE(229);
      if (lookahead == 0x30ec) ADVANCE(230);
      if (lookahead == 0x4f5c) ADVANCE(235);
      if (lookahead == 0x51fa) ADVANCE(238);
      if (lookahead == 0x5236) ADVANCE(231);
      if (lookahead == 0x5382) ADVANCE(239);
      if (lookahead == 0x539f) ADVANCE(232);
      if (lookahead == 0x5f55) ADVANCE(240);
      if (lookahead == 0x63d2) ADVANCE(234);
      if (lookahead == 0x6b4c) ADVANCE(233);
      if (lookahead == 0x7de8) ADVANCE(236);
      if (lookahead == 0x811a) ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 189:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(189);
      if (lookahead == 0x300a) ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 190:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '/', 7,
        '@', 196,
        'A', 112,
        'C', 60,
        'I', 72,
        'L', 10,
        'M', 149,
        'P', 45,
        'R', 35,
        'V', 96,
        'a', 128,
        'c', 71,
        'f', 36,
        'i', 81,
        'l', 17,
        'm', 154,
        'p', 52,
        'r', 53,
        'v', 97,
        0x300b, 243,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 175,
        0x51fa, 181,
        0x5236, 170,
        0x5382, 182,
        0x539f, 171,
        0x5f55, 183,
        0x63d2, 173,
        0x6b4c, 172,
        0x7de8, 176,
        0x811a, 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      END_STATE();
    case 191:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '/', 7,
        '@', 196,
        'A', 112,
        'C', 60,
        'I', 72,
        'L', 10,
        'M', 149,
        'P', 45,
        'R', 35,
        'V', 96,
        'a', 128,
        'c', 71,
        'i', 81,
        'l', 17,
        'm', 154,
        'p', 52,
        'r', 53,
        'v', 97,
        0x300a, 242,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 175,
        0x51fa, 181,
        0x5236, 170,
        0x5382, 182,
        0x539f, 171,
        0x5f55, 183,
        0x63d2, 173,
        0x6b4c, 172,
        0x7de8, 176,
        0x811a, 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(191);
      END_STATE();
    case 192:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '/', 7,
        '@', 196,
        'A', 112,
        'C', 60,
        'I', 72,
        'L', 10,
        'M', 149,
        'P', 45,
        'R', 35,
        'V', 96,
        'a', 128,
        'c', 71,
        'i', 81,
        'l', 17,
        'm', 154,
        'p', 52,
        'r', 53,
        'v', 97,
        0x300b, 243,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 175,
        0x51fa, 181,
        0x5236, 170,
        0x5382, 182,
        0x539f, 171,
        0x5f55, 183,
        0x63d2, 173,
        0x6b4c, 172,
        0x7de8, 176,
        0x811a, 180,
        '\t', 537,
        ' ', 537,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(193);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(538);
      END_STATE();
    case 193:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '/', 7,
        '@', 196,
        'A', 112,
        'C', 60,
        'I', 72,
        'L', 10,
        'M', 149,
        'P', 45,
        'R', 35,
        'V', 96,
        'a', 128,
        'c', 71,
        'i', 81,
        'l', 17,
        'm', 154,
        'p', 52,
        'r', 53,
        'v', 97,
        0x300b, 243,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 175,
        0x51fa, 181,
        0x5236, 170,
        0x5382, 182,
        0x539f, 171,
        0x5f55, 183,
        0x63d2, 173,
        0x6b4c, 172,
        0x7de8, 176,
        0x811a, 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(193);
      END_STATE();
    case 194:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '/', 7,
        '@', 197,
        'A', 357,
        'C', 298,
        'I', 314,
        'L', 250,
        'M', 386,
        'P', 283,
        'R', 274,
        'V', 334,
        'a', 367,
        'c', 309,
        'i', 319,
        'l', 256,
        'm', 391,
        'p', 290,
        'r', 291,
        'v', 335,
        0x300a, 242,
        0x30a2, 400,
        0x30a4, 397,
        0x30dc, 402,
        0x30ec, 403,
        0x4f5c, 410,
        0x51fa, 416,
        0x5236, 405,
        0x5382, 417,
        0x539f, 406,
        0x5f55, 418,
        0x63d2, 408,
        0x6b4c, 407,
        0x7de8, 411,
        0x811a, 415,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(191);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(248);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '\n', 198,
        'A', 222,
        'C', 216,
        'I', 218,
        'L', 208,
        'M', 224,
        'P', 212,
        'R', 210,
        'V', 220,
        'a', 223,
        'c', 217,
        'i', 219,
        'l', 209,
        'm', 225,
        'p', 213,
        'r', 214,
        'v', 221,
        0x300a, 242,
        0x30a2, 228,
        0x30a4, 227,
        0x30dc, 229,
        0x30ec, 230,
        0x4f5c, 235,
        0x51fa, 238,
        0x5236, 231,
        0x5382, 239,
        0x539f, 232,
        0x5f55, 240,
        0x63d2, 234,
        0x6b4c, 233,
        0x7de8, 236,
        0x811a, 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 205,
        '@', 196,
        'A', 222,
        'C', 216,
        'I', 218,
        'L', 208,
        'M', 224,
        'P', 212,
        'R', 210,
        'V', 220,
        'a', 223,
        'c', 217,
        'f', 211,
        'i', 219,
        'l', 209,
        'm', 225,
        'p', 213,
        'r', 214,
        'v', 221,
        0x300a, 242,
        0x300b, 243,
        0x30a2, 228,
        0x30a4, 227,
        0x30dc, 229,
        0x30ec, 230,
        0x4f5c, 235,
        0x51fa, 238,
        0x5236, 231,
        0x5382, 239,
        0x539f, 232,
        0x5f55, 240,
        0x63d2, 234,
        0x6b4c, 233,
        0x7de8, 236,
        0x811a, 237,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 205,
        '@', 196,
        'A', 222,
        'C', 216,
        'I', 218,
        'L', 208,
        'M', 224,
        'P', 212,
        'R', 210,
        'V', 220,
        'a', 223,
        'c', 217,
        'f', 211,
        'i', 219,
        'l', 209,
        'm', 225,
        'p', 213,
        'r', 214,
        'v', 221,
        0x30a2, 228,
        0x30a4, 227,
        0x30dc, 229,
        0x30ec, 230,
        0x4f5c, 235,
        0x51fa, 238,
        0x5236, 231,
        0x5382, 239,
        0x539f, 232,
        0x5f55, 240,
        0x63d2, 234,
        0x6b4c, 233,
        0x7de8, 236,
        0x811a, 237,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '/') ADVANCE(200);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '@', 196,
        'A', 222,
        'C', 216,
        'I', 218,
        'L', 208,
        'M', 224,
        'P', 212,
        'R', 210,
        'V', 220,
        'a', 223,
        'c', 217,
        'i', 219,
        'l', 209,
        'm', 225,
        'p', 213,
        'r', 214,
        'v', 221,
        0x30a2, 228,
        0x30a4, 227,
        0x30dc, 229,
        0x30ec, 230,
        0x4f5c, 235,
        0x51fa, 238,
        0x5236, 231,
        0x5382, 239,
        0x539f, 232,
        0x5f55, 240,
        0x63d2, 234,
        0x6b4c, 233,
        0x7de8, 236,
        0x811a, 237,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        'A', 222,
        'C', 216,
        'I', 218,
        'L', 208,
        'M', 224,
        'P', 212,
        'R', 210,
        'V', 220,
        'a', 223,
        'c', 217,
        'i', 219,
        'l', 209,
        'm', 225,
        'p', 213,
        'r', 214,
        'v', 221,
        0x300a, 242,
        0x30a2, 228,
        0x30a4, 227,
        0x30dc, 229,
        0x30ec, 230,
        0x4f5c, 235,
        0x51fa, 238,
        0x5236, 231,
        0x5382, 239,
        0x539f, 232,
        0x5f55, 240,
        0x63d2, 234,
        0x6b4c, 233,
        0x7de8, 236,
        0x811a, 237,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 0x300b) ADVANCE(243);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x300a) ADVANCE(242);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30e9) ADVANCE(159);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30ec) ADVANCE(166);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(157);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(161);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(169);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(533);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x5531) ADVANCE(505);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x56fe) ADVANCE(525);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(515);
      if (lookahead == 0x7de8) ADVANCE(177);
      if (lookahead == 0x8a5e) ADVANCE(519);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(517);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x672c) ADVANCE(523);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x7248) ADVANCE(174);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x724c) ADVANCE(521);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x97f3) ADVANCE(531);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 197,
        'A', 357,
        'C', 298,
        'I', 314,
        'L', 250,
        'M', 386,
        'P', 283,
        'R', 274,
        'V', 334,
        'a', 367,
        'c', 309,
        'i', 319,
        'l', 256,
        'm', 391,
        'p', 290,
        'r', 291,
        'v', 335,
        0x30a2, 400,
        0x30a4, 397,
        0x30dc, 402,
        0x30ec, 403,
        0x4f5c, 410,
        0x51fa, 416,
        0x5236, 405,
        0x5382, 417,
        0x539f, 406,
        0x5f55, 418,
        0x63d2, 408,
        0x6b4c, 407,
        0x7de8, 411,
        0x811a, 415,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(248);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 357,
        'C', 298,
        'I', 314,
        'L', 250,
        'M', 386,
        'P', 283,
        'R', 274,
        'V', 334,
        'a', 367,
        'c', 309,
        'i', 319,
        'l', 256,
        'm', 391,
        'p', 290,
        'r', 291,
        'v', 335,
        0x30a2, 400,
        0x30a4, 397,
        0x30dc, 402,
        0x30ec, 403,
        0x4f5c, 410,
        0x51fa, 416,
        0x5236, 405,
        0x5382, 417,
        0x539f, 406,
        0x5f55, 418,
        0x63d2, 408,
        0x6b4c, 407,
        0x7de8, 411,
        0x811a, 415,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(249);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'y') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(324);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(311);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(313);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(361);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(333);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(282);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(284);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(445);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(447);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(315);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(342);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(285);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(316);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(286);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(389);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(307);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(308);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(265);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(331);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(310);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(312);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(353);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(332);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(269);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(494);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(277);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(279);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(320);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(260);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(261);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(262);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(263);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(339);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(341);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(343);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(329);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(330);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(321);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(317);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(387);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(318);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(287);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(288);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(296);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(294);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(295);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(297);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(465);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(270);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(325);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(326);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(327);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(328);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(362);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(272);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(338);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(340);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(251);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(299);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(292);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(322);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(264);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(271);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(301);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(323);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(267);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(273);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(257);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(293);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(278);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(280);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(300);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(302);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(477);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(479);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(303);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(304);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(305);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(306);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(266);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(268);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(395);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(401);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(396);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(528);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(534);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(530);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(516);
      if (lookahead == 0x7de8) ADVANCE(412);
      if (lookahead == 0x8a5e) ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(510);
      if (lookahead == 0x7de8) ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(532);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 's') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 's') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(454);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(456);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(252);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(253);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(254);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(255);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(178);
      if (lookahead == 0x66f2) ADVANCE(511);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(413);
      if (lookahead == 0x66f2) ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(420);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 535,
        ' ', 535,
        '&', 536,
        ',', 536,
        '/', 536,
        ':', 536,
        0x3000, 536,
        0x3001, 536,
        0x30fb, 536,
        0xff06, 536,
        0xff1a, 536,
        0xff1b, 536,
      );
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 536,
        ' ', 536,
        '&', 536,
        ',', 536,
        '/', 536,
        ':', 536,
        0x3000, 536,
        0x3001, 536,
        0x30fb, 536,
        0xff06, 536,
        0xff1a, 536,
        0xff1b, 536,
      );
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 537,
        ' ', 537,
        '&', 538,
        ',', 538,
        0x3000, 538,
        0x3001, 538,
        0x30fb, 538,
        0xff06, 538,
        0xff1b, 538,
      );
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 538,
        ' ', 538,
        '&', 538,
        ',', 538,
        0x3000, 538,
        0x3001, 538,
        0x30fb, 538,
        0xff06, 538,
        0xff1b, 538,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 185},
  [2] = {.lex_state = 190},
  [3] = {.lex_state = 190},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 185},
  [7] = {.lex_state = 185},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 192},
  [10] = {.lex_state = 185},
  [11] = {.lex_state = 194},
  [12] = {.lex_state = 187},
  [13] = {.lex_state = 186},
  [14] = {.lex_state = 185},
  [15] = {.lex_state = 187},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 192},
  [21] = {.lex_state = 186},
  [22] = {.lex_state = 192},
  [23] = {.lex_state = 187},
  [24] = {.lex_state = 186},
  [25] = {.lex_state = 194},
  [26] = {.lex_state = 192},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 192},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 187},
  [32] = {.lex_state = 192},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 188},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 184},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 188},
  [39] = {.lex_state = 192},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 186},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 190},
  [45] = {.lex_state = 188},
  [46] = {.lex_state = 188},
  [47] = {.lex_state = 185},
  [48] = {.lex_state = 184},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 185},
  [51] = {.lex_state = 184},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 188},
  [54] = {.lex_state = 185},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 185},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 185},
  [59] = {.lex_state = 185},
  [60] = {.lex_state = 188},
  [61] = {.lex_state = 185},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 155},
  [68] = {.lex_state = 155},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 192},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 155},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 155},
  [78] = {.lex_state = 155},
  [79] = {.lex_state = 155},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 189},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 155},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 192},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 189},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 189},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 190},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 190},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 190},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(1),
    [anon_sym_u300a] = ACTIONS(1),
    [anon_sym_u300b] = ACTIONS(1),
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
    [sym_source_file] = STATE(100),
    [sym_song] = STATE(71),
    [sym_credit_block] = STATE(62),
    [sym_credit_field] = STATE(14),
    [sym__quotable_song_title_maybefeat_maybecomment] = STATE(2),
    [sym__quotable_song_title_maybefeat] = STATE(52),
    [sym__song_title_maybefeat] = STATE(44),
    [sym_song_title] = STATE(29),
    [sym_role] = STATE(99),
    [aux_sym_source_file_repeat1] = STATE(65),
    [aux_sym_credit_block_repeat1] = STATE(14),
    [aux_sym_credit_field_repeat1] = STATE(18),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(8),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(3),
    [anon_sym_u300a] = ACTIONS(5),
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
    [sym_credit_block] = STATE(81),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(30),
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
    [sym_credit_block] = STATE(81),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(30),
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
    [sym_credit_block] = STATE(81),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(30),
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
  [5] = {
    [sym_credit_block] = STATE(81),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(30),
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
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
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
  [7] = {
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(25),
    [anon_sym_Music] = ACTIONS(27),
    [anon_sym_music] = ACTIONS(27),
    [anon_sym_Composition] = ACTIONS(27),
    [anon_sym_composition] = ACTIONS(27),
    [anon_sym_Composer] = ACTIONS(27),
    [anon_sym_composer] = ACTIONS(27),
    [anon_sym_Compose] = ACTIONS(27),
    [anon_sym_compose] = ACTIONS(27),
    [anon_sym_Lyrics] = ACTIONS(27),
    [anon_sym_lyrics] = ACTIONS(27),
    [anon_sym_Lyricist] = ACTIONS(27),
    [anon_sym_lyricist] = ACTIONS(27),
    [anon_sym_Lyric] = ACTIONS(27),
    [anon_sym_lyric] = ACTIONS(27),
    [anon_sym_Arrangement] = ACTIONS(27),
    [anon_sym_arrangement] = ACTIONS(27),
    [anon_sym_Arranger] = ACTIONS(27),
    [anon_sym_arranger] = ACTIONS(27),
    [anon_sym_Arrange] = ACTIONS(27),
    [anon_sym_arrange] = ACTIONS(27),
    [anon_sym_Vocal] = ACTIONS(27),
    [anon_sym_vocal] = ACTIONS(27),
    [anon_sym_Vo] = ACTIONS(27),
    [anon_sym_vo] = ACTIONS(27),
    [anon_sym_Performer] = ACTIONS(27),
    [anon_sym_performer] = ACTIONS(27),
    [anon_sym_Illustration] = ACTIONS(27),
    [anon_sym_illustration] = ACTIONS(27),
    [anon_sym_Illust] = ACTIONS(27),
    [anon_sym_illust] = ACTIONS(27),
    [anon_sym_Label] = ACTIONS(27),
    [anon_sym_label] = ACTIONS(27),
    [anon_sym_Circle] = ACTIONS(27),
    [anon_sym_circle] = ACTIONS(27),
    [anon_sym_Producer] = ACTIONS(27),
    [anon_sym_producer] = ACTIONS(27),
    [anon_sym_Recording] = ACTIONS(27),
    [anon_sym_recording] = ACTIONS(27),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(27),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(27),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(27),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(27),
    [anon_sym_u6b4cu5531] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu66f2] = ACTIONS(27),
    [anon_sym_u7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5e] = ACTIONS(27),
    [anon_sym_u5382u724c] = ACTIONS(27),
    [anon_sym_u811au672c] = ACTIONS(27),
    [anon_sym_u63d2u56fe] = ACTIONS(27),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(27),
    [anon_sym_u51fau7248u65b9] = ACTIONS(27),
    [anon_sym_u5f55u97f3] = ACTIONS(27),
    [anon_sym_u539fu4f5c] = ACTIONS(27),
  },
  [8] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_SLASH_SLASH] = ACTIONS(32),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(3),
    [aux_sym_feat_field_token1] = ACTIONS(32),
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
    [aux_sym_feat_field_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_SLASH_SLASH] = ACTIONS(36),
    [anon_sym_u300b] = ACTIONS(36),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(36),
    [anon_sym_compose] = ACTIONS(36),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(36),
    [anon_sym_lyric] = ACTIONS(36),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(36),
    [anon_sym_arrange] = ACTIONS(36),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(36),
    [anon_sym_vo] = ACTIONS(36),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(36),
    [anon_sym_illust] = ACTIONS(36),
    [anon_sym_Label] = ACTIONS(36),
    [anon_sym_label] = ACTIONS(36),
    [anon_sym_Circle] = ACTIONS(36),
    [anon_sym_circle] = ACTIONS(36),
    [anon_sym_Producer] = ACTIONS(36),
    [anon_sym_producer] = ACTIONS(36),
    [anon_sym_Recording] = ACTIONS(36),
    [anon_sym_recording] = ACTIONS(36),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(36),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(36),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(36),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(36),
    [anon_sym_u6b4cu5531] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu66f2] = ACTIONS(36),
    [anon_sym_u7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5e] = ACTIONS(36),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
    [sym__ssep] = ACTIONS(38),
  },
  [10] = {
    [sym_credit_field] = STATE(10),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(10),
    [aux_sym_credit_field_repeat1] = STATE(18),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(25),
    [anon_sym_Music] = ACTIONS(27),
    [anon_sym_music] = ACTIONS(27),
    [anon_sym_Composition] = ACTIONS(27),
    [anon_sym_composition] = ACTIONS(27),
    [anon_sym_Composer] = ACTIONS(27),
    [anon_sym_composer] = ACTIONS(27),
    [anon_sym_Compose] = ACTIONS(27),
    [anon_sym_compose] = ACTIONS(27),
    [anon_sym_Lyrics] = ACTIONS(27),
    [anon_sym_lyrics] = ACTIONS(27),
    [anon_sym_Lyricist] = ACTIONS(27),
    [anon_sym_lyricist] = ACTIONS(27),
    [anon_sym_Lyric] = ACTIONS(27),
    [anon_sym_lyric] = ACTIONS(27),
    [anon_sym_Arrangement] = ACTIONS(27),
    [anon_sym_arrangement] = ACTIONS(27),
    [anon_sym_Arranger] = ACTIONS(27),
    [anon_sym_arranger] = ACTIONS(27),
    [anon_sym_Arrange] = ACTIONS(27),
    [anon_sym_arrange] = ACTIONS(27),
    [anon_sym_Vocal] = ACTIONS(27),
    [anon_sym_vocal] = ACTIONS(27),
    [anon_sym_Vo] = ACTIONS(27),
    [anon_sym_vo] = ACTIONS(27),
    [anon_sym_Performer] = ACTIONS(27),
    [anon_sym_performer] = ACTIONS(27),
    [anon_sym_Illustration] = ACTIONS(27),
    [anon_sym_illustration] = ACTIONS(27),
    [anon_sym_Illust] = ACTIONS(27),
    [anon_sym_illust] = ACTIONS(27),
    [anon_sym_Label] = ACTIONS(27),
    [anon_sym_label] = ACTIONS(27),
    [anon_sym_Circle] = ACTIONS(27),
    [anon_sym_circle] = ACTIONS(27),
    [anon_sym_Producer] = ACTIONS(27),
    [anon_sym_producer] = ACTIONS(27),
    [anon_sym_Recording] = ACTIONS(27),
    [anon_sym_recording] = ACTIONS(27),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(27),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(27),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(27),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(27),
    [anon_sym_u6b4cu5531] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu66f2] = ACTIONS(27),
    [anon_sym_u7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5e] = ACTIONS(27),
    [anon_sym_u5382u724c] = ACTIONS(27),
    [anon_sym_u811au672c] = ACTIONS(27),
    [anon_sym_u63d2u56fe] = ACTIONS(27),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(27),
    [anon_sym_u51fau7248u65b9] = ACTIONS(27),
    [anon_sym_u5f55u97f3] = ACTIONS(27),
    [anon_sym_u539fu4f5c] = ACTIONS(27),
  },
  [11] = {
    [sym__quotable_creator_name] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [anon_sym_u300a] = ACTIONS(45),
    [sym_creator_name] = ACTIONS(47),
    [anon_sym_Music] = ACTIONS(43),
    [anon_sym_music] = ACTIONS(43),
    [anon_sym_Composition] = ACTIONS(43),
    [anon_sym_composition] = ACTIONS(43),
    [anon_sym_Composer] = ACTIONS(43),
    [anon_sym_composer] = ACTIONS(43),
    [anon_sym_Compose] = ACTIONS(43),
    [anon_sym_compose] = ACTIONS(43),
    [anon_sym_Lyrics] = ACTIONS(43),
    [anon_sym_lyrics] = ACTIONS(43),
    [anon_sym_Lyricist] = ACTIONS(43),
    [anon_sym_lyricist] = ACTIONS(43),
    [anon_sym_Lyric] = ACTIONS(43),
    [anon_sym_lyric] = ACTIONS(43),
    [anon_sym_Arrangement] = ACTIONS(43),
    [anon_sym_arrangement] = ACTIONS(43),
    [anon_sym_Arranger] = ACTIONS(43),
    [anon_sym_arranger] = ACTIONS(43),
    [anon_sym_Arrange] = ACTIONS(43),
    [anon_sym_arrange] = ACTIONS(43),
    [anon_sym_Vocal] = ACTIONS(43),
    [anon_sym_vocal] = ACTIONS(43),
    [anon_sym_Vo] = ACTIONS(43),
    [anon_sym_vo] = ACTIONS(43),
    [anon_sym_Performer] = ACTIONS(43),
    [anon_sym_performer] = ACTIONS(43),
    [anon_sym_Illustration] = ACTIONS(43),
    [anon_sym_illustration] = ACTIONS(43),
    [anon_sym_Illust] = ACTIONS(43),
    [anon_sym_illust] = ACTIONS(43),
    [anon_sym_Label] = ACTIONS(43),
    [anon_sym_label] = ACTIONS(43),
    [anon_sym_Circle] = ACTIONS(43),
    [anon_sym_circle] = ACTIONS(43),
    [anon_sym_Producer] = ACTIONS(43),
    [anon_sym_producer] = ACTIONS(43),
    [anon_sym_Recording] = ACTIONS(43),
    [anon_sym_recording] = ACTIONS(43),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(43),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(43),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(43),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(43),
    [anon_sym_u6b4cu5531] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu66f2] = ACTIONS(43),
    [anon_sym_u7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5e] = ACTIONS(43),
    [anon_sym_u5382u724c] = ACTIONS(43),
    [anon_sym_u811au672c] = ACTIONS(43),
    [anon_sym_u63d2u56fe] = ACTIONS(43),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(43),
    [anon_sym_u51fau7248u65b9] = ACTIONS(43),
    [anon_sym_u5f55u97f3] = ACTIONS(43),
    [anon_sym_u539fu4f5c] = ACTIONS(43),
  },
  [12] = {
    [sym__quotable_creator_name] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [sym_creator_name] = ACTIONS(55),
    [anon_sym_Music] = ACTIONS(53),
    [anon_sym_music] = ACTIONS(53),
    [anon_sym_Composition] = ACTIONS(53),
    [anon_sym_composition] = ACTIONS(53),
    [anon_sym_Composer] = ACTIONS(53),
    [anon_sym_composer] = ACTIONS(53),
    [anon_sym_Compose] = ACTIONS(53),
    [anon_sym_compose] = ACTIONS(53),
    [anon_sym_Lyrics] = ACTIONS(53),
    [anon_sym_lyrics] = ACTIONS(53),
    [anon_sym_Lyricist] = ACTIONS(53),
    [anon_sym_lyricist] = ACTIONS(53),
    [anon_sym_Lyric] = ACTIONS(53),
    [anon_sym_lyric] = ACTIONS(53),
    [anon_sym_Arrangement] = ACTIONS(53),
    [anon_sym_arrangement] = ACTIONS(53),
    [anon_sym_Arranger] = ACTIONS(53),
    [anon_sym_arranger] = ACTIONS(53),
    [anon_sym_Arrange] = ACTIONS(53),
    [anon_sym_arrange] = ACTIONS(53),
    [anon_sym_Vocal] = ACTIONS(53),
    [anon_sym_vocal] = ACTIONS(53),
    [anon_sym_Vo] = ACTIONS(53),
    [anon_sym_vo] = ACTIONS(53),
    [anon_sym_Performer] = ACTIONS(53),
    [anon_sym_performer] = ACTIONS(53),
    [anon_sym_Illustration] = ACTIONS(53),
    [anon_sym_illustration] = ACTIONS(53),
    [anon_sym_Illust] = ACTIONS(53),
    [anon_sym_illust] = ACTIONS(53),
    [anon_sym_Label] = ACTIONS(53),
    [anon_sym_label] = ACTIONS(53),
    [anon_sym_Circle] = ACTIONS(53),
    [anon_sym_circle] = ACTIONS(53),
    [anon_sym_Producer] = ACTIONS(53),
    [anon_sym_producer] = ACTIONS(53),
    [anon_sym_Recording] = ACTIONS(53),
    [anon_sym_recording] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
  },
  [13] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(61),
    [aux_sym_feat_field_token1] = ACTIONS(59),
    [anon_sym_Music] = ACTIONS(59),
    [anon_sym_music] = ACTIONS(59),
    [anon_sym_Composition] = ACTIONS(59),
    [anon_sym_composition] = ACTIONS(59),
    [anon_sym_Composer] = ACTIONS(59),
    [anon_sym_composer] = ACTIONS(59),
    [anon_sym_Compose] = ACTIONS(59),
    [anon_sym_compose] = ACTIONS(59),
    [anon_sym_Lyrics] = ACTIONS(59),
    [anon_sym_lyrics] = ACTIONS(59),
    [anon_sym_Lyricist] = ACTIONS(59),
    [anon_sym_lyricist] = ACTIONS(59),
    [anon_sym_Lyric] = ACTIONS(59),
    [anon_sym_lyric] = ACTIONS(59),
    [anon_sym_Arrangement] = ACTIONS(59),
    [anon_sym_arrangement] = ACTIONS(59),
    [anon_sym_Arranger] = ACTIONS(59),
    [anon_sym_arranger] = ACTIONS(59),
    [anon_sym_Arrange] = ACTIONS(59),
    [anon_sym_arrange] = ACTIONS(59),
    [anon_sym_Vocal] = ACTIONS(59),
    [anon_sym_vocal] = ACTIONS(59),
    [anon_sym_Vo] = ACTIONS(59),
    [anon_sym_vo] = ACTIONS(59),
    [anon_sym_Performer] = ACTIONS(59),
    [anon_sym_performer] = ACTIONS(59),
    [anon_sym_Illustration] = ACTIONS(59),
    [anon_sym_illustration] = ACTIONS(59),
    [anon_sym_Illust] = ACTIONS(59),
    [anon_sym_illust] = ACTIONS(59),
    [anon_sym_Label] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_Circle] = ACTIONS(59),
    [anon_sym_circle] = ACTIONS(59),
    [anon_sym_Producer] = ACTIONS(59),
    [anon_sym_producer] = ACTIONS(59),
    [anon_sym_Recording] = ACTIONS(59),
    [anon_sym_recording] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
  },
  [14] = {
    [sym_credit_field] = STATE(10),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(10),
    [aux_sym_credit_field_repeat1] = STATE(18),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
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
    [sym__quotable_creator_name] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(66),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(68),
    [anon_sym_u300a] = ACTIONS(68),
    [sym_creator_name] = ACTIONS(55),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(68),
    [anon_sym_label] = ACTIONS(68),
    [anon_sym_Circle] = ACTIONS(68),
    [anon_sym_circle] = ACTIONS(68),
    [anon_sym_Producer] = ACTIONS(68),
    [anon_sym_producer] = ACTIONS(68),
    [anon_sym_Recording] = ACTIONS(68),
    [anon_sym_recording] = ACTIONS(68),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(68),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(68),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(68),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(68),
    [anon_sym_u6b4cu5531] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu66f2] = ACTIONS(68),
    [anon_sym_u7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [16] = {
    [sym_credit_block] = STATE(93),
    [sym_credit_field] = STATE(14),
    [sym_role] = STATE(99),
    [aux_sym_credit_block_repeat1] = STATE(14),
    [aux_sym_credit_field_repeat1] = STATE(18),
    [anon_sym_AT] = ACTIONS(70),
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
  [17] = {
    [sym__quotable_creator_name] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(45),
    [sym_creator_name] = ACTIONS(47),
    [anon_sym_Music] = ACTIONS(74),
    [anon_sym_music] = ACTIONS(74),
    [anon_sym_Composition] = ACTIONS(74),
    [anon_sym_composition] = ACTIONS(74),
    [anon_sym_Composer] = ACTIONS(74),
    [anon_sym_composer] = ACTIONS(74),
    [anon_sym_Compose] = ACTIONS(74),
    [anon_sym_compose] = ACTIONS(74),
    [anon_sym_Lyrics] = ACTIONS(74),
    [anon_sym_lyrics] = ACTIONS(74),
    [anon_sym_Lyricist] = ACTIONS(74),
    [anon_sym_lyricist] = ACTIONS(74),
    [anon_sym_Lyric] = ACTIONS(74),
    [anon_sym_lyric] = ACTIONS(74),
    [anon_sym_Arrangement] = ACTIONS(74),
    [anon_sym_arrangement] = ACTIONS(74),
    [anon_sym_Arranger] = ACTIONS(74),
    [anon_sym_arranger] = ACTIONS(74),
    [anon_sym_Arrange] = ACTIONS(74),
    [anon_sym_arrange] = ACTIONS(74),
    [anon_sym_Vocal] = ACTIONS(74),
    [anon_sym_vocal] = ACTIONS(74),
    [anon_sym_Vo] = ACTIONS(74),
    [anon_sym_vo] = ACTIONS(74),
    [anon_sym_Performer] = ACTIONS(74),
    [anon_sym_performer] = ACTIONS(74),
    [anon_sym_Illustration] = ACTIONS(74),
    [anon_sym_illustration] = ACTIONS(74),
    [anon_sym_Illust] = ACTIONS(74),
    [anon_sym_illust] = ACTIONS(74),
    [anon_sym_Label] = ACTIONS(74),
    [anon_sym_label] = ACTIONS(74),
    [anon_sym_Circle] = ACTIONS(74),
    [anon_sym_circle] = ACTIONS(74),
    [anon_sym_Producer] = ACTIONS(74),
    [anon_sym_producer] = ACTIONS(74),
    [anon_sym_Recording] = ACTIONS(74),
    [anon_sym_recording] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
  },
  [18] = {
    [sym__quotable_creator_name] = STATE(82),
    [sym_role] = STATE(99),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(76),
    [sym_creator_name] = ACTIONS(55),
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
  [19] = {
    [sym__quotable_creator_name] = STATE(22),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [anon_sym_u300a] = ACTIONS(45),
    [sym_creator_name] = ACTIONS(47),
    [anon_sym_Music] = ACTIONS(43),
    [anon_sym_music] = ACTIONS(43),
    [anon_sym_Composition] = ACTIONS(43),
    [anon_sym_composition] = ACTIONS(43),
    [anon_sym_Composer] = ACTIONS(43),
    [anon_sym_composer] = ACTIONS(43),
    [anon_sym_Compose] = ACTIONS(43),
    [anon_sym_compose] = ACTIONS(43),
    [anon_sym_Lyrics] = ACTIONS(43),
    [anon_sym_lyrics] = ACTIONS(43),
    [anon_sym_Lyricist] = ACTIONS(43),
    [anon_sym_lyricist] = ACTIONS(43),
    [anon_sym_Lyric] = ACTIONS(43),
    [anon_sym_lyric] = ACTIONS(43),
    [anon_sym_Arrangement] = ACTIONS(43),
    [anon_sym_arrangement] = ACTIONS(43),
    [anon_sym_Arranger] = ACTIONS(43),
    [anon_sym_arranger] = ACTIONS(43),
    [anon_sym_Arrange] = ACTIONS(43),
    [anon_sym_arrange] = ACTIONS(43),
    [anon_sym_Vocal] = ACTIONS(43),
    [anon_sym_vocal] = ACTIONS(43),
    [anon_sym_Vo] = ACTIONS(43),
    [anon_sym_vo] = ACTIONS(43),
    [anon_sym_Performer] = ACTIONS(43),
    [anon_sym_performer] = ACTIONS(43),
    [anon_sym_Illustration] = ACTIONS(43),
    [anon_sym_illustration] = ACTIONS(43),
    [anon_sym_Illust] = ACTIONS(43),
    [anon_sym_illust] = ACTIONS(43),
    [anon_sym_Label] = ACTIONS(43),
    [anon_sym_label] = ACTIONS(43),
    [anon_sym_Circle] = ACTIONS(43),
    [anon_sym_circle] = ACTIONS(43),
    [anon_sym_Producer] = ACTIONS(43),
    [anon_sym_producer] = ACTIONS(43),
    [anon_sym_Recording] = ACTIONS(43),
    [anon_sym_recording] = ACTIONS(43),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(43),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(43),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(43),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(43),
    [anon_sym_u6b4cu5531] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu66f2] = ACTIONS(43),
    [anon_sym_u7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5e] = ACTIONS(43),
    [anon_sym_u5382u724c] = ACTIONS(43),
    [anon_sym_u811au672c] = ACTIONS(43),
    [anon_sym_u63d2u56fe] = ACTIONS(43),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(43),
    [anon_sym_u51fau7248u65b9] = ACTIONS(43),
    [anon_sym_u5f55u97f3] = ACTIONS(43),
    [anon_sym_u539fu4f5c] = ACTIONS(43),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_u300b] = ACTIONS(80),
    [anon_sym_Music] = ACTIONS(80),
    [anon_sym_music] = ACTIONS(80),
    [anon_sym_Composition] = ACTIONS(80),
    [anon_sym_composition] = ACTIONS(80),
    [anon_sym_Composer] = ACTIONS(80),
    [anon_sym_composer] = ACTIONS(80),
    [anon_sym_Compose] = ACTIONS(80),
    [anon_sym_compose] = ACTIONS(80),
    [anon_sym_Lyrics] = ACTIONS(80),
    [anon_sym_lyrics] = ACTIONS(80),
    [anon_sym_Lyricist] = ACTIONS(80),
    [anon_sym_lyricist] = ACTIONS(80),
    [anon_sym_Lyric] = ACTIONS(80),
    [anon_sym_lyric] = ACTIONS(80),
    [anon_sym_Arrangement] = ACTIONS(80),
    [anon_sym_arrangement] = ACTIONS(80),
    [anon_sym_Arranger] = ACTIONS(80),
    [anon_sym_arranger] = ACTIONS(80),
    [anon_sym_Arrange] = ACTIONS(80),
    [anon_sym_arrange] = ACTIONS(80),
    [anon_sym_Vocal] = ACTIONS(80),
    [anon_sym_vocal] = ACTIONS(80),
    [anon_sym_Vo] = ACTIONS(80),
    [anon_sym_vo] = ACTIONS(80),
    [anon_sym_Performer] = ACTIONS(80),
    [anon_sym_performer] = ACTIONS(80),
    [anon_sym_Illustration] = ACTIONS(80),
    [anon_sym_illustration] = ACTIONS(80),
    [anon_sym_Illust] = ACTIONS(80),
    [anon_sym_illust] = ACTIONS(80),
    [anon_sym_Label] = ACTIONS(80),
    [anon_sym_label] = ACTIONS(80),
    [anon_sym_Circle] = ACTIONS(80),
    [anon_sym_circle] = ACTIONS(80),
    [anon_sym_Producer] = ACTIONS(80),
    [anon_sym_producer] = ACTIONS(80),
    [anon_sym_Recording] = ACTIONS(80),
    [anon_sym_recording] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u6b4cu5531] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu66f2] = ACTIONS(80),
    [anon_sym_u7de8u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5e] = ACTIONS(80),
    [anon_sym_u5382u724c] = ACTIONS(80),
    [anon_sym_u811au672c] = ACTIONS(80),
    [anon_sym_u63d2u56fe] = ACTIONS(80),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(80),
    [anon_sym_u51fau7248u65b9] = ACTIONS(80),
    [anon_sym_u5f55u97f3] = ACTIONS(80),
    [anon_sym_u539fu4f5c] = ACTIONS(80),
    [sym__ssep] = ACTIONS(78),
  },
  [21] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(27),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_SLASH_SLASH] = ACTIONS(32),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(82),
    [aux_sym_feat_field_token1] = ACTIONS(32),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [anon_sym_u300b] = ACTIONS(86),
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
    [sym__ssep] = ACTIONS(84),
  },
  [23] = {
    [sym__quotable_creator_name] = STATE(92),
    [anon_sym_LF] = ACTIONS(88),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(68),
    [anon_sym_u300a] = ACTIONS(68),
    [sym_creator_name] = ACTIONS(55),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(68),
    [anon_sym_label] = ACTIONS(68),
    [anon_sym_Circle] = ACTIONS(68),
    [anon_sym_circle] = ACTIONS(68),
    [anon_sym_Producer] = ACTIONS(68),
    [anon_sym_producer] = ACTIONS(68),
    [anon_sym_Recording] = ACTIONS(68),
    [anon_sym_recording] = ACTIONS(68),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(68),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(68),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(68),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(68),
    [anon_sym_u6b4cu5531] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu66f2] = ACTIONS(68),
    [anon_sym_u7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
    [aux_sym_feat_field_token1] = ACTIONS(92),
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
  },
  [25] = {
    [sym__quotable_creator_name] = STATE(22),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(45),
    [sym_creator_name] = ACTIONS(47),
    [anon_sym_Music] = ACTIONS(74),
    [anon_sym_music] = ACTIONS(74),
    [anon_sym_Composition] = ACTIONS(74),
    [anon_sym_composition] = ACTIONS(74),
    [anon_sym_Composer] = ACTIONS(74),
    [anon_sym_composer] = ACTIONS(74),
    [anon_sym_Compose] = ACTIONS(74),
    [anon_sym_compose] = ACTIONS(74),
    [anon_sym_Lyrics] = ACTIONS(74),
    [anon_sym_lyrics] = ACTIONS(74),
    [anon_sym_Lyricist] = ACTIONS(74),
    [anon_sym_lyricist] = ACTIONS(74),
    [anon_sym_Lyric] = ACTIONS(74),
    [anon_sym_lyric] = ACTIONS(74),
    [anon_sym_Arrangement] = ACTIONS(74),
    [anon_sym_arrangement] = ACTIONS(74),
    [anon_sym_Arranger] = ACTIONS(74),
    [anon_sym_arranger] = ACTIONS(74),
    [anon_sym_Arrange] = ACTIONS(74),
    [anon_sym_arrange] = ACTIONS(74),
    [anon_sym_Vocal] = ACTIONS(74),
    [anon_sym_vocal] = ACTIONS(74),
    [anon_sym_Vo] = ACTIONS(74),
    [anon_sym_vo] = ACTIONS(74),
    [anon_sym_Performer] = ACTIONS(74),
    [anon_sym_performer] = ACTIONS(74),
    [anon_sym_Illustration] = ACTIONS(74),
    [anon_sym_illustration] = ACTIONS(74),
    [anon_sym_Illust] = ACTIONS(74),
    [anon_sym_illust] = ACTIONS(74),
    [anon_sym_Label] = ACTIONS(74),
    [anon_sym_label] = ACTIONS(74),
    [anon_sym_Circle] = ACTIONS(74),
    [anon_sym_circle] = ACTIONS(74),
    [anon_sym_Producer] = ACTIONS(74),
    [anon_sym_producer] = ACTIONS(74),
    [anon_sym_Recording] = ACTIONS(74),
    [anon_sym_recording] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
  },
  [26] = {
    [aux_sym_feat_field_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_Music] = ACTIONS(96),
    [anon_sym_music] = ACTIONS(96),
    [anon_sym_Composition] = ACTIONS(96),
    [anon_sym_composition] = ACTIONS(96),
    [anon_sym_Composer] = ACTIONS(96),
    [anon_sym_composer] = ACTIONS(96),
    [anon_sym_Compose] = ACTIONS(96),
    [anon_sym_compose] = ACTIONS(96),
    [anon_sym_Lyrics] = ACTIONS(96),
    [anon_sym_lyrics] = ACTIONS(96),
    [anon_sym_Lyricist] = ACTIONS(96),
    [anon_sym_lyricist] = ACTIONS(96),
    [anon_sym_Lyric] = ACTIONS(96),
    [anon_sym_lyric] = ACTIONS(96),
    [anon_sym_Arrangement] = ACTIONS(96),
    [anon_sym_arrangement] = ACTIONS(96),
    [anon_sym_Arranger] = ACTIONS(96),
    [anon_sym_arranger] = ACTIONS(96),
    [anon_sym_Arrange] = ACTIONS(96),
    [anon_sym_arrange] = ACTIONS(96),
    [anon_sym_Vocal] = ACTIONS(96),
    [anon_sym_vocal] = ACTIONS(96),
    [anon_sym_Vo] = ACTIONS(96),
    [anon_sym_vo] = ACTIONS(96),
    [anon_sym_Performer] = ACTIONS(96),
    [anon_sym_performer] = ACTIONS(96),
    [anon_sym_Illustration] = ACTIONS(96),
    [anon_sym_illustration] = ACTIONS(96),
    [anon_sym_Illust] = ACTIONS(96),
    [anon_sym_illust] = ACTIONS(96),
    [anon_sym_Label] = ACTIONS(96),
    [anon_sym_label] = ACTIONS(96),
    [anon_sym_Circle] = ACTIONS(96),
    [anon_sym_circle] = ACTIONS(96),
    [anon_sym_Producer] = ACTIONS(96),
    [anon_sym_producer] = ACTIONS(96),
    [anon_sym_Recording] = ACTIONS(96),
    [anon_sym_recording] = ACTIONS(96),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(96),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(96),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(96),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(96),
    [anon_sym_u6b4cu5531] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(96),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu66f2] = ACTIONS(96),
    [anon_sym_u7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5e] = ACTIONS(96),
    [anon_sym_u5382u724c] = ACTIONS(96),
    [anon_sym_u811au672c] = ACTIONS(96),
    [anon_sym_u63d2u56fe] = ACTIONS(96),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(96),
    [anon_sym_u51fau7248u65b9] = ACTIONS(96),
    [anon_sym_u5f55u97f3] = ACTIONS(96),
    [anon_sym_u539fu4f5c] = ACTIONS(96),
    [sym__ssep] = ACTIONS(98),
  },
  [27] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(27),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [aux_sym_feat_field_token1] = ACTIONS(59),
    [anon_sym_Music] = ACTIONS(59),
    [anon_sym_music] = ACTIONS(59),
    [anon_sym_Composition] = ACTIONS(59),
    [anon_sym_composition] = ACTIONS(59),
    [anon_sym_Composer] = ACTIONS(59),
    [anon_sym_composer] = ACTIONS(59),
    [anon_sym_Compose] = ACTIONS(59),
    [anon_sym_compose] = ACTIONS(59),
    [anon_sym_Lyrics] = ACTIONS(59),
    [anon_sym_lyrics] = ACTIONS(59),
    [anon_sym_Lyricist] = ACTIONS(59),
    [anon_sym_lyricist] = ACTIONS(59),
    [anon_sym_Lyric] = ACTIONS(59),
    [anon_sym_lyric] = ACTIONS(59),
    [anon_sym_Arrangement] = ACTIONS(59),
    [anon_sym_arrangement] = ACTIONS(59),
    [anon_sym_Arranger] = ACTIONS(59),
    [anon_sym_arranger] = ACTIONS(59),
    [anon_sym_Arrange] = ACTIONS(59),
    [anon_sym_arrange] = ACTIONS(59),
    [anon_sym_Vocal] = ACTIONS(59),
    [anon_sym_vocal] = ACTIONS(59),
    [anon_sym_Vo] = ACTIONS(59),
    [anon_sym_vo] = ACTIONS(59),
    [anon_sym_Performer] = ACTIONS(59),
    [anon_sym_performer] = ACTIONS(59),
    [anon_sym_Illustration] = ACTIONS(59),
    [anon_sym_illustration] = ACTIONS(59),
    [anon_sym_Illust] = ACTIONS(59),
    [anon_sym_illust] = ACTIONS(59),
    [anon_sym_Label] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_Circle] = ACTIONS(59),
    [anon_sym_circle] = ACTIONS(59),
    [anon_sym_Producer] = ACTIONS(59),
    [anon_sym_producer] = ACTIONS(59),
    [anon_sym_Recording] = ACTIONS(59),
    [anon_sym_recording] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [anon_sym_u300b] = ACTIONS(105),
    [anon_sym_Music] = ACTIONS(105),
    [anon_sym_music] = ACTIONS(105),
    [anon_sym_Composition] = ACTIONS(105),
    [anon_sym_composition] = ACTIONS(105),
    [anon_sym_Composer] = ACTIONS(105),
    [anon_sym_composer] = ACTIONS(105),
    [anon_sym_Compose] = ACTIONS(105),
    [anon_sym_compose] = ACTIONS(105),
    [anon_sym_Lyrics] = ACTIONS(105),
    [anon_sym_lyrics] = ACTIONS(105),
    [anon_sym_Lyricist] = ACTIONS(105),
    [anon_sym_lyricist] = ACTIONS(105),
    [anon_sym_Lyric] = ACTIONS(105),
    [anon_sym_lyric] = ACTIONS(105),
    [anon_sym_Arrangement] = ACTIONS(105),
    [anon_sym_arrangement] = ACTIONS(105),
    [anon_sym_Arranger] = ACTIONS(105),
    [anon_sym_arranger] = ACTIONS(105),
    [anon_sym_Arrange] = ACTIONS(105),
    [anon_sym_arrange] = ACTIONS(105),
    [anon_sym_Vocal] = ACTIONS(105),
    [anon_sym_vocal] = ACTIONS(105),
    [anon_sym_Vo] = ACTIONS(105),
    [anon_sym_vo] = ACTIONS(105),
    [anon_sym_Performer] = ACTIONS(105),
    [anon_sym_performer] = ACTIONS(105),
    [anon_sym_Illustration] = ACTIONS(105),
    [anon_sym_illustration] = ACTIONS(105),
    [anon_sym_Illust] = ACTIONS(105),
    [anon_sym_illust] = ACTIONS(105),
    [anon_sym_Label] = ACTIONS(105),
    [anon_sym_label] = ACTIONS(105),
    [anon_sym_Circle] = ACTIONS(105),
    [anon_sym_circle] = ACTIONS(105),
    [anon_sym_Producer] = ACTIONS(105),
    [anon_sym_producer] = ACTIONS(105),
    [anon_sym_Recording] = ACTIONS(105),
    [anon_sym_recording] = ACTIONS(105),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(105),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(105),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(105),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(105),
    [anon_sym_u6b4cu5531] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu66f2] = ACTIONS(105),
    [anon_sym_u7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5e] = ACTIONS(105),
    [anon_sym_u5382u724c] = ACTIONS(105),
    [anon_sym_u811au672c] = ACTIONS(105),
    [anon_sym_u63d2u56fe] = ACTIONS(105),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(105),
    [anon_sym_u51fau7248u65b9] = ACTIONS(105),
    [anon_sym_u5f55u97f3] = ACTIONS(105),
    [anon_sym_u539fu4f5c] = ACTIONS(105),
    [sym__ssep] = ACTIONS(103),
  },
  [29] = {
    [sym_feat_field] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym_SLASH_SLASH] = ACTIONS(107),
    [aux_sym_feat_field_token1] = ACTIONS(109),
    [anon_sym_Music] = ACTIONS(107),
    [anon_sym_music] = ACTIONS(107),
    [anon_sym_Composition] = ACTIONS(107),
    [anon_sym_composition] = ACTIONS(107),
    [anon_sym_Composer] = ACTIONS(107),
    [anon_sym_composer] = ACTIONS(107),
    [anon_sym_Compose] = ACTIONS(111),
    [anon_sym_compose] = ACTIONS(111),
    [anon_sym_Lyrics] = ACTIONS(107),
    [anon_sym_lyrics] = ACTIONS(107),
    [anon_sym_Lyricist] = ACTIONS(107),
    [anon_sym_lyricist] = ACTIONS(107),
    [anon_sym_Lyric] = ACTIONS(111),
    [anon_sym_lyric] = ACTIONS(111),
    [anon_sym_Arrangement] = ACTIONS(107),
    [anon_sym_arrangement] = ACTIONS(107),
    [anon_sym_Arranger] = ACTIONS(107),
    [anon_sym_arranger] = ACTIONS(107),
    [anon_sym_Arrange] = ACTIONS(111),
    [anon_sym_arrange] = ACTIONS(111),
    [anon_sym_Vocal] = ACTIONS(107),
    [anon_sym_vocal] = ACTIONS(107),
    [anon_sym_Vo] = ACTIONS(111),
    [anon_sym_vo] = ACTIONS(111),
    [anon_sym_Performer] = ACTIONS(107),
    [anon_sym_performer] = ACTIONS(107),
    [anon_sym_Illustration] = ACTIONS(107),
    [anon_sym_illustration] = ACTIONS(107),
    [anon_sym_Illust] = ACTIONS(111),
    [anon_sym_illust] = ACTIONS(111),
    [anon_sym_Label] = ACTIONS(107),
    [anon_sym_label] = ACTIONS(107),
    [anon_sym_Circle] = ACTIONS(107),
    [anon_sym_circle] = ACTIONS(107),
    [anon_sym_Producer] = ACTIONS(107),
    [anon_sym_producer] = ACTIONS(107),
    [anon_sym_Recording] = ACTIONS(107),
    [anon_sym_recording] = ACTIONS(107),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(107),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(107),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(107),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(107),
    [anon_sym_u6b4cu5531] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(107),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu66f2] = ACTIONS(107),
    [anon_sym_u7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(107),
    [anon_sym_u811au672c] = ACTIONS(107),
    [anon_sym_u63d2u56fe] = ACTIONS(107),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(107),
    [anon_sym_u51fau7248u65b9] = ACTIONS(107),
    [anon_sym_u5f55u97f3] = ACTIONS(107),
    [anon_sym_u539fu4f5c] = ACTIONS(107),
  },
  [30] = {
    [sym__quotable_creator_name] = STATE(89),
    [sym_role] = STATE(99),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(76),
    [sym_creator_name] = ACTIONS(55),
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
  [31] = {
    [sym__quotable_creator_name] = STATE(92),
    [anon_sym_LF] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [sym_creator_name] = ACTIONS(55),
    [anon_sym_Music] = ACTIONS(53),
    [anon_sym_music] = ACTIONS(53),
    [anon_sym_Composition] = ACTIONS(53),
    [anon_sym_composition] = ACTIONS(53),
    [anon_sym_Composer] = ACTIONS(53),
    [anon_sym_composer] = ACTIONS(53),
    [anon_sym_Compose] = ACTIONS(53),
    [anon_sym_compose] = ACTIONS(53),
    [anon_sym_Lyrics] = ACTIONS(53),
    [anon_sym_lyrics] = ACTIONS(53),
    [anon_sym_Lyricist] = ACTIONS(53),
    [anon_sym_lyricist] = ACTIONS(53),
    [anon_sym_Lyric] = ACTIONS(53),
    [anon_sym_lyric] = ACTIONS(53),
    [anon_sym_Arrangement] = ACTIONS(53),
    [anon_sym_arrangement] = ACTIONS(53),
    [anon_sym_Arranger] = ACTIONS(53),
    [anon_sym_arranger] = ACTIONS(53),
    [anon_sym_Arrange] = ACTIONS(53),
    [anon_sym_arrange] = ACTIONS(53),
    [anon_sym_Vocal] = ACTIONS(53),
    [anon_sym_vocal] = ACTIONS(53),
    [anon_sym_Vo] = ACTIONS(53),
    [anon_sym_vo] = ACTIONS(53),
    [anon_sym_Performer] = ACTIONS(53),
    [anon_sym_performer] = ACTIONS(53),
    [anon_sym_Illustration] = ACTIONS(53),
    [anon_sym_illustration] = ACTIONS(53),
    [anon_sym_Illust] = ACTIONS(53),
    [anon_sym_illust] = ACTIONS(53),
    [anon_sym_Label] = ACTIONS(53),
    [anon_sym_label] = ACTIONS(53),
    [anon_sym_Circle] = ACTIONS(53),
    [anon_sym_circle] = ACTIONS(53),
    [anon_sym_Producer] = ACTIONS(53),
    [anon_sym_producer] = ACTIONS(53),
    [anon_sym_Recording] = ACTIONS(53),
    [anon_sym_recording] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
  },
  [32] = {
    [aux_sym_feat_field_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_Music] = ACTIONS(117),
    [anon_sym_music] = ACTIONS(117),
    [anon_sym_Composition] = ACTIONS(117),
    [anon_sym_composition] = ACTIONS(117),
    [anon_sym_Composer] = ACTIONS(117),
    [anon_sym_composer] = ACTIONS(117),
    [anon_sym_Compose] = ACTIONS(117),
    [anon_sym_compose] = ACTIONS(117),
    [anon_sym_Lyrics] = ACTIONS(117),
    [anon_sym_lyrics] = ACTIONS(117),
    [anon_sym_Lyricist] = ACTIONS(117),
    [anon_sym_lyricist] = ACTIONS(117),
    [anon_sym_Lyric] = ACTIONS(117),
    [anon_sym_lyric] = ACTIONS(117),
    [anon_sym_Arrangement] = ACTIONS(117),
    [anon_sym_arrangement] = ACTIONS(117),
    [anon_sym_Arranger] = ACTIONS(117),
    [anon_sym_arranger] = ACTIONS(117),
    [anon_sym_Arrange] = ACTIONS(117),
    [anon_sym_arrange] = ACTIONS(117),
    [anon_sym_Vocal] = ACTIONS(117),
    [anon_sym_vocal] = ACTIONS(117),
    [anon_sym_Vo] = ACTIONS(117),
    [anon_sym_vo] = ACTIONS(117),
    [anon_sym_Performer] = ACTIONS(117),
    [anon_sym_performer] = ACTIONS(117),
    [anon_sym_Illustration] = ACTIONS(117),
    [anon_sym_illustration] = ACTIONS(117),
    [anon_sym_Illust] = ACTIONS(117),
    [anon_sym_illust] = ACTIONS(117),
    [anon_sym_Label] = ACTIONS(117),
    [anon_sym_label] = ACTIONS(117),
    [anon_sym_Circle] = ACTIONS(117),
    [anon_sym_circle] = ACTIONS(117),
    [anon_sym_Producer] = ACTIONS(117),
    [anon_sym_producer] = ACTIONS(117),
    [anon_sym_Recording] = ACTIONS(117),
    [anon_sym_recording] = ACTIONS(117),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(117),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(117),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(117),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(117),
    [anon_sym_u6b4cu5531] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu66f2] = ACTIONS(117),
    [anon_sym_u7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5e] = ACTIONS(117),
    [anon_sym_u5382u724c] = ACTIONS(117),
    [anon_sym_u811au672c] = ACTIONS(117),
    [anon_sym_u63d2u56fe] = ACTIONS(117),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(117),
    [anon_sym_u51fau7248u65b9] = ACTIONS(117),
    [anon_sym_u5f55u97f3] = ACTIONS(117),
    [anon_sym_u539fu4f5c] = ACTIONS(117),
    [sym__ssep] = ACTIONS(119),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(121),
    [anon_sym_u300b] = ACTIONS(121),
    [anon_sym_Music] = ACTIONS(121),
    [anon_sym_music] = ACTIONS(121),
    [anon_sym_Composition] = ACTIONS(121),
    [anon_sym_composition] = ACTIONS(121),
    [anon_sym_Composer] = ACTIONS(121),
    [anon_sym_composer] = ACTIONS(121),
    [anon_sym_Compose] = ACTIONS(123),
    [anon_sym_compose] = ACTIONS(123),
    [anon_sym_Lyrics] = ACTIONS(121),
    [anon_sym_lyrics] = ACTIONS(121),
    [anon_sym_Lyricist] = ACTIONS(121),
    [anon_sym_lyricist] = ACTIONS(121),
    [anon_sym_Lyric] = ACTIONS(123),
    [anon_sym_lyric] = ACTIONS(123),
    [anon_sym_Arrangement] = ACTIONS(121),
    [anon_sym_arrangement] = ACTIONS(121),
    [anon_sym_Arranger] = ACTIONS(121),
    [anon_sym_arranger] = ACTIONS(121),
    [anon_sym_Arrange] = ACTIONS(123),
    [anon_sym_arrange] = ACTIONS(123),
    [anon_sym_Vocal] = ACTIONS(121),
    [anon_sym_vocal] = ACTIONS(121),
    [anon_sym_Vo] = ACTIONS(123),
    [anon_sym_vo] = ACTIONS(123),
    [anon_sym_Performer] = ACTIONS(121),
    [anon_sym_performer] = ACTIONS(121),
    [anon_sym_Illustration] = ACTIONS(121),
    [anon_sym_illustration] = ACTIONS(121),
    [anon_sym_Illust] = ACTIONS(123),
    [anon_sym_illust] = ACTIONS(123),
    [anon_sym_Label] = ACTIONS(121),
    [anon_sym_label] = ACTIONS(121),
    [anon_sym_Circle] = ACTIONS(121),
    [anon_sym_circle] = ACTIONS(121),
    [anon_sym_Producer] = ACTIONS(121),
    [anon_sym_producer] = ACTIONS(121),
    [anon_sym_Recording] = ACTIONS(121),
    [anon_sym_recording] = ACTIONS(121),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(121),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(121),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(121),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(121),
    [anon_sym_u6b4cu5531] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu66f2] = ACTIONS(121),
    [anon_sym_u7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5e] = ACTIONS(123),
    [anon_sym_u5382u724c] = ACTIONS(121),
    [anon_sym_u811au672c] = ACTIONS(121),
    [anon_sym_u63d2u56fe] = ACTIONS(121),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(121),
    [anon_sym_u51fau7248u65b9] = ACTIONS(121),
    [anon_sym_u5f55u97f3] = ACTIONS(121),
    [anon_sym_u539fu4f5c] = ACTIONS(121),
  },
  [34] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(129),
    [anon_sym_Music] = ACTIONS(127),
    [anon_sym_music] = ACTIONS(127),
    [anon_sym_Composition] = ACTIONS(127),
    [anon_sym_composition] = ACTIONS(127),
    [anon_sym_Composer] = ACTIONS(127),
    [anon_sym_composer] = ACTIONS(127),
    [anon_sym_Compose] = ACTIONS(127),
    [anon_sym_compose] = ACTIONS(127),
    [anon_sym_Lyrics] = ACTIONS(127),
    [anon_sym_lyrics] = ACTIONS(127),
    [anon_sym_Lyricist] = ACTIONS(127),
    [anon_sym_lyricist] = ACTIONS(127),
    [anon_sym_Lyric] = ACTIONS(127),
    [anon_sym_lyric] = ACTIONS(127),
    [anon_sym_Arrangement] = ACTIONS(127),
    [anon_sym_arrangement] = ACTIONS(127),
    [anon_sym_Arranger] = ACTIONS(127),
    [anon_sym_arranger] = ACTIONS(127),
    [anon_sym_Arrange] = ACTIONS(127),
    [anon_sym_arrange] = ACTIONS(127),
    [anon_sym_Vocal] = ACTIONS(127),
    [anon_sym_vocal] = ACTIONS(127),
    [anon_sym_Vo] = ACTIONS(127),
    [anon_sym_vo] = ACTIONS(127),
    [anon_sym_Performer] = ACTIONS(127),
    [anon_sym_performer] = ACTIONS(127),
    [anon_sym_Illustration] = ACTIONS(127),
    [anon_sym_illustration] = ACTIONS(127),
    [anon_sym_Illust] = ACTIONS(127),
    [anon_sym_illust] = ACTIONS(127),
    [anon_sym_Label] = ACTIONS(127),
    [anon_sym_label] = ACTIONS(127),
    [anon_sym_Circle] = ACTIONS(127),
    [anon_sym_circle] = ACTIONS(127),
    [anon_sym_Producer] = ACTIONS(127),
    [anon_sym_producer] = ACTIONS(127),
    [anon_sym_Recording] = ACTIONS(127),
    [anon_sym_recording] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(133),
    [anon_sym_u300a] = ACTIONS(133),
    [anon_sym_Music] = ACTIONS(133),
    [anon_sym_music] = ACTIONS(133),
    [anon_sym_Composition] = ACTIONS(133),
    [anon_sym_composition] = ACTIONS(133),
    [anon_sym_Composer] = ACTIONS(133),
    [anon_sym_composer] = ACTIONS(133),
    [anon_sym_Compose] = ACTIONS(133),
    [anon_sym_compose] = ACTIONS(133),
    [anon_sym_Lyrics] = ACTIONS(133),
    [anon_sym_lyrics] = ACTIONS(133),
    [anon_sym_Lyricist] = ACTIONS(133),
    [anon_sym_lyricist] = ACTIONS(133),
    [anon_sym_Lyric] = ACTIONS(133),
    [anon_sym_lyric] = ACTIONS(133),
    [anon_sym_Arrangement] = ACTIONS(133),
    [anon_sym_arrangement] = ACTIONS(133),
    [anon_sym_Arranger] = ACTIONS(133),
    [anon_sym_arranger] = ACTIONS(133),
    [anon_sym_Arrange] = ACTIONS(133),
    [anon_sym_arrange] = ACTIONS(133),
    [anon_sym_Vocal] = ACTIONS(133),
    [anon_sym_vocal] = ACTIONS(133),
    [anon_sym_Vo] = ACTIONS(133),
    [anon_sym_vo] = ACTIONS(133),
    [anon_sym_Performer] = ACTIONS(133),
    [anon_sym_performer] = ACTIONS(133),
    [anon_sym_Illustration] = ACTIONS(133),
    [anon_sym_illustration] = ACTIONS(133),
    [anon_sym_Illust] = ACTIONS(133),
    [anon_sym_illust] = ACTIONS(133),
    [anon_sym_Label] = ACTIONS(133),
    [anon_sym_label] = ACTIONS(133),
    [anon_sym_Circle] = ACTIONS(133),
    [anon_sym_circle] = ACTIONS(133),
    [anon_sym_Producer] = ACTIONS(133),
    [anon_sym_producer] = ACTIONS(133),
    [anon_sym_Recording] = ACTIONS(133),
    [anon_sym_recording] = ACTIONS(133),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(133),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(133),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(133),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(133),
    [anon_sym_u6b4cu5531] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(133),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu66f2] = ACTIONS(133),
    [anon_sym_u7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5e] = ACTIONS(133),
    [anon_sym_u5382u724c] = ACTIONS(133),
    [anon_sym_u811au672c] = ACTIONS(133),
    [anon_sym_u63d2u56fe] = ACTIONS(133),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(133),
    [anon_sym_u51fau7248u65b9] = ACTIONS(133),
    [anon_sym_u5f55u97f3] = ACTIONS(133),
    [anon_sym_u539fu4f5c] = ACTIONS(133),
    [sym__sep] = ACTIONS(135),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(139),
    [anon_sym_music] = ACTIONS(139),
    [anon_sym_Composition] = ACTIONS(139),
    [anon_sym_composition] = ACTIONS(139),
    [anon_sym_Composer] = ACTIONS(139),
    [anon_sym_composer] = ACTIONS(139),
    [anon_sym_Compose] = ACTIONS(139),
    [anon_sym_compose] = ACTIONS(139),
    [anon_sym_Lyrics] = ACTIONS(139),
    [anon_sym_lyrics] = ACTIONS(139),
    [anon_sym_Lyricist] = ACTIONS(139),
    [anon_sym_lyricist] = ACTIONS(139),
    [anon_sym_Lyric] = ACTIONS(139),
    [anon_sym_lyric] = ACTIONS(139),
    [anon_sym_Arrangement] = ACTIONS(139),
    [anon_sym_arrangement] = ACTIONS(139),
    [anon_sym_Arranger] = ACTIONS(139),
    [anon_sym_arranger] = ACTIONS(139),
    [anon_sym_Arrange] = ACTIONS(139),
    [anon_sym_arrange] = ACTIONS(139),
    [anon_sym_Vocal] = ACTIONS(139),
    [anon_sym_vocal] = ACTIONS(139),
    [anon_sym_Vo] = ACTIONS(139),
    [anon_sym_vo] = ACTIONS(139),
    [anon_sym_Performer] = ACTIONS(139),
    [anon_sym_performer] = ACTIONS(139),
    [anon_sym_Illustration] = ACTIONS(139),
    [anon_sym_illustration] = ACTIONS(139),
    [anon_sym_Illust] = ACTIONS(139),
    [anon_sym_illust] = ACTIONS(139),
    [anon_sym_Label] = ACTIONS(139),
    [anon_sym_label] = ACTIONS(139),
    [anon_sym_Circle] = ACTIONS(139),
    [anon_sym_circle] = ACTIONS(139),
    [anon_sym_Producer] = ACTIONS(139),
    [anon_sym_producer] = ACTIONS(139),
    [anon_sym_Recording] = ACTIONS(139),
    [anon_sym_recording] = ACTIONS(139),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(139),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(139),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(139),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu66f2] = ACTIONS(139),
    [anon_sym_u7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5e] = ACTIONS(139),
    [anon_sym_u5382u724c] = ACTIONS(139),
    [anon_sym_u811au672c] = ACTIONS(139),
    [anon_sym_u63d2u56fe] = ACTIONS(139),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(139),
    [anon_sym_u51fau7248u65b9] = ACTIONS(139),
    [anon_sym_u5f55u97f3] = ACTIONS(139),
    [anon_sym_u539fu4f5c] = ACTIONS(139),
    [sym__sep] = ACTIONS(141),
  },
  [37] = {
    [sym_feat_field] = STATE(33),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym_SLASH_SLASH] = ACTIONS(107),
    [aux_sym_feat_field_token1] = ACTIONS(143),
    [anon_sym_Music] = ACTIONS(107),
    [anon_sym_music] = ACTIONS(107),
    [anon_sym_Composition] = ACTIONS(107),
    [anon_sym_composition] = ACTIONS(107),
    [anon_sym_Composer] = ACTIONS(107),
    [anon_sym_composer] = ACTIONS(107),
    [anon_sym_Compose] = ACTIONS(111),
    [anon_sym_compose] = ACTIONS(111),
    [anon_sym_Lyrics] = ACTIONS(107),
    [anon_sym_lyrics] = ACTIONS(107),
    [anon_sym_Lyricist] = ACTIONS(107),
    [anon_sym_lyricist] = ACTIONS(107),
    [anon_sym_Lyric] = ACTIONS(111),
    [anon_sym_lyric] = ACTIONS(111),
    [anon_sym_Arrangement] = ACTIONS(107),
    [anon_sym_arrangement] = ACTIONS(107),
    [anon_sym_Arranger] = ACTIONS(107),
    [anon_sym_arranger] = ACTIONS(107),
    [anon_sym_Arrange] = ACTIONS(111),
    [anon_sym_arrange] = ACTIONS(111),
    [anon_sym_Vocal] = ACTIONS(107),
    [anon_sym_vocal] = ACTIONS(107),
    [anon_sym_Vo] = ACTIONS(111),
    [anon_sym_vo] = ACTIONS(111),
    [anon_sym_Performer] = ACTIONS(107),
    [anon_sym_performer] = ACTIONS(107),
    [anon_sym_Illustration] = ACTIONS(107),
    [anon_sym_illustration] = ACTIONS(107),
    [anon_sym_Illust] = ACTIONS(111),
    [anon_sym_illust] = ACTIONS(111),
    [anon_sym_Label] = ACTIONS(107),
    [anon_sym_label] = ACTIONS(107),
    [anon_sym_Circle] = ACTIONS(107),
    [anon_sym_circle] = ACTIONS(107),
    [anon_sym_Producer] = ACTIONS(107),
    [anon_sym_producer] = ACTIONS(107),
    [anon_sym_Recording] = ACTIONS(107),
    [anon_sym_recording] = ACTIONS(107),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(107),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(107),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(107),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(107),
    [anon_sym_u6b4cu5531] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(107),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu66f2] = ACTIONS(107),
    [anon_sym_u7de8u66f2] = ACTIONS(107),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(107),
    [anon_sym_u811au672c] = ACTIONS(107),
    [anon_sym_u63d2u56fe] = ACTIONS(107),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(107),
    [anon_sym_u51fau7248u65b9] = ACTIONS(107),
    [anon_sym_u5f55u97f3] = ACTIONS(107),
    [anon_sym_u539fu4f5c] = ACTIONS(107),
  },
  [38] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(145),
    [anon_sym_Music] = ACTIONS(59),
    [anon_sym_music] = ACTIONS(59),
    [anon_sym_Composition] = ACTIONS(59),
    [anon_sym_composition] = ACTIONS(59),
    [anon_sym_Composer] = ACTIONS(59),
    [anon_sym_composer] = ACTIONS(59),
    [anon_sym_Compose] = ACTIONS(59),
    [anon_sym_compose] = ACTIONS(59),
    [anon_sym_Lyrics] = ACTIONS(59),
    [anon_sym_lyrics] = ACTIONS(59),
    [anon_sym_Lyricist] = ACTIONS(59),
    [anon_sym_lyricist] = ACTIONS(59),
    [anon_sym_Lyric] = ACTIONS(59),
    [anon_sym_lyric] = ACTIONS(59),
    [anon_sym_Arrangement] = ACTIONS(59),
    [anon_sym_arrangement] = ACTIONS(59),
    [anon_sym_Arranger] = ACTIONS(59),
    [anon_sym_arranger] = ACTIONS(59),
    [anon_sym_Arrange] = ACTIONS(59),
    [anon_sym_arrange] = ACTIONS(59),
    [anon_sym_Vocal] = ACTIONS(59),
    [anon_sym_vocal] = ACTIONS(59),
    [anon_sym_Vo] = ACTIONS(59),
    [anon_sym_vo] = ACTIONS(59),
    [anon_sym_Performer] = ACTIONS(59),
    [anon_sym_performer] = ACTIONS(59),
    [anon_sym_Illustration] = ACTIONS(59),
    [anon_sym_illustration] = ACTIONS(59),
    [anon_sym_Illust] = ACTIONS(59),
    [anon_sym_illust] = ACTIONS(59),
    [anon_sym_Label] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_Circle] = ACTIONS(59),
    [anon_sym_circle] = ACTIONS(59),
    [anon_sym_Producer] = ACTIONS(59),
    [anon_sym_producer] = ACTIONS(59),
    [anon_sym_Recording] = ACTIONS(59),
    [anon_sym_recording] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
  },
  [39] = {
    [aux_sym_feat_field_repeat1] = STATE(9),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_Music] = ACTIONS(96),
    [anon_sym_music] = ACTIONS(96),
    [anon_sym_Composition] = ACTIONS(96),
    [anon_sym_composition] = ACTIONS(96),
    [anon_sym_Composer] = ACTIONS(96),
    [anon_sym_composer] = ACTIONS(96),
    [anon_sym_Compose] = ACTIONS(96),
    [anon_sym_compose] = ACTIONS(96),
    [anon_sym_Lyrics] = ACTIONS(96),
    [anon_sym_lyrics] = ACTIONS(96),
    [anon_sym_Lyricist] = ACTIONS(96),
    [anon_sym_lyricist] = ACTIONS(96),
    [anon_sym_Lyric] = ACTIONS(96),
    [anon_sym_lyric] = ACTIONS(96),
    [anon_sym_Arrangement] = ACTIONS(96),
    [anon_sym_arrangement] = ACTIONS(96),
    [anon_sym_Arranger] = ACTIONS(96),
    [anon_sym_arranger] = ACTIONS(96),
    [anon_sym_Arrange] = ACTIONS(96),
    [anon_sym_arrange] = ACTIONS(96),
    [anon_sym_Vocal] = ACTIONS(96),
    [anon_sym_vocal] = ACTIONS(96),
    [anon_sym_Vo] = ACTIONS(96),
    [anon_sym_vo] = ACTIONS(96),
    [anon_sym_Performer] = ACTIONS(96),
    [anon_sym_performer] = ACTIONS(96),
    [anon_sym_Illustration] = ACTIONS(96),
    [anon_sym_illustration] = ACTIONS(96),
    [anon_sym_Illust] = ACTIONS(96),
    [anon_sym_illust] = ACTIONS(96),
    [anon_sym_Label] = ACTIONS(96),
    [anon_sym_label] = ACTIONS(96),
    [anon_sym_Circle] = ACTIONS(96),
    [anon_sym_circle] = ACTIONS(96),
    [anon_sym_Producer] = ACTIONS(96),
    [anon_sym_producer] = ACTIONS(96),
    [anon_sym_Recording] = ACTIONS(96),
    [anon_sym_recording] = ACTIONS(96),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(96),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(96),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(96),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(96),
    [anon_sym_u6b4cu5531] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(96),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu66f2] = ACTIONS(96),
    [anon_sym_u7de8u66f2] = ACTIONS(96),
    [anon_sym_u4f5cu8a5e] = ACTIONS(96),
    [anon_sym_u5382u724c] = ACTIONS(96),
    [anon_sym_u811au672c] = ACTIONS(96),
    [anon_sym_u63d2u56fe] = ACTIONS(96),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(96),
    [anon_sym_u51fau7248u65b9] = ACTIONS(96),
    [anon_sym_u5f55u97f3] = ACTIONS(96),
    [anon_sym_u539fu4f5c] = ACTIONS(96),
    [sym__ssep] = ACTIONS(148),
  },
  [40] = {
    [sym_role] = STATE(99),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(150),
    [sym_creator_name] = ACTIONS(150),
    [anon_sym_Music] = ACTIONS(152),
    [anon_sym_music] = ACTIONS(152),
    [anon_sym_Composition] = ACTIONS(152),
    [anon_sym_composition] = ACTIONS(152),
    [anon_sym_Composer] = ACTIONS(152),
    [anon_sym_composer] = ACTIONS(152),
    [anon_sym_Compose] = ACTIONS(152),
    [anon_sym_compose] = ACTIONS(152),
    [anon_sym_Lyrics] = ACTIONS(152),
    [anon_sym_lyrics] = ACTIONS(152),
    [anon_sym_Lyricist] = ACTIONS(152),
    [anon_sym_lyricist] = ACTIONS(152),
    [anon_sym_Lyric] = ACTIONS(152),
    [anon_sym_lyric] = ACTIONS(152),
    [anon_sym_Arrangement] = ACTIONS(152),
    [anon_sym_arrangement] = ACTIONS(152),
    [anon_sym_Arranger] = ACTIONS(152),
    [anon_sym_arranger] = ACTIONS(152),
    [anon_sym_Arrange] = ACTIONS(152),
    [anon_sym_arrange] = ACTIONS(152),
    [anon_sym_Vocal] = ACTIONS(152),
    [anon_sym_vocal] = ACTIONS(152),
    [anon_sym_Vo] = ACTIONS(152),
    [anon_sym_vo] = ACTIONS(152),
    [anon_sym_Performer] = ACTIONS(152),
    [anon_sym_performer] = ACTIONS(152),
    [anon_sym_Illustration] = ACTIONS(152),
    [anon_sym_illustration] = ACTIONS(152),
    [anon_sym_Illust] = ACTIONS(152),
    [anon_sym_illust] = ACTIONS(152),
    [anon_sym_Label] = ACTIONS(152),
    [anon_sym_label] = ACTIONS(152),
    [anon_sym_Circle] = ACTIONS(152),
    [anon_sym_circle] = ACTIONS(152),
    [anon_sym_Producer] = ACTIONS(152),
    [anon_sym_producer] = ACTIONS(152),
    [anon_sym_Recording] = ACTIONS(152),
    [anon_sym_recording] = ACTIONS(152),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(152),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(152),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(152),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(152),
    [anon_sym_u6b4cu5531] = ACTIONS(152),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(152),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(152),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(152),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(152),
    [anon_sym_u4f5cu66f2] = ACTIONS(152),
    [anon_sym_u7de8u66f2] = ACTIONS(152),
    [anon_sym_u4f5cu8a5e] = ACTIONS(152),
    [anon_sym_u5382u724c] = ACTIONS(152),
    [anon_sym_u811au672c] = ACTIONS(152),
    [anon_sym_u63d2u56fe] = ACTIONS(152),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(152),
    [anon_sym_u51fau7248u65b9] = ACTIONS(152),
    [anon_sym_u5f55u97f3] = ACTIONS(152),
    [anon_sym_u539fu4f5c] = ACTIONS(152),
  },
  [41] = {
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
    [aux_sym_feat_field_token1] = ACTIONS(92),
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
  },
  [42] = {
    [aux_sym_feat_field_repeat1] = STATE(39),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(117),
    [anon_sym_Music] = ACTIONS(117),
    [anon_sym_music] = ACTIONS(117),
    [anon_sym_Composition] = ACTIONS(117),
    [anon_sym_composition] = ACTIONS(117),
    [anon_sym_Composer] = ACTIONS(117),
    [anon_sym_composer] = ACTIONS(117),
    [anon_sym_Compose] = ACTIONS(117),
    [anon_sym_compose] = ACTIONS(117),
    [anon_sym_Lyrics] = ACTIONS(117),
    [anon_sym_lyrics] = ACTIONS(117),
    [anon_sym_Lyricist] = ACTIONS(117),
    [anon_sym_lyricist] = ACTIONS(117),
    [anon_sym_Lyric] = ACTIONS(117),
    [anon_sym_lyric] = ACTIONS(117),
    [anon_sym_Arrangement] = ACTIONS(117),
    [anon_sym_arrangement] = ACTIONS(117),
    [anon_sym_Arranger] = ACTIONS(117),
    [anon_sym_arranger] = ACTIONS(117),
    [anon_sym_Arrange] = ACTIONS(117),
    [anon_sym_arrange] = ACTIONS(117),
    [anon_sym_Vocal] = ACTIONS(117),
    [anon_sym_vocal] = ACTIONS(117),
    [anon_sym_Vo] = ACTIONS(117),
    [anon_sym_vo] = ACTIONS(117),
    [anon_sym_Performer] = ACTIONS(117),
    [anon_sym_performer] = ACTIONS(117),
    [anon_sym_Illustration] = ACTIONS(117),
    [anon_sym_illustration] = ACTIONS(117),
    [anon_sym_Illust] = ACTIONS(117),
    [anon_sym_illust] = ACTIONS(117),
    [anon_sym_Label] = ACTIONS(117),
    [anon_sym_label] = ACTIONS(117),
    [anon_sym_Circle] = ACTIONS(117),
    [anon_sym_circle] = ACTIONS(117),
    [anon_sym_Producer] = ACTIONS(117),
    [anon_sym_producer] = ACTIONS(117),
    [anon_sym_Recording] = ACTIONS(117),
    [anon_sym_recording] = ACTIONS(117),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(117),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(117),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(117),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(117),
    [anon_sym_u6b4cu5531] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu66f2] = ACTIONS(117),
    [anon_sym_u7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5e] = ACTIONS(117),
    [anon_sym_u5382u724c] = ACTIONS(117),
    [anon_sym_u811au672c] = ACTIONS(117),
    [anon_sym_u63d2u56fe] = ACTIONS(117),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(117),
    [anon_sym_u51fau7248u65b9] = ACTIONS(117),
    [anon_sym_u5f55u97f3] = ACTIONS(117),
    [anon_sym_u539fu4f5c] = ACTIONS(117),
    [sym__ssep] = ACTIONS(155),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(159),
    [anon_sym_u300a] = ACTIONS(159),
    [anon_sym_Music] = ACTIONS(159),
    [anon_sym_music] = ACTIONS(159),
    [anon_sym_Composition] = ACTIONS(159),
    [anon_sym_composition] = ACTIONS(159),
    [anon_sym_Composer] = ACTIONS(159),
    [anon_sym_composer] = ACTIONS(159),
    [anon_sym_Compose] = ACTIONS(159),
    [anon_sym_compose] = ACTIONS(159),
    [anon_sym_Lyrics] = ACTIONS(159),
    [anon_sym_lyrics] = ACTIONS(159),
    [anon_sym_Lyricist] = ACTIONS(159),
    [anon_sym_lyricist] = ACTIONS(159),
    [anon_sym_Lyric] = ACTIONS(159),
    [anon_sym_lyric] = ACTIONS(159),
    [anon_sym_Arrangement] = ACTIONS(159),
    [anon_sym_arrangement] = ACTIONS(159),
    [anon_sym_Arranger] = ACTIONS(159),
    [anon_sym_arranger] = ACTIONS(159),
    [anon_sym_Arrange] = ACTIONS(159),
    [anon_sym_arrange] = ACTIONS(159),
    [anon_sym_Vocal] = ACTIONS(159),
    [anon_sym_vocal] = ACTIONS(159),
    [anon_sym_Vo] = ACTIONS(159),
    [anon_sym_vo] = ACTIONS(159),
    [anon_sym_Performer] = ACTIONS(159),
    [anon_sym_performer] = ACTIONS(159),
    [anon_sym_Illustration] = ACTIONS(159),
    [anon_sym_illustration] = ACTIONS(159),
    [anon_sym_Illust] = ACTIONS(159),
    [anon_sym_illust] = ACTIONS(159),
    [anon_sym_Label] = ACTIONS(159),
    [anon_sym_label] = ACTIONS(159),
    [anon_sym_Circle] = ACTIONS(159),
    [anon_sym_circle] = ACTIONS(159),
    [anon_sym_Producer] = ACTIONS(159),
    [anon_sym_producer] = ACTIONS(159),
    [anon_sym_Recording] = ACTIONS(159),
    [anon_sym_recording] = ACTIONS(159),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(159),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(159),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(159),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(159),
    [anon_sym_u6b4cu5531] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(159),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu66f2] = ACTIONS(159),
    [anon_sym_u7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5e] = ACTIONS(159),
    [anon_sym_u5382u724c] = ACTIONS(159),
    [anon_sym_u811au672c] = ACTIONS(159),
    [anon_sym_u63d2u56fe] = ACTIONS(159),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(159),
    [anon_sym_u51fau7248u65b9] = ACTIONS(159),
    [anon_sym_u5f55u97f3] = ACTIONS(159),
    [anon_sym_u539fu4f5c] = ACTIONS(159),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(161),
    [anon_sym_Music] = ACTIONS(161),
    [anon_sym_music] = ACTIONS(161),
    [anon_sym_Composition] = ACTIONS(161),
    [anon_sym_composition] = ACTIONS(161),
    [anon_sym_Composer] = ACTIONS(161),
    [anon_sym_composer] = ACTIONS(161),
    [anon_sym_Compose] = ACTIONS(163),
    [anon_sym_compose] = ACTIONS(163),
    [anon_sym_Lyrics] = ACTIONS(161),
    [anon_sym_lyrics] = ACTIONS(161),
    [anon_sym_Lyricist] = ACTIONS(161),
    [anon_sym_lyricist] = ACTIONS(161),
    [anon_sym_Lyric] = ACTIONS(163),
    [anon_sym_lyric] = ACTIONS(163),
    [anon_sym_Arrangement] = ACTIONS(161),
    [anon_sym_arrangement] = ACTIONS(161),
    [anon_sym_Arranger] = ACTIONS(161),
    [anon_sym_arranger] = ACTIONS(161),
    [anon_sym_Arrange] = ACTIONS(163),
    [anon_sym_arrange] = ACTIONS(163),
    [anon_sym_Vocal] = ACTIONS(161),
    [anon_sym_vocal] = ACTIONS(161),
    [anon_sym_Vo] = ACTIONS(163),
    [anon_sym_vo] = ACTIONS(163),
    [anon_sym_Performer] = ACTIONS(161),
    [anon_sym_performer] = ACTIONS(161),
    [anon_sym_Illustration] = ACTIONS(161),
    [anon_sym_illustration] = ACTIONS(161),
    [anon_sym_Illust] = ACTIONS(163),
    [anon_sym_illust] = ACTIONS(163),
    [anon_sym_Label] = ACTIONS(161),
    [anon_sym_label] = ACTIONS(161),
    [anon_sym_Circle] = ACTIONS(161),
    [anon_sym_circle] = ACTIONS(161),
    [anon_sym_Producer] = ACTIONS(161),
    [anon_sym_producer] = ACTIONS(161),
    [anon_sym_Recording] = ACTIONS(161),
    [anon_sym_recording] = ACTIONS(161),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(161),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(161),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(161),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(161),
    [anon_sym_u6b4cu5531] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu66f2] = ACTIONS(161),
    [anon_sym_u7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5e] = ACTIONS(163),
    [anon_sym_u5382u724c] = ACTIONS(161),
    [anon_sym_u811au672c] = ACTIONS(161),
    [anon_sym_u63d2u56fe] = ACTIONS(161),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(161),
    [anon_sym_u51fau7248u65b9] = ACTIONS(161),
    [anon_sym_u5f55u97f3] = ACTIONS(161),
    [anon_sym_u539fu4f5c] = ACTIONS(161),
  },
  [45] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(45),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(165),
    [anon_sym_Music] = ACTIONS(59),
    [anon_sym_music] = ACTIONS(59),
    [anon_sym_Composition] = ACTIONS(59),
    [anon_sym_composition] = ACTIONS(59),
    [anon_sym_Composer] = ACTIONS(59),
    [anon_sym_composer] = ACTIONS(59),
    [anon_sym_Compose] = ACTIONS(59),
    [anon_sym_compose] = ACTIONS(59),
    [anon_sym_Lyrics] = ACTIONS(59),
    [anon_sym_lyrics] = ACTIONS(59),
    [anon_sym_Lyricist] = ACTIONS(59),
    [anon_sym_lyricist] = ACTIONS(59),
    [anon_sym_Lyric] = ACTIONS(59),
    [anon_sym_lyric] = ACTIONS(59),
    [anon_sym_Arrangement] = ACTIONS(59),
    [anon_sym_arrangement] = ACTIONS(59),
    [anon_sym_Arranger] = ACTIONS(59),
    [anon_sym_arranger] = ACTIONS(59),
    [anon_sym_Arrange] = ACTIONS(59),
    [anon_sym_arrange] = ACTIONS(59),
    [anon_sym_Vocal] = ACTIONS(59),
    [anon_sym_vocal] = ACTIONS(59),
    [anon_sym_Vo] = ACTIONS(59),
    [anon_sym_vo] = ACTIONS(59),
    [anon_sym_Performer] = ACTIONS(59),
    [anon_sym_performer] = ACTIONS(59),
    [anon_sym_Illustration] = ACTIONS(59),
    [anon_sym_illustration] = ACTIONS(59),
    [anon_sym_Illust] = ACTIONS(59),
    [anon_sym_illust] = ACTIONS(59),
    [anon_sym_Label] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_Circle] = ACTIONS(59),
    [anon_sym_circle] = ACTIONS(59),
    [anon_sym_Producer] = ACTIONS(59),
    [anon_sym_producer] = ACTIONS(59),
    [anon_sym_Recording] = ACTIONS(59),
    [anon_sym_recording] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
  },
  [46] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(45),
    [anon_sym_AT] = ACTIONS(127),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(168),
    [anon_sym_Music] = ACTIONS(127),
    [anon_sym_music] = ACTIONS(127),
    [anon_sym_Composition] = ACTIONS(127),
    [anon_sym_composition] = ACTIONS(127),
    [anon_sym_Composer] = ACTIONS(127),
    [anon_sym_composer] = ACTIONS(127),
    [anon_sym_Compose] = ACTIONS(127),
    [anon_sym_compose] = ACTIONS(127),
    [anon_sym_Lyrics] = ACTIONS(127),
    [anon_sym_lyrics] = ACTIONS(127),
    [anon_sym_Lyricist] = ACTIONS(127),
    [anon_sym_lyricist] = ACTIONS(127),
    [anon_sym_Lyric] = ACTIONS(127),
    [anon_sym_lyric] = ACTIONS(127),
    [anon_sym_Arrangement] = ACTIONS(127),
    [anon_sym_arrangement] = ACTIONS(127),
    [anon_sym_Arranger] = ACTIONS(127),
    [anon_sym_arranger] = ACTIONS(127),
    [anon_sym_Arrange] = ACTIONS(127),
    [anon_sym_arrange] = ACTIONS(127),
    [anon_sym_Vocal] = ACTIONS(127),
    [anon_sym_vocal] = ACTIONS(127),
    [anon_sym_Vo] = ACTIONS(127),
    [anon_sym_vo] = ACTIONS(127),
    [anon_sym_Performer] = ACTIONS(127),
    [anon_sym_performer] = ACTIONS(127),
    [anon_sym_Illustration] = ACTIONS(127),
    [anon_sym_illustration] = ACTIONS(127),
    [anon_sym_Illust] = ACTIONS(127),
    [anon_sym_illust] = ACTIONS(127),
    [anon_sym_Label] = ACTIONS(127),
    [anon_sym_label] = ACTIONS(127),
    [anon_sym_Circle] = ACTIONS(127),
    [anon_sym_circle] = ACTIONS(127),
    [anon_sym_Producer] = ACTIONS(127),
    [anon_sym_producer] = ACTIONS(127),
    [anon_sym_Recording] = ACTIONS(127),
    [anon_sym_recording] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(68),
    [anon_sym_u300a] = ACTIONS(68),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(68),
    [anon_sym_label] = ACTIONS(68),
    [anon_sym_Circle] = ACTIONS(68),
    [anon_sym_circle] = ACTIONS(68),
    [anon_sym_Producer] = ACTIONS(68),
    [anon_sym_producer] = ACTIONS(68),
    [anon_sym_Recording] = ACTIONS(68),
    [anon_sym_recording] = ACTIONS(68),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(68),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(68),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(68),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(68),
    [anon_sym_u6b4cu5531] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu66f2] = ACTIONS(68),
    [anon_sym_u7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [48] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(133),
    [anon_sym_u300a] = ACTIONS(133),
    [anon_sym_Music] = ACTIONS(133),
    [anon_sym_music] = ACTIONS(133),
    [anon_sym_Composition] = ACTIONS(133),
    [anon_sym_composition] = ACTIONS(133),
    [anon_sym_Composer] = ACTIONS(133),
    [anon_sym_composer] = ACTIONS(133),
    [anon_sym_Compose] = ACTIONS(133),
    [anon_sym_compose] = ACTIONS(133),
    [anon_sym_Lyrics] = ACTIONS(133),
    [anon_sym_lyrics] = ACTIONS(133),
    [anon_sym_Lyricist] = ACTIONS(133),
    [anon_sym_lyricist] = ACTIONS(133),
    [anon_sym_Lyric] = ACTIONS(133),
    [anon_sym_lyric] = ACTIONS(133),
    [anon_sym_Arrangement] = ACTIONS(133),
    [anon_sym_arrangement] = ACTIONS(133),
    [anon_sym_Arranger] = ACTIONS(133),
    [anon_sym_arranger] = ACTIONS(133),
    [anon_sym_Arrange] = ACTIONS(133),
    [anon_sym_arrange] = ACTIONS(133),
    [anon_sym_Vocal] = ACTIONS(133),
    [anon_sym_vocal] = ACTIONS(133),
    [anon_sym_Vo] = ACTIONS(133),
    [anon_sym_vo] = ACTIONS(133),
    [anon_sym_Performer] = ACTIONS(133),
    [anon_sym_performer] = ACTIONS(133),
    [anon_sym_Illustration] = ACTIONS(133),
    [anon_sym_illustration] = ACTIONS(133),
    [anon_sym_Illust] = ACTIONS(133),
    [anon_sym_illust] = ACTIONS(133),
    [anon_sym_Label] = ACTIONS(133),
    [anon_sym_label] = ACTIONS(133),
    [anon_sym_Circle] = ACTIONS(133),
    [anon_sym_circle] = ACTIONS(133),
    [anon_sym_Producer] = ACTIONS(133),
    [anon_sym_producer] = ACTIONS(133),
    [anon_sym_Recording] = ACTIONS(133),
    [anon_sym_recording] = ACTIONS(133),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(133),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(133),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(133),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(133),
    [anon_sym_u6b4cu5531] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(133),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu66f2] = ACTIONS(133),
    [anon_sym_u7de8u66f2] = ACTIONS(133),
    [anon_sym_u4f5cu8a5e] = ACTIONS(133),
    [anon_sym_u5382u724c] = ACTIONS(133),
    [anon_sym_u811au672c] = ACTIONS(133),
    [anon_sym_u63d2u56fe] = ACTIONS(133),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(133),
    [anon_sym_u51fau7248u65b9] = ACTIONS(133),
    [anon_sym_u5f55u97f3] = ACTIONS(133),
    [anon_sym_u539fu4f5c] = ACTIONS(133),
    [sym__sep] = ACTIONS(170),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_Music] = ACTIONS(172),
    [anon_sym_music] = ACTIONS(172),
    [anon_sym_Composition] = ACTIONS(172),
    [anon_sym_composition] = ACTIONS(172),
    [anon_sym_Composer] = ACTIONS(172),
    [anon_sym_composer] = ACTIONS(172),
    [anon_sym_Compose] = ACTIONS(174),
    [anon_sym_compose] = ACTIONS(174),
    [anon_sym_Lyrics] = ACTIONS(172),
    [anon_sym_lyrics] = ACTIONS(172),
    [anon_sym_Lyricist] = ACTIONS(172),
    [anon_sym_lyricist] = ACTIONS(172),
    [anon_sym_Lyric] = ACTIONS(174),
    [anon_sym_lyric] = ACTIONS(174),
    [anon_sym_Arrangement] = ACTIONS(172),
    [anon_sym_arrangement] = ACTIONS(172),
    [anon_sym_Arranger] = ACTIONS(172),
    [anon_sym_arranger] = ACTIONS(172),
    [anon_sym_Arrange] = ACTIONS(174),
    [anon_sym_arrange] = ACTIONS(174),
    [anon_sym_Vocal] = ACTIONS(172),
    [anon_sym_vocal] = ACTIONS(172),
    [anon_sym_Vo] = ACTIONS(174),
    [anon_sym_vo] = ACTIONS(174),
    [anon_sym_Performer] = ACTIONS(172),
    [anon_sym_performer] = ACTIONS(172),
    [anon_sym_Illustration] = ACTIONS(172),
    [anon_sym_illustration] = ACTIONS(172),
    [anon_sym_Illust] = ACTIONS(174),
    [anon_sym_illust] = ACTIONS(174),
    [anon_sym_Label] = ACTIONS(172),
    [anon_sym_label] = ACTIONS(172),
    [anon_sym_Circle] = ACTIONS(172),
    [anon_sym_circle] = ACTIONS(172),
    [anon_sym_Producer] = ACTIONS(172),
    [anon_sym_producer] = ACTIONS(172),
    [anon_sym_Recording] = ACTIONS(172),
    [anon_sym_recording] = ACTIONS(172),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(172),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(172),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(172),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(174),
    [anon_sym_u5382u724c] = ACTIONS(172),
    [anon_sym_u811au672c] = ACTIONS(172),
    [anon_sym_u63d2u56fe] = ACTIONS(172),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(172),
    [anon_sym_u51fau7248u65b9] = ACTIONS(172),
    [anon_sym_u5f55u97f3] = ACTIONS(172),
    [anon_sym_u539fu4f5c] = ACTIONS(172),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [anon_sym_Music] = ACTIONS(53),
    [anon_sym_music] = ACTIONS(53),
    [anon_sym_Composition] = ACTIONS(53),
    [anon_sym_composition] = ACTIONS(53),
    [anon_sym_Composer] = ACTIONS(53),
    [anon_sym_composer] = ACTIONS(53),
    [anon_sym_Compose] = ACTIONS(53),
    [anon_sym_compose] = ACTIONS(53),
    [anon_sym_Lyrics] = ACTIONS(53),
    [anon_sym_lyrics] = ACTIONS(53),
    [anon_sym_Lyricist] = ACTIONS(53),
    [anon_sym_lyricist] = ACTIONS(53),
    [anon_sym_Lyric] = ACTIONS(53),
    [anon_sym_lyric] = ACTIONS(53),
    [anon_sym_Arrangement] = ACTIONS(53),
    [anon_sym_arrangement] = ACTIONS(53),
    [anon_sym_Arranger] = ACTIONS(53),
    [anon_sym_arranger] = ACTIONS(53),
    [anon_sym_Arrange] = ACTIONS(53),
    [anon_sym_arrange] = ACTIONS(53),
    [anon_sym_Vocal] = ACTIONS(53),
    [anon_sym_vocal] = ACTIONS(53),
    [anon_sym_Vo] = ACTIONS(53),
    [anon_sym_vo] = ACTIONS(53),
    [anon_sym_Performer] = ACTIONS(53),
    [anon_sym_performer] = ACTIONS(53),
    [anon_sym_Illustration] = ACTIONS(53),
    [anon_sym_illustration] = ACTIONS(53),
    [anon_sym_Illust] = ACTIONS(53),
    [anon_sym_illust] = ACTIONS(53),
    [anon_sym_Label] = ACTIONS(53),
    [anon_sym_label] = ACTIONS(53),
    [anon_sym_Circle] = ACTIONS(53),
    [anon_sym_circle] = ACTIONS(53),
    [anon_sym_Producer] = ACTIONS(53),
    [anon_sym_producer] = ACTIONS(53),
    [anon_sym_Recording] = ACTIONS(53),
    [anon_sym_recording] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
  },
  [51] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(139),
    [anon_sym_music] = ACTIONS(139),
    [anon_sym_Composition] = ACTIONS(139),
    [anon_sym_composition] = ACTIONS(139),
    [anon_sym_Composer] = ACTIONS(139),
    [anon_sym_composer] = ACTIONS(139),
    [anon_sym_Compose] = ACTIONS(139),
    [anon_sym_compose] = ACTIONS(139),
    [anon_sym_Lyrics] = ACTIONS(139),
    [anon_sym_lyrics] = ACTIONS(139),
    [anon_sym_Lyricist] = ACTIONS(139),
    [anon_sym_lyricist] = ACTIONS(139),
    [anon_sym_Lyric] = ACTIONS(139),
    [anon_sym_lyric] = ACTIONS(139),
    [anon_sym_Arrangement] = ACTIONS(139),
    [anon_sym_arrangement] = ACTIONS(139),
    [anon_sym_Arranger] = ACTIONS(139),
    [anon_sym_arranger] = ACTIONS(139),
    [anon_sym_Arrange] = ACTIONS(139),
    [anon_sym_arrange] = ACTIONS(139),
    [anon_sym_Vocal] = ACTIONS(139),
    [anon_sym_vocal] = ACTIONS(139),
    [anon_sym_Vo] = ACTIONS(139),
    [anon_sym_vo] = ACTIONS(139),
    [anon_sym_Performer] = ACTIONS(139),
    [anon_sym_performer] = ACTIONS(139),
    [anon_sym_Illustration] = ACTIONS(139),
    [anon_sym_illustration] = ACTIONS(139),
    [anon_sym_Illust] = ACTIONS(139),
    [anon_sym_illust] = ACTIONS(139),
    [anon_sym_Label] = ACTIONS(139),
    [anon_sym_label] = ACTIONS(139),
    [anon_sym_Circle] = ACTIONS(139),
    [anon_sym_circle] = ACTIONS(139),
    [anon_sym_Producer] = ACTIONS(139),
    [anon_sym_producer] = ACTIONS(139),
    [anon_sym_Recording] = ACTIONS(139),
    [anon_sym_recording] = ACTIONS(139),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(139),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(139),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(139),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu66f2] = ACTIONS(139),
    [anon_sym_u7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5e] = ACTIONS(139),
    [anon_sym_u5382u724c] = ACTIONS(139),
    [anon_sym_u811au672c] = ACTIONS(139),
    [anon_sym_u63d2u56fe] = ACTIONS(139),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(139),
    [anon_sym_u51fau7248u65b9] = ACTIONS(139),
    [anon_sym_u5f55u97f3] = ACTIONS(139),
    [anon_sym_u539fu4f5c] = ACTIONS(139),
    [sym__sep] = ACTIONS(176),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(180),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
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
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(186),
    [anon_sym_u300a] = ACTIONS(186),
    [anon_sym_Music] = ACTIONS(186),
    [anon_sym_music] = ACTIONS(186),
    [anon_sym_Composition] = ACTIONS(186),
    [anon_sym_composition] = ACTIONS(186),
    [anon_sym_Composer] = ACTIONS(186),
    [anon_sym_composer] = ACTIONS(186),
    [anon_sym_Compose] = ACTIONS(186),
    [anon_sym_compose] = ACTIONS(186),
    [anon_sym_Lyrics] = ACTIONS(186),
    [anon_sym_lyrics] = ACTIONS(186),
    [anon_sym_Lyricist] = ACTIONS(186),
    [anon_sym_lyricist] = ACTIONS(186),
    [anon_sym_Lyric] = ACTIONS(186),
    [anon_sym_lyric] = ACTIONS(186),
    [anon_sym_Arrangement] = ACTIONS(186),
    [anon_sym_arrangement] = ACTIONS(186),
    [anon_sym_Arranger] = ACTIONS(186),
    [anon_sym_arranger] = ACTIONS(186),
    [anon_sym_Arrange] = ACTIONS(186),
    [anon_sym_arrange] = ACTIONS(186),
    [anon_sym_Vocal] = ACTIONS(186),
    [anon_sym_vocal] = ACTIONS(186),
    [anon_sym_Vo] = ACTIONS(186),
    [anon_sym_vo] = ACTIONS(186),
    [anon_sym_Performer] = ACTIONS(186),
    [anon_sym_performer] = ACTIONS(186),
    [anon_sym_Illustration] = ACTIONS(186),
    [anon_sym_illustration] = ACTIONS(186),
    [anon_sym_Illust] = ACTIONS(186),
    [anon_sym_illust] = ACTIONS(186),
    [anon_sym_Label] = ACTIONS(186),
    [anon_sym_label] = ACTIONS(186),
    [anon_sym_Circle] = ACTIONS(186),
    [anon_sym_circle] = ACTIONS(186),
    [anon_sym_Producer] = ACTIONS(186),
    [anon_sym_producer] = ACTIONS(186),
    [anon_sym_Recording] = ACTIONS(186),
    [anon_sym_recording] = ACTIONS(186),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(186),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(186),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(186),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(186),
    [anon_sym_u6b4cu5531] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu66f2] = ACTIONS(186),
    [anon_sym_u7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5e] = ACTIONS(186),
    [anon_sym_u5382u724c] = ACTIONS(186),
    [anon_sym_u811au672c] = ACTIONS(186),
    [anon_sym_u63d2u56fe] = ACTIONS(186),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(186),
    [anon_sym_u51fau7248u65b9] = ACTIONS(186),
    [anon_sym_u5f55u97f3] = ACTIONS(186),
    [anon_sym_u539fu4f5c] = ACTIONS(186),
  },
  [55] = {
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(188),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
  },
  [56] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(159),
    [anon_sym_u300a] = ACTIONS(159),
    [anon_sym_Music] = ACTIONS(159),
    [anon_sym_music] = ACTIONS(159),
    [anon_sym_Composition] = ACTIONS(159),
    [anon_sym_composition] = ACTIONS(159),
    [anon_sym_Composer] = ACTIONS(159),
    [anon_sym_composer] = ACTIONS(159),
    [anon_sym_Compose] = ACTIONS(159),
    [anon_sym_compose] = ACTIONS(159),
    [anon_sym_Lyrics] = ACTIONS(159),
    [anon_sym_lyrics] = ACTIONS(159),
    [anon_sym_Lyricist] = ACTIONS(159),
    [anon_sym_lyricist] = ACTIONS(159),
    [anon_sym_Lyric] = ACTIONS(159),
    [anon_sym_lyric] = ACTIONS(159),
    [anon_sym_Arrangement] = ACTIONS(159),
    [anon_sym_arrangement] = ACTIONS(159),
    [anon_sym_Arranger] = ACTIONS(159),
    [anon_sym_arranger] = ACTIONS(159),
    [anon_sym_Arrange] = ACTIONS(159),
    [anon_sym_arrange] = ACTIONS(159),
    [anon_sym_Vocal] = ACTIONS(159),
    [anon_sym_vocal] = ACTIONS(159),
    [anon_sym_Vo] = ACTIONS(159),
    [anon_sym_vo] = ACTIONS(159),
    [anon_sym_Performer] = ACTIONS(159),
    [anon_sym_performer] = ACTIONS(159),
    [anon_sym_Illustration] = ACTIONS(159),
    [anon_sym_illustration] = ACTIONS(159),
    [anon_sym_Illust] = ACTIONS(159),
    [anon_sym_illust] = ACTIONS(159),
    [anon_sym_Label] = ACTIONS(159),
    [anon_sym_label] = ACTIONS(159),
    [anon_sym_Circle] = ACTIONS(159),
    [anon_sym_circle] = ACTIONS(159),
    [anon_sym_Producer] = ACTIONS(159),
    [anon_sym_producer] = ACTIONS(159),
    [anon_sym_Recording] = ACTIONS(159),
    [anon_sym_recording] = ACTIONS(159),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(159),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(159),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(159),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(159),
    [anon_sym_u6b4cu5531] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(159),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu66f2] = ACTIONS(159),
    [anon_sym_u7de8u66f2] = ACTIONS(159),
    [anon_sym_u4f5cu8a5e] = ACTIONS(159),
    [anon_sym_u5382u724c] = ACTIONS(159),
    [anon_sym_u811au672c] = ACTIONS(159),
    [anon_sym_u63d2u56fe] = ACTIONS(159),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(159),
    [anon_sym_u51fau7248u65b9] = ACTIONS(159),
    [anon_sym_u5f55u97f3] = ACTIONS(159),
    [anon_sym_u539fu4f5c] = ACTIONS(159),
  },
  [57] = {
    [anon_sym_u300a] = ACTIONS(150),
    [sym_creator_name] = ACTIONS(150),
    [anon_sym_Music] = ACTIONS(150),
    [anon_sym_music] = ACTIONS(150),
    [anon_sym_Composition] = ACTIONS(150),
    [anon_sym_composition] = ACTIONS(150),
    [anon_sym_Composer] = ACTIONS(150),
    [anon_sym_composer] = ACTIONS(150),
    [anon_sym_Compose] = ACTIONS(150),
    [anon_sym_compose] = ACTIONS(150),
    [anon_sym_Lyrics] = ACTIONS(150),
    [anon_sym_lyrics] = ACTIONS(150),
    [anon_sym_Lyricist] = ACTIONS(150),
    [anon_sym_lyricist] = ACTIONS(150),
    [anon_sym_Lyric] = ACTIONS(150),
    [anon_sym_lyric] = ACTIONS(150),
    [anon_sym_Arrangement] = ACTIONS(150),
    [anon_sym_arrangement] = ACTIONS(150),
    [anon_sym_Arranger] = ACTIONS(150),
    [anon_sym_arranger] = ACTIONS(150),
    [anon_sym_Arrange] = ACTIONS(150),
    [anon_sym_arrange] = ACTIONS(150),
    [anon_sym_Vocal] = ACTIONS(150),
    [anon_sym_vocal] = ACTIONS(150),
    [anon_sym_Vo] = ACTIONS(150),
    [anon_sym_vo] = ACTIONS(150),
    [anon_sym_Performer] = ACTIONS(150),
    [anon_sym_performer] = ACTIONS(150),
    [anon_sym_Illustration] = ACTIONS(150),
    [anon_sym_illustration] = ACTIONS(150),
    [anon_sym_Illust] = ACTIONS(150),
    [anon_sym_illust] = ACTIONS(150),
    [anon_sym_Label] = ACTIONS(150),
    [anon_sym_label] = ACTIONS(150),
    [anon_sym_Circle] = ACTIONS(150),
    [anon_sym_circle] = ACTIONS(150),
    [anon_sym_Producer] = ACTIONS(150),
    [anon_sym_producer] = ACTIONS(150),
    [anon_sym_Recording] = ACTIONS(150),
    [anon_sym_recording] = ACTIONS(150),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(150),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(150),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(150),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(150),
    [anon_sym_u6b4cu5531] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu66f2] = ACTIONS(150),
    [anon_sym_u7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5e] = ACTIONS(150),
    [anon_sym_u5382u724c] = ACTIONS(150),
    [anon_sym_u811au672c] = ACTIONS(150),
    [anon_sym_u63d2u56fe] = ACTIONS(150),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(150),
    [anon_sym_u51fau7248u65b9] = ACTIONS(150),
    [anon_sym_u5f55u97f3] = ACTIONS(150),
    [anon_sym_u539fu4f5c] = ACTIONS(150),
  },
  [58] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(68),
    [anon_sym_u300a] = ACTIONS(68),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(68),
    [anon_sym_label] = ACTIONS(68),
    [anon_sym_Circle] = ACTIONS(68),
    [anon_sym_circle] = ACTIONS(68),
    [anon_sym_Producer] = ACTIONS(68),
    [anon_sym_producer] = ACTIONS(68),
    [anon_sym_Recording] = ACTIONS(68),
    [anon_sym_recording] = ACTIONS(68),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(68),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(68),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(68),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(68),
    [anon_sym_u6b4cu5531] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(68),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu66f2] = ACTIONS(68),
    [anon_sym_u7de8u66f2] = ACTIONS(68),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [59] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(186),
    [anon_sym_u300a] = ACTIONS(186),
    [anon_sym_Music] = ACTIONS(186),
    [anon_sym_music] = ACTIONS(186),
    [anon_sym_Composition] = ACTIONS(186),
    [anon_sym_composition] = ACTIONS(186),
    [anon_sym_Composer] = ACTIONS(186),
    [anon_sym_composer] = ACTIONS(186),
    [anon_sym_Compose] = ACTIONS(186),
    [anon_sym_compose] = ACTIONS(186),
    [anon_sym_Lyrics] = ACTIONS(186),
    [anon_sym_lyrics] = ACTIONS(186),
    [anon_sym_Lyricist] = ACTIONS(186),
    [anon_sym_lyricist] = ACTIONS(186),
    [anon_sym_Lyric] = ACTIONS(186),
    [anon_sym_lyric] = ACTIONS(186),
    [anon_sym_Arrangement] = ACTIONS(186),
    [anon_sym_arrangement] = ACTIONS(186),
    [anon_sym_Arranger] = ACTIONS(186),
    [anon_sym_arranger] = ACTIONS(186),
    [anon_sym_Arrange] = ACTIONS(186),
    [anon_sym_arrange] = ACTIONS(186),
    [anon_sym_Vocal] = ACTIONS(186),
    [anon_sym_vocal] = ACTIONS(186),
    [anon_sym_Vo] = ACTIONS(186),
    [anon_sym_vo] = ACTIONS(186),
    [anon_sym_Performer] = ACTIONS(186),
    [anon_sym_performer] = ACTIONS(186),
    [anon_sym_Illustration] = ACTIONS(186),
    [anon_sym_illustration] = ACTIONS(186),
    [anon_sym_Illust] = ACTIONS(186),
    [anon_sym_illust] = ACTIONS(186),
    [anon_sym_Label] = ACTIONS(186),
    [anon_sym_label] = ACTIONS(186),
    [anon_sym_Circle] = ACTIONS(186),
    [anon_sym_circle] = ACTIONS(186),
    [anon_sym_Producer] = ACTIONS(186),
    [anon_sym_producer] = ACTIONS(186),
    [anon_sym_Recording] = ACTIONS(186),
    [anon_sym_recording] = ACTIONS(186),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(186),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(186),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(186),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(186),
    [anon_sym_u6b4cu5531] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu66f2] = ACTIONS(186),
    [anon_sym_u7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5e] = ACTIONS(186),
    [anon_sym_u5382u724c] = ACTIONS(186),
    [anon_sym_u811au672c] = ACTIONS(186),
    [anon_sym_u63d2u56fe] = ACTIONS(186),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(186),
    [anon_sym_u51fau7248u65b9] = ACTIONS(186),
    [anon_sym_u5f55u97f3] = ACTIONS(186),
    [anon_sym_u539fu4f5c] = ACTIONS(186),
  },
  [60] = {
    [anon_sym_AT] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
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
  },
  [61] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [anon_sym_Music] = ACTIONS(53),
    [anon_sym_music] = ACTIONS(53),
    [anon_sym_Composition] = ACTIONS(53),
    [anon_sym_composition] = ACTIONS(53),
    [anon_sym_Composer] = ACTIONS(53),
    [anon_sym_composer] = ACTIONS(53),
    [anon_sym_Compose] = ACTIONS(53),
    [anon_sym_compose] = ACTIONS(53),
    [anon_sym_Lyrics] = ACTIONS(53),
    [anon_sym_lyrics] = ACTIONS(53),
    [anon_sym_Lyricist] = ACTIONS(53),
    [anon_sym_lyricist] = ACTIONS(53),
    [anon_sym_Lyric] = ACTIONS(53),
    [anon_sym_lyric] = ACTIONS(53),
    [anon_sym_Arrangement] = ACTIONS(53),
    [anon_sym_arrangement] = ACTIONS(53),
    [anon_sym_Arranger] = ACTIONS(53),
    [anon_sym_arranger] = ACTIONS(53),
    [anon_sym_Arrange] = ACTIONS(53),
    [anon_sym_arrange] = ACTIONS(53),
    [anon_sym_Vocal] = ACTIONS(53),
    [anon_sym_vocal] = ACTIONS(53),
    [anon_sym_Vo] = ACTIONS(53),
    [anon_sym_vo] = ACTIONS(53),
    [anon_sym_Performer] = ACTIONS(53),
    [anon_sym_performer] = ACTIONS(53),
    [anon_sym_Illustration] = ACTIONS(53),
    [anon_sym_illustration] = ACTIONS(53),
    [anon_sym_Illust] = ACTIONS(53),
    [anon_sym_illust] = ACTIONS(53),
    [anon_sym_Label] = ACTIONS(53),
    [anon_sym_label] = ACTIONS(53),
    [anon_sym_Circle] = ACTIONS(53),
    [anon_sym_circle] = ACTIONS(53),
    [anon_sym_Producer] = ACTIONS(53),
    [anon_sym_producer] = ACTIONS(53),
    [anon_sym_Recording] = ACTIONS(53),
    [anon_sym_recording] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(5), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(8), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(44), 1,
      sym__song_title_maybefeat,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    STATE(75), 1,
      sym_song,
  [28] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(3), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(8), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(44), 1,
      sym__song_title_maybefeat,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(64), 1,
      aux_sym_source_file_repeat1,
    STATE(85), 1,
      sym_song,
  [56] = 8,
    ACTIONS(190), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(193), 1,
      anon_sym_u300a,
    STATE(16), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(21), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(37), 1,
      sym_song_title,
    STATE(44), 1,
      sym__song_title_maybefeat,
    STATE(55), 1,
      sym__quotable_song_title_maybefeat,
    STATE(64), 2,
      sym_song,
      aux_sym_source_file_repeat1,
  [82] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(4), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(8), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(44), 1,
      sym__song_title_maybefeat,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(64), 1,
      aux_sym_source_file_repeat1,
    STATE(75), 1,
      sym_song,
  [110] = 4,
    ACTIONS(196), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(69), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(73), 1,
      sym_song_title,
    STATE(104), 1,
      sym__song_title_maybefeat,
  [123] = 4,
    ACTIONS(43), 1,
      anon_sym_u300b,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(22), 1,
      sym__quotable_creator_name,
  [136] = 4,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(74), 1,
      anon_sym_u300b,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(22), 1,
      sym__quotable_creator_name,
  [149] = 3,
    ACTIONS(200), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(70), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(32), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [160] = 3,
    ACTIONS(202), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(70), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(59), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [171] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [179] = 3,
    ACTIONS(117), 1,
      anon_sym_u300b,
    ACTIONS(209), 1,
      sym__ssep,
    STATE(86), 1,
      aux_sym_feat_field_repeat1,
  [189] = 3,
    ACTIONS(107), 1,
      anon_sym_u300b,
    ACTIONS(211), 1,
      aux_sym_feat_field_token1,
    STATE(33), 1,
      sym_feat_field,
  [199] = 3,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(42), 1,
      sym__quotable_creator_name,
  [209] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [217] = 1,
    ACTIONS(92), 3,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [223] = 3,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(72), 1,
      sym__quotable_creator_name,
  [233] = 3,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(22), 1,
      sym__quotable_creator_name,
  [243] = 3,
    ACTIONS(76), 1,
      anon_sym_u300a,
    ACTIONS(215), 1,
      sym_creator_name,
    STATE(92), 1,
      sym__quotable_creator_name,
  [253] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [261] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [269] = 3,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      sym__sep,
    STATE(88), 1,
      aux_sym_credit_field_repeat2,
  [279] = 3,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      sym__sep,
    STATE(83), 1,
      aux_sym_credit_field_repeat2,
  [289] = 3,
    ACTIONS(45), 1,
      anon_sym_u300a,
    ACTIONS(198), 1,
      sym_creator_name,
    STATE(32), 1,
      sym__quotable_creator_name,
  [299] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [307] = 3,
    ACTIONS(96), 1,
      anon_sym_u300b,
    ACTIONS(232), 1,
      sym__ssep,
    STATE(9), 1,
      aux_sym_feat_field_repeat1,
  [317] = 3,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      sym__sep,
    STATE(83), 1,
      aux_sym_credit_field_repeat2,
  [327] = 3,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      sym__sep,
    STATE(83), 1,
      aux_sym_credit_field_repeat2,
  [337] = 3,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 1,
      sym__sep,
    STATE(87), 1,
      aux_sym_credit_field_repeat2,
  [347] = 2,
    ACTIONS(78), 1,
      sym__sep,
    ACTIONS(80), 1,
      anon_sym_LF,
  [354] = 2,
    ACTIONS(246), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(46), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [361] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      sym__sep,
  [368] = 1,
    ACTIONS(219), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [373] = 2,
    ACTIONS(252), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(34), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [380] = 1,
    ACTIONS(219), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [385] = 2,
    ACTIONS(103), 1,
      sym__sep,
    ACTIONS(105), 1,
      anon_sym_LF,
  [392] = 1,
    ACTIONS(254), 1,
      aux_sym__quotable_creator_name_token1,
  [396] = 1,
    ACTIONS(256), 1,
      anon_sym_u300b,
  [400] = 1,
    ACTIONS(258), 1,
      sym__sep,
  [404] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [408] = 1,
    ACTIONS(262), 1,
      anon_sym_u300b,
  [412] = 1,
    ACTIONS(264), 1,
      sym__sep,
  [416] = 1,
    ACTIONS(266), 1,
      aux_sym__quotable_creator_name_token1,
  [420] = 1,
    ACTIONS(268), 1,
      anon_sym_u300b,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(62)] = 0,
  [SMALL_STATE(63)] = 28,
  [SMALL_STATE(64)] = 56,
  [SMALL_STATE(65)] = 82,
  [SMALL_STATE(66)] = 110,
  [SMALL_STATE(67)] = 123,
  [SMALL_STATE(68)] = 136,
  [SMALL_STATE(69)] = 149,
  [SMALL_STATE(70)] = 160,
  [SMALL_STATE(71)] = 171,
  [SMALL_STATE(72)] = 179,
  [SMALL_STATE(73)] = 189,
  [SMALL_STATE(74)] = 199,
  [SMALL_STATE(75)] = 209,
  [SMALL_STATE(76)] = 217,
  [SMALL_STATE(77)] = 223,
  [SMALL_STATE(78)] = 233,
  [SMALL_STATE(79)] = 243,
  [SMALL_STATE(80)] = 253,
  [SMALL_STATE(81)] = 261,
  [SMALL_STATE(82)] = 269,
  [SMALL_STATE(83)] = 279,
  [SMALL_STATE(84)] = 289,
  [SMALL_STATE(85)] = 299,
  [SMALL_STATE(86)] = 307,
  [SMALL_STATE(87)] = 317,
  [SMALL_STATE(88)] = 327,
  [SMALL_STATE(89)] = 337,
  [SMALL_STATE(90)] = 347,
  [SMALL_STATE(91)] = 354,
  [SMALL_STATE(92)] = 361,
  [SMALL_STATE(93)] = 368,
  [SMALL_STATE(94)] = 373,
  [SMALL_STATE(95)] = 380,
  [SMALL_STATE(96)] = 385,
  [SMALL_STATE(97)] = 392,
  [SMALL_STATE(98)] = 396,
  [SMALL_STATE(99)] = 400,
  [SMALL_STATE(100)] = 404,
  [SMALL_STATE(101)] = 408,
  [SMALL_STATE(102)] = 412,
  [SMALL_STATE(103)] = 416,
  [SMALL_STATE(104)] = 420,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 15),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 15),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 15), SHIFT_REPEAT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 11),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 4, 0, 12),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 4, 0, 12),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 13),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 14),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 14),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 12),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 7),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 11),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 10),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 11),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 11),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 12),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 11),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 8),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 12),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 12),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 15),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 15), SHIFT_REPEAT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 14),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
