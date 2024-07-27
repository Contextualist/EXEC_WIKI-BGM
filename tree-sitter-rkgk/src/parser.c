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
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 63
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_LF = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token1 = 4,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token2 = 5,
  anon_sym_u300a = 6,
  anon_sym_u300b = 7,
  aux_sym_feat_field_token1 = 8,
  aux_sym__quotable_creator_name_token1 = 9,
  sym_creator_name = 10,
  anon_sym_Music = 11,
  anon_sym_music = 12,
  anon_sym_Composition = 13,
  anon_sym_composition = 14,
  anon_sym_Composer = 15,
  anon_sym_composer = 16,
  anon_sym_Compose = 17,
  anon_sym_compose = 18,
  anon_sym_Lyrics = 19,
  anon_sym_lyrics = 20,
  anon_sym_Lyricist = 21,
  anon_sym_lyricist = 22,
  anon_sym_Lyric = 23,
  anon_sym_lyric = 24,
  anon_sym_Arrangement = 25,
  anon_sym_arrangement = 26,
  anon_sym_Arranger = 27,
  anon_sym_arranger = 28,
  anon_sym_Arrange = 29,
  anon_sym_arrange = 30,
  anon_sym_Vocal = 31,
  anon_sym_vocal = 32,
  anon_sym_Vo = 33,
  anon_sym_vo = 34,
  anon_sym_Performer = 35,
  anon_sym_performer = 36,
  anon_sym_Illustration = 37,
  anon_sym_illustration = 38,
  anon_sym_Illust = 39,
  anon_sym_illust = 40,
  anon_sym_Label = 41,
  anon_sym_label = 42,
  anon_sym_Circle = 43,
  anon_sym_circle = 44,
  anon_sym_Producer = 45,
  anon_sym_producer = 46,
  anon_sym_Recording = 47,
  anon_sym_recording = 48,
  anon_sym_u30dcu30fcu30abu30eb = 49,
  anon_sym_u30a2u30ecu30f3u30b8 = 50,
  anon_sym_u30a4u30e9u30b9u30c8 = 51,
  anon_sym_u30ecu30fcu30d9u30eb = 52,
  anon_sym_u6b4cu5531 = 53,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 54,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 55,
  anon_sym_u4f5cu8a5eu66f2 = 56,
  anon_sym_u4f5cu7de8u66f2 = 57,
  anon_sym_u4f5cu66f2 = 58,
  anon_sym_u7de8u66f2 = 59,
  anon_sym_u4f5cu8a5e = 60,
  anon_sym_u5382u724c = 61,
  anon_sym_u811au672c = 62,
  anon_sym_u63d2u56fe = 63,
  anon_sym_u5236u4f5cu4eba = 64,
  anon_sym_u51fau7248u65b9 = 65,
  anon_sym_u5f55u97f3 = 66,
  anon_sym_u539fu4f5c = 67,
  sym__sep = 68,
  sym__ssep = 69,
  sym_source_file = 70,
  sym_song = 71,
  sym_credit_block = 72,
  sym_credit_field = 73,
  sym__quotable_song_title_maybefeat_maybecomment = 74,
  sym__quotable_song_title_maybefeat = 75,
  sym__song_title_maybefeat = 76,
  sym_song_title = 77,
  sym_feat_field = 78,
  sym__quotable_creator_name = 79,
  sym_role = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_credit_block_repeat1 = 82,
  aux_sym_credit_field_repeat1 = 83,
  aux_sym_credit_field_repeat2 = 84,
  aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1 = 85,
  aux_sym_feat_field_repeat1 = 86,
  alias_sym_creator_sep = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = "_quotable_song_title_maybefeat_maybecomment_token1",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = "comment",
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
  [alias_sym_creator_sep] = "creator_sep",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = aux_sym__quotable_song_title_maybefeat_maybecomment_token2,
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
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = {
    .visible = true,
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 1, .length = 1},
  [10] = {.index = 7, .length = 1},
  [11] = {.index = 8, .length = 3},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
  [14] = {.index = 14, .length = 4},
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
  [9] = {
    [2] = aux_sym__quotable_song_title_maybefeat_maybecomment_token2,
  },
  [13] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__quotable_song_title_maybefeat_maybecomment, 2,
    sym__quotable_song_title_maybefeat_maybecomment,
    sym_song,
  aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2,
    aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    aux_sym__quotable_song_title_maybefeat_maybecomment_token2,
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
  [11] = 11,
  [12] = 12,
  [13] = 3,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 7,
  [19] = 19,
  [20] = 20,
  [21] = 2,
  [22] = 5,
  [23] = 23,
  [24] = 11,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 4,
  [29] = 20,
  [30] = 25,
  [31] = 16,
  [32] = 14,
  [33] = 33,
  [34] = 33,
  [35] = 27,
  [36] = 36,
  [37] = 19,
  [38] = 38,
  [39] = 39,
  [40] = 7,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 27,
  [48] = 48,
  [49] = 39,
  [50] = 50,
  [51] = 45,
  [52] = 41,
  [53] = 42,
  [54] = 7,
  [55] = 55,
  [56] = 56,
  [57] = 48,
  [58] = 46,
  [59] = 27,
  [60] = 60,
  [61] = 50,
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 11,
  [69] = 7,
  [70] = 5,
  [71] = 2,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 16,
  [76] = 76,
  [77] = 73,
  [78] = 72,
  [79] = 72,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 19,
  [84] = 84,
  [85] = 85,
  [86] = 74,
  [87] = 87,
  [88] = 25,
  [89] = 89,
  [90] = 27,
  [91] = 91,
  [92] = 92,
  [93] = 85,
  [94] = 92,
  [95] = 84,
  [96] = 26,
  [97] = 17,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
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
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(214);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == 0x300b) ADVANCE(247);
      if (lookahead == 0x30a2) ADVANCE(230);
      if (lookahead == 0x30a4) ADVANCE(229);
      if (lookahead == 0x30dc) ADVANCE(231);
      if (lookahead == 0x30ec) ADVANCE(232);
      if (lookahead == 0x4f5c) ADVANCE(238);
      if (lookahead == 0x51fa) ADVANCE(241);
      if (lookahead == 0x5236) ADVANCE(233);
      if (lookahead == 0x5382) ADVANCE(242);
      if (lookahead == 0x539f) ADVANCE(235);
      if (lookahead == 0x5f55) ADVANCE(243);
      if (lookahead == 0x63d2) ADVANCE(237);
      if (lookahead == 0x6b4c) ADVANCE(236);
      if (lookahead == 0x7de8) ADVANCE(239);
      if (lookahead == 0x811a) ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 0x300b) ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(541);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(542);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(251);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(249);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 361,
        'C', 302,
        'I', 318,
        'L', 254,
        'M', 390,
        'P', 287,
        'R', 278,
        'V', 338,
        'a', 371,
        'c', 313,
        'i', 323,
        'l', 260,
        'm', 395,
        'p', 294,
        'r', 295,
        'v', 339,
        0x300a, 246,
        0x30a2, 404,
        0x30a4, 401,
        0x30dc, 406,
        0x30ec, 407,
        0x4f5c, 415,
        0x51fa, 421,
        0x5236, 409,
        0x5382, 422,
        0x539f, 411,
        0x5f55, 423,
        0x63d2, 413,
        0x6b4c, 412,
        0x7de8, 416,
        0x811a, 420,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(9);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(253);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
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
        0x300a, 246,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 176,
        0x51fa, 182,
        0x5236, 170,
        0x5382, 183,
        0x539f, 171,
        0x5f55, 184,
        0x63d2, 174,
        0x6b4c, 173,
        0x7de8, 177,
        0x811a, 181,
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
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(429);
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
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(441);
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
      if (lookahead == 'g') ADVANCE(499);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(501);
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
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(469);
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
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(481);
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
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(474);
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
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(477);
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
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(457);
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
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == 0x300b) ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(156);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 156:
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == 0x300b) ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156);
      END_STATE();
    case 157:
      if (lookahead == 0x30ab) ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 0x30b8) ADVANCE(505);
      END_STATE();
    case 159:
      if (lookahead == 0x30b9) ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 0x30c8) ADVANCE(507);
      END_STATE();
    case 161:
      if (lookahead == 0x30d9) ADVANCE(164);
      END_STATE();
    case 162:
      if (lookahead == 0x30e9) ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 0x30eb) ADVANCE(503);
      END_STATE();
    case 164:
      if (lookahead == 0x30eb) ADVANCE(509);
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
      if (lookahead == 0x4eba) ADVANCE(533);
      END_STATE();
    case 170:
      if (lookahead == 0x4f5c) ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 0x4f5c) ADVANCE(539);
      END_STATE();
    case 172:
      if (lookahead == 0x4f5c) ADVANCE(539);
      if (lookahead == 0x66f2) ADVANCE(185);
      END_STATE();
    case 173:
      if (lookahead == 0x5531) ADVANCE(511);
      END_STATE();
    case 174:
      if (lookahead == 0x56fe) ADVANCE(531);
      END_STATE();
    case 175:
      if (lookahead == 0x65b9) ADVANCE(535);
      END_STATE();
    case 176:
      if (lookahead == 0x66f2) ADVANCE(521);
      if (lookahead == 0x7de8) ADVANCE(178);
      if (lookahead == 0x8a5e) ADVANCE(525);
      END_STATE();
    case 177:
      if (lookahead == 0x66f2) ADVANCE(523);
      END_STATE();
    case 178:
      if (lookahead == 0x66f2) ADVANCE(519);
      END_STATE();
    case 179:
      if (lookahead == 0x66f2) ADVANCE(515);
      if (lookahead == 0x7de8) ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 0x66f2) ADVANCE(513);
      END_STATE();
    case 181:
      if (lookahead == 0x672c) ADVANCE(529);
      END_STATE();
    case 182:
      if (lookahead == 0x7248) ADVANCE(175);
      END_STATE();
    case 183:
      if (lookahead == 0x724c) ADVANCE(527);
      END_STATE();
    case 184:
      if (lookahead == 0x97f3) ADVANCE(537);
      END_STATE();
    case 185:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 186:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(187);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(214);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == 0x30a2) ADVANCE(230);
      if (lookahead == 0x30a4) ADVANCE(229);
      if (lookahead == 0x30dc) ADVANCE(231);
      if (lookahead == 0x30ec) ADVANCE(232);
      if (lookahead == 0x4f5c) ADVANCE(238);
      if (lookahead == 0x51fa) ADVANCE(241);
      if (lookahead == 0x5236) ADVANCE(233);
      if (lookahead == 0x5382) ADVANCE(242);
      if (lookahead == 0x539f) ADVANCE(234);
      if (lookahead == 0x5f55) ADVANCE(243);
      if (lookahead == 0x63d2) ADVANCE(237);
      if (lookahead == 0x6b4c) ADVANCE(236);
      if (lookahead == 0x7de8) ADVANCE(239);
      if (lookahead == 0x811a) ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(541);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(209);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(542);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 187:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(187);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(214);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == 0x30a2) ADVANCE(230);
      if (lookahead == 0x30a4) ADVANCE(229);
      if (lookahead == 0x30dc) ADVANCE(231);
      if (lookahead == 0x30ec) ADVANCE(232);
      if (lookahead == 0x4f5c) ADVANCE(238);
      if (lookahead == 0x51fa) ADVANCE(241);
      if (lookahead == 0x5236) ADVANCE(233);
      if (lookahead == 0x5382) ADVANCE(242);
      if (lookahead == 0x539f) ADVANCE(234);
      if (lookahead == 0x5f55) ADVANCE(243);
      if (lookahead == 0x63d2) ADVANCE(237);
      if (lookahead == 0x6b4c) ADVANCE(236);
      if (lookahead == 0x7de8) ADVANCE(239);
      if (lookahead == 0x811a) ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 188:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(214);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 0x30a2) ADVANCE(230);
      if (lookahead == 0x30a4) ADVANCE(229);
      if (lookahead == 0x30dc) ADVANCE(231);
      if (lookahead == 0x30ec) ADVANCE(232);
      if (lookahead == 0x4f5c) ADVANCE(238);
      if (lookahead == 0x51fa) ADVANCE(241);
      if (lookahead == 0x5236) ADVANCE(233);
      if (lookahead == 0x5382) ADVANCE(242);
      if (lookahead == 0x539f) ADVANCE(235);
      if (lookahead == 0x5f55) ADVANCE(243);
      if (lookahead == 0x63d2) ADVANCE(237);
      if (lookahead == 0x6b4c) ADVANCE(236);
      if (lookahead == 0x7de8) ADVANCE(239);
      if (lookahead == 0x811a) ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 189:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '\n', 200,
        'A', 361,
        'C', 302,
        'I', 318,
        'L', 254,
        'M', 390,
        'P', 287,
        'R', 278,
        'V', 338,
        'a', 371,
        'c', 313,
        'i', 323,
        'l', 260,
        'm', 395,
        'p', 294,
        'r', 295,
        'v', 339,
        0x300a, 246,
        0x30a2, 404,
        0x30a4, 401,
        0x30dc, 406,
        0x30ec, 407,
        0x4f5c, 415,
        0x51fa, 421,
        0x5236, 409,
        0x5382, 422,
        0x539f, 411,
        0x5f55, 423,
        0x63d2, 413,
        0x6b4c, 412,
        0x7de8, 416,
        0x811a, 420,
        '\t', 204,
        ' ', 204,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(253);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(203);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 190:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(190);
      if (lookahead == '@') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(214);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 0x30a2) ADVANCE(230);
      if (lookahead == 0x30a4) ADVANCE(229);
      if (lookahead == 0x30dc) ADVANCE(231);
      if (lookahead == 0x30ec) ADVANCE(232);
      if (lookahead == 0x4f5c) ADVANCE(238);
      if (lookahead == 0x51fa) ADVANCE(241);
      if (lookahead == 0x5236) ADVANCE(233);
      if (lookahead == 0x5382) ADVANCE(242);
      if (lookahead == 0x539f) ADVANCE(234);
      if (lookahead == 0x5f55) ADVANCE(243);
      if (lookahead == 0x63d2) ADVANCE(237);
      if (lookahead == 0x6b4c) ADVANCE(236);
      if (lookahead == 0x7de8) ADVANCE(239);
      if (lookahead == 0x811a) ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 191:
      if (eof) ADVANCE(197);
      if (lookahead == '\n') SKIP(191);
      if (lookahead == 0x300a) ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 192:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '/', 7,
        '@', 198,
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
        0x300b, 247,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 176,
        0x51fa, 182,
        0x5236, 170,
        0x5382, 183,
        0x539f, 172,
        0x5f55, 184,
        0x63d2, 174,
        0x6b4c, 173,
        0x7de8, 177,
        0x811a, 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(192);
      END_STATE();
    case 193:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '/', 7,
        '@', 198,
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
        0x300a, 246,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 176,
        0x51fa, 182,
        0x5236, 170,
        0x5382, 183,
        0x539f, 172,
        0x5f55, 184,
        0x63d2, 174,
        0x6b4c, 173,
        0x7de8, 177,
        0x811a, 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(193);
      END_STATE();
    case 194:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '/', 7,
        '@', 198,
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
        0x300b, 247,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 176,
        0x51fa, 182,
        0x5236, 170,
        0x5382, 183,
        0x539f, 172,
        0x5f55, 184,
        0x63d2, 174,
        0x6b4c, 173,
        0x7de8, 177,
        0x811a, 181,
        '\t', 543,
        ' ', 543,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(195);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(544);
      END_STATE();
    case 195:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '/', 7,
        '@', 198,
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
        0x300b, 247,
        0x30a2, 165,
        0x30a4, 162,
        0x30dc, 167,
        0x30ec, 168,
        0x4f5c, 176,
        0x51fa, 182,
        0x5236, 170,
        0x5382, 183,
        0x539f, 172,
        0x5f55, 184,
        0x63d2, 174,
        0x6b4c, 173,
        0x7de8, 177,
        0x811a, 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(195);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      ADVANCE_MAP(
        '/', 7,
        '@', 199,
        'A', 361,
        'C', 302,
        'I', 318,
        'L', 254,
        'M', 390,
        'P', 287,
        'R', 278,
        'V', 338,
        'a', 371,
        'c', 313,
        'i', 323,
        'l', 260,
        'm', 395,
        'p', 294,
        'r', 295,
        'v', 339,
        0x300a, 246,
        0x30a2, 404,
        0x30a4, 401,
        0x30dc, 406,
        0x30ec, 407,
        0x4f5c, 415,
        0x51fa, 421,
        0x5236, 409,
        0x5382, 422,
        0x539f, 410,
        0x5f55, 423,
        0x63d2, 413,
        0x6b4c, 412,
        0x7de8, 416,
        0x811a, 420,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(193);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(252);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AT);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '\n', 200,
        'A', 224,
        'C', 218,
        'I', 220,
        'L', 210,
        'M', 226,
        'P', 214,
        'R', 212,
        'V', 222,
        'a', 225,
        'c', 219,
        'i', 221,
        'l', 211,
        'm', 227,
        'p', 215,
        'r', 216,
        'v', 223,
        0x300a, 246,
        0x30a2, 230,
        0x30a4, 229,
        0x30dc, 231,
        0x30ec, 232,
        0x4f5c, 238,
        0x51fa, 241,
        0x5236, 233,
        0x5382, 242,
        0x539f, 234,
        0x5f55, 243,
        0x63d2, 237,
        0x6b4c, 236,
        0x7de8, 239,
        0x811a, 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 207,
        '@', 198,
        'A', 224,
        'C', 218,
        'I', 220,
        'L', 210,
        'M', 226,
        'P', 214,
        'R', 212,
        'V', 222,
        'a', 225,
        'c', 219,
        'f', 213,
        'i', 221,
        'l', 211,
        'm', 227,
        'p', 215,
        'r', 216,
        'v', 223,
        0x300a, 246,
        0x300b, 247,
        0x30a2, 230,
        0x30a4, 229,
        0x30dc, 231,
        0x30ec, 232,
        0x4f5c, 238,
        0x51fa, 241,
        0x5236, 233,
        0x5382, 242,
        0x539f, 235,
        0x5f55, 243,
        0x63d2, 237,
        0x6b4c, 236,
        0x7de8, 239,
        0x811a, 240,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 207,
        '@', 198,
        'A', 224,
        'C', 218,
        'I', 220,
        'L', 210,
        'M', 226,
        'P', 214,
        'R', 212,
        'V', 222,
        'a', 225,
        'c', 219,
        'f', 213,
        'i', 221,
        'l', 211,
        'm', 227,
        'p', 215,
        'r', 216,
        'v', 223,
        0x30a2, 230,
        0x30a4, 229,
        0x30dc, 231,
        0x30ec, 232,
        0x4f5c, 238,
        0x51fa, 241,
        0x5236, 233,
        0x5382, 242,
        0x539f, 235,
        0x5f55, 243,
        0x63d2, 237,
        0x6b4c, 236,
        0x7de8, 239,
        0x811a, 240,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '@', 198,
        'A', 224,
        'C', 218,
        'I', 220,
        'L', 210,
        'M', 226,
        'P', 214,
        'R', 212,
        'V', 222,
        'a', 225,
        'c', 219,
        'i', 221,
        'l', 211,
        'm', 227,
        'p', 215,
        'r', 216,
        'v', 223,
        0x30a2, 230,
        0x30a4, 229,
        0x30dc, 231,
        0x30ec, 232,
        0x4f5c, 238,
        0x51fa, 241,
        0x5236, 233,
        0x5382, 242,
        0x539f, 234,
        0x5f55, 243,
        0x63d2, 237,
        0x6b4c, 236,
        0x7de8, 239,
        0x811a, 240,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        'A', 224,
        'C', 218,
        'I', 220,
        'L', 210,
        'M', 226,
        'P', 214,
        'R', 212,
        'V', 222,
        'a', 225,
        'c', 219,
        'i', 221,
        'l', 211,
        'm', 227,
        'p', 215,
        'r', 216,
        'v', 223,
        0x300a, 246,
        0x30a2, 230,
        0x30a4, 229,
        0x30dc, 231,
        0x30ec, 232,
        0x4f5c, 238,
        0x51fa, 241,
        0x5236, 233,
        0x5382, 242,
        0x539f, 234,
        0x5f55, 243,
        0x63d2, 237,
        0x6b4c, 236,
        0x7de8, 239,
        0x811a, 240,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 0x300b) ADVANCE(247);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x300a) ADVANCE(246);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30e9) ADVANCE(159);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30ec) ADVANCE(166);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(157);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(161);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(169);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(539);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(539);
      if (lookahead == 0x66f2) ADVANCE(185);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x5531) ADVANCE(511);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x56fe) ADVANCE(531);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(521);
      if (lookahead == 0x7de8) ADVANCE(178);
      if (lookahead == 0x8a5e) ADVANCE(525);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(523);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x672c) ADVANCE(529);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x7248) ADVANCE(175);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x724c) ADVANCE(527);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x97f3) ADVANCE(537);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 199,
        'A', 361,
        'C', 302,
        'I', 318,
        'L', 254,
        'M', 390,
        'P', 287,
        'R', 278,
        'V', 338,
        'a', 371,
        'c', 313,
        'i', 323,
        'l', 260,
        'm', 395,
        'p', 294,
        'r', 295,
        'v', 339,
        0x30a2, 404,
        0x30a4, 401,
        0x30dc, 406,
        0x30ec, 407,
        0x4f5c, 415,
        0x51fa, 421,
        0x5236, 409,
        0x5382, 422,
        0x539f, 410,
        0x5f55, 423,
        0x63d2, 413,
        0x6b4c, 412,
        0x7de8, 416,
        0x811a, 420,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(252);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 361,
        'C', 302,
        'I', 318,
        'L', 254,
        'M', 390,
        'P', 287,
        'R', 278,
        'V', 338,
        'a', 371,
        'c', 313,
        'i', 323,
        'l', 260,
        'm', 395,
        'p', 294,
        'r', 295,
        'v', 339,
        0x30a2, 404,
        0x30a4, 401,
        0x30dc, 406,
        0x30ec, 407,
        0x4f5c, 415,
        0x51fa, 421,
        0x5236, 409,
        0x5382, 422,
        0x539f, 411,
        0x5f55, 423,
        0x63d2, 413,
        0x6b4c, 412,
        0x7de8, 416,
        0x811a, 420,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(253);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'y') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(328);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(315);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(317);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(389);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(286);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(288);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(451);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(319);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(289);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(320);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(290);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(311);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(312);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(269);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(494);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(466);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(387);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(335);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(314);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(340);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(316);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(273);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(281);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(283);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(324);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(264);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(265);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(266);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(267);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(341);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(343);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(333);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(334);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(325);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(468);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(321);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(279);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(280);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(322);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(352);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(353);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(291);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(292);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(300);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(298);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(299);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(301);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(471);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(274);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(329);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(330);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(331);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(332);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(362);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(342);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(255);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(303);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(296);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(326);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(268);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(305);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(327);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(271);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(277);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(261);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(297);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(282);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(284);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(304);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(306);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(485);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(456);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(307);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(308);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(309);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(310);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(270);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(272);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(402);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(397);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(396);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(400);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(534);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(408);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(540);
      if (lookahead == 0x66f2) ADVANCE(425);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(540);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(532);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(536);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(522);
      if (lookahead == 0x7de8) ADVANCE(417);
      if (lookahead == 0x8a5e) ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(516);
      if (lookahead == 0x7de8) ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(530);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(528);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(538);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '\t', 245,
        ' ', 245,
        '&', 245,
        ',', 245,
        '/', 245,
        ':', 245,
        0x3000, 245,
        0x3001, 245,
        0x300a, 245,
        0x300b, 245,
        0x30fb, 245,
        0xff06, 245,
        0xff1a, 245,
        0xff1b, 245,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(436);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 's') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 's') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(256);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(257);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(258);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(259);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(179);
      if (lookahead == 0x66f2) ADVANCE(517);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(418);
      if (lookahead == 0x66f2) ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(426);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 541,
        ' ', 541,
        '&', 542,
        ',', 542,
        '/', 542,
        ':', 542,
        0x3000, 542,
        0x3001, 542,
        0x30fb, 542,
        0xff06, 542,
        0xff1a, 542,
        0xff1b, 542,
      );
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 542,
        ' ', 542,
        '&', 542,
        ',', 542,
        '/', 542,
        ':', 542,
        0x3000, 542,
        0x3001, 542,
        0x30fb, 542,
        0xff06, 542,
        0xff1a, 542,
        0xff1b, 542,
      );
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 543,
        ' ', 543,
        '&', 544,
        ',', 544,
        0x3000, 544,
        0x3001, 544,
        0x30fb, 544,
        0xff06, 544,
        0xff1b, 544,
      );
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 544,
        ' ', 544,
        '&', 544,
        ',', 544,
        0x3000, 544,
        0x3001, 544,
        0x30fb, 544,
        0xff06, 544,
        0xff1b, 544,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 187},
  [2] = {.lex_state = 196},
  [3] = {.lex_state = 187},
  [4] = {.lex_state = 187},
  [5] = {.lex_state = 196},
  [6] = {.lex_state = 192},
  [7] = {.lex_state = 188},
  [8] = {.lex_state = 192},
  [9] = {.lex_state = 194},
  [10] = {.lex_state = 192},
  [11] = {.lex_state = 188},
  [12] = {.lex_state = 192},
  [13] = {.lex_state = 187},
  [14] = {.lex_state = 189},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 192},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 188},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 189},
  [21] = {.lex_state = 196},
  [22] = {.lex_state = 196},
  [23] = {.lex_state = 192},
  [24] = {.lex_state = 188},
  [25] = {.lex_state = 194},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 188},
  [28] = {.lex_state = 187},
  [29] = {.lex_state = 189},
  [30] = {.lex_state = 194},
  [31] = {.lex_state = 192},
  [32] = {.lex_state = 189},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 188},
  [36] = {.lex_state = 192},
  [37] = {.lex_state = 194},
  [38] = {.lex_state = 192},
  [39] = {.lex_state = 190},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 186},
  [43] = {.lex_state = 192},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 187},
  [47] = {.lex_state = 190},
  [48] = {.lex_state = 187},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 187},
  [51] = {.lex_state = 186},
  [52] = {.lex_state = 192},
  [53] = {.lex_state = 186},
  [54] = {.lex_state = 190},
  [55] = {.lex_state = 187},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 187},
  [58] = {.lex_state = 187},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 192},
  [61] = {.lex_state = 187},
  [62] = {.lex_state = 187},
  [63] = {.lex_state = 191},
  [64] = {.lex_state = 191},
  [65] = {.lex_state = 191},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 155},
  [71] = {.lex_state = 155},
  [72] = {.lex_state = 155},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 192},
  [76] = {.lex_state = 191},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 155},
  [79] = {.lex_state = 155},
  [80] = {.lex_state = 155},
  [81] = {.lex_state = 191},
  [82] = {.lex_state = 155},
  [83] = {.lex_state = 194},
  [84] = {.lex_state = 191},
  [85] = {.lex_state = 191},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 191},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 191},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 191},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 192},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 192},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(102),
    [sym_song] = STATE(81),
    [sym_credit_block] = STATE(63),
    [sym_credit_field] = STATE(13),
    [sym__quotable_song_title_maybefeat_maybecomment] = STATE(8),
    [sym__quotable_song_title_maybefeat] = STATE(41),
    [sym__song_title_maybefeat] = STATE(43),
    [sym_song_title] = STATE(16),
    [sym_role] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(64),
    [aux_sym_credit_block_repeat1] = STATE(13),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(11),
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
    [sym__quotable_creator_name] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(11),
    [anon_sym_u300a] = ACTIONS(13),
    [sym_creator_name] = ACTIONS(15),
    [anon_sym_Music] = ACTIONS(11),
    [anon_sym_music] = ACTIONS(11),
    [anon_sym_Composition] = ACTIONS(11),
    [anon_sym_composition] = ACTIONS(11),
    [anon_sym_Composer] = ACTIONS(11),
    [anon_sym_composer] = ACTIONS(11),
    [anon_sym_Compose] = ACTIONS(11),
    [anon_sym_compose] = ACTIONS(11),
    [anon_sym_Lyrics] = ACTIONS(11),
    [anon_sym_lyrics] = ACTIONS(11),
    [anon_sym_Lyricist] = ACTIONS(11),
    [anon_sym_lyricist] = ACTIONS(11),
    [anon_sym_Lyric] = ACTIONS(11),
    [anon_sym_lyric] = ACTIONS(11),
    [anon_sym_Arrangement] = ACTIONS(11),
    [anon_sym_arrangement] = ACTIONS(11),
    [anon_sym_Arranger] = ACTIONS(11),
    [anon_sym_arranger] = ACTIONS(11),
    [anon_sym_Arrange] = ACTIONS(11),
    [anon_sym_arrange] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Vo] = ACTIONS(11),
    [anon_sym_vo] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illust] = ACTIONS(11),
    [anon_sym_illust] = ACTIONS(11),
    [anon_sym_Label] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_Circle] = ACTIONS(11),
    [anon_sym_circle] = ACTIONS(11),
    [anon_sym_Producer] = ACTIONS(11),
    [anon_sym_producer] = ACTIONS(11),
    [anon_sym_Recording] = ACTIONS(11),
    [anon_sym_recording] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
  },
  [3] = {
    [sym_credit_field] = STATE(4),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(4),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(19),
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
  [4] = {
    [sym_credit_field] = STATE(4),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(4),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(23),
    [anon_sym_u300a] = ACTIONS(23),
    [anon_sym_Music] = ACTIONS(25),
    [anon_sym_music] = ACTIONS(25),
    [anon_sym_Composition] = ACTIONS(25),
    [anon_sym_composition] = ACTIONS(25),
    [anon_sym_Composer] = ACTIONS(25),
    [anon_sym_composer] = ACTIONS(25),
    [anon_sym_Compose] = ACTIONS(25),
    [anon_sym_compose] = ACTIONS(25),
    [anon_sym_Lyrics] = ACTIONS(25),
    [anon_sym_lyrics] = ACTIONS(25),
    [anon_sym_Lyricist] = ACTIONS(25),
    [anon_sym_lyricist] = ACTIONS(25),
    [anon_sym_Lyric] = ACTIONS(25),
    [anon_sym_lyric] = ACTIONS(25),
    [anon_sym_Arrangement] = ACTIONS(25),
    [anon_sym_arrangement] = ACTIONS(25),
    [anon_sym_Arranger] = ACTIONS(25),
    [anon_sym_arranger] = ACTIONS(25),
    [anon_sym_Arrange] = ACTIONS(25),
    [anon_sym_arrange] = ACTIONS(25),
    [anon_sym_Vocal] = ACTIONS(25),
    [anon_sym_vocal] = ACTIONS(25),
    [anon_sym_Vo] = ACTIONS(25),
    [anon_sym_vo] = ACTIONS(25),
    [anon_sym_Performer] = ACTIONS(25),
    [anon_sym_performer] = ACTIONS(25),
    [anon_sym_Illustration] = ACTIONS(25),
    [anon_sym_illustration] = ACTIONS(25),
    [anon_sym_Illust] = ACTIONS(25),
    [anon_sym_illust] = ACTIONS(25),
    [anon_sym_Label] = ACTIONS(25),
    [anon_sym_label] = ACTIONS(25),
    [anon_sym_Circle] = ACTIONS(25),
    [anon_sym_circle] = ACTIONS(25),
    [anon_sym_Producer] = ACTIONS(25),
    [anon_sym_producer] = ACTIONS(25),
    [anon_sym_Recording] = ACTIONS(25),
    [anon_sym_recording] = ACTIONS(25),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(25),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(25),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(25),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu66f2] = ACTIONS(25),
    [anon_sym_u7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5e] = ACTIONS(25),
    [anon_sym_u5382u724c] = ACTIONS(25),
    [anon_sym_u811au672c] = ACTIONS(25),
    [anon_sym_u63d2u56fe] = ACTIONS(25),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(25),
    [anon_sym_u51fau7248u65b9] = ACTIONS(25),
    [anon_sym_u5f55u97f3] = ACTIONS(25),
    [anon_sym_u539fu4f5c] = ACTIONS(25),
  },
  [5] = {
    [sym__quotable_creator_name] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(30),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(30),
    [anon_sym_u300a] = ACTIONS(13),
    [sym_creator_name] = ACTIONS(15),
    [anon_sym_Music] = ACTIONS(30),
    [anon_sym_music] = ACTIONS(30),
    [anon_sym_Composition] = ACTIONS(30),
    [anon_sym_composition] = ACTIONS(30),
    [anon_sym_Composer] = ACTIONS(30),
    [anon_sym_composer] = ACTIONS(30),
    [anon_sym_Compose] = ACTIONS(30),
    [anon_sym_compose] = ACTIONS(30),
    [anon_sym_Lyrics] = ACTIONS(30),
    [anon_sym_lyrics] = ACTIONS(30),
    [anon_sym_Lyricist] = ACTIONS(30),
    [anon_sym_lyricist] = ACTIONS(30),
    [anon_sym_Lyric] = ACTIONS(30),
    [anon_sym_lyric] = ACTIONS(30),
    [anon_sym_Arrangement] = ACTIONS(30),
    [anon_sym_arrangement] = ACTIONS(30),
    [anon_sym_Arranger] = ACTIONS(30),
    [anon_sym_arranger] = ACTIONS(30),
    [anon_sym_Arrange] = ACTIONS(30),
    [anon_sym_arrange] = ACTIONS(30),
    [anon_sym_Vocal] = ACTIONS(30),
    [anon_sym_vocal] = ACTIONS(30),
    [anon_sym_Vo] = ACTIONS(30),
    [anon_sym_vo] = ACTIONS(30),
    [anon_sym_Performer] = ACTIONS(30),
    [anon_sym_performer] = ACTIONS(30),
    [anon_sym_Illustration] = ACTIONS(30),
    [anon_sym_illustration] = ACTIONS(30),
    [anon_sym_Illust] = ACTIONS(30),
    [anon_sym_illust] = ACTIONS(30),
    [anon_sym_Label] = ACTIONS(30),
    [anon_sym_label] = ACTIONS(30),
    [anon_sym_Circle] = ACTIONS(30),
    [anon_sym_circle] = ACTIONS(30),
    [anon_sym_Producer] = ACTIONS(30),
    [anon_sym_producer] = ACTIONS(30),
    [anon_sym_Recording] = ACTIONS(30),
    [anon_sym_recording] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u6b4cu5531] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(30),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu66f2] = ACTIONS(30),
    [anon_sym_u7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5e] = ACTIONS(30),
    [anon_sym_u5382u724c] = ACTIONS(30),
    [anon_sym_u811au672c] = ACTIONS(30),
    [anon_sym_u63d2u56fe] = ACTIONS(30),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(30),
    [anon_sym_u51fau7248u65b9] = ACTIONS(30),
    [anon_sym_u5f55u97f3] = ACTIONS(30),
    [anon_sym_u539fu4f5c] = ACTIONS(30),
  },
  [6] = {
    [sym_credit_block] = STATE(84),
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
  },
  [7] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(42),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(40),
    [aux_sym_feat_field_token1] = ACTIONS(40),
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
  [8] = {
    [sym_credit_block] = STATE(84),
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
  },
  [9] = {
    [aux_sym_feat_field_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(49),
    [anon_sym_u300b] = ACTIONS(49),
    [anon_sym_Music] = ACTIONS(49),
    [anon_sym_music] = ACTIONS(49),
    [anon_sym_Composition] = ACTIONS(49),
    [anon_sym_composition] = ACTIONS(49),
    [anon_sym_Composer] = ACTIONS(49),
    [anon_sym_composer] = ACTIONS(49),
    [anon_sym_Compose] = ACTIONS(49),
    [anon_sym_compose] = ACTIONS(49),
    [anon_sym_Lyrics] = ACTIONS(49),
    [anon_sym_lyrics] = ACTIONS(49),
    [anon_sym_Lyricist] = ACTIONS(49),
    [anon_sym_lyricist] = ACTIONS(49),
    [anon_sym_Lyric] = ACTIONS(49),
    [anon_sym_lyric] = ACTIONS(49),
    [anon_sym_Arrangement] = ACTIONS(49),
    [anon_sym_arrangement] = ACTIONS(49),
    [anon_sym_Arranger] = ACTIONS(49),
    [anon_sym_arranger] = ACTIONS(49),
    [anon_sym_Arrange] = ACTIONS(49),
    [anon_sym_arrange] = ACTIONS(49),
    [anon_sym_Vocal] = ACTIONS(49),
    [anon_sym_vocal] = ACTIONS(49),
    [anon_sym_Vo] = ACTIONS(49),
    [anon_sym_vo] = ACTIONS(49),
    [anon_sym_Performer] = ACTIONS(49),
    [anon_sym_performer] = ACTIONS(49),
    [anon_sym_Illustration] = ACTIONS(49),
    [anon_sym_illustration] = ACTIONS(49),
    [anon_sym_Illust] = ACTIONS(49),
    [anon_sym_illust] = ACTIONS(49),
    [anon_sym_Label] = ACTIONS(49),
    [anon_sym_label] = ACTIONS(49),
    [anon_sym_Circle] = ACTIONS(49),
    [anon_sym_circle] = ACTIONS(49),
    [anon_sym_Producer] = ACTIONS(49),
    [anon_sym_producer] = ACTIONS(49),
    [anon_sym_Recording] = ACTIONS(49),
    [anon_sym_recording] = ACTIONS(49),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(49),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(49),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(49),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu66f2] = ACTIONS(49),
    [anon_sym_u7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5e] = ACTIONS(49),
    [anon_sym_u5382u724c] = ACTIONS(49),
    [anon_sym_u811au672c] = ACTIONS(49),
    [anon_sym_u63d2u56fe] = ACTIONS(49),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(49),
    [anon_sym_u51fau7248u65b9] = ACTIONS(49),
    [anon_sym_u5f55u97f3] = ACTIONS(49),
    [anon_sym_u539fu4f5c] = ACTIONS(49),
    [sym__ssep] = ACTIONS(51),
  },
  [10] = {
    [sym_credit_block] = STATE(84),
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
  },
  [11] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_SLASH_SLASH] = ACTIONS(58),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(3),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(58),
    [aux_sym_feat_field_token1] = ACTIONS(58),
    [anon_sym_Music] = ACTIONS(58),
    [anon_sym_music] = ACTIONS(58),
    [anon_sym_Composition] = ACTIONS(58),
    [anon_sym_composition] = ACTIONS(58),
    [anon_sym_Composer] = ACTIONS(58),
    [anon_sym_composer] = ACTIONS(58),
    [anon_sym_Compose] = ACTIONS(58),
    [anon_sym_compose] = ACTIONS(58),
    [anon_sym_Lyrics] = ACTIONS(58),
    [anon_sym_lyrics] = ACTIONS(58),
    [anon_sym_Lyricist] = ACTIONS(58),
    [anon_sym_lyricist] = ACTIONS(58),
    [anon_sym_Lyric] = ACTIONS(58),
    [anon_sym_lyric] = ACTIONS(58),
    [anon_sym_Arrangement] = ACTIONS(58),
    [anon_sym_arrangement] = ACTIONS(58),
    [anon_sym_Arranger] = ACTIONS(58),
    [anon_sym_arranger] = ACTIONS(58),
    [anon_sym_Arrange] = ACTIONS(58),
    [anon_sym_arrange] = ACTIONS(58),
    [anon_sym_Vocal] = ACTIONS(58),
    [anon_sym_vocal] = ACTIONS(58),
    [anon_sym_Vo] = ACTIONS(58),
    [anon_sym_vo] = ACTIONS(58),
    [anon_sym_Performer] = ACTIONS(58),
    [anon_sym_performer] = ACTIONS(58),
    [anon_sym_Illustration] = ACTIONS(58),
    [anon_sym_illustration] = ACTIONS(58),
    [anon_sym_Illust] = ACTIONS(58),
    [anon_sym_illust] = ACTIONS(58),
    [anon_sym_Label] = ACTIONS(58),
    [anon_sym_label] = ACTIONS(58),
    [anon_sym_Circle] = ACTIONS(58),
    [anon_sym_circle] = ACTIONS(58),
    [anon_sym_Producer] = ACTIONS(58),
    [anon_sym_producer] = ACTIONS(58),
    [anon_sym_Recording] = ACTIONS(58),
    [anon_sym_recording] = ACTIONS(58),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(58),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(58),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(58),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(58),
    [anon_sym_u6b4cu5531] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(58),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu66f2] = ACTIONS(58),
    [anon_sym_u7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5e] = ACTIONS(58),
    [anon_sym_u5382u724c] = ACTIONS(58),
    [anon_sym_u811au672c] = ACTIONS(58),
    [anon_sym_u63d2u56fe] = ACTIONS(58),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(58),
    [anon_sym_u51fau7248u65b9] = ACTIONS(58),
    [anon_sym_u5f55u97f3] = ACTIONS(58),
    [anon_sym_u539fu4f5c] = ACTIONS(58),
  },
  [12] = {
    [sym_credit_block] = STATE(84),
    [sym_credit_field] = STATE(3),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(3),
    [aux_sym_credit_field_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
  },
  [13] = {
    [sym_credit_field] = STATE(28),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(28),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(19),
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
  [14] = {
    [sym__quotable_creator_name] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_LF] = ACTIONS(62),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [sym_creator_name] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(64),
    [anon_sym_compose] = ACTIONS(64),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(64),
    [anon_sym_lyric] = ACTIONS(64),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(64),
    [anon_sym_arrange] = ACTIONS(64),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(64),
    [anon_sym_vo] = ACTIONS(64),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(64),
    [anon_sym_illust] = ACTIONS(64),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(70),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(70),
    [anon_sym_u300b] = ACTIONS(70),
    [anon_sym_Music] = ACTIONS(70),
    [anon_sym_music] = ACTIONS(70),
    [anon_sym_Composition] = ACTIONS(70),
    [anon_sym_composition] = ACTIONS(70),
    [anon_sym_Composer] = ACTIONS(70),
    [anon_sym_composer] = ACTIONS(70),
    [anon_sym_Compose] = ACTIONS(70),
    [anon_sym_compose] = ACTIONS(70),
    [anon_sym_Lyrics] = ACTIONS(70),
    [anon_sym_lyrics] = ACTIONS(70),
    [anon_sym_Lyricist] = ACTIONS(70),
    [anon_sym_lyricist] = ACTIONS(70),
    [anon_sym_Lyric] = ACTIONS(70),
    [anon_sym_lyric] = ACTIONS(70),
    [anon_sym_Arrangement] = ACTIONS(70),
    [anon_sym_arrangement] = ACTIONS(70),
    [anon_sym_Arranger] = ACTIONS(70),
    [anon_sym_arranger] = ACTIONS(70),
    [anon_sym_Arrange] = ACTIONS(70),
    [anon_sym_arrange] = ACTIONS(70),
    [anon_sym_Vocal] = ACTIONS(70),
    [anon_sym_vocal] = ACTIONS(70),
    [anon_sym_Vo] = ACTIONS(70),
    [anon_sym_vo] = ACTIONS(70),
    [anon_sym_Performer] = ACTIONS(70),
    [anon_sym_performer] = ACTIONS(70),
    [anon_sym_Illustration] = ACTIONS(70),
    [anon_sym_illustration] = ACTIONS(70),
    [anon_sym_Illust] = ACTIONS(70),
    [anon_sym_illust] = ACTIONS(70),
    [anon_sym_Label] = ACTIONS(70),
    [anon_sym_label] = ACTIONS(70),
    [anon_sym_Circle] = ACTIONS(70),
    [anon_sym_circle] = ACTIONS(70),
    [anon_sym_Producer] = ACTIONS(70),
    [anon_sym_producer] = ACTIONS(70),
    [anon_sym_Recording] = ACTIONS(70),
    [anon_sym_recording] = ACTIONS(70),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(70),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(70),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(70),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(70),
    [anon_sym_u6b4cu5531] = ACTIONS(70),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(70),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(70),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(70),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(70),
    [anon_sym_u4f5cu66f2] = ACTIONS(70),
    [anon_sym_u7de8u66f2] = ACTIONS(70),
    [anon_sym_u4f5cu8a5e] = ACTIONS(70),
    [anon_sym_u5382u724c] = ACTIONS(70),
    [anon_sym_u811au672c] = ACTIONS(70),
    [anon_sym_u63d2u56fe] = ACTIONS(70),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(70),
    [anon_sym_u51fau7248u65b9] = ACTIONS(70),
    [anon_sym_u5f55u97f3] = ACTIONS(70),
    [anon_sym_u539fu4f5c] = ACTIONS(70),
    [sym__ssep] = ACTIONS(68),
  },
  [16] = {
    [sym_feat_field] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(72),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(72),
    [aux_sym_feat_field_token1] = ACTIONS(74),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(76),
    [anon_sym_compose] = ACTIONS(76),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(76),
    [anon_sym_lyric] = ACTIONS(76),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(76),
    [anon_sym_arrange] = ACTIONS(76),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(76),
    [anon_sym_vo] = ACTIONS(76),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(76),
    [anon_sym_illust] = ACTIONS(76),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(80),
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
  [18] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(18),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(82),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(40),
    [aux_sym_feat_field_token1] = ACTIONS(40),
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
  [19] = {
    [aux_sym_feat_field_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(87),
    [anon_sym_Music] = ACTIONS(87),
    [anon_sym_music] = ACTIONS(87),
    [anon_sym_Composition] = ACTIONS(87),
    [anon_sym_composition] = ACTIONS(87),
    [anon_sym_Composer] = ACTIONS(87),
    [anon_sym_composer] = ACTIONS(87),
    [anon_sym_Compose] = ACTIONS(87),
    [anon_sym_compose] = ACTIONS(87),
    [anon_sym_Lyrics] = ACTIONS(87),
    [anon_sym_lyrics] = ACTIONS(87),
    [anon_sym_Lyricist] = ACTIONS(87),
    [anon_sym_lyricist] = ACTIONS(87),
    [anon_sym_Lyric] = ACTIONS(87),
    [anon_sym_lyric] = ACTIONS(87),
    [anon_sym_Arrangement] = ACTIONS(87),
    [anon_sym_arrangement] = ACTIONS(87),
    [anon_sym_Arranger] = ACTIONS(87),
    [anon_sym_arranger] = ACTIONS(87),
    [anon_sym_Arrange] = ACTIONS(87),
    [anon_sym_arrange] = ACTIONS(87),
    [anon_sym_Vocal] = ACTIONS(87),
    [anon_sym_vocal] = ACTIONS(87),
    [anon_sym_Vo] = ACTIONS(87),
    [anon_sym_vo] = ACTIONS(87),
    [anon_sym_Performer] = ACTIONS(87),
    [anon_sym_performer] = ACTIONS(87),
    [anon_sym_Illustration] = ACTIONS(87),
    [anon_sym_illustration] = ACTIONS(87),
    [anon_sym_Illust] = ACTIONS(87),
    [anon_sym_illust] = ACTIONS(87),
    [anon_sym_Label] = ACTIONS(87),
    [anon_sym_label] = ACTIONS(87),
    [anon_sym_Circle] = ACTIONS(87),
    [anon_sym_circle] = ACTIONS(87),
    [anon_sym_Producer] = ACTIONS(87),
    [anon_sym_producer] = ACTIONS(87),
    [anon_sym_Recording] = ACTIONS(87),
    [anon_sym_recording] = ACTIONS(87),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(87),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(87),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(87),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(87),
    [anon_sym_u6b4cu5531] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu66f2] = ACTIONS(87),
    [anon_sym_u7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5e] = ACTIONS(87),
    [anon_sym_u5382u724c] = ACTIONS(87),
    [anon_sym_u811au672c] = ACTIONS(87),
    [anon_sym_u63d2u56fe] = ACTIONS(87),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(87),
    [anon_sym_u51fau7248u65b9] = ACTIONS(87),
    [anon_sym_u5f55u97f3] = ACTIONS(87),
    [anon_sym_u539fu4f5c] = ACTIONS(87),
    [sym__ssep] = ACTIONS(89),
  },
  [20] = {
    [sym__quotable_creator_name] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(93),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [sym_creator_name] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(95),
    [anon_sym_music] = ACTIONS(95),
    [anon_sym_Composition] = ACTIONS(95),
    [anon_sym_composition] = ACTIONS(95),
    [anon_sym_Composer] = ACTIONS(95),
    [anon_sym_composer] = ACTIONS(95),
    [anon_sym_Compose] = ACTIONS(95),
    [anon_sym_compose] = ACTIONS(95),
    [anon_sym_Lyrics] = ACTIONS(95),
    [anon_sym_lyrics] = ACTIONS(95),
    [anon_sym_Lyricist] = ACTIONS(95),
    [anon_sym_lyricist] = ACTIONS(95),
    [anon_sym_Lyric] = ACTIONS(95),
    [anon_sym_lyric] = ACTIONS(95),
    [anon_sym_Arrangement] = ACTIONS(95),
    [anon_sym_arrangement] = ACTIONS(95),
    [anon_sym_Arranger] = ACTIONS(95),
    [anon_sym_arranger] = ACTIONS(95),
    [anon_sym_Arrange] = ACTIONS(95),
    [anon_sym_arrange] = ACTIONS(95),
    [anon_sym_Vocal] = ACTIONS(95),
    [anon_sym_vocal] = ACTIONS(95),
    [anon_sym_Vo] = ACTIONS(95),
    [anon_sym_vo] = ACTIONS(95),
    [anon_sym_Performer] = ACTIONS(95),
    [anon_sym_performer] = ACTIONS(95),
    [anon_sym_Illustration] = ACTIONS(95),
    [anon_sym_illustration] = ACTIONS(95),
    [anon_sym_Illust] = ACTIONS(95),
    [anon_sym_illust] = ACTIONS(95),
    [anon_sym_Label] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_Circle] = ACTIONS(95),
    [anon_sym_circle] = ACTIONS(95),
    [anon_sym_Producer] = ACTIONS(95),
    [anon_sym_producer] = ACTIONS(95),
    [anon_sym_Recording] = ACTIONS(95),
    [anon_sym_recording] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
  },
  [21] = {
    [sym__quotable_creator_name] = STATE(15),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(11),
    [anon_sym_u300a] = ACTIONS(13),
    [sym_creator_name] = ACTIONS(15),
    [anon_sym_Music] = ACTIONS(11),
    [anon_sym_music] = ACTIONS(11),
    [anon_sym_Composition] = ACTIONS(11),
    [anon_sym_composition] = ACTIONS(11),
    [anon_sym_Composer] = ACTIONS(11),
    [anon_sym_composer] = ACTIONS(11),
    [anon_sym_Compose] = ACTIONS(11),
    [anon_sym_compose] = ACTIONS(11),
    [anon_sym_Lyrics] = ACTIONS(11),
    [anon_sym_lyrics] = ACTIONS(11),
    [anon_sym_Lyricist] = ACTIONS(11),
    [anon_sym_lyricist] = ACTIONS(11),
    [anon_sym_Lyric] = ACTIONS(11),
    [anon_sym_lyric] = ACTIONS(11),
    [anon_sym_Arrangement] = ACTIONS(11),
    [anon_sym_arrangement] = ACTIONS(11),
    [anon_sym_Arranger] = ACTIONS(11),
    [anon_sym_arranger] = ACTIONS(11),
    [anon_sym_Arrange] = ACTIONS(11),
    [anon_sym_arrange] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Vo] = ACTIONS(11),
    [anon_sym_vo] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illust] = ACTIONS(11),
    [anon_sym_illust] = ACTIONS(11),
    [anon_sym_Label] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_Circle] = ACTIONS(11),
    [anon_sym_circle] = ACTIONS(11),
    [anon_sym_Producer] = ACTIONS(11),
    [anon_sym_producer] = ACTIONS(11),
    [anon_sym_Recording] = ACTIONS(11),
    [anon_sym_recording] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
  },
  [22] = {
    [sym__quotable_creator_name] = STATE(15),
    [anon_sym_AT] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(30),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(30),
    [anon_sym_u300a] = ACTIONS(13),
    [sym_creator_name] = ACTIONS(15),
    [anon_sym_Music] = ACTIONS(30),
    [anon_sym_music] = ACTIONS(30),
    [anon_sym_Composition] = ACTIONS(30),
    [anon_sym_composition] = ACTIONS(30),
    [anon_sym_Composer] = ACTIONS(30),
    [anon_sym_composer] = ACTIONS(30),
    [anon_sym_Compose] = ACTIONS(30),
    [anon_sym_compose] = ACTIONS(30),
    [anon_sym_Lyrics] = ACTIONS(30),
    [anon_sym_lyrics] = ACTIONS(30),
    [anon_sym_Lyricist] = ACTIONS(30),
    [anon_sym_lyricist] = ACTIONS(30),
    [anon_sym_Lyric] = ACTIONS(30),
    [anon_sym_lyric] = ACTIONS(30),
    [anon_sym_Arrangement] = ACTIONS(30),
    [anon_sym_arrangement] = ACTIONS(30),
    [anon_sym_Arranger] = ACTIONS(30),
    [anon_sym_arranger] = ACTIONS(30),
    [anon_sym_Arrange] = ACTIONS(30),
    [anon_sym_arrange] = ACTIONS(30),
    [anon_sym_Vocal] = ACTIONS(30),
    [anon_sym_vocal] = ACTIONS(30),
    [anon_sym_Vo] = ACTIONS(30),
    [anon_sym_vo] = ACTIONS(30),
    [anon_sym_Performer] = ACTIONS(30),
    [anon_sym_performer] = ACTIONS(30),
    [anon_sym_Illustration] = ACTIONS(30),
    [anon_sym_illustration] = ACTIONS(30),
    [anon_sym_Illust] = ACTIONS(30),
    [anon_sym_illust] = ACTIONS(30),
    [anon_sym_Label] = ACTIONS(30),
    [anon_sym_label] = ACTIONS(30),
    [anon_sym_Circle] = ACTIONS(30),
    [anon_sym_circle] = ACTIONS(30),
    [anon_sym_Producer] = ACTIONS(30),
    [anon_sym_producer] = ACTIONS(30),
    [anon_sym_Recording] = ACTIONS(30),
    [anon_sym_recording] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u6b4cu5531] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(30),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu66f2] = ACTIONS(30),
    [anon_sym_u7de8u66f2] = ACTIONS(30),
    [anon_sym_u4f5cu8a5e] = ACTIONS(30),
    [anon_sym_u5382u724c] = ACTIONS(30),
    [anon_sym_u811au672c] = ACTIONS(30),
    [anon_sym_u63d2u56fe] = ACTIONS(30),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(30),
    [anon_sym_u51fau7248u65b9] = ACTIONS(30),
    [anon_sym_u5f55u97f3] = ACTIONS(30),
    [anon_sym_u539fu4f5c] = ACTIONS(30),
  },
  [23] = {
    [sym_credit_block] = STATE(95),
    [sym_credit_field] = STATE(13),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(13),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_Music] = ACTIONS(36),
    [anon_sym_music] = ACTIONS(36),
    [anon_sym_Composition] = ACTIONS(36),
    [anon_sym_composition] = ACTIONS(36),
    [anon_sym_Composer] = ACTIONS(36),
    [anon_sym_composer] = ACTIONS(36),
    [anon_sym_Compose] = ACTIONS(7),
    [anon_sym_compose] = ACTIONS(7),
    [anon_sym_Lyrics] = ACTIONS(36),
    [anon_sym_lyrics] = ACTIONS(36),
    [anon_sym_Lyricist] = ACTIONS(36),
    [anon_sym_lyricist] = ACTIONS(36),
    [anon_sym_Lyric] = ACTIONS(7),
    [anon_sym_lyric] = ACTIONS(7),
    [anon_sym_Arrangement] = ACTIONS(36),
    [anon_sym_arrangement] = ACTIONS(36),
    [anon_sym_Arranger] = ACTIONS(36),
    [anon_sym_arranger] = ACTIONS(36),
    [anon_sym_Arrange] = ACTIONS(7),
    [anon_sym_arrange] = ACTIONS(7),
    [anon_sym_Vocal] = ACTIONS(36),
    [anon_sym_vocal] = ACTIONS(36),
    [anon_sym_Vo] = ACTIONS(7),
    [anon_sym_vo] = ACTIONS(7),
    [anon_sym_Performer] = ACTIONS(36),
    [anon_sym_performer] = ACTIONS(36),
    [anon_sym_Illustration] = ACTIONS(36),
    [anon_sym_illustration] = ACTIONS(36),
    [anon_sym_Illust] = ACTIONS(7),
    [anon_sym_illust] = ACTIONS(7),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(7),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
  },
  [24] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(18),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_SLASH_SLASH] = ACTIONS(58),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(99),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(58),
    [aux_sym_feat_field_token1] = ACTIONS(58),
    [anon_sym_Music] = ACTIONS(58),
    [anon_sym_music] = ACTIONS(58),
    [anon_sym_Composition] = ACTIONS(58),
    [anon_sym_composition] = ACTIONS(58),
    [anon_sym_Composer] = ACTIONS(58),
    [anon_sym_composer] = ACTIONS(58),
    [anon_sym_Compose] = ACTIONS(58),
    [anon_sym_compose] = ACTIONS(58),
    [anon_sym_Lyrics] = ACTIONS(58),
    [anon_sym_lyrics] = ACTIONS(58),
    [anon_sym_Lyricist] = ACTIONS(58),
    [anon_sym_lyricist] = ACTIONS(58),
    [anon_sym_Lyric] = ACTIONS(58),
    [anon_sym_lyric] = ACTIONS(58),
    [anon_sym_Arrangement] = ACTIONS(58),
    [anon_sym_arrangement] = ACTIONS(58),
    [anon_sym_Arranger] = ACTIONS(58),
    [anon_sym_arranger] = ACTIONS(58),
    [anon_sym_Arrange] = ACTIONS(58),
    [anon_sym_arrange] = ACTIONS(58),
    [anon_sym_Vocal] = ACTIONS(58),
    [anon_sym_vocal] = ACTIONS(58),
    [anon_sym_Vo] = ACTIONS(58),
    [anon_sym_vo] = ACTIONS(58),
    [anon_sym_Performer] = ACTIONS(58),
    [anon_sym_performer] = ACTIONS(58),
    [anon_sym_Illustration] = ACTIONS(58),
    [anon_sym_illustration] = ACTIONS(58),
    [anon_sym_Illust] = ACTIONS(58),
    [anon_sym_illust] = ACTIONS(58),
    [anon_sym_Label] = ACTIONS(58),
    [anon_sym_label] = ACTIONS(58),
    [anon_sym_Circle] = ACTIONS(58),
    [anon_sym_circle] = ACTIONS(58),
    [anon_sym_Producer] = ACTIONS(58),
    [anon_sym_producer] = ACTIONS(58),
    [anon_sym_Recording] = ACTIONS(58),
    [anon_sym_recording] = ACTIONS(58),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(58),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(58),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(58),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(58),
    [anon_sym_u6b4cu5531] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(58),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu66f2] = ACTIONS(58),
    [anon_sym_u7de8u66f2] = ACTIONS(58),
    [anon_sym_u4f5cu8a5e] = ACTIONS(58),
    [anon_sym_u5382u724c] = ACTIONS(58),
    [anon_sym_u811au672c] = ACTIONS(58),
    [anon_sym_u63d2u56fe] = ACTIONS(58),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(58),
    [anon_sym_u51fau7248u65b9] = ACTIONS(58),
    [anon_sym_u5f55u97f3] = ACTIONS(58),
    [anon_sym_u539fu4f5c] = ACTIONS(58),
  },
  [25] = {
    [aux_sym_feat_field_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_SLASH_SLASH] = ACTIONS(103),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(103),
    [anon_sym_Music] = ACTIONS(103),
    [anon_sym_music] = ACTIONS(103),
    [anon_sym_Composition] = ACTIONS(103),
    [anon_sym_composition] = ACTIONS(103),
    [anon_sym_Composer] = ACTIONS(103),
    [anon_sym_composer] = ACTIONS(103),
    [anon_sym_Compose] = ACTIONS(103),
    [anon_sym_compose] = ACTIONS(103),
    [anon_sym_Lyrics] = ACTIONS(103),
    [anon_sym_lyrics] = ACTIONS(103),
    [anon_sym_Lyricist] = ACTIONS(103),
    [anon_sym_lyricist] = ACTIONS(103),
    [anon_sym_Lyric] = ACTIONS(103),
    [anon_sym_lyric] = ACTIONS(103),
    [anon_sym_Arrangement] = ACTIONS(103),
    [anon_sym_arrangement] = ACTIONS(103),
    [anon_sym_Arranger] = ACTIONS(103),
    [anon_sym_arranger] = ACTIONS(103),
    [anon_sym_Arrange] = ACTIONS(103),
    [anon_sym_arrange] = ACTIONS(103),
    [anon_sym_Vocal] = ACTIONS(103),
    [anon_sym_vocal] = ACTIONS(103),
    [anon_sym_Vo] = ACTIONS(103),
    [anon_sym_vo] = ACTIONS(103),
    [anon_sym_Performer] = ACTIONS(103),
    [anon_sym_performer] = ACTIONS(103),
    [anon_sym_Illustration] = ACTIONS(103),
    [anon_sym_illustration] = ACTIONS(103),
    [anon_sym_Illust] = ACTIONS(103),
    [anon_sym_illust] = ACTIONS(103),
    [anon_sym_Label] = ACTIONS(103),
    [anon_sym_label] = ACTIONS(103),
    [anon_sym_Circle] = ACTIONS(103),
    [anon_sym_circle] = ACTIONS(103),
    [anon_sym_Producer] = ACTIONS(103),
    [anon_sym_producer] = ACTIONS(103),
    [anon_sym_Recording] = ACTIONS(103),
    [anon_sym_recording] = ACTIONS(103),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(103),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(103),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(103),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(103),
    [anon_sym_u6b4cu5531] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(103),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu66f2] = ACTIONS(103),
    [anon_sym_u7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5e] = ACTIONS(103),
    [anon_sym_u5382u724c] = ACTIONS(103),
    [anon_sym_u811au672c] = ACTIONS(103),
    [anon_sym_u63d2u56fe] = ACTIONS(103),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(103),
    [anon_sym_u51fau7248u65b9] = ACTIONS(103),
    [anon_sym_u5f55u97f3] = ACTIONS(103),
    [anon_sym_u539fu4f5c] = ACTIONS(103),
    [sym__ssep] = ACTIONS(105),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_SLASH_SLASH] = ACTIONS(109),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(109),
    [anon_sym_u300b] = ACTIONS(109),
    [anon_sym_Music] = ACTIONS(109),
    [anon_sym_music] = ACTIONS(109),
    [anon_sym_Composition] = ACTIONS(109),
    [anon_sym_composition] = ACTIONS(109),
    [anon_sym_Composer] = ACTIONS(109),
    [anon_sym_composer] = ACTIONS(109),
    [anon_sym_Compose] = ACTIONS(109),
    [anon_sym_compose] = ACTIONS(109),
    [anon_sym_Lyrics] = ACTIONS(109),
    [anon_sym_lyrics] = ACTIONS(109),
    [anon_sym_Lyricist] = ACTIONS(109),
    [anon_sym_lyricist] = ACTIONS(109),
    [anon_sym_Lyric] = ACTIONS(109),
    [anon_sym_lyric] = ACTIONS(109),
    [anon_sym_Arrangement] = ACTIONS(109),
    [anon_sym_arrangement] = ACTIONS(109),
    [anon_sym_Arranger] = ACTIONS(109),
    [anon_sym_arranger] = ACTIONS(109),
    [anon_sym_Arrange] = ACTIONS(109),
    [anon_sym_arrange] = ACTIONS(109),
    [anon_sym_Vocal] = ACTIONS(109),
    [anon_sym_vocal] = ACTIONS(109),
    [anon_sym_Vo] = ACTIONS(109),
    [anon_sym_vo] = ACTIONS(109),
    [anon_sym_Performer] = ACTIONS(109),
    [anon_sym_performer] = ACTIONS(109),
    [anon_sym_Illustration] = ACTIONS(109),
    [anon_sym_illustration] = ACTIONS(109),
    [anon_sym_Illust] = ACTIONS(109),
    [anon_sym_illust] = ACTIONS(109),
    [anon_sym_Label] = ACTIONS(109),
    [anon_sym_label] = ACTIONS(109),
    [anon_sym_Circle] = ACTIONS(109),
    [anon_sym_circle] = ACTIONS(109),
    [anon_sym_Producer] = ACTIONS(109),
    [anon_sym_producer] = ACTIONS(109),
    [anon_sym_Recording] = ACTIONS(109),
    [anon_sym_recording] = ACTIONS(109),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(109),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(109),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(109),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(109),
    [anon_sym_u6b4cu5531] = ACTIONS(109),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(109),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(109),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(109),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(109),
    [anon_sym_u4f5cu66f2] = ACTIONS(109),
    [anon_sym_u7de8u66f2] = ACTIONS(109),
    [anon_sym_u4f5cu8a5e] = ACTIONS(109),
    [anon_sym_u5382u724c] = ACTIONS(109),
    [anon_sym_u811au672c] = ACTIONS(109),
    [anon_sym_u63d2u56fe] = ACTIONS(109),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(109),
    [anon_sym_u51fau7248u65b9] = ACTIONS(109),
    [anon_sym_u5f55u97f3] = ACTIONS(109),
    [anon_sym_u539fu4f5c] = ACTIONS(109),
    [sym__ssep] = ACTIONS(107),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_SLASH_SLASH] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(113),
    [aux_sym_feat_field_token1] = ACTIONS(113),
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
  [28] = {
    [sym_credit_field] = STATE(28),
    [sym_role] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(28),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(23),
    [anon_sym_u300a] = ACTIONS(23),
    [anon_sym_Music] = ACTIONS(25),
    [anon_sym_music] = ACTIONS(25),
    [anon_sym_Composition] = ACTIONS(25),
    [anon_sym_composition] = ACTIONS(25),
    [anon_sym_Composer] = ACTIONS(25),
    [anon_sym_composer] = ACTIONS(25),
    [anon_sym_Compose] = ACTIONS(25),
    [anon_sym_compose] = ACTIONS(25),
    [anon_sym_Lyrics] = ACTIONS(25),
    [anon_sym_lyrics] = ACTIONS(25),
    [anon_sym_Lyricist] = ACTIONS(25),
    [anon_sym_lyricist] = ACTIONS(25),
    [anon_sym_Lyric] = ACTIONS(25),
    [anon_sym_lyric] = ACTIONS(25),
    [anon_sym_Arrangement] = ACTIONS(25),
    [anon_sym_arrangement] = ACTIONS(25),
    [anon_sym_Arranger] = ACTIONS(25),
    [anon_sym_arranger] = ACTIONS(25),
    [anon_sym_Arrange] = ACTIONS(25),
    [anon_sym_arrange] = ACTIONS(25),
    [anon_sym_Vocal] = ACTIONS(25),
    [anon_sym_vocal] = ACTIONS(25),
    [anon_sym_Vo] = ACTIONS(25),
    [anon_sym_vo] = ACTIONS(25),
    [anon_sym_Performer] = ACTIONS(25),
    [anon_sym_performer] = ACTIONS(25),
    [anon_sym_Illustration] = ACTIONS(25),
    [anon_sym_illustration] = ACTIONS(25),
    [anon_sym_Illust] = ACTIONS(25),
    [anon_sym_illust] = ACTIONS(25),
    [anon_sym_Label] = ACTIONS(25),
    [anon_sym_label] = ACTIONS(25),
    [anon_sym_Circle] = ACTIONS(25),
    [anon_sym_circle] = ACTIONS(25),
    [anon_sym_Producer] = ACTIONS(25),
    [anon_sym_producer] = ACTIONS(25),
    [anon_sym_Recording] = ACTIONS(25),
    [anon_sym_recording] = ACTIONS(25),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(25),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(25),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(25),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu66f2] = ACTIONS(25),
    [anon_sym_u7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5e] = ACTIONS(25),
    [anon_sym_u5382u724c] = ACTIONS(25),
    [anon_sym_u811au672c] = ACTIONS(25),
    [anon_sym_u63d2u56fe] = ACTIONS(25),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(25),
    [anon_sym_u51fau7248u65b9] = ACTIONS(25),
    [anon_sym_u5f55u97f3] = ACTIONS(25),
    [anon_sym_u539fu4f5c] = ACTIONS(25),
  },
  [29] = {
    [sym__quotable_creator_name] = STATE(91),
    [anon_sym_LF] = ACTIONS(115),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [sym_creator_name] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(95),
    [anon_sym_music] = ACTIONS(95),
    [anon_sym_Composition] = ACTIONS(95),
    [anon_sym_composition] = ACTIONS(95),
    [anon_sym_Composer] = ACTIONS(95),
    [anon_sym_composer] = ACTIONS(95),
    [anon_sym_Compose] = ACTIONS(95),
    [anon_sym_compose] = ACTIONS(95),
    [anon_sym_Lyrics] = ACTIONS(95),
    [anon_sym_lyrics] = ACTIONS(95),
    [anon_sym_Lyricist] = ACTIONS(95),
    [anon_sym_lyricist] = ACTIONS(95),
    [anon_sym_Lyric] = ACTIONS(95),
    [anon_sym_lyric] = ACTIONS(95),
    [anon_sym_Arrangement] = ACTIONS(95),
    [anon_sym_arrangement] = ACTIONS(95),
    [anon_sym_Arranger] = ACTIONS(95),
    [anon_sym_arranger] = ACTIONS(95),
    [anon_sym_Arrange] = ACTIONS(95),
    [anon_sym_arrange] = ACTIONS(95),
    [anon_sym_Vocal] = ACTIONS(95),
    [anon_sym_vocal] = ACTIONS(95),
    [anon_sym_Vo] = ACTIONS(95),
    [anon_sym_vo] = ACTIONS(95),
    [anon_sym_Performer] = ACTIONS(95),
    [anon_sym_performer] = ACTIONS(95),
    [anon_sym_Illustration] = ACTIONS(95),
    [anon_sym_illustration] = ACTIONS(95),
    [anon_sym_Illust] = ACTIONS(95),
    [anon_sym_illust] = ACTIONS(95),
    [anon_sym_Label] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_Circle] = ACTIONS(95),
    [anon_sym_circle] = ACTIONS(95),
    [anon_sym_Producer] = ACTIONS(95),
    [anon_sym_producer] = ACTIONS(95),
    [anon_sym_Recording] = ACTIONS(95),
    [anon_sym_recording] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
  },
  [30] = {
    [aux_sym_feat_field_repeat1] = STATE(37),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_SLASH_SLASH] = ACTIONS(103),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(103),
    [anon_sym_Music] = ACTIONS(103),
    [anon_sym_music] = ACTIONS(103),
    [anon_sym_Composition] = ACTIONS(103),
    [anon_sym_composition] = ACTIONS(103),
    [anon_sym_Composer] = ACTIONS(103),
    [anon_sym_composer] = ACTIONS(103),
    [anon_sym_Compose] = ACTIONS(103),
    [anon_sym_compose] = ACTIONS(103),
    [anon_sym_Lyrics] = ACTIONS(103),
    [anon_sym_lyrics] = ACTIONS(103),
    [anon_sym_Lyricist] = ACTIONS(103),
    [anon_sym_lyricist] = ACTIONS(103),
    [anon_sym_Lyric] = ACTIONS(103),
    [anon_sym_lyric] = ACTIONS(103),
    [anon_sym_Arrangement] = ACTIONS(103),
    [anon_sym_arrangement] = ACTIONS(103),
    [anon_sym_Arranger] = ACTIONS(103),
    [anon_sym_arranger] = ACTIONS(103),
    [anon_sym_Arrange] = ACTIONS(103),
    [anon_sym_arrange] = ACTIONS(103),
    [anon_sym_Vocal] = ACTIONS(103),
    [anon_sym_vocal] = ACTIONS(103),
    [anon_sym_Vo] = ACTIONS(103),
    [anon_sym_vo] = ACTIONS(103),
    [anon_sym_Performer] = ACTIONS(103),
    [anon_sym_performer] = ACTIONS(103),
    [anon_sym_Illustration] = ACTIONS(103),
    [anon_sym_illustration] = ACTIONS(103),
    [anon_sym_Illust] = ACTIONS(103),
    [anon_sym_illust] = ACTIONS(103),
    [anon_sym_Label] = ACTIONS(103),
    [anon_sym_label] = ACTIONS(103),
    [anon_sym_Circle] = ACTIONS(103),
    [anon_sym_circle] = ACTIONS(103),
    [anon_sym_Producer] = ACTIONS(103),
    [anon_sym_producer] = ACTIONS(103),
    [anon_sym_Recording] = ACTIONS(103),
    [anon_sym_recording] = ACTIONS(103),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(103),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(103),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(103),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(103),
    [anon_sym_u6b4cu5531] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(103),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu66f2] = ACTIONS(103),
    [anon_sym_u7de8u66f2] = ACTIONS(103),
    [anon_sym_u4f5cu8a5e] = ACTIONS(103),
    [anon_sym_u5382u724c] = ACTIONS(103),
    [anon_sym_u811au672c] = ACTIONS(103),
    [anon_sym_u63d2u56fe] = ACTIONS(103),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(103),
    [anon_sym_u51fau7248u65b9] = ACTIONS(103),
    [anon_sym_u5f55u97f3] = ACTIONS(103),
    [anon_sym_u539fu4f5c] = ACTIONS(103),
    [sym__ssep] = ACTIONS(117),
  },
  [31] = {
    [sym_feat_field] = STATE(36),
    [anon_sym_AT] = ACTIONS(72),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(72),
    [aux_sym_feat_field_token1] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(76),
    [anon_sym_compose] = ACTIONS(76),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(76),
    [anon_sym_lyric] = ACTIONS(76),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(76),
    [anon_sym_arrange] = ACTIONS(76),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(76),
    [anon_sym_vo] = ACTIONS(76),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(76),
    [anon_sym_illust] = ACTIONS(76),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
  },
  [32] = {
    [sym__quotable_creator_name] = STATE(91),
    [anon_sym_LF] = ACTIONS(121),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [sym_creator_name] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(64),
    [anon_sym_compose] = ACTIONS(64),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(64),
    [anon_sym_lyric] = ACTIONS(64),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(64),
    [anon_sym_arrange] = ACTIONS(64),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(64),
    [anon_sym_vo] = ACTIONS(64),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(64),
    [anon_sym_illust] = ACTIONS(64),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
  },
  [33] = {
    [sym__quotable_creator_name] = STATE(73),
    [sym_role] = STATE(101),
    [aux_sym_credit_field_repeat1] = STATE(44),
    [anon_sym_u300a] = ACTIONS(123),
    [sym_creator_name] = ACTIONS(66),
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
  [34] = {
    [sym__quotable_creator_name] = STATE(77),
    [sym_role] = STATE(101),
    [aux_sym_credit_field_repeat1] = STATE(44),
    [anon_sym_u300a] = ACTIONS(123),
    [sym_creator_name] = ACTIONS(66),
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
  [35] = {
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_SLASH_SLASH] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(113),
    [aux_sym_feat_field_token1] = ACTIONS(113),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(125),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(125),
    [anon_sym_u300b] = ACTIONS(125),
    [anon_sym_Music] = ACTIONS(125),
    [anon_sym_music] = ACTIONS(125),
    [anon_sym_Composition] = ACTIONS(125),
    [anon_sym_composition] = ACTIONS(125),
    [anon_sym_Composer] = ACTIONS(125),
    [anon_sym_composer] = ACTIONS(125),
    [anon_sym_Compose] = ACTIONS(127),
    [anon_sym_compose] = ACTIONS(127),
    [anon_sym_Lyrics] = ACTIONS(125),
    [anon_sym_lyrics] = ACTIONS(125),
    [anon_sym_Lyricist] = ACTIONS(125),
    [anon_sym_lyricist] = ACTIONS(125),
    [anon_sym_Lyric] = ACTIONS(127),
    [anon_sym_lyric] = ACTIONS(127),
    [anon_sym_Arrangement] = ACTIONS(125),
    [anon_sym_arrangement] = ACTIONS(125),
    [anon_sym_Arranger] = ACTIONS(125),
    [anon_sym_arranger] = ACTIONS(125),
    [anon_sym_Arrange] = ACTIONS(127),
    [anon_sym_arrange] = ACTIONS(127),
    [anon_sym_Vocal] = ACTIONS(125),
    [anon_sym_vocal] = ACTIONS(125),
    [anon_sym_Vo] = ACTIONS(127),
    [anon_sym_vo] = ACTIONS(127),
    [anon_sym_Performer] = ACTIONS(125),
    [anon_sym_performer] = ACTIONS(125),
    [anon_sym_Illustration] = ACTIONS(125),
    [anon_sym_illustration] = ACTIONS(125),
    [anon_sym_Illust] = ACTIONS(127),
    [anon_sym_illust] = ACTIONS(127),
    [anon_sym_Label] = ACTIONS(125),
    [anon_sym_label] = ACTIONS(125),
    [anon_sym_Circle] = ACTIONS(125),
    [anon_sym_circle] = ACTIONS(125),
    [anon_sym_Producer] = ACTIONS(125),
    [anon_sym_producer] = ACTIONS(125),
    [anon_sym_Recording] = ACTIONS(125),
    [anon_sym_recording] = ACTIONS(125),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(125),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(125),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(125),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(125),
    [anon_sym_u6b4cu5531] = ACTIONS(125),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(125),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(125),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(125),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(125),
    [anon_sym_u4f5cu66f2] = ACTIONS(125),
    [anon_sym_u7de8u66f2] = ACTIONS(125),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(125),
    [anon_sym_u811au672c] = ACTIONS(125),
    [anon_sym_u63d2u56fe] = ACTIONS(125),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(125),
    [anon_sym_u51fau7248u65b9] = ACTIONS(125),
    [anon_sym_u5f55u97f3] = ACTIONS(125),
    [anon_sym_u539fu4f5c] = ACTIONS(125),
  },
  [37] = {
    [aux_sym_feat_field_repeat1] = STATE(9),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(87),
    [anon_sym_Music] = ACTIONS(87),
    [anon_sym_music] = ACTIONS(87),
    [anon_sym_Composition] = ACTIONS(87),
    [anon_sym_composition] = ACTIONS(87),
    [anon_sym_Composer] = ACTIONS(87),
    [anon_sym_composer] = ACTIONS(87),
    [anon_sym_Compose] = ACTIONS(87),
    [anon_sym_compose] = ACTIONS(87),
    [anon_sym_Lyrics] = ACTIONS(87),
    [anon_sym_lyrics] = ACTIONS(87),
    [anon_sym_Lyricist] = ACTIONS(87),
    [anon_sym_lyricist] = ACTIONS(87),
    [anon_sym_Lyric] = ACTIONS(87),
    [anon_sym_lyric] = ACTIONS(87),
    [anon_sym_Arrangement] = ACTIONS(87),
    [anon_sym_arrangement] = ACTIONS(87),
    [anon_sym_Arranger] = ACTIONS(87),
    [anon_sym_arranger] = ACTIONS(87),
    [anon_sym_Arrange] = ACTIONS(87),
    [anon_sym_arrange] = ACTIONS(87),
    [anon_sym_Vocal] = ACTIONS(87),
    [anon_sym_vocal] = ACTIONS(87),
    [anon_sym_Vo] = ACTIONS(87),
    [anon_sym_vo] = ACTIONS(87),
    [anon_sym_Performer] = ACTIONS(87),
    [anon_sym_performer] = ACTIONS(87),
    [anon_sym_Illustration] = ACTIONS(87),
    [anon_sym_illustration] = ACTIONS(87),
    [anon_sym_Illust] = ACTIONS(87),
    [anon_sym_illust] = ACTIONS(87),
    [anon_sym_Label] = ACTIONS(87),
    [anon_sym_label] = ACTIONS(87),
    [anon_sym_Circle] = ACTIONS(87),
    [anon_sym_circle] = ACTIONS(87),
    [anon_sym_Producer] = ACTIONS(87),
    [anon_sym_producer] = ACTIONS(87),
    [anon_sym_Recording] = ACTIONS(87),
    [anon_sym_recording] = ACTIONS(87),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(87),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(87),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(87),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(87),
    [anon_sym_u6b4cu5531] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu66f2] = ACTIONS(87),
    [anon_sym_u7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5e] = ACTIONS(87),
    [anon_sym_u5382u724c] = ACTIONS(87),
    [anon_sym_u811au672c] = ACTIONS(87),
    [anon_sym_u63d2u56fe] = ACTIONS(87),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(87),
    [anon_sym_u51fau7248u65b9] = ACTIONS(87),
    [anon_sym_u5f55u97f3] = ACTIONS(87),
    [anon_sym_u539fu4f5c] = ACTIONS(87),
    [sym__ssep] = ACTIONS(129),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(131),
    [anon_sym_Music] = ACTIONS(131),
    [anon_sym_music] = ACTIONS(131),
    [anon_sym_Composition] = ACTIONS(131),
    [anon_sym_composition] = ACTIONS(131),
    [anon_sym_Composer] = ACTIONS(131),
    [anon_sym_composer] = ACTIONS(131),
    [anon_sym_Compose] = ACTIONS(133),
    [anon_sym_compose] = ACTIONS(133),
    [anon_sym_Lyrics] = ACTIONS(131),
    [anon_sym_lyrics] = ACTIONS(131),
    [anon_sym_Lyricist] = ACTIONS(131),
    [anon_sym_lyricist] = ACTIONS(131),
    [anon_sym_Lyric] = ACTIONS(133),
    [anon_sym_lyric] = ACTIONS(133),
    [anon_sym_Arrangement] = ACTIONS(131),
    [anon_sym_arrangement] = ACTIONS(131),
    [anon_sym_Arranger] = ACTIONS(131),
    [anon_sym_arranger] = ACTIONS(131),
    [anon_sym_Arrange] = ACTIONS(133),
    [anon_sym_arrange] = ACTIONS(133),
    [anon_sym_Vocal] = ACTIONS(131),
    [anon_sym_vocal] = ACTIONS(131),
    [anon_sym_Vo] = ACTIONS(133),
    [anon_sym_vo] = ACTIONS(133),
    [anon_sym_Performer] = ACTIONS(131),
    [anon_sym_performer] = ACTIONS(131),
    [anon_sym_Illustration] = ACTIONS(131),
    [anon_sym_illustration] = ACTIONS(131),
    [anon_sym_Illust] = ACTIONS(133),
    [anon_sym_illust] = ACTIONS(133),
    [anon_sym_Label] = ACTIONS(131),
    [anon_sym_label] = ACTIONS(131),
    [anon_sym_Circle] = ACTIONS(131),
    [anon_sym_circle] = ACTIONS(131),
    [anon_sym_Producer] = ACTIONS(131),
    [anon_sym_producer] = ACTIONS(131),
    [anon_sym_Recording] = ACTIONS(131),
    [anon_sym_recording] = ACTIONS(131),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(131),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(131),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(131),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(131),
    [anon_sym_u6b4cu5531] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu66f2] = ACTIONS(131),
    [anon_sym_u7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5e] = ACTIONS(133),
    [anon_sym_u5382u724c] = ACTIONS(131),
    [anon_sym_u811au672c] = ACTIONS(131),
    [anon_sym_u63d2u56fe] = ACTIONS(131),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(131),
    [anon_sym_u51fau7248u65b9] = ACTIONS(131),
    [anon_sym_u5f55u97f3] = ACTIONS(131),
    [anon_sym_u539fu4f5c] = ACTIONS(131),
  },
  [39] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(137),
    [anon_sym_music] = ACTIONS(137),
    [anon_sym_Composition] = ACTIONS(137),
    [anon_sym_composition] = ACTIONS(137),
    [anon_sym_Composer] = ACTIONS(137),
    [anon_sym_composer] = ACTIONS(137),
    [anon_sym_Compose] = ACTIONS(137),
    [anon_sym_compose] = ACTIONS(137),
    [anon_sym_Lyrics] = ACTIONS(137),
    [anon_sym_lyrics] = ACTIONS(137),
    [anon_sym_Lyricist] = ACTIONS(137),
    [anon_sym_lyricist] = ACTIONS(137),
    [anon_sym_Lyric] = ACTIONS(137),
    [anon_sym_lyric] = ACTIONS(137),
    [anon_sym_Arrangement] = ACTIONS(137),
    [anon_sym_arrangement] = ACTIONS(137),
    [anon_sym_Arranger] = ACTIONS(137),
    [anon_sym_arranger] = ACTIONS(137),
    [anon_sym_Arrange] = ACTIONS(137),
    [anon_sym_arrange] = ACTIONS(137),
    [anon_sym_Vocal] = ACTIONS(137),
    [anon_sym_vocal] = ACTIONS(137),
    [anon_sym_Vo] = ACTIONS(137),
    [anon_sym_vo] = ACTIONS(137),
    [anon_sym_Performer] = ACTIONS(137),
    [anon_sym_performer] = ACTIONS(137),
    [anon_sym_Illustration] = ACTIONS(137),
    [anon_sym_illustration] = ACTIONS(137),
    [anon_sym_Illust] = ACTIONS(137),
    [anon_sym_illust] = ACTIONS(137),
    [anon_sym_Label] = ACTIONS(137),
    [anon_sym_label] = ACTIONS(137),
    [anon_sym_Circle] = ACTIONS(137),
    [anon_sym_circle] = ACTIONS(137),
    [anon_sym_Producer] = ACTIONS(137),
    [anon_sym_producer] = ACTIONS(137),
    [anon_sym_Recording] = ACTIONS(137),
    [anon_sym_recording] = ACTIONS(137),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(137),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(137),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(137),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(137),
    [anon_sym_u6b4cu5531] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(137),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu66f2] = ACTIONS(137),
    [anon_sym_u7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5e] = ACTIONS(137),
    [anon_sym_u5382u724c] = ACTIONS(137),
    [anon_sym_u811au672c] = ACTIONS(137),
    [anon_sym_u63d2u56fe] = ACTIONS(137),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(137),
    [anon_sym_u51fau7248u65b9] = ACTIONS(137),
    [anon_sym_u5f55u97f3] = ACTIONS(137),
    [anon_sym_u539fu4f5c] = ACTIONS(137),
  },
  [40] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(141),
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
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(146),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(144),
    [anon_sym_music] = ACTIONS(144),
    [anon_sym_Composition] = ACTIONS(144),
    [anon_sym_composition] = ACTIONS(144),
    [anon_sym_Composer] = ACTIONS(144),
    [anon_sym_composer] = ACTIONS(144),
    [anon_sym_Compose] = ACTIONS(150),
    [anon_sym_compose] = ACTIONS(150),
    [anon_sym_Lyrics] = ACTIONS(144),
    [anon_sym_lyrics] = ACTIONS(144),
    [anon_sym_Lyricist] = ACTIONS(144),
    [anon_sym_lyricist] = ACTIONS(144),
    [anon_sym_Lyric] = ACTIONS(150),
    [anon_sym_lyric] = ACTIONS(150),
    [anon_sym_Arrangement] = ACTIONS(144),
    [anon_sym_arrangement] = ACTIONS(144),
    [anon_sym_Arranger] = ACTIONS(144),
    [anon_sym_arranger] = ACTIONS(144),
    [anon_sym_Arrange] = ACTIONS(150),
    [anon_sym_arrange] = ACTIONS(150),
    [anon_sym_Vocal] = ACTIONS(144),
    [anon_sym_vocal] = ACTIONS(144),
    [anon_sym_Vo] = ACTIONS(150),
    [anon_sym_vo] = ACTIONS(150),
    [anon_sym_Performer] = ACTIONS(144),
    [anon_sym_performer] = ACTIONS(144),
    [anon_sym_Illustration] = ACTIONS(144),
    [anon_sym_illustration] = ACTIONS(144),
    [anon_sym_Illust] = ACTIONS(150),
    [anon_sym_illust] = ACTIONS(150),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(150),
    [anon_sym_u5382u724c] = ACTIONS(144),
    [anon_sym_u811au672c] = ACTIONS(144),
    [anon_sym_u63d2u56fe] = ACTIONS(144),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(144),
    [anon_sym_u51fau7248u65b9] = ACTIONS(144),
    [anon_sym_u5f55u97f3] = ACTIONS(144),
    [anon_sym_u539fu4f5c] = ACTIONS(144),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(154),
    [anon_sym_u300a] = ACTIONS(154),
    [anon_sym_Music] = ACTIONS(154),
    [anon_sym_music] = ACTIONS(154),
    [anon_sym_Composition] = ACTIONS(154),
    [anon_sym_composition] = ACTIONS(154),
    [anon_sym_Composer] = ACTIONS(154),
    [anon_sym_composer] = ACTIONS(154),
    [anon_sym_Compose] = ACTIONS(154),
    [anon_sym_compose] = ACTIONS(154),
    [anon_sym_Lyrics] = ACTIONS(154),
    [anon_sym_lyrics] = ACTIONS(154),
    [anon_sym_Lyricist] = ACTIONS(154),
    [anon_sym_lyricist] = ACTIONS(154),
    [anon_sym_Lyric] = ACTIONS(154),
    [anon_sym_lyric] = ACTIONS(154),
    [anon_sym_Arrangement] = ACTIONS(154),
    [anon_sym_arrangement] = ACTIONS(154),
    [anon_sym_Arranger] = ACTIONS(154),
    [anon_sym_arranger] = ACTIONS(154),
    [anon_sym_Arrange] = ACTIONS(154),
    [anon_sym_arrange] = ACTIONS(154),
    [anon_sym_Vocal] = ACTIONS(154),
    [anon_sym_vocal] = ACTIONS(154),
    [anon_sym_Vo] = ACTIONS(154),
    [anon_sym_vo] = ACTIONS(154),
    [anon_sym_Performer] = ACTIONS(154),
    [anon_sym_performer] = ACTIONS(154),
    [anon_sym_Illustration] = ACTIONS(154),
    [anon_sym_illustration] = ACTIONS(154),
    [anon_sym_Illust] = ACTIONS(154),
    [anon_sym_illust] = ACTIONS(154),
    [anon_sym_Label] = ACTIONS(154),
    [anon_sym_label] = ACTIONS(154),
    [anon_sym_Circle] = ACTIONS(154),
    [anon_sym_circle] = ACTIONS(154),
    [anon_sym_Producer] = ACTIONS(154),
    [anon_sym_producer] = ACTIONS(154),
    [anon_sym_Recording] = ACTIONS(154),
    [anon_sym_recording] = ACTIONS(154),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(154),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(154),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(154),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(154),
    [anon_sym_u6b4cu5531] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(154),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu66f2] = ACTIONS(154),
    [anon_sym_u7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5e] = ACTIONS(154),
    [anon_sym_u5382u724c] = ACTIONS(154),
    [anon_sym_u811au672c] = ACTIONS(154),
    [anon_sym_u63d2u56fe] = ACTIONS(154),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(154),
    [anon_sym_u51fau7248u65b9] = ACTIONS(154),
    [anon_sym_u5f55u97f3] = ACTIONS(154),
    [anon_sym_u539fu4f5c] = ACTIONS(154),
    [sym__sep] = ACTIONS(156),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(158),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(158),
    [anon_sym_Music] = ACTIONS(158),
    [anon_sym_music] = ACTIONS(158),
    [anon_sym_Composition] = ACTIONS(158),
    [anon_sym_composition] = ACTIONS(158),
    [anon_sym_Composer] = ACTIONS(158),
    [anon_sym_composer] = ACTIONS(158),
    [anon_sym_Compose] = ACTIONS(160),
    [anon_sym_compose] = ACTIONS(160),
    [anon_sym_Lyrics] = ACTIONS(158),
    [anon_sym_lyrics] = ACTIONS(158),
    [anon_sym_Lyricist] = ACTIONS(158),
    [anon_sym_lyricist] = ACTIONS(158),
    [anon_sym_Lyric] = ACTIONS(160),
    [anon_sym_lyric] = ACTIONS(160),
    [anon_sym_Arrangement] = ACTIONS(158),
    [anon_sym_arrangement] = ACTIONS(158),
    [anon_sym_Arranger] = ACTIONS(158),
    [anon_sym_arranger] = ACTIONS(158),
    [anon_sym_Arrange] = ACTIONS(160),
    [anon_sym_arrange] = ACTIONS(160),
    [anon_sym_Vocal] = ACTIONS(158),
    [anon_sym_vocal] = ACTIONS(158),
    [anon_sym_Vo] = ACTIONS(160),
    [anon_sym_vo] = ACTIONS(160),
    [anon_sym_Performer] = ACTIONS(158),
    [anon_sym_performer] = ACTIONS(158),
    [anon_sym_Illustration] = ACTIONS(158),
    [anon_sym_illustration] = ACTIONS(158),
    [anon_sym_Illust] = ACTIONS(160),
    [anon_sym_illust] = ACTIONS(160),
    [anon_sym_Label] = ACTIONS(158),
    [anon_sym_label] = ACTIONS(158),
    [anon_sym_Circle] = ACTIONS(158),
    [anon_sym_circle] = ACTIONS(158),
    [anon_sym_Producer] = ACTIONS(158),
    [anon_sym_producer] = ACTIONS(158),
    [anon_sym_Recording] = ACTIONS(158),
    [anon_sym_recording] = ACTIONS(158),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(158),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(158),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(158),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(158),
    [anon_sym_u6b4cu5531] = ACTIONS(158),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(158),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(158),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(158),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(158),
    [anon_sym_u4f5cu66f2] = ACTIONS(158),
    [anon_sym_u7de8u66f2] = ACTIONS(158),
    [anon_sym_u4f5cu8a5e] = ACTIONS(160),
    [anon_sym_u5382u724c] = ACTIONS(158),
    [anon_sym_u811au672c] = ACTIONS(158),
    [anon_sym_u63d2u56fe] = ACTIONS(158),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(158),
    [anon_sym_u51fau7248u65b9] = ACTIONS(158),
    [anon_sym_u5f55u97f3] = ACTIONS(158),
    [anon_sym_u539fu4f5c] = ACTIONS(158),
  },
  [44] = {
    [sym_role] = STATE(101),
    [aux_sym_credit_field_repeat1] = STATE(44),
    [anon_sym_u300a] = ACTIONS(162),
    [sym_creator_name] = ACTIONS(162),
    [anon_sym_Music] = ACTIONS(164),
    [anon_sym_music] = ACTIONS(164),
    [anon_sym_Composition] = ACTIONS(164),
    [anon_sym_composition] = ACTIONS(164),
    [anon_sym_Composer] = ACTIONS(164),
    [anon_sym_composer] = ACTIONS(164),
    [anon_sym_Compose] = ACTIONS(164),
    [anon_sym_compose] = ACTIONS(164),
    [anon_sym_Lyrics] = ACTIONS(164),
    [anon_sym_lyrics] = ACTIONS(164),
    [anon_sym_Lyricist] = ACTIONS(164),
    [anon_sym_lyricist] = ACTIONS(164),
    [anon_sym_Lyric] = ACTIONS(164),
    [anon_sym_lyric] = ACTIONS(164),
    [anon_sym_Arrangement] = ACTIONS(164),
    [anon_sym_arrangement] = ACTIONS(164),
    [anon_sym_Arranger] = ACTIONS(164),
    [anon_sym_arranger] = ACTIONS(164),
    [anon_sym_Arrange] = ACTIONS(164),
    [anon_sym_arrange] = ACTIONS(164),
    [anon_sym_Vocal] = ACTIONS(164),
    [anon_sym_vocal] = ACTIONS(164),
    [anon_sym_Vo] = ACTIONS(164),
    [anon_sym_vo] = ACTIONS(164),
    [anon_sym_Performer] = ACTIONS(164),
    [anon_sym_performer] = ACTIONS(164),
    [anon_sym_Illustration] = ACTIONS(164),
    [anon_sym_illustration] = ACTIONS(164),
    [anon_sym_Illust] = ACTIONS(164),
    [anon_sym_illust] = ACTIONS(164),
    [anon_sym_Label] = ACTIONS(164),
    [anon_sym_label] = ACTIONS(164),
    [anon_sym_Circle] = ACTIONS(164),
    [anon_sym_circle] = ACTIONS(164),
    [anon_sym_Producer] = ACTIONS(164),
    [anon_sym_producer] = ACTIONS(164),
    [anon_sym_Recording] = ACTIONS(164),
    [anon_sym_recording] = ACTIONS(164),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(164),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(164),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(164),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(164),
    [anon_sym_u6b4cu5531] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu66f2] = ACTIONS(164),
    [anon_sym_u7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5e] = ACTIONS(164),
    [anon_sym_u5382u724c] = ACTIONS(164),
    [anon_sym_u811au672c] = ACTIONS(164),
    [anon_sym_u63d2u56fe] = ACTIONS(164),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(164),
    [anon_sym_u51fau7248u65b9] = ACTIONS(164),
    [anon_sym_u5f55u97f3] = ACTIONS(164),
    [anon_sym_u539fu4f5c] = ACTIONS(164),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(169),
    [anon_sym_u300a] = ACTIONS(169),
    [anon_sym_Music] = ACTIONS(169),
    [anon_sym_music] = ACTIONS(169),
    [anon_sym_Composition] = ACTIONS(169),
    [anon_sym_composition] = ACTIONS(169),
    [anon_sym_Composer] = ACTIONS(169),
    [anon_sym_composer] = ACTIONS(169),
    [anon_sym_Compose] = ACTIONS(169),
    [anon_sym_compose] = ACTIONS(169),
    [anon_sym_Lyrics] = ACTIONS(169),
    [anon_sym_lyrics] = ACTIONS(169),
    [anon_sym_Lyricist] = ACTIONS(169),
    [anon_sym_lyricist] = ACTIONS(169),
    [anon_sym_Lyric] = ACTIONS(169),
    [anon_sym_lyric] = ACTIONS(169),
    [anon_sym_Arrangement] = ACTIONS(169),
    [anon_sym_arrangement] = ACTIONS(169),
    [anon_sym_Arranger] = ACTIONS(169),
    [anon_sym_arranger] = ACTIONS(169),
    [anon_sym_Arrange] = ACTIONS(169),
    [anon_sym_arrange] = ACTIONS(169),
    [anon_sym_Vocal] = ACTIONS(169),
    [anon_sym_vocal] = ACTIONS(169),
    [anon_sym_Vo] = ACTIONS(169),
    [anon_sym_vo] = ACTIONS(169),
    [anon_sym_Performer] = ACTIONS(169),
    [anon_sym_performer] = ACTIONS(169),
    [anon_sym_Illustration] = ACTIONS(169),
    [anon_sym_illustration] = ACTIONS(169),
    [anon_sym_Illust] = ACTIONS(169),
    [anon_sym_illust] = ACTIONS(169),
    [anon_sym_Label] = ACTIONS(169),
    [anon_sym_label] = ACTIONS(169),
    [anon_sym_Circle] = ACTIONS(169),
    [anon_sym_circle] = ACTIONS(169),
    [anon_sym_Producer] = ACTIONS(169),
    [anon_sym_producer] = ACTIONS(169),
    [anon_sym_Recording] = ACTIONS(169),
    [anon_sym_recording] = ACTIONS(169),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(169),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(169),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(169),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(169),
    [anon_sym_u6b4cu5531] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu66f2] = ACTIONS(169),
    [anon_sym_u7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5e] = ACTIONS(169),
    [anon_sym_u5382u724c] = ACTIONS(169),
    [anon_sym_u811au672c] = ACTIONS(169),
    [anon_sym_u63d2u56fe] = ACTIONS(169),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(169),
    [anon_sym_u51fau7248u65b9] = ACTIONS(169),
    [anon_sym_u5f55u97f3] = ACTIONS(169),
    [anon_sym_u539fu4f5c] = ACTIONS(169),
    [sym__sep] = ACTIONS(171),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(175),
    [anon_sym_u300a] = ACTIONS(175),
    [anon_sym_Music] = ACTIONS(175),
    [anon_sym_music] = ACTIONS(175),
    [anon_sym_Composition] = ACTIONS(175),
    [anon_sym_composition] = ACTIONS(175),
    [anon_sym_Composer] = ACTIONS(175),
    [anon_sym_composer] = ACTIONS(175),
    [anon_sym_Compose] = ACTIONS(175),
    [anon_sym_compose] = ACTIONS(175),
    [anon_sym_Lyrics] = ACTIONS(175),
    [anon_sym_lyrics] = ACTIONS(175),
    [anon_sym_Lyricist] = ACTIONS(175),
    [anon_sym_lyricist] = ACTIONS(175),
    [anon_sym_Lyric] = ACTIONS(175),
    [anon_sym_lyric] = ACTIONS(175),
    [anon_sym_Arrangement] = ACTIONS(175),
    [anon_sym_arrangement] = ACTIONS(175),
    [anon_sym_Arranger] = ACTIONS(175),
    [anon_sym_arranger] = ACTIONS(175),
    [anon_sym_Arrange] = ACTIONS(175),
    [anon_sym_arrange] = ACTIONS(175),
    [anon_sym_Vocal] = ACTIONS(175),
    [anon_sym_vocal] = ACTIONS(175),
    [anon_sym_Vo] = ACTIONS(175),
    [anon_sym_vo] = ACTIONS(175),
    [anon_sym_Performer] = ACTIONS(175),
    [anon_sym_performer] = ACTIONS(175),
    [anon_sym_Illustration] = ACTIONS(175),
    [anon_sym_illustration] = ACTIONS(175),
    [anon_sym_Illust] = ACTIONS(175),
    [anon_sym_illust] = ACTIONS(175),
    [anon_sym_Label] = ACTIONS(175),
    [anon_sym_label] = ACTIONS(175),
    [anon_sym_Circle] = ACTIONS(175),
    [anon_sym_circle] = ACTIONS(175),
    [anon_sym_Producer] = ACTIONS(175),
    [anon_sym_producer] = ACTIONS(175),
    [anon_sym_Recording] = ACTIONS(175),
    [anon_sym_recording] = ACTIONS(175),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(175),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(175),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(175),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(175),
    [anon_sym_u6b4cu5531] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(175),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu66f2] = ACTIONS(175),
    [anon_sym_u7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5e] = ACTIONS(175),
    [anon_sym_u5382u724c] = ACTIONS(175),
    [anon_sym_u811au672c] = ACTIONS(175),
    [anon_sym_u63d2u56fe] = ACTIONS(175),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(175),
    [anon_sym_u51fau7248u65b9] = ACTIONS(175),
    [anon_sym_u5f55u97f3] = ACTIONS(175),
    [anon_sym_u539fu4f5c] = ACTIONS(175),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(113),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [anon_sym_Music] = ACTIONS(95),
    [anon_sym_music] = ACTIONS(95),
    [anon_sym_Composition] = ACTIONS(95),
    [anon_sym_composition] = ACTIONS(95),
    [anon_sym_Composer] = ACTIONS(95),
    [anon_sym_composer] = ACTIONS(95),
    [anon_sym_Compose] = ACTIONS(95),
    [anon_sym_compose] = ACTIONS(95),
    [anon_sym_Lyrics] = ACTIONS(95),
    [anon_sym_lyrics] = ACTIONS(95),
    [anon_sym_Lyricist] = ACTIONS(95),
    [anon_sym_lyricist] = ACTIONS(95),
    [anon_sym_Lyric] = ACTIONS(95),
    [anon_sym_lyric] = ACTIONS(95),
    [anon_sym_Arrangement] = ACTIONS(95),
    [anon_sym_arrangement] = ACTIONS(95),
    [anon_sym_Arranger] = ACTIONS(95),
    [anon_sym_arranger] = ACTIONS(95),
    [anon_sym_Arrange] = ACTIONS(95),
    [anon_sym_arrange] = ACTIONS(95),
    [anon_sym_Vocal] = ACTIONS(95),
    [anon_sym_vocal] = ACTIONS(95),
    [anon_sym_Vo] = ACTIONS(95),
    [anon_sym_vo] = ACTIONS(95),
    [anon_sym_Performer] = ACTIONS(95),
    [anon_sym_performer] = ACTIONS(95),
    [anon_sym_Illustration] = ACTIONS(95),
    [anon_sym_illustration] = ACTIONS(95),
    [anon_sym_Illust] = ACTIONS(95),
    [anon_sym_illust] = ACTIONS(95),
    [anon_sym_Label] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_Circle] = ACTIONS(95),
    [anon_sym_circle] = ACTIONS(95),
    [anon_sym_Producer] = ACTIONS(95),
    [anon_sym_producer] = ACTIONS(95),
    [anon_sym_Recording] = ACTIONS(95),
    [anon_sym_recording] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
  },
  [49] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(54),
    [anon_sym_AT] = ACTIONS(137),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(177),
    [anon_sym_Music] = ACTIONS(137),
    [anon_sym_music] = ACTIONS(137),
    [anon_sym_Composition] = ACTIONS(137),
    [anon_sym_composition] = ACTIONS(137),
    [anon_sym_Composer] = ACTIONS(137),
    [anon_sym_composer] = ACTIONS(137),
    [anon_sym_Compose] = ACTIONS(137),
    [anon_sym_compose] = ACTIONS(137),
    [anon_sym_Lyrics] = ACTIONS(137),
    [anon_sym_lyrics] = ACTIONS(137),
    [anon_sym_Lyricist] = ACTIONS(137),
    [anon_sym_lyricist] = ACTIONS(137),
    [anon_sym_Lyric] = ACTIONS(137),
    [anon_sym_lyric] = ACTIONS(137),
    [anon_sym_Arrangement] = ACTIONS(137),
    [anon_sym_arrangement] = ACTIONS(137),
    [anon_sym_Arranger] = ACTIONS(137),
    [anon_sym_arranger] = ACTIONS(137),
    [anon_sym_Arrange] = ACTIONS(137),
    [anon_sym_arrange] = ACTIONS(137),
    [anon_sym_Vocal] = ACTIONS(137),
    [anon_sym_vocal] = ACTIONS(137),
    [anon_sym_Vo] = ACTIONS(137),
    [anon_sym_vo] = ACTIONS(137),
    [anon_sym_Performer] = ACTIONS(137),
    [anon_sym_performer] = ACTIONS(137),
    [anon_sym_Illustration] = ACTIONS(137),
    [anon_sym_illustration] = ACTIONS(137),
    [anon_sym_Illust] = ACTIONS(137),
    [anon_sym_illust] = ACTIONS(137),
    [anon_sym_Label] = ACTIONS(137),
    [anon_sym_label] = ACTIONS(137),
    [anon_sym_Circle] = ACTIONS(137),
    [anon_sym_circle] = ACTIONS(137),
    [anon_sym_Producer] = ACTIONS(137),
    [anon_sym_producer] = ACTIONS(137),
    [anon_sym_Recording] = ACTIONS(137),
    [anon_sym_recording] = ACTIONS(137),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(137),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(137),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(137),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(137),
    [anon_sym_u6b4cu5531] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(137),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu66f2] = ACTIONS(137),
    [anon_sym_u7de8u66f2] = ACTIONS(137),
    [anon_sym_u4f5cu8a5e] = ACTIONS(137),
    [anon_sym_u5382u724c] = ACTIONS(137),
    [anon_sym_u811au672c] = ACTIONS(137),
    [anon_sym_u63d2u56fe] = ACTIONS(137),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(137),
    [anon_sym_u51fau7248u65b9] = ACTIONS(137),
    [anon_sym_u5f55u97f3] = ACTIONS(137),
    [anon_sym_u539fu4f5c] = ACTIONS(137),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(181),
    [anon_sym_u300a] = ACTIONS(181),
    [anon_sym_Music] = ACTIONS(181),
    [anon_sym_music] = ACTIONS(181),
    [anon_sym_Composition] = ACTIONS(181),
    [anon_sym_composition] = ACTIONS(181),
    [anon_sym_Composer] = ACTIONS(181),
    [anon_sym_composer] = ACTIONS(181),
    [anon_sym_Compose] = ACTIONS(181),
    [anon_sym_compose] = ACTIONS(181),
    [anon_sym_Lyrics] = ACTIONS(181),
    [anon_sym_lyrics] = ACTIONS(181),
    [anon_sym_Lyricist] = ACTIONS(181),
    [anon_sym_lyricist] = ACTIONS(181),
    [anon_sym_Lyric] = ACTIONS(181),
    [anon_sym_lyric] = ACTIONS(181),
    [anon_sym_Arrangement] = ACTIONS(181),
    [anon_sym_arrangement] = ACTIONS(181),
    [anon_sym_Arranger] = ACTIONS(181),
    [anon_sym_arranger] = ACTIONS(181),
    [anon_sym_Arrange] = ACTIONS(181),
    [anon_sym_arrange] = ACTIONS(181),
    [anon_sym_Vocal] = ACTIONS(181),
    [anon_sym_vocal] = ACTIONS(181),
    [anon_sym_Vo] = ACTIONS(181),
    [anon_sym_vo] = ACTIONS(181),
    [anon_sym_Performer] = ACTIONS(181),
    [anon_sym_performer] = ACTIONS(181),
    [anon_sym_Illustration] = ACTIONS(181),
    [anon_sym_illustration] = ACTIONS(181),
    [anon_sym_Illust] = ACTIONS(181),
    [anon_sym_illust] = ACTIONS(181),
    [anon_sym_Label] = ACTIONS(181),
    [anon_sym_label] = ACTIONS(181),
    [anon_sym_Circle] = ACTIONS(181),
    [anon_sym_circle] = ACTIONS(181),
    [anon_sym_Producer] = ACTIONS(181),
    [anon_sym_producer] = ACTIONS(181),
    [anon_sym_Recording] = ACTIONS(181),
    [anon_sym_recording] = ACTIONS(181),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(181),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(181),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(181),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(181),
    [anon_sym_u6b4cu5531] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(181),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu66f2] = ACTIONS(181),
    [anon_sym_u7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5e] = ACTIONS(181),
    [anon_sym_u5382u724c] = ACTIONS(181),
    [anon_sym_u811au672c] = ACTIONS(181),
    [anon_sym_u63d2u56fe] = ACTIONS(181),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(181),
    [anon_sym_u51fau7248u65b9] = ACTIONS(181),
    [anon_sym_u5f55u97f3] = ACTIONS(181),
    [anon_sym_u539fu4f5c] = ACTIONS(181),
  },
  [51] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(169),
    [anon_sym_u300a] = ACTIONS(169),
    [anon_sym_Music] = ACTIONS(169),
    [anon_sym_music] = ACTIONS(169),
    [anon_sym_Composition] = ACTIONS(169),
    [anon_sym_composition] = ACTIONS(169),
    [anon_sym_Composer] = ACTIONS(169),
    [anon_sym_composer] = ACTIONS(169),
    [anon_sym_Compose] = ACTIONS(169),
    [anon_sym_compose] = ACTIONS(169),
    [anon_sym_Lyrics] = ACTIONS(169),
    [anon_sym_lyrics] = ACTIONS(169),
    [anon_sym_Lyricist] = ACTIONS(169),
    [anon_sym_lyricist] = ACTIONS(169),
    [anon_sym_Lyric] = ACTIONS(169),
    [anon_sym_lyric] = ACTIONS(169),
    [anon_sym_Arrangement] = ACTIONS(169),
    [anon_sym_arrangement] = ACTIONS(169),
    [anon_sym_Arranger] = ACTIONS(169),
    [anon_sym_arranger] = ACTIONS(169),
    [anon_sym_Arrange] = ACTIONS(169),
    [anon_sym_arrange] = ACTIONS(169),
    [anon_sym_Vocal] = ACTIONS(169),
    [anon_sym_vocal] = ACTIONS(169),
    [anon_sym_Vo] = ACTIONS(169),
    [anon_sym_vo] = ACTIONS(169),
    [anon_sym_Performer] = ACTIONS(169),
    [anon_sym_performer] = ACTIONS(169),
    [anon_sym_Illustration] = ACTIONS(169),
    [anon_sym_illustration] = ACTIONS(169),
    [anon_sym_Illust] = ACTIONS(169),
    [anon_sym_illust] = ACTIONS(169),
    [anon_sym_Label] = ACTIONS(169),
    [anon_sym_label] = ACTIONS(169),
    [anon_sym_Circle] = ACTIONS(169),
    [anon_sym_circle] = ACTIONS(169),
    [anon_sym_Producer] = ACTIONS(169),
    [anon_sym_producer] = ACTIONS(169),
    [anon_sym_Recording] = ACTIONS(169),
    [anon_sym_recording] = ACTIONS(169),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(169),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(169),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(169),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(169),
    [anon_sym_u6b4cu5531] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu66f2] = ACTIONS(169),
    [anon_sym_u7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5e] = ACTIONS(169),
    [anon_sym_u5382u724c] = ACTIONS(169),
    [anon_sym_u811au672c] = ACTIONS(169),
    [anon_sym_u63d2u56fe] = ACTIONS(169),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(169),
    [anon_sym_u51fau7248u65b9] = ACTIONS(169),
    [anon_sym_u5f55u97f3] = ACTIONS(169),
    [anon_sym_u539fu4f5c] = ACTIONS(169),
    [sym__sep] = ACTIONS(183),
  },
  [52] = {
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(185),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(144),
    [anon_sym_music] = ACTIONS(144),
    [anon_sym_Composition] = ACTIONS(144),
    [anon_sym_composition] = ACTIONS(144),
    [anon_sym_Composer] = ACTIONS(144),
    [anon_sym_composer] = ACTIONS(144),
    [anon_sym_Compose] = ACTIONS(150),
    [anon_sym_compose] = ACTIONS(150),
    [anon_sym_Lyrics] = ACTIONS(144),
    [anon_sym_lyrics] = ACTIONS(144),
    [anon_sym_Lyricist] = ACTIONS(144),
    [anon_sym_lyricist] = ACTIONS(144),
    [anon_sym_Lyric] = ACTIONS(150),
    [anon_sym_lyric] = ACTIONS(150),
    [anon_sym_Arrangement] = ACTIONS(144),
    [anon_sym_arrangement] = ACTIONS(144),
    [anon_sym_Arranger] = ACTIONS(144),
    [anon_sym_arranger] = ACTIONS(144),
    [anon_sym_Arrange] = ACTIONS(150),
    [anon_sym_arrange] = ACTIONS(150),
    [anon_sym_Vocal] = ACTIONS(144),
    [anon_sym_vocal] = ACTIONS(144),
    [anon_sym_Vo] = ACTIONS(150),
    [anon_sym_vo] = ACTIONS(150),
    [anon_sym_Performer] = ACTIONS(144),
    [anon_sym_performer] = ACTIONS(144),
    [anon_sym_Illustration] = ACTIONS(144),
    [anon_sym_illustration] = ACTIONS(144),
    [anon_sym_Illust] = ACTIONS(150),
    [anon_sym_illust] = ACTIONS(150),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(150),
    [anon_sym_u5382u724c] = ACTIONS(144),
    [anon_sym_u811au672c] = ACTIONS(144),
    [anon_sym_u63d2u56fe] = ACTIONS(144),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(144),
    [anon_sym_u51fau7248u65b9] = ACTIONS(144),
    [anon_sym_u5f55u97f3] = ACTIONS(144),
    [anon_sym_u539fu4f5c] = ACTIONS(144),
  },
  [53] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(154),
    [anon_sym_u300a] = ACTIONS(154),
    [anon_sym_Music] = ACTIONS(154),
    [anon_sym_music] = ACTIONS(154),
    [anon_sym_Composition] = ACTIONS(154),
    [anon_sym_composition] = ACTIONS(154),
    [anon_sym_Composer] = ACTIONS(154),
    [anon_sym_composer] = ACTIONS(154),
    [anon_sym_Compose] = ACTIONS(154),
    [anon_sym_compose] = ACTIONS(154),
    [anon_sym_Lyrics] = ACTIONS(154),
    [anon_sym_lyrics] = ACTIONS(154),
    [anon_sym_Lyricist] = ACTIONS(154),
    [anon_sym_lyricist] = ACTIONS(154),
    [anon_sym_Lyric] = ACTIONS(154),
    [anon_sym_lyric] = ACTIONS(154),
    [anon_sym_Arrangement] = ACTIONS(154),
    [anon_sym_arrangement] = ACTIONS(154),
    [anon_sym_Arranger] = ACTIONS(154),
    [anon_sym_arranger] = ACTIONS(154),
    [anon_sym_Arrange] = ACTIONS(154),
    [anon_sym_arrange] = ACTIONS(154),
    [anon_sym_Vocal] = ACTIONS(154),
    [anon_sym_vocal] = ACTIONS(154),
    [anon_sym_Vo] = ACTIONS(154),
    [anon_sym_vo] = ACTIONS(154),
    [anon_sym_Performer] = ACTIONS(154),
    [anon_sym_performer] = ACTIONS(154),
    [anon_sym_Illustration] = ACTIONS(154),
    [anon_sym_illustration] = ACTIONS(154),
    [anon_sym_Illust] = ACTIONS(154),
    [anon_sym_illust] = ACTIONS(154),
    [anon_sym_Label] = ACTIONS(154),
    [anon_sym_label] = ACTIONS(154),
    [anon_sym_Circle] = ACTIONS(154),
    [anon_sym_circle] = ACTIONS(154),
    [anon_sym_Producer] = ACTIONS(154),
    [anon_sym_producer] = ACTIONS(154),
    [anon_sym_Recording] = ACTIONS(154),
    [anon_sym_recording] = ACTIONS(154),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(154),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(154),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(154),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(154),
    [anon_sym_u6b4cu5531] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(154),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu66f2] = ACTIONS(154),
    [anon_sym_u7de8u66f2] = ACTIONS(154),
    [anon_sym_u4f5cu8a5e] = ACTIONS(154),
    [anon_sym_u5382u724c] = ACTIONS(154),
    [anon_sym_u811au672c] = ACTIONS(154),
    [anon_sym_u63d2u56fe] = ACTIONS(154),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(154),
    [anon_sym_u51fau7248u65b9] = ACTIONS(154),
    [anon_sym_u5f55u97f3] = ACTIONS(154),
    [anon_sym_u539fu4f5c] = ACTIONS(154),
    [sym__sep] = ACTIONS(187),
  },
  [54] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(54),
    [anon_sym_AT] = ACTIONS(40),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(189),
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
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(64),
    [anon_sym_compose] = ACTIONS(64),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(64),
    [anon_sym_lyric] = ACTIONS(64),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(64),
    [anon_sym_arrange] = ACTIONS(64),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(64),
    [anon_sym_vo] = ACTIONS(64),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(64),
    [anon_sym_illust] = ACTIONS(64),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
  },
  [56] = {
    [anon_sym_u300a] = ACTIONS(162),
    [sym_creator_name] = ACTIONS(162),
    [anon_sym_Music] = ACTIONS(162),
    [anon_sym_music] = ACTIONS(162),
    [anon_sym_Composition] = ACTIONS(162),
    [anon_sym_composition] = ACTIONS(162),
    [anon_sym_Composer] = ACTIONS(162),
    [anon_sym_composer] = ACTIONS(162),
    [anon_sym_Compose] = ACTIONS(162),
    [anon_sym_compose] = ACTIONS(162),
    [anon_sym_Lyrics] = ACTIONS(162),
    [anon_sym_lyrics] = ACTIONS(162),
    [anon_sym_Lyricist] = ACTIONS(162),
    [anon_sym_lyricist] = ACTIONS(162),
    [anon_sym_Lyric] = ACTIONS(162),
    [anon_sym_lyric] = ACTIONS(162),
    [anon_sym_Arrangement] = ACTIONS(162),
    [anon_sym_arrangement] = ACTIONS(162),
    [anon_sym_Arranger] = ACTIONS(162),
    [anon_sym_arranger] = ACTIONS(162),
    [anon_sym_Arrange] = ACTIONS(162),
    [anon_sym_arrange] = ACTIONS(162),
    [anon_sym_Vocal] = ACTIONS(162),
    [anon_sym_vocal] = ACTIONS(162),
    [anon_sym_Vo] = ACTIONS(162),
    [anon_sym_vo] = ACTIONS(162),
    [anon_sym_Performer] = ACTIONS(162),
    [anon_sym_performer] = ACTIONS(162),
    [anon_sym_Illustration] = ACTIONS(162),
    [anon_sym_illustration] = ACTIONS(162),
    [anon_sym_Illust] = ACTIONS(162),
    [anon_sym_illust] = ACTIONS(162),
    [anon_sym_Label] = ACTIONS(162),
    [anon_sym_label] = ACTIONS(162),
    [anon_sym_Circle] = ACTIONS(162),
    [anon_sym_circle] = ACTIONS(162),
    [anon_sym_Producer] = ACTIONS(162),
    [anon_sym_producer] = ACTIONS(162),
    [anon_sym_Recording] = ACTIONS(162),
    [anon_sym_recording] = ACTIONS(162),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(162),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(162),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(162),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(162),
    [anon_sym_u6b4cu5531] = ACTIONS(162),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(162),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(162),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(162),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(162),
    [anon_sym_u4f5cu66f2] = ACTIONS(162),
    [anon_sym_u7de8u66f2] = ACTIONS(162),
    [anon_sym_u4f5cu8a5e] = ACTIONS(162),
    [anon_sym_u5382u724c] = ACTIONS(162),
    [anon_sym_u811au672c] = ACTIONS(162),
    [anon_sym_u63d2u56fe] = ACTIONS(162),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(162),
    [anon_sym_u51fau7248u65b9] = ACTIONS(162),
    [anon_sym_u5f55u97f3] = ACTIONS(162),
    [anon_sym_u539fu4f5c] = ACTIONS(162),
  },
  [57] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [anon_sym_Music] = ACTIONS(95),
    [anon_sym_music] = ACTIONS(95),
    [anon_sym_Composition] = ACTIONS(95),
    [anon_sym_composition] = ACTIONS(95),
    [anon_sym_Composer] = ACTIONS(95),
    [anon_sym_composer] = ACTIONS(95),
    [anon_sym_Compose] = ACTIONS(95),
    [anon_sym_compose] = ACTIONS(95),
    [anon_sym_Lyrics] = ACTIONS(95),
    [anon_sym_lyrics] = ACTIONS(95),
    [anon_sym_Lyricist] = ACTIONS(95),
    [anon_sym_lyricist] = ACTIONS(95),
    [anon_sym_Lyric] = ACTIONS(95),
    [anon_sym_lyric] = ACTIONS(95),
    [anon_sym_Arrangement] = ACTIONS(95),
    [anon_sym_arrangement] = ACTIONS(95),
    [anon_sym_Arranger] = ACTIONS(95),
    [anon_sym_arranger] = ACTIONS(95),
    [anon_sym_Arrange] = ACTIONS(95),
    [anon_sym_arrange] = ACTIONS(95),
    [anon_sym_Vocal] = ACTIONS(95),
    [anon_sym_vocal] = ACTIONS(95),
    [anon_sym_Vo] = ACTIONS(95),
    [anon_sym_vo] = ACTIONS(95),
    [anon_sym_Performer] = ACTIONS(95),
    [anon_sym_performer] = ACTIONS(95),
    [anon_sym_Illustration] = ACTIONS(95),
    [anon_sym_illustration] = ACTIONS(95),
    [anon_sym_Illust] = ACTIONS(95),
    [anon_sym_illust] = ACTIONS(95),
    [anon_sym_Label] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_Circle] = ACTIONS(95),
    [anon_sym_circle] = ACTIONS(95),
    [anon_sym_Producer] = ACTIONS(95),
    [anon_sym_producer] = ACTIONS(95),
    [anon_sym_Recording] = ACTIONS(95),
    [anon_sym_recording] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
  },
  [58] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(175),
    [anon_sym_u300a] = ACTIONS(175),
    [anon_sym_Music] = ACTIONS(175),
    [anon_sym_music] = ACTIONS(175),
    [anon_sym_Composition] = ACTIONS(175),
    [anon_sym_composition] = ACTIONS(175),
    [anon_sym_Composer] = ACTIONS(175),
    [anon_sym_composer] = ACTIONS(175),
    [anon_sym_Compose] = ACTIONS(175),
    [anon_sym_compose] = ACTIONS(175),
    [anon_sym_Lyrics] = ACTIONS(175),
    [anon_sym_lyrics] = ACTIONS(175),
    [anon_sym_Lyricist] = ACTIONS(175),
    [anon_sym_lyricist] = ACTIONS(175),
    [anon_sym_Lyric] = ACTIONS(175),
    [anon_sym_lyric] = ACTIONS(175),
    [anon_sym_Arrangement] = ACTIONS(175),
    [anon_sym_arrangement] = ACTIONS(175),
    [anon_sym_Arranger] = ACTIONS(175),
    [anon_sym_arranger] = ACTIONS(175),
    [anon_sym_Arrange] = ACTIONS(175),
    [anon_sym_arrange] = ACTIONS(175),
    [anon_sym_Vocal] = ACTIONS(175),
    [anon_sym_vocal] = ACTIONS(175),
    [anon_sym_Vo] = ACTIONS(175),
    [anon_sym_vo] = ACTIONS(175),
    [anon_sym_Performer] = ACTIONS(175),
    [anon_sym_performer] = ACTIONS(175),
    [anon_sym_Illustration] = ACTIONS(175),
    [anon_sym_illustration] = ACTIONS(175),
    [anon_sym_Illust] = ACTIONS(175),
    [anon_sym_illust] = ACTIONS(175),
    [anon_sym_Label] = ACTIONS(175),
    [anon_sym_label] = ACTIONS(175),
    [anon_sym_Circle] = ACTIONS(175),
    [anon_sym_circle] = ACTIONS(175),
    [anon_sym_Producer] = ACTIONS(175),
    [anon_sym_producer] = ACTIONS(175),
    [anon_sym_Recording] = ACTIONS(175),
    [anon_sym_recording] = ACTIONS(175),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(175),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(175),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(175),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(175),
    [anon_sym_u6b4cu5531] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(175),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu66f2] = ACTIONS(175),
    [anon_sym_u7de8u66f2] = ACTIONS(175),
    [anon_sym_u4f5cu8a5e] = ACTIONS(175),
    [anon_sym_u5382u724c] = ACTIONS(175),
    [anon_sym_u811au672c] = ACTIONS(175),
    [anon_sym_u63d2u56fe] = ACTIONS(175),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(175),
    [anon_sym_u51fau7248u65b9] = ACTIONS(175),
    [anon_sym_u5f55u97f3] = ACTIONS(175),
    [anon_sym_u539fu4f5c] = ACTIONS(175),
  },
  [59] = {
    [anon_sym_AT] = ACTIONS(113),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(113),
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
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_Music] = ACTIONS(192),
    [anon_sym_music] = ACTIONS(192),
    [anon_sym_Composition] = ACTIONS(192),
    [anon_sym_composition] = ACTIONS(192),
    [anon_sym_Composer] = ACTIONS(192),
    [anon_sym_composer] = ACTIONS(192),
    [anon_sym_Compose] = ACTIONS(194),
    [anon_sym_compose] = ACTIONS(194),
    [anon_sym_Lyrics] = ACTIONS(192),
    [anon_sym_lyrics] = ACTIONS(192),
    [anon_sym_Lyricist] = ACTIONS(192),
    [anon_sym_lyricist] = ACTIONS(192),
    [anon_sym_Lyric] = ACTIONS(194),
    [anon_sym_lyric] = ACTIONS(194),
    [anon_sym_Arrangement] = ACTIONS(192),
    [anon_sym_arrangement] = ACTIONS(192),
    [anon_sym_Arranger] = ACTIONS(192),
    [anon_sym_arranger] = ACTIONS(192),
    [anon_sym_Arrange] = ACTIONS(194),
    [anon_sym_arrange] = ACTIONS(194),
    [anon_sym_Vocal] = ACTIONS(192),
    [anon_sym_vocal] = ACTIONS(192),
    [anon_sym_Vo] = ACTIONS(194),
    [anon_sym_vo] = ACTIONS(194),
    [anon_sym_Performer] = ACTIONS(192),
    [anon_sym_performer] = ACTIONS(192),
    [anon_sym_Illustration] = ACTIONS(192),
    [anon_sym_illustration] = ACTIONS(192),
    [anon_sym_Illust] = ACTIONS(194),
    [anon_sym_illust] = ACTIONS(194),
    [anon_sym_Label] = ACTIONS(192),
    [anon_sym_label] = ACTIONS(192),
    [anon_sym_Circle] = ACTIONS(192),
    [anon_sym_circle] = ACTIONS(192),
    [anon_sym_Producer] = ACTIONS(192),
    [anon_sym_producer] = ACTIONS(192),
    [anon_sym_Recording] = ACTIONS(192),
    [anon_sym_recording] = ACTIONS(192),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(192),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(192),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(192),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(192),
    [anon_sym_u6b4cu5531] = ACTIONS(192),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(192),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(192),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(192),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(192),
    [anon_sym_u4f5cu66f2] = ACTIONS(192),
    [anon_sym_u7de8u66f2] = ACTIONS(192),
    [anon_sym_u4f5cu8a5e] = ACTIONS(194),
    [anon_sym_u5382u724c] = ACTIONS(192),
    [anon_sym_u811au672c] = ACTIONS(192),
    [anon_sym_u63d2u56fe] = ACTIONS(192),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(192),
    [anon_sym_u51fau7248u65b9] = ACTIONS(192),
    [anon_sym_u5f55u97f3] = ACTIONS(192),
    [anon_sym_u539fu4f5c] = ACTIONS(192),
  },
  [61] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(181),
    [anon_sym_u300a] = ACTIONS(181),
    [anon_sym_Music] = ACTIONS(181),
    [anon_sym_music] = ACTIONS(181),
    [anon_sym_Composition] = ACTIONS(181),
    [anon_sym_composition] = ACTIONS(181),
    [anon_sym_Composer] = ACTIONS(181),
    [anon_sym_composer] = ACTIONS(181),
    [anon_sym_Compose] = ACTIONS(181),
    [anon_sym_compose] = ACTIONS(181),
    [anon_sym_Lyrics] = ACTIONS(181),
    [anon_sym_lyrics] = ACTIONS(181),
    [anon_sym_Lyricist] = ACTIONS(181),
    [anon_sym_lyricist] = ACTIONS(181),
    [anon_sym_Lyric] = ACTIONS(181),
    [anon_sym_lyric] = ACTIONS(181),
    [anon_sym_Arrangement] = ACTIONS(181),
    [anon_sym_arrangement] = ACTIONS(181),
    [anon_sym_Arranger] = ACTIONS(181),
    [anon_sym_arranger] = ACTIONS(181),
    [anon_sym_Arrange] = ACTIONS(181),
    [anon_sym_arrange] = ACTIONS(181),
    [anon_sym_Vocal] = ACTIONS(181),
    [anon_sym_vocal] = ACTIONS(181),
    [anon_sym_Vo] = ACTIONS(181),
    [anon_sym_vo] = ACTIONS(181),
    [anon_sym_Performer] = ACTIONS(181),
    [anon_sym_performer] = ACTIONS(181),
    [anon_sym_Illustration] = ACTIONS(181),
    [anon_sym_illustration] = ACTIONS(181),
    [anon_sym_Illust] = ACTIONS(181),
    [anon_sym_illust] = ACTIONS(181),
    [anon_sym_Label] = ACTIONS(181),
    [anon_sym_label] = ACTIONS(181),
    [anon_sym_Circle] = ACTIONS(181),
    [anon_sym_circle] = ACTIONS(181),
    [anon_sym_Producer] = ACTIONS(181),
    [anon_sym_producer] = ACTIONS(181),
    [anon_sym_Recording] = ACTIONS(181),
    [anon_sym_recording] = ACTIONS(181),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(181),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(181),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(181),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(181),
    [anon_sym_u6b4cu5531] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(181),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu66f2] = ACTIONS(181),
    [anon_sym_u7de8u66f2] = ACTIONS(181),
    [anon_sym_u4f5cu8a5e] = ACTIONS(181),
    [anon_sym_u5382u724c] = ACTIONS(181),
    [anon_sym_u811au672c] = ACTIONS(181),
    [anon_sym_u63d2u56fe] = ACTIONS(181),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(181),
    [anon_sym_u51fau7248u65b9] = ACTIONS(181),
    [anon_sym_u5f55u97f3] = ACTIONS(181),
    [anon_sym_u539fu4f5c] = ACTIONS(181),
  },
  [62] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(64),
    [anon_sym_compose] = ACTIONS(64),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(64),
    [anon_sym_lyric] = ACTIONS(64),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(64),
    [anon_sym_arrange] = ACTIONS(64),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(64),
    [anon_sym_vo] = ACTIONS(64),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(64),
    [anon_sym_illust] = ACTIONS(64),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(10), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(11), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(16), 1,
      sym_song_title,
    STATE(41), 1,
      sym__quotable_song_title_maybefeat,
    STATE(43), 1,
      sym__song_title_maybefeat,
    STATE(65), 1,
      aux_sym_source_file_repeat1,
    STATE(87), 1,
      sym_song,
  [28] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(11), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(12), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(16), 1,
      sym_song_title,
    STATE(41), 1,
      sym__quotable_song_title_maybefeat,
    STATE(43), 1,
      sym__song_title_maybefeat,
    STATE(66), 1,
      aux_sym_source_file_repeat1,
    STATE(87), 1,
      sym_song,
  [56] = 9,
    ACTIONS(3), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(5), 1,
      anon_sym_u300a,
    STATE(6), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(11), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(16), 1,
      sym_song_title,
    STATE(41), 1,
      sym__quotable_song_title_maybefeat,
    STATE(43), 1,
      sym__song_title_maybefeat,
    STATE(66), 1,
      aux_sym_source_file_repeat1,
    STATE(76), 1,
      sym_song,
  [84] = 8,
    ACTIONS(196), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(199), 1,
      anon_sym_u300a,
    STATE(23), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(24), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(31), 1,
      sym_song_title,
    STATE(43), 1,
      sym__song_title_maybefeat,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(66), 2,
      sym_song,
      aux_sym_source_file_repeat1,
  [110] = 4,
    ACTIONS(202), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(68), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(75), 1,
      sym_song_title,
    STATE(100), 1,
      sym__song_title_maybefeat,
  [123] = 3,
    ACTIONS(204), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(69), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(58), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [134] = 3,
    ACTIONS(206), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(69), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(40), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [145] = 4,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(30), 1,
      anon_sym_u300b,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(15), 1,
      sym__quotable_creator_name,
  [158] = 4,
    ACTIONS(11), 1,
      anon_sym_u300b,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(15), 1,
      sym__quotable_creator_name,
  [171] = 3,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(25), 1,
      sym__quotable_creator_name,
  [181] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 1,
      sym__sep,
    STATE(86), 1,
      aux_sym_credit_field_repeat2,
  [191] = 3,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      sym__sep,
    STATE(89), 1,
      aux_sym_credit_field_repeat2,
  [201] = 3,
    ACTIONS(72), 1,
      anon_sym_u300b,
    ACTIONS(219), 1,
      aux_sym_feat_field_token1,
    STATE(36), 1,
      sym_feat_field,
  [211] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [219] = 3,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      sym__sep,
    STATE(74), 1,
      aux_sym_credit_field_repeat2,
  [229] = 3,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(30), 1,
      sym__quotable_creator_name,
  [239] = 3,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(88), 1,
      sym__quotable_creator_name,
  [249] = 3,
    ACTIONS(123), 1,
      anon_sym_u300a,
    ACTIONS(229), 1,
      sym_creator_name,
    STATE(91), 1,
      sym__quotable_creator_name,
  [259] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [267] = 3,
    ACTIONS(13), 1,
      anon_sym_u300a,
    ACTIONS(209), 1,
      sym_creator_name,
    STATE(15), 1,
      sym__quotable_creator_name,
  [277] = 3,
    ACTIONS(87), 1,
      anon_sym_u300b,
    ACTIONS(233), 1,
      sym__ssep,
    STATE(9), 1,
      aux_sym_feat_field_repeat1,
  [287] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [295] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [303] = 3,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      sym__sep,
    STATE(89), 1,
      aux_sym_credit_field_repeat2,
  [313] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [321] = 3,
    ACTIONS(103), 1,
      anon_sym_u300b,
    ACTIONS(245), 1,
      sym__ssep,
    STATE(83), 1,
      aux_sym_feat_field_repeat1,
  [331] = 3,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      sym__sep,
    STATE(89), 1,
      aux_sym_credit_field_repeat2,
  [341] = 1,
    ACTIONS(113), 3,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [347] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      sym__sep,
  [354] = 2,
    ACTIONS(256), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(49), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [361] = 1,
    ACTIONS(237), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [366] = 2,
    ACTIONS(258), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(39), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [373] = 1,
    ACTIONS(237), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [378] = 2,
    ACTIONS(107), 1,
      sym__sep,
    ACTIONS(109), 1,
      anon_sym_LF,
  [385] = 2,
    ACTIONS(78), 1,
      sym__sep,
    ACTIONS(80), 1,
      anon_sym_LF,
  [392] = 1,
    ACTIONS(260), 1,
      anon_sym_u300b,
  [396] = 1,
    ACTIONS(262), 1,
      anon_sym_u300b,
  [400] = 1,
    ACTIONS(264), 1,
      anon_sym_u300b,
  [404] = 1,
    ACTIONS(266), 1,
      sym__sep,
  [408] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [412] = 1,
    ACTIONS(270), 1,
      aux_sym__quotable_creator_name_token1,
  [416] = 1,
    ACTIONS(272), 1,
      aux_sym__quotable_creator_name_token1,
  [420] = 1,
    ACTIONS(274), 1,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 28,
  [SMALL_STATE(65)] = 56,
  [SMALL_STATE(66)] = 84,
  [SMALL_STATE(67)] = 110,
  [SMALL_STATE(68)] = 123,
  [SMALL_STATE(69)] = 134,
  [SMALL_STATE(70)] = 145,
  [SMALL_STATE(71)] = 158,
  [SMALL_STATE(72)] = 171,
  [SMALL_STATE(73)] = 181,
  [SMALL_STATE(74)] = 191,
  [SMALL_STATE(75)] = 201,
  [SMALL_STATE(76)] = 211,
  [SMALL_STATE(77)] = 219,
  [SMALL_STATE(78)] = 229,
  [SMALL_STATE(79)] = 239,
  [SMALL_STATE(80)] = 249,
  [SMALL_STATE(81)] = 259,
  [SMALL_STATE(82)] = 267,
  [SMALL_STATE(83)] = 277,
  [SMALL_STATE(84)] = 287,
  [SMALL_STATE(85)] = 295,
  [SMALL_STATE(86)] = 303,
  [SMALL_STATE(87)] = 313,
  [SMALL_STATE(88)] = 321,
  [SMALL_STATE(89)] = 331,
  [SMALL_STATE(90)] = 341,
  [SMALL_STATE(91)] = 347,
  [SMALL_STATE(92)] = 354,
  [SMALL_STATE(93)] = 361,
  [SMALL_STATE(94)] = 366,
  [SMALL_STATE(95)] = 373,
  [SMALL_STATE(96)] = 378,
  [SMALL_STATE(97)] = 385,
  [SMALL_STATE(98)] = 392,
  [SMALL_STATE(99)] = 396,
  [SMALL_STATE(100)] = 400,
  [SMALL_STATE(101)] = 404,
  [SMALL_STATE(102)] = 408,
  [SMALL_STATE(103)] = 412,
  [SMALL_STATE(104)] = 416,
  [SMALL_STATE(105)] = 420,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 4, 0, 11),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 4, 0, 11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 10),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 14),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 14),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 14), SHIFT_REPEAT(82),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 11),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 11),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 13),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 13),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 10),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 10),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 12),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 9),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 11),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 11),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 10),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 11),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 11),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 10),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 14),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 14), SHIFT_REPEAT(80),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
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
