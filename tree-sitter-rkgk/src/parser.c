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
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 97
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_DISC = 1,
  anon_sym_LF = 2,
  anon_sym_AT = 3,
  anon_sym_SLASH_SLASH = 4,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token1 = 5,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token2 = 6,
  anon_sym_u300a = 7,
  anon_sym_u300b = 8,
  aux_sym_feat_field_token1 = 9,
  aux_sym__quotable_creator_name_token1 = 10,
  sym_creator_name = 11,
  anon_sym_Music = 12,
  anon_sym_music = 13,
  anon_sym_Composition = 14,
  anon_sym_composition = 15,
  anon_sym_Composer = 16,
  anon_sym_composer = 17,
  anon_sym_Compose = 18,
  anon_sym_compose = 19,
  anon_sym_Lyrics = 20,
  anon_sym_lyrics = 21,
  anon_sym_Lyricist = 22,
  anon_sym_lyricist = 23,
  anon_sym_Lyric = 24,
  anon_sym_lyric = 25,
  anon_sym_Arrangement = 26,
  anon_sym_arrangement = 27,
  anon_sym_Arranger = 28,
  anon_sym_arranger = 29,
  anon_sym_Arrange = 30,
  anon_sym_arrange = 31,
  anon_sym_Vocal = 32,
  anon_sym_vocal = 33,
  anon_sym_Vo = 34,
  anon_sym_vo = 35,
  anon_sym_Performer = 36,
  anon_sym_performer = 37,
  anon_sym_Illustration = 38,
  anon_sym_illustration = 39,
  anon_sym_Illust = 40,
  anon_sym_illust = 41,
  anon_sym_Label = 42,
  anon_sym_label = 43,
  anon_sym_Circle = 44,
  anon_sym_circle = 45,
  anon_sym_Producer = 46,
  anon_sym_producer = 47,
  anon_sym_Recording = 48,
  anon_sym_recording = 49,
  anon_sym_u30dcu30fcu30abu30eb = 50,
  anon_sym_u30a2u30ecu30f3u30b8 = 51,
  anon_sym_u30a4u30e9u30b9u30c8 = 52,
  anon_sym_u30ecu30fcu30d9u30eb = 53,
  anon_sym_u6b4cu5531 = 54,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 55,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 56,
  anon_sym_u4f5cu8a5eu66f2 = 57,
  anon_sym_u4f5cu7de8u66f2 = 58,
  anon_sym_u4f5cu66f2 = 59,
  anon_sym_u7de8u66f2 = 60,
  anon_sym_u4f5cu8a5e = 61,
  anon_sym_u5382u724c = 62,
  anon_sym_u811au672c = 63,
  anon_sym_u63d2u56fe = 64,
  anon_sym_u5236u4f5cu4eba = 65,
  anon_sym_u51fau7248u65b9 = 66,
  anon_sym_u5f55u97f3 = 67,
  anon_sym_u539fu4f5c = 68,
  sym__sep = 69,
  sym__ssep = 70,
  sym_source_file = 71,
  sym_disc = 72,
  sym__disc = 73,
  sym_song = 74,
  sym_credit_block = 75,
  sym_credit_field = 76,
  sym__quotable_song_title_maybefeat_maybecomment = 77,
  sym__quotable_song_title_maybefeat = 78,
  sym__song_title_maybefeat = 79,
  sym_song_title = 80,
  sym_feat_field = 81,
  sym__quotable_creator_name = 82,
  sym_role = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym__disc_repeat1 = 85,
  aux_sym_credit_block_repeat1 = 86,
  aux_sym_credit_field_repeat1 = 87,
  aux_sym_credit_field_repeat2 = 88,
  aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1 = 89,
  aux_sym_feat_field_repeat1 = 90,
  alias_sym_creator_sep = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DISC] = "DISC",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
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
  [sym_disc] = "disc",
  [sym__disc] = "_disc",
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
  [aux_sym__disc_repeat1] = "_disc_repeat1",
  [aux_sym_credit_block_repeat1] = "credit_block_repeat1",
  [aux_sym_credit_field_repeat1] = "credit_field_repeat1",
  [aux_sym_credit_field_repeat2] = "credit_field_repeat2",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = "_quotable_song_title_maybefeat_maybecomment_repeat1",
  [aux_sym_feat_field_repeat1] = "feat_field_repeat1",
  [alias_sym_creator_sep] = "creator_sep",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DISC] = anon_sym_DISC,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_disc] = sym_disc,
  [sym__disc] = sym__disc,
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
  [aux_sym__disc_repeat1] = aux_sym__disc_repeat1,
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
  [anon_sym_DISC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [sym_disc] = {
    .visible = true,
    .named = true,
  },
  [sym__disc] = {
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
  [aux_sym__disc_repeat1] = {
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
  [8] = {.index = 1, .length = 1},
  [9] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 3},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 4},
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
    {field_creator, 1, .inherited = true},
  [7] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [10] =
    {field_creator, 1},
  [11] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [13] =
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
    [2] = aux_sym__quotable_song_title_maybefeat_maybecomment_token2,
  },
  [12] = {
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
  [12] = 3,
  [13] = 6,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 4,
  [19] = 4,
  [20] = 5,
  [21] = 21,
  [22] = 10,
  [23] = 23,
  [24] = 24,
  [25] = 2,
  [26] = 9,
  [27] = 27,
  [28] = 8,
  [29] = 6,
  [30] = 30,
  [31] = 16,
  [32] = 32,
  [33] = 14,
  [34] = 6,
  [35] = 5,
  [36] = 4,
  [37] = 21,
  [38] = 24,
  [39] = 27,
  [40] = 8,
  [41] = 27,
  [42] = 10,
  [43] = 9,
  [44] = 17,
  [45] = 24,
  [46] = 46,
  [47] = 24,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 27,
  [53] = 17,
  [54] = 46,
  [55] = 8,
  [56] = 56,
  [57] = 16,
  [58] = 21,
  [59] = 14,
  [60] = 60,
  [61] = 46,
  [62] = 46,
  [63] = 8,
  [64] = 48,
  [65] = 21,
  [66] = 48,
  [67] = 67,
  [68] = 51,
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 50,
  [73] = 51,
  [74] = 74,
  [75] = 75,
  [76] = 70,
  [77] = 77,
  [78] = 60,
  [79] = 8,
  [80] = 48,
  [81] = 51,
  [82] = 21,
  [83] = 70,
  [84] = 74,
  [85] = 74,
  [86] = 50,
  [87] = 71,
  [88] = 71,
  [89] = 75,
  [90] = 75,
  [91] = 74,
  [92] = 70,
  [93] = 71,
  [94] = 21,
  [95] = 75,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 99,
  [102] = 10,
  [103] = 8,
  [104] = 104,
  [105] = 9,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 5,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 16,
  [116] = 14,
  [117] = 21,
  [118] = 118,
  [119] = 118,
  [120] = 107,
  [121] = 118,
  [122] = 118,
  [123] = 104,
  [124] = 108,
  [125] = 125,
  [126] = 111,
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 130,
  [131] = 114,
  [132] = 17,
  [133] = 114,
  [134] = 127,
  [135] = 127,
  [136] = 114,
  [137] = 137,
  [138] = 15,
  [139] = 139,
  [140] = 137,
  [141] = 137,
  [142] = 104,
  [143] = 23,
  [144] = 144,
  [145] = 108,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 155,
  [156] = 156,
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
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x300b) ADVANCE(267);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(255);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 0x300b) ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(567);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(271);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(269);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 386,
        'C', 327,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x300a, 266,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 436,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(9);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 115,
        'C', 63,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300a, 266,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 174,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(209);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(524);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(526);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x300b) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(159);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 159:
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x300b) ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(159);
      END_STATE();
    case 160:
      if (lookahead == 0x30ab) ADVANCE(166);
      END_STATE();
    case 161:
      if (lookahead == 0x30b8) ADVANCE(530);
      END_STATE();
    case 162:
      if (lookahead == 0x30b9) ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 0x30c8) ADVANCE(532);
      END_STATE();
    case 164:
      if (lookahead == 0x30d9) ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == 0x30e9) ADVANCE(162);
      END_STATE();
    case 166:
      if (lookahead == 0x30eb) ADVANCE(528);
      END_STATE();
    case 167:
      if (lookahead == 0x30eb) ADVANCE(534);
      END_STATE();
    case 168:
      if (lookahead == 0x30ec) ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 0x30f3) ADVANCE(161);
      END_STATE();
    case 170:
      if (lookahead == 0x30fc) ADVANCE(160);
      END_STATE();
    case 171:
      if (lookahead == 0x30fc) ADVANCE(164);
      END_STATE();
    case 172:
      if (lookahead == 0x4eba) ADVANCE(558);
      END_STATE();
    case 173:
      if (lookahead == 0x4f5c) ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == 0x4f5c) ADVANCE(564);
      END_STATE();
    case 175:
      if (lookahead == 0x4f5c) ADVANCE(564);
      if (lookahead == 0x66f2) ADVANCE(188);
      END_STATE();
    case 176:
      if (lookahead == 0x5531) ADVANCE(536);
      END_STATE();
    case 177:
      if (lookahead == 0x56fe) ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == 0x65b9) ADVANCE(560);
      END_STATE();
    case 179:
      if (lookahead == 0x66f2) ADVANCE(546);
      if (lookahead == 0x7de8) ADVANCE(181);
      if (lookahead == 0x8a5e) ADVANCE(550);
      END_STATE();
    case 180:
      if (lookahead == 0x66f2) ADVANCE(548);
      END_STATE();
    case 181:
      if (lookahead == 0x66f2) ADVANCE(544);
      END_STATE();
    case 182:
      if (lookahead == 0x66f2) ADVANCE(540);
      if (lookahead == 0x7de8) ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 0x66f2) ADVANCE(538);
      END_STATE();
    case 184:
      if (lookahead == 0x672c) ADVANCE(554);
      END_STATE();
    case 185:
      if (lookahead == 0x7248) ADVANCE(178);
      END_STATE();
    case 186:
      if (lookahead == 0x724c) ADVANCE(552);
      END_STATE();
    case 187:
      if (lookahead == 0x97f3) ADVANCE(562);
      END_STATE();
    case 188:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 189:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(190);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(226);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(567);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 190:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(190);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 191:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(191);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(255);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 192:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(227);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(567);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 193:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 194:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(194);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(255);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 195:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '\n', 211,
        'A', 386,
        'C', 327,
        'D', 277,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x300a, 266,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 436,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
        '\t', 218,
        ' ', 218,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(274);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(217);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 196:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(196);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 197:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(197);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 0x30a2) ADVANCE(250);
      if (lookahead == 0x30a4) ADVANCE(249);
      if (lookahead == 0x30dc) ADVANCE(251);
      if (lookahead == 0x30ec) ADVANCE(252);
      if (lookahead == 0x4f5c) ADVANCE(258);
      if (lookahead == 0x51fa) ADVANCE(261);
      if (lookahead == 0x5236) ADVANCE(253);
      if (lookahead == 0x5382) ADVANCE(262);
      if (lookahead == 0x539f) ADVANCE(254);
      if (lookahead == 0x5f55) ADVANCE(263);
      if (lookahead == 0x63d2) ADVANCE(257);
      if (lookahead == 0x6b4c) ADVANCE(256);
      if (lookahead == 0x7de8) ADVANCE(259);
      if (lookahead == 0x811a) ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 198:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(198);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 0x300a) ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 199:
      if (eof) ADVANCE(208);
      if (lookahead == '\n') SKIP(199);
      if (lookahead == 0x300a) ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 200:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '\n', 213,
        'A', 386,
        'C', 327,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x300a, 266,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 436,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
        '\t', 219,
        ' ', 219,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(275);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(217);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 201:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 214,
        'A', 115,
        'C', 63,
        'D', 11,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'f', 39,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300b, 267,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 175,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201);
      END_STATE();
    case 202:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 214,
        'A', 115,
        'C', 63,
        'D', 11,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300a, 266,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 175,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      END_STATE();
    case 203:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 214,
        'A', 115,
        'C', 63,
        'D', 11,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300b, 267,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 175,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
        '\t', 568,
        ' ', 568,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(204);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(569);
      END_STATE();
    case 204:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 214,
        'A', 115,
        'C', 63,
        'D', 11,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300b, 267,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 175,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(204);
      END_STATE();
    case 205:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 214,
        'A', 115,
        'C', 63,
        'I', 75,
        'L', 13,
        'M', 152,
        'P', 48,
        'R', 38,
        'V', 99,
        'a', 131,
        'c', 74,
        'i', 84,
        'l', 20,
        'm', 157,
        'p', 55,
        'r', 56,
        'v', 100,
        0x300a, 266,
        0x30a2, 168,
        0x30a4, 165,
        0x30dc, 170,
        0x30ec, 171,
        0x4f5c, 179,
        0x51fa, 185,
        0x5236, 173,
        0x5382, 186,
        0x539f, 175,
        0x5f55, 187,
        0x63d2, 177,
        0x6b4c, 176,
        0x7de8, 180,
        0x811a, 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(205);
      END_STATE();
    case 206:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 215,
        'A', 386,
        'C', 327,
        'D', 277,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x300a, 266,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 435,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(202);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(272);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 207:
      if (eof) ADVANCE(208);
      ADVANCE_MAP(
        '/', 7,
        '@', 215,
        'A', 386,
        'C', 327,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x300a, 266,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 435,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(205);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(273);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DISC);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_AT);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '\n', 211,
        'A', 244,
        'C', 238,
        'D', 229,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x300a, 266,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '\n', 213,
        'A', 244,
        'C', 238,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x300a, 266,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 223,
        '@', 214,
        'A', 244,
        'C', 238,
        'D', 229,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'f', 233,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x300a, 266,
        0x300b, 267,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 255,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 223,
        '@', 214,
        'A', 244,
        'C', 238,
        'D', 229,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'f', 233,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 255,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '/', 223,
        '@', 214,
        'A', 244,
        'C', 238,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'f', 233,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 255,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '@', 214,
        'A', 244,
        'C', 238,
        'D', 229,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        '@', 214,
        'A', 244,
        'C', 238,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        'A', 244,
        'C', 238,
        'D', 229,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x300a, 266,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      ADVANCE_MAP(
        'A', 244,
        'C', 238,
        'I', 240,
        'L', 230,
        'M', 246,
        'P', 234,
        'R', 232,
        'V', 242,
        'a', 245,
        'c', 239,
        'i', 241,
        'l', 231,
        'm', 247,
        'p', 235,
        'r', 236,
        'v', 243,
        0x300a, 266,
        0x30a2, 250,
        0x30a4, 249,
        0x30dc, 251,
        0x30ec, 252,
        0x4f5c, 258,
        0x51fa, 261,
        0x5236, 253,
        0x5382, 262,
        0x539f, 254,
        0x5f55, 263,
        0x63d2, 257,
        0x6b4c, 256,
        0x7de8, 259,
        0x811a, 260,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 0x300b) ADVANCE(267);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x300a) ADVANCE(266);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30e9) ADVANCE(162);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30ec) ADVANCE(169);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(160);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x30fc) ADVANCE(164);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(172);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(564);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x4f5c) ADVANCE(564);
      if (lookahead == 0x66f2) ADVANCE(188);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x5531) ADVANCE(536);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x56fe) ADVANCE(556);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(546);
      if (lookahead == 0x7de8) ADVANCE(181);
      if (lookahead == 0x8a5e) ADVANCE(550);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x66f2) ADVANCE(548);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x672c) ADVANCE(554);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x7248) ADVANCE(178);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x724c) ADVANCE(552);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == 0x97f3) ADVANCE(562);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 215,
        'A', 386,
        'C', 327,
        'D', 277,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 435,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(272);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 215,
        'A', 386,
        'C', 327,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 435,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(273);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 386,
        'C', 327,
        'D', 277,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 436,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(274);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 386,
        'C', 327,
        'I', 343,
        'L', 279,
        'M', 415,
        'P', 312,
        'R', 303,
        'V', 363,
        'a', 396,
        'c', 338,
        'i', 348,
        'l', 285,
        'm', 420,
        'p', 319,
        'r', 320,
        'v', 364,
        0x30a2, 429,
        0x30a4, 426,
        0x30dc, 431,
        0x30ec, 432,
        0x4f5c, 440,
        0x51fa, 446,
        0x5236, 434,
        0x5382, 447,
        0x539f, 436,
        0x5f55, 448,
        0x63d2, 438,
        0x6b4c, 437,
        0x7de8, 441,
        0x811a, 445,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(275);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'C') ADVANCE(210);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'I') ADVANCE(278);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'S') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(353);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(340);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(342);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(413);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'y') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(362);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(311);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(313);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(314);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(315);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(294);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(517);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(519);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(489);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(411);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(491);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(339);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(341);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(361);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(298);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(525);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(527);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(306);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(308);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(289);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(290);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(291);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(292);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(513);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(493);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(515);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(495);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(304);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(305);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(417);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(316);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(317);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(325);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(457);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(459);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(505);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(507);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(323);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(324);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(410);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(326);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(299);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(400);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(389);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(387);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(301);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(280);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(328);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(321);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(521);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(523);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(501);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(503);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(293);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(300);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(330);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(352);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(296);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(302);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(286);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(322);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(307);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(406);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(309);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(407);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(408);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(329);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(331);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(475);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(481);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(332);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(333);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(334);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(335);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(397);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(295);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(297);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(427);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(533);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(423);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(529);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(535);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(421);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(425);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(559);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(433);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(565);
      if (lookahead == 0x66f2) ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(565);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(537);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(557);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(561);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(547);
      if (lookahead == 0x7de8) ADVANCE(442);
      if (lookahead == 0x8a5e) ADVANCE(551);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(549);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(545);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(541);
      if (lookahead == 0x7de8) ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(539);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(555);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(439);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(553);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(563);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '\t', 265,
        ' ', 265,
        '&', 265,
        ',', 265,
        '/', 265,
        ':', 265,
        0x3000, 265,
        0x3001, 265,
        0x300a, 265,
        0x300b, 265,
        0x30fb, 265,
        0xff06, 265,
        0xff1a, 265,
        0xff1b, 265,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(461);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(463);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 's') ADVANCE(469);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 's') ADVANCE(471);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(485);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(487);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(281);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(282);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(283);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(284);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(182);
      if (lookahead == 0x66f2) ADVANCE(542);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(443);
      if (lookahead == 0x66f2) ADVANCE(543);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(451);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 566,
        ' ', 566,
        '&', 567,
        ',', 567,
        '/', 567,
        ':', 567,
        0x3000, 567,
        0x3001, 567,
        0x30fb, 567,
        0xff06, 567,
        0xff1a, 567,
        0xff1b, 567,
      );
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 567,
        ' ', 567,
        '&', 567,
        ',', 567,
        '/', 567,
        ':', 567,
        0x3000, 567,
        0x3001, 567,
        0x30fb, 567,
        0xff06, 567,
        0xff1a, 567,
        0xff1b, 567,
      );
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 568,
        ' ', 568,
        '&', 569,
        ',', 569,
        0x3000, 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff1b, 569,
      );
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 569,
        ' ', 569,
        '&', 569,
        ',', 569,
        0x3000, 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff1b, 569,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 201},
  [3] = {.lex_state = 201},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 203},
  [8] = {.lex_state = 191},
  [9] = {.lex_state = 206},
  [10] = {.lex_state = 206},
  [11] = {.lex_state = 203},
  [12] = {.lex_state = 201},
  [13] = {.lex_state = 193},
  [14] = {.lex_state = 201},
  [15] = {.lex_state = 203},
  [16] = {.lex_state = 203},
  [17] = {.lex_state = 203},
  [18] = {.lex_state = 190},
  [19] = {.lex_state = 193},
  [20] = {.lex_state = 194},
  [21] = {.lex_state = 191},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 203},
  [24] = {.lex_state = 195},
  [25] = {.lex_state = 201},
  [26] = {.lex_state = 207},
  [27] = {.lex_state = 195},
  [28] = {.lex_state = 194},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 201},
  [31] = {.lex_state = 203},
  [32] = {.lex_state = 201},
  [33] = {.lex_state = 201},
  [34] = {.lex_state = 193},
  [35] = {.lex_state = 194},
  [36] = {.lex_state = 193},
  [37] = {.lex_state = 194},
  [38] = {.lex_state = 200},
  [39] = {.lex_state = 200},
  [40] = {.lex_state = 194},
  [41] = {.lex_state = 195},
  [42] = {.lex_state = 207},
  [43] = {.lex_state = 207},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 195},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 200},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 201},
  [50] = {.lex_state = 196},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 200},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 196},
  [56] = {.lex_state = 201},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 194},
  [59] = {.lex_state = 201},
  [60] = {.lex_state = 201},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 196},
  [66] = {.lex_state = 192},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 192},
  [69] = {.lex_state = 201},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 190},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 189},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 193},
  [77] = {.lex_state = 201},
  [78] = {.lex_state = 201},
  [79] = {.lex_state = 197},
  [80] = {.lex_state = 192},
  [81] = {.lex_state = 192},
  [82] = {.lex_state = 197},
  [83] = {.lex_state = 190},
  [84] = {.lex_state = 193},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 197},
  [87] = {.lex_state = 193},
  [88] = {.lex_state = 190},
  [89] = {.lex_state = 193},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 193},
  [92] = {.lex_state = 193},
  [93] = {.lex_state = 193},
  [94] = {.lex_state = 197},
  [95] = {.lex_state = 193},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 198},
  [98] = {.lex_state = 199},
  [99] = {.lex_state = 199},
  [100] = {.lex_state = 199},
  [101] = {.lex_state = 199},
  [102] = {.lex_state = 158},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 198},
  [105] = {.lex_state = 158},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 198},
  [108] = {.lex_state = 198},
  [109] = {.lex_state = 201},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 198},
  [112] = {.lex_state = 201},
  [113] = {.lex_state = 201},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 203},
  [116] = {.lex_state = 201},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 158},
  [119] = {.lex_state = 158},
  [120] = {.lex_state = 199},
  [121] = {.lex_state = 158},
  [122] = {.lex_state = 158},
  [123] = {.lex_state = 199},
  [124] = {.lex_state = 199},
  [125] = {.lex_state = 158},
  [126] = {.lex_state = 199},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 158},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 203},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 199},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 201},
  [145] = {.lex_state = 199},
  [146] = {.lex_state = 201},
  [147] = {.lex_state = 201},
  [148] = {.lex_state = 201},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
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
    [sym_source_file] = STATE(155),
    [sym_disc] = STATE(113),
    [sym__disc] = STATE(153),
    [sym_song] = STATE(126),
    [sym_credit_block] = STATE(97),
    [sym_credit_field] = STATE(18),
    [sym__quotable_song_title_maybefeat_maybecomment] = STATE(25),
    [sym__quotable_song_title_maybefeat] = STATE(69),
    [sym__song_title_maybefeat] = STATE(49),
    [sym_song_title] = STATE(33),
    [sym_role] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(113),
    [aux_sym__disc_repeat1] = STATE(101),
    [aux_sym_credit_block_repeat1] = STATE(18),
    [aux_sym_credit_field_repeat1] = STATE(54),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(20),
    [anon_sym_DISC] = ACTIONS(3),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(5),
    [anon_sym_u300a] = ACTIONS(7),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [2] = {
    [sym_credit_block] = STATE(104),
    [sym_credit_field] = STATE(4),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(4),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DISC] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_Music] = ACTIONS(15),
    [anon_sym_music] = ACTIONS(15),
    [anon_sym_Composition] = ACTIONS(15),
    [anon_sym_composition] = ACTIONS(15),
    [anon_sym_Composer] = ACTIONS(15),
    [anon_sym_composer] = ACTIONS(15),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(15),
    [anon_sym_lyrics] = ACTIONS(15),
    [anon_sym_Lyricist] = ACTIONS(15),
    [anon_sym_lyricist] = ACTIONS(15),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(15),
    [anon_sym_arrangement] = ACTIONS(15),
    [anon_sym_Arranger] = ACTIONS(15),
    [anon_sym_arranger] = ACTIONS(15),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(15),
    [anon_sym_vocal] = ACTIONS(15),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(15),
    [anon_sym_performer] = ACTIONS(15),
    [anon_sym_Illustration] = ACTIONS(15),
    [anon_sym_illustration] = ACTIONS(15),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_Circle] = ACTIONS(15),
    [anon_sym_circle] = ACTIONS(15),
    [anon_sym_Producer] = ACTIONS(15),
    [anon_sym_producer] = ACTIONS(15),
    [anon_sym_Recording] = ACTIONS(15),
    [anon_sym_recording] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u6b4cu5531] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu66f2] = ACTIONS(15),
    [anon_sym_u7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(15),
    [anon_sym_u811au672c] = ACTIONS(15),
    [anon_sym_u63d2u56fe] = ACTIONS(15),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(15),
    [anon_sym_u51fau7248u65b9] = ACTIONS(15),
    [anon_sym_u5f55u97f3] = ACTIONS(15),
    [anon_sym_u539fu4f5c] = ACTIONS(15),
  },
  [3] = {
    [sym_credit_block] = STATE(104),
    [sym_credit_field] = STATE(4),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(4),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DISC] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_Music] = ACTIONS(15),
    [anon_sym_music] = ACTIONS(15),
    [anon_sym_Composition] = ACTIONS(15),
    [anon_sym_composition] = ACTIONS(15),
    [anon_sym_Composer] = ACTIONS(15),
    [anon_sym_composer] = ACTIONS(15),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(15),
    [anon_sym_lyrics] = ACTIONS(15),
    [anon_sym_Lyricist] = ACTIONS(15),
    [anon_sym_lyricist] = ACTIONS(15),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(15),
    [anon_sym_arrangement] = ACTIONS(15),
    [anon_sym_Arranger] = ACTIONS(15),
    [anon_sym_arranger] = ACTIONS(15),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(15),
    [anon_sym_vocal] = ACTIONS(15),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(15),
    [anon_sym_performer] = ACTIONS(15),
    [anon_sym_Illustration] = ACTIONS(15),
    [anon_sym_illustration] = ACTIONS(15),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_Circle] = ACTIONS(15),
    [anon_sym_circle] = ACTIONS(15),
    [anon_sym_Producer] = ACTIONS(15),
    [anon_sym_producer] = ACTIONS(15),
    [anon_sym_Recording] = ACTIONS(15),
    [anon_sym_recording] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u6b4cu5531] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu66f2] = ACTIONS(15),
    [anon_sym_u7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(15),
    [anon_sym_u811au672c] = ACTIONS(15),
    [anon_sym_u63d2u56fe] = ACTIONS(15),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(15),
    [anon_sym_u51fau7248u65b9] = ACTIONS(15),
    [anon_sym_u5f55u97f3] = ACTIONS(15),
    [anon_sym_u539fu4f5c] = ACTIONS(15),
  },
  [4] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_DISC] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [5] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_DISC] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(27),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(25),
    [aux_sym_feat_field_token1] = ACTIONS(25),
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
  [6] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DISC] = ACTIONS(31),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [anon_sym_Music] = ACTIONS(33),
    [anon_sym_music] = ACTIONS(33),
    [anon_sym_Composition] = ACTIONS(33),
    [anon_sym_composition] = ACTIONS(33),
    [anon_sym_Composer] = ACTIONS(33),
    [anon_sym_composer] = ACTIONS(33),
    [anon_sym_Compose] = ACTIONS(33),
    [anon_sym_compose] = ACTIONS(33),
    [anon_sym_Lyrics] = ACTIONS(33),
    [anon_sym_lyrics] = ACTIONS(33),
    [anon_sym_Lyricist] = ACTIONS(33),
    [anon_sym_lyricist] = ACTIONS(33),
    [anon_sym_Lyric] = ACTIONS(33),
    [anon_sym_lyric] = ACTIONS(33),
    [anon_sym_Arrangement] = ACTIONS(33),
    [anon_sym_arrangement] = ACTIONS(33),
    [anon_sym_Arranger] = ACTIONS(33),
    [anon_sym_arranger] = ACTIONS(33),
    [anon_sym_Arrange] = ACTIONS(33),
    [anon_sym_arrange] = ACTIONS(33),
    [anon_sym_Vocal] = ACTIONS(33),
    [anon_sym_vocal] = ACTIONS(33),
    [anon_sym_Vo] = ACTIONS(33),
    [anon_sym_vo] = ACTIONS(33),
    [anon_sym_Performer] = ACTIONS(33),
    [anon_sym_performer] = ACTIONS(33),
    [anon_sym_Illustration] = ACTIONS(33),
    [anon_sym_illustration] = ACTIONS(33),
    [anon_sym_Illust] = ACTIONS(33),
    [anon_sym_illust] = ACTIONS(33),
    [anon_sym_Label] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [anon_sym_Circle] = ACTIONS(33),
    [anon_sym_circle] = ACTIONS(33),
    [anon_sym_Producer] = ACTIONS(33),
    [anon_sym_producer] = ACTIONS(33),
    [anon_sym_Recording] = ACTIONS(33),
    [anon_sym_recording] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
  },
  [7] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_DISC] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(38),
    [anon_sym_SLASH_SLASH] = ACTIONS(38),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(38),
    [anon_sym_u300b] = ACTIONS(38),
    [anon_sym_Music] = ACTIONS(38),
    [anon_sym_music] = ACTIONS(38),
    [anon_sym_Composition] = ACTIONS(38),
    [anon_sym_composition] = ACTIONS(38),
    [anon_sym_Composer] = ACTIONS(38),
    [anon_sym_composer] = ACTIONS(38),
    [anon_sym_Compose] = ACTIONS(38),
    [anon_sym_compose] = ACTIONS(38),
    [anon_sym_Lyrics] = ACTIONS(38),
    [anon_sym_lyrics] = ACTIONS(38),
    [anon_sym_Lyricist] = ACTIONS(38),
    [anon_sym_lyricist] = ACTIONS(38),
    [anon_sym_Lyric] = ACTIONS(38),
    [anon_sym_lyric] = ACTIONS(38),
    [anon_sym_Arrangement] = ACTIONS(38),
    [anon_sym_arrangement] = ACTIONS(38),
    [anon_sym_Arranger] = ACTIONS(38),
    [anon_sym_arranger] = ACTIONS(38),
    [anon_sym_Arrange] = ACTIONS(38),
    [anon_sym_arrange] = ACTIONS(38),
    [anon_sym_Vocal] = ACTIONS(38),
    [anon_sym_vocal] = ACTIONS(38),
    [anon_sym_Vo] = ACTIONS(38),
    [anon_sym_vo] = ACTIONS(38),
    [anon_sym_Performer] = ACTIONS(38),
    [anon_sym_performer] = ACTIONS(38),
    [anon_sym_Illustration] = ACTIONS(38),
    [anon_sym_illustration] = ACTIONS(38),
    [anon_sym_Illust] = ACTIONS(38),
    [anon_sym_illust] = ACTIONS(38),
    [anon_sym_Label] = ACTIONS(38),
    [anon_sym_label] = ACTIONS(38),
    [anon_sym_Circle] = ACTIONS(38),
    [anon_sym_circle] = ACTIONS(38),
    [anon_sym_Producer] = ACTIONS(38),
    [anon_sym_producer] = ACTIONS(38),
    [anon_sym_Recording] = ACTIONS(38),
    [anon_sym_recording] = ACTIONS(38),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(38),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(38),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(38),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(38),
    [anon_sym_u6b4cu5531] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu66f2] = ACTIONS(38),
    [anon_sym_u7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5e] = ACTIONS(38),
    [anon_sym_u5382u724c] = ACTIONS(38),
    [anon_sym_u811au672c] = ACTIONS(38),
    [anon_sym_u63d2u56fe] = ACTIONS(38),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(38),
    [anon_sym_u51fau7248u65b9] = ACTIONS(38),
    [anon_sym_u5f55u97f3] = ACTIONS(38),
    [anon_sym_u539fu4f5c] = ACTIONS(38),
    [sym__ssep] = ACTIONS(40),
  },
  [8] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DISC] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(47),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(45),
    [aux_sym_feat_field_token1] = ACTIONS(45),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [9] = {
    [sym__quotable_creator_name] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_DISC] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_SLASH_SLASH] = ACTIONS(52),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(52),
    [anon_sym_u300a] = ACTIONS(54),
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
  [10] = {
    [sym__quotable_creator_name] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_DISC] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(60),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(60),
    [anon_sym_u300a] = ACTIONS(54),
    [sym_creator_name] = ACTIONS(56),
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
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(64),
    [anon_sym_u300b] = ACTIONS(64),
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
    [sym__ssep] = ACTIONS(62),
  },
  [12] = {
    [sym_credit_block] = STATE(123),
    [sym_credit_field] = STATE(19),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(19),
    [aux_sym_credit_field_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(15),
    [anon_sym_music] = ACTIONS(15),
    [anon_sym_Composition] = ACTIONS(15),
    [anon_sym_composition] = ACTIONS(15),
    [anon_sym_Composer] = ACTIONS(15),
    [anon_sym_composer] = ACTIONS(15),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(15),
    [anon_sym_lyrics] = ACTIONS(15),
    [anon_sym_Lyricist] = ACTIONS(15),
    [anon_sym_lyricist] = ACTIONS(15),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(15),
    [anon_sym_arrangement] = ACTIONS(15),
    [anon_sym_Arranger] = ACTIONS(15),
    [anon_sym_arranger] = ACTIONS(15),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(15),
    [anon_sym_vocal] = ACTIONS(15),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(15),
    [anon_sym_performer] = ACTIONS(15),
    [anon_sym_Illustration] = ACTIONS(15),
    [anon_sym_illustration] = ACTIONS(15),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_Circle] = ACTIONS(15),
    [anon_sym_circle] = ACTIONS(15),
    [anon_sym_Producer] = ACTIONS(15),
    [anon_sym_producer] = ACTIONS(15),
    [anon_sym_Recording] = ACTIONS(15),
    [anon_sym_recording] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u6b4cu5531] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu66f2] = ACTIONS(15),
    [anon_sym_u7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(15),
    [anon_sym_u811au672c] = ACTIONS(15),
    [anon_sym_u63d2u56fe] = ACTIONS(15),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(15),
    [anon_sym_u51fau7248u65b9] = ACTIONS(15),
    [anon_sym_u5f55u97f3] = ACTIONS(15),
    [anon_sym_u539fu4f5c] = ACTIONS(15),
  },
  [13] = {
    [sym_credit_field] = STATE(13),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(13),
    [aux_sym_credit_field_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [anon_sym_Music] = ACTIONS(33),
    [anon_sym_music] = ACTIONS(33),
    [anon_sym_Composition] = ACTIONS(33),
    [anon_sym_composition] = ACTIONS(33),
    [anon_sym_Composer] = ACTIONS(33),
    [anon_sym_composer] = ACTIONS(33),
    [anon_sym_Compose] = ACTIONS(33),
    [anon_sym_compose] = ACTIONS(33),
    [anon_sym_Lyrics] = ACTIONS(33),
    [anon_sym_lyrics] = ACTIONS(33),
    [anon_sym_Lyricist] = ACTIONS(33),
    [anon_sym_lyricist] = ACTIONS(33),
    [anon_sym_Lyric] = ACTIONS(33),
    [anon_sym_lyric] = ACTIONS(33),
    [anon_sym_Arrangement] = ACTIONS(33),
    [anon_sym_arrangement] = ACTIONS(33),
    [anon_sym_Arranger] = ACTIONS(33),
    [anon_sym_arranger] = ACTIONS(33),
    [anon_sym_Arrange] = ACTIONS(33),
    [anon_sym_arrange] = ACTIONS(33),
    [anon_sym_Vocal] = ACTIONS(33),
    [anon_sym_vocal] = ACTIONS(33),
    [anon_sym_Vo] = ACTIONS(33),
    [anon_sym_vo] = ACTIONS(33),
    [anon_sym_Performer] = ACTIONS(33),
    [anon_sym_performer] = ACTIONS(33),
    [anon_sym_Illustration] = ACTIONS(33),
    [anon_sym_illustration] = ACTIONS(33),
    [anon_sym_Illust] = ACTIONS(33),
    [anon_sym_illust] = ACTIONS(33),
    [anon_sym_Label] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [anon_sym_Circle] = ACTIONS(33),
    [anon_sym_circle] = ACTIONS(33),
    [anon_sym_Producer] = ACTIONS(33),
    [anon_sym_producer] = ACTIONS(33),
    [anon_sym_Recording] = ACTIONS(33),
    [anon_sym_recording] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
  },
  [14] = {
    [sym_feat_field] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_DISC] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(68),
    [aux_sym_feat_field_token1] = ACTIONS(70),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DISC] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(76),
    [anon_sym_u300b] = ACTIONS(76),
    [anon_sym_Music] = ACTIONS(76),
    [anon_sym_music] = ACTIONS(76),
    [anon_sym_Composition] = ACTIONS(76),
    [anon_sym_composition] = ACTIONS(76),
    [anon_sym_Composer] = ACTIONS(76),
    [anon_sym_composer] = ACTIONS(76),
    [anon_sym_Compose] = ACTIONS(76),
    [anon_sym_compose] = ACTIONS(76),
    [anon_sym_Lyrics] = ACTIONS(76),
    [anon_sym_lyrics] = ACTIONS(76),
    [anon_sym_Lyricist] = ACTIONS(76),
    [anon_sym_lyricist] = ACTIONS(76),
    [anon_sym_Lyric] = ACTIONS(76),
    [anon_sym_lyric] = ACTIONS(76),
    [anon_sym_Arrangement] = ACTIONS(76),
    [anon_sym_arrangement] = ACTIONS(76),
    [anon_sym_Arranger] = ACTIONS(76),
    [anon_sym_arranger] = ACTIONS(76),
    [anon_sym_Arrange] = ACTIONS(76),
    [anon_sym_arrange] = ACTIONS(76),
    [anon_sym_Vocal] = ACTIONS(76),
    [anon_sym_vocal] = ACTIONS(76),
    [anon_sym_Vo] = ACTIONS(76),
    [anon_sym_vo] = ACTIONS(76),
    [anon_sym_Performer] = ACTIONS(76),
    [anon_sym_performer] = ACTIONS(76),
    [anon_sym_Illustration] = ACTIONS(76),
    [anon_sym_illustration] = ACTIONS(76),
    [anon_sym_Illust] = ACTIONS(76),
    [anon_sym_illust] = ACTIONS(76),
    [anon_sym_Label] = ACTIONS(76),
    [anon_sym_label] = ACTIONS(76),
    [anon_sym_Circle] = ACTIONS(76),
    [anon_sym_circle] = ACTIONS(76),
    [anon_sym_Producer] = ACTIONS(76),
    [anon_sym_producer] = ACTIONS(76),
    [anon_sym_Recording] = ACTIONS(76),
    [anon_sym_recording] = ACTIONS(76),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(76),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(76),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(76),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(76),
    [anon_sym_u6b4cu5531] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu66f2] = ACTIONS(76),
    [anon_sym_u7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(76),
    [anon_sym_u811au672c] = ACTIONS(76),
    [anon_sym_u63d2u56fe] = ACTIONS(76),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(76),
    [anon_sym_u51fau7248u65b9] = ACTIONS(76),
    [anon_sym_u5f55u97f3] = ACTIONS(76),
    [anon_sym_u539fu4f5c] = ACTIONS(76),
    [sym__ssep] = ACTIONS(74),
  },
  [16] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(80),
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
    [sym__ssep] = ACTIONS(82),
  },
  [17] = {
    [aux_sym_feat_field_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_DISC] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(86),
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
    [sym__ssep] = ACTIONS(88),
  },
  [18] = {
    [sym_credit_field] = STATE(29),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(29),
    [aux_sym_credit_field_repeat1] = STATE(54),
    [anon_sym_DISC] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [19] = {
    [sym_credit_field] = STATE(13),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(13),
    [aux_sym_credit_field_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [20] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(5),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(25),
    [aux_sym_feat_field_token1] = ACTIONS(25),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DISC] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
  [22] = {
    [sym__quotable_creator_name] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(60),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(60),
    [anon_sym_u300a] = ACTIONS(54),
    [sym_creator_name] = ACTIONS(56),
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
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_DISC] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_SLASH_SLASH] = ACTIONS(96),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(96),
    [anon_sym_u300b] = ACTIONS(96),
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
    [sym__ssep] = ACTIONS(94),
  },
  [24] = {
    [sym__quotable_creator_name] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_DISC] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(102),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
    [sym_creator_name] = ACTIONS(104),
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
  },
  [25] = {
    [sym_credit_block] = STATE(123),
    [sym_credit_field] = STATE(19),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(19),
    [aux_sym_credit_field_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(15),
    [anon_sym_music] = ACTIONS(15),
    [anon_sym_Composition] = ACTIONS(15),
    [anon_sym_composition] = ACTIONS(15),
    [anon_sym_Composer] = ACTIONS(15),
    [anon_sym_composer] = ACTIONS(15),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(15),
    [anon_sym_lyrics] = ACTIONS(15),
    [anon_sym_Lyricist] = ACTIONS(15),
    [anon_sym_lyricist] = ACTIONS(15),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(15),
    [anon_sym_arrangement] = ACTIONS(15),
    [anon_sym_Arranger] = ACTIONS(15),
    [anon_sym_arranger] = ACTIONS(15),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(15),
    [anon_sym_vocal] = ACTIONS(15),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(15),
    [anon_sym_performer] = ACTIONS(15),
    [anon_sym_Illustration] = ACTIONS(15),
    [anon_sym_illustration] = ACTIONS(15),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_Circle] = ACTIONS(15),
    [anon_sym_circle] = ACTIONS(15),
    [anon_sym_Producer] = ACTIONS(15),
    [anon_sym_producer] = ACTIONS(15),
    [anon_sym_Recording] = ACTIONS(15),
    [anon_sym_recording] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u6b4cu5531] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu66f2] = ACTIONS(15),
    [anon_sym_u7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(15),
    [anon_sym_u811au672c] = ACTIONS(15),
    [anon_sym_u63d2u56fe] = ACTIONS(15),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(15),
    [anon_sym_u51fau7248u65b9] = ACTIONS(15),
    [anon_sym_u5f55u97f3] = ACTIONS(15),
    [anon_sym_u539fu4f5c] = ACTIONS(15),
  },
  [26] = {
    [sym__quotable_creator_name] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_SLASH_SLASH] = ACTIONS(52),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(52),
    [anon_sym_u300a] = ACTIONS(54),
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
  [27] = {
    [sym__quotable_creator_name] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_DISC] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(110),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(104),
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
  [28] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(112),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(45),
    [aux_sym_feat_field_token1] = ACTIONS(45),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [29] = {
    [sym_credit_field] = STATE(29),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(29),
    [aux_sym_credit_field_repeat1] = STATE(54),
    [anon_sym_DISC] = ACTIONS(31),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [anon_sym_Music] = ACTIONS(33),
    [anon_sym_music] = ACTIONS(33),
    [anon_sym_Composition] = ACTIONS(33),
    [anon_sym_composition] = ACTIONS(33),
    [anon_sym_Composer] = ACTIONS(33),
    [anon_sym_composer] = ACTIONS(33),
    [anon_sym_Compose] = ACTIONS(33),
    [anon_sym_compose] = ACTIONS(33),
    [anon_sym_Lyrics] = ACTIONS(33),
    [anon_sym_lyrics] = ACTIONS(33),
    [anon_sym_Lyricist] = ACTIONS(33),
    [anon_sym_lyricist] = ACTIONS(33),
    [anon_sym_Lyric] = ACTIONS(33),
    [anon_sym_lyric] = ACTIONS(33),
    [anon_sym_Arrangement] = ACTIONS(33),
    [anon_sym_arrangement] = ACTIONS(33),
    [anon_sym_Arranger] = ACTIONS(33),
    [anon_sym_arranger] = ACTIONS(33),
    [anon_sym_Arrange] = ACTIONS(33),
    [anon_sym_arrange] = ACTIONS(33),
    [anon_sym_Vocal] = ACTIONS(33),
    [anon_sym_vocal] = ACTIONS(33),
    [anon_sym_Vo] = ACTIONS(33),
    [anon_sym_vo] = ACTIONS(33),
    [anon_sym_Performer] = ACTIONS(33),
    [anon_sym_performer] = ACTIONS(33),
    [anon_sym_Illustration] = ACTIONS(33),
    [anon_sym_illustration] = ACTIONS(33),
    [anon_sym_Illust] = ACTIONS(33),
    [anon_sym_illust] = ACTIONS(33),
    [anon_sym_Label] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [anon_sym_Circle] = ACTIONS(33),
    [anon_sym_circle] = ACTIONS(33),
    [anon_sym_Producer] = ACTIONS(33),
    [anon_sym_producer] = ACTIONS(33),
    [anon_sym_Recording] = ACTIONS(33),
    [anon_sym_recording] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
  },
  [30] = {
    [sym_credit_block] = STATE(142),
    [sym_credit_field] = STATE(36),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(36),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_Music] = ACTIONS(15),
    [anon_sym_music] = ACTIONS(15),
    [anon_sym_Composition] = ACTIONS(15),
    [anon_sym_composition] = ACTIONS(15),
    [anon_sym_Composer] = ACTIONS(15),
    [anon_sym_composer] = ACTIONS(15),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(15),
    [anon_sym_lyrics] = ACTIONS(15),
    [anon_sym_Lyricist] = ACTIONS(15),
    [anon_sym_lyricist] = ACTIONS(15),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(15),
    [anon_sym_arrangement] = ACTIONS(15),
    [anon_sym_Arranger] = ACTIONS(15),
    [anon_sym_arranger] = ACTIONS(15),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(15),
    [anon_sym_vocal] = ACTIONS(15),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(15),
    [anon_sym_performer] = ACTIONS(15),
    [anon_sym_Illustration] = ACTIONS(15),
    [anon_sym_illustration] = ACTIONS(15),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_Circle] = ACTIONS(15),
    [anon_sym_circle] = ACTIONS(15),
    [anon_sym_Producer] = ACTIONS(15),
    [anon_sym_producer] = ACTIONS(15),
    [anon_sym_Recording] = ACTIONS(15),
    [anon_sym_recording] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u6b4cu5531] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(15),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu66f2] = ACTIONS(15),
    [anon_sym_u7de8u66f2] = ACTIONS(15),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(15),
    [anon_sym_u811au672c] = ACTIONS(15),
    [anon_sym_u63d2u56fe] = ACTIONS(15),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(15),
    [anon_sym_u51fau7248u65b9] = ACTIONS(15),
    [anon_sym_u5f55u97f3] = ACTIONS(15),
    [anon_sym_u539fu4f5c] = ACTIONS(15),
  },
  [31] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(80),
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
    [sym__ssep] = ACTIONS(117),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_DISC] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_SLASH_SLASH] = ACTIONS(119),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(119),
    [anon_sym_u300b] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(119),
    [anon_sym_music] = ACTIONS(119),
    [anon_sym_Composition] = ACTIONS(119),
    [anon_sym_composition] = ACTIONS(119),
    [anon_sym_Composer] = ACTIONS(119),
    [anon_sym_composer] = ACTIONS(119),
    [anon_sym_Compose] = ACTIONS(121),
    [anon_sym_compose] = ACTIONS(121),
    [anon_sym_Lyrics] = ACTIONS(119),
    [anon_sym_lyrics] = ACTIONS(119),
    [anon_sym_Lyricist] = ACTIONS(119),
    [anon_sym_lyricist] = ACTIONS(119),
    [anon_sym_Lyric] = ACTIONS(121),
    [anon_sym_lyric] = ACTIONS(121),
    [anon_sym_Arrangement] = ACTIONS(119),
    [anon_sym_arrangement] = ACTIONS(119),
    [anon_sym_Arranger] = ACTIONS(119),
    [anon_sym_arranger] = ACTIONS(119),
    [anon_sym_Arrange] = ACTIONS(121),
    [anon_sym_arrange] = ACTIONS(121),
    [anon_sym_Vocal] = ACTIONS(119),
    [anon_sym_vocal] = ACTIONS(119),
    [anon_sym_Vo] = ACTIONS(121),
    [anon_sym_vo] = ACTIONS(121),
    [anon_sym_Performer] = ACTIONS(119),
    [anon_sym_performer] = ACTIONS(119),
    [anon_sym_Illustration] = ACTIONS(119),
    [anon_sym_illustration] = ACTIONS(119),
    [anon_sym_Illust] = ACTIONS(121),
    [anon_sym_illust] = ACTIONS(121),
    [anon_sym_Label] = ACTIONS(119),
    [anon_sym_label] = ACTIONS(119),
    [anon_sym_Circle] = ACTIONS(119),
    [anon_sym_circle] = ACTIONS(119),
    [anon_sym_Producer] = ACTIONS(119),
    [anon_sym_producer] = ACTIONS(119),
    [anon_sym_Recording] = ACTIONS(119),
    [anon_sym_recording] = ACTIONS(119),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(119),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(119),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(119),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(119),
    [anon_sym_u6b4cu5531] = ACTIONS(119),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(119),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(119),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(119),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(119),
    [anon_sym_u4f5cu66f2] = ACTIONS(119),
    [anon_sym_u7de8u66f2] = ACTIONS(119),
    [anon_sym_u4f5cu8a5e] = ACTIONS(121),
    [anon_sym_u5382u724c] = ACTIONS(119),
    [anon_sym_u811au672c] = ACTIONS(119),
    [anon_sym_u63d2u56fe] = ACTIONS(119),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(119),
    [anon_sym_u51fau7248u65b9] = ACTIONS(119),
    [anon_sym_u5f55u97f3] = ACTIONS(119),
    [anon_sym_u539fu4f5c] = ACTIONS(119),
  },
  [33] = {
    [sym_feat_field] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(68),
    [aux_sym_feat_field_token1] = ACTIONS(123),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [34] = {
    [sym_credit_field] = STATE(34),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(34),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [anon_sym_Music] = ACTIONS(33),
    [anon_sym_music] = ACTIONS(33),
    [anon_sym_Composition] = ACTIONS(33),
    [anon_sym_composition] = ACTIONS(33),
    [anon_sym_Composer] = ACTIONS(33),
    [anon_sym_composer] = ACTIONS(33),
    [anon_sym_Compose] = ACTIONS(33),
    [anon_sym_compose] = ACTIONS(33),
    [anon_sym_Lyrics] = ACTIONS(33),
    [anon_sym_lyrics] = ACTIONS(33),
    [anon_sym_Lyricist] = ACTIONS(33),
    [anon_sym_lyricist] = ACTIONS(33),
    [anon_sym_Lyric] = ACTIONS(33),
    [anon_sym_lyric] = ACTIONS(33),
    [anon_sym_Arrangement] = ACTIONS(33),
    [anon_sym_arrangement] = ACTIONS(33),
    [anon_sym_Arranger] = ACTIONS(33),
    [anon_sym_arranger] = ACTIONS(33),
    [anon_sym_Arrange] = ACTIONS(33),
    [anon_sym_arrange] = ACTIONS(33),
    [anon_sym_Vocal] = ACTIONS(33),
    [anon_sym_vocal] = ACTIONS(33),
    [anon_sym_Vo] = ACTIONS(33),
    [anon_sym_vo] = ACTIONS(33),
    [anon_sym_Performer] = ACTIONS(33),
    [anon_sym_performer] = ACTIONS(33),
    [anon_sym_Illustration] = ACTIONS(33),
    [anon_sym_illustration] = ACTIONS(33),
    [anon_sym_Illust] = ACTIONS(33),
    [anon_sym_illust] = ACTIONS(33),
    [anon_sym_Label] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [anon_sym_Circle] = ACTIONS(33),
    [anon_sym_circle] = ACTIONS(33),
    [anon_sym_Producer] = ACTIONS(33),
    [anon_sym_producer] = ACTIONS(33),
    [anon_sym_Recording] = ACTIONS(33),
    [anon_sym_recording] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
  },
  [35] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(40),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(125),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(25),
    [aux_sym_feat_field_token1] = ACTIONS(25),
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
  [36] = {
    [sym_credit_field] = STATE(34),
    [sym_role] = STATE(149),
    [aux_sym_credit_block_repeat1] = STATE(34),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
  [38] = {
    [sym__quotable_creator_name] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LF] = ACTIONS(127),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
    [sym_creator_name] = ACTIONS(104),
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
  },
  [39] = {
    [sym__quotable_creator_name] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(129),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(104),
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
  [40] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(40),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(131),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(45),
    [aux_sym_feat_field_token1] = ACTIONS(45),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [41] = {
    [sym__quotable_creator_name] = STATE(139),
    [anon_sym_DISC] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(134),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(104),
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
  [42] = {
    [sym__quotable_creator_name] = STATE(11),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_SLASH_SLASH] = ACTIONS(60),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(60),
    [anon_sym_u300a] = ACTIONS(54),
    [sym_creator_name] = ACTIONS(56),
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
  },
  [43] = {
    [sym__quotable_creator_name] = STATE(11),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_SLASH_SLASH] = ACTIONS(52),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(52),
    [anon_sym_u300a] = ACTIONS(54),
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
  [44] = {
    [aux_sym_feat_field_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(86),
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
    [sym__ssep] = ACTIONS(136),
  },
  [45] = {
    [sym__quotable_creator_name] = STATE(139),
    [anon_sym_DISC] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(138),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
    [sym_creator_name] = ACTIONS(104),
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
  },
  [46] = {
    [sym__quotable_creator_name] = STATE(133),
    [sym_role] = STATE(149),
    [aux_sym_credit_field_repeat1] = STATE(67),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(104),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [47] = {
    [sym__quotable_creator_name] = STATE(139),
    [anon_sym_LF] = ACTIONS(142),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
    [sym_creator_name] = ACTIONS(104),
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
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_DISC] = ACTIONS(146),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(146),
    [anon_sym_u300a] = ACTIONS(146),
    [anon_sym_Music] = ACTIONS(146),
    [anon_sym_music] = ACTIONS(146),
    [anon_sym_Composition] = ACTIONS(146),
    [anon_sym_composition] = ACTIONS(146),
    [anon_sym_Composer] = ACTIONS(146),
    [anon_sym_composer] = ACTIONS(146),
    [anon_sym_Compose] = ACTIONS(146),
    [anon_sym_compose] = ACTIONS(146),
    [anon_sym_Lyrics] = ACTIONS(146),
    [anon_sym_lyrics] = ACTIONS(146),
    [anon_sym_Lyricist] = ACTIONS(146),
    [anon_sym_lyricist] = ACTIONS(146),
    [anon_sym_Lyric] = ACTIONS(146),
    [anon_sym_lyric] = ACTIONS(146),
    [anon_sym_Arrangement] = ACTIONS(146),
    [anon_sym_arrangement] = ACTIONS(146),
    [anon_sym_Arranger] = ACTIONS(146),
    [anon_sym_arranger] = ACTIONS(146),
    [anon_sym_Arrange] = ACTIONS(146),
    [anon_sym_arrange] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Vo] = ACTIONS(146),
    [anon_sym_vo] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illust] = ACTIONS(146),
    [anon_sym_illust] = ACTIONS(146),
    [anon_sym_Label] = ACTIONS(146),
    [anon_sym_label] = ACTIONS(146),
    [anon_sym_Circle] = ACTIONS(146),
    [anon_sym_circle] = ACTIONS(146),
    [anon_sym_Producer] = ACTIONS(146),
    [anon_sym_producer] = ACTIONS(146),
    [anon_sym_Recording] = ACTIONS(146),
    [anon_sym_recording] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [sym__sep] = ACTIONS(148),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DISC] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(150),
    [anon_sym_Music] = ACTIONS(150),
    [anon_sym_music] = ACTIONS(150),
    [anon_sym_Composition] = ACTIONS(150),
    [anon_sym_composition] = ACTIONS(150),
    [anon_sym_Composer] = ACTIONS(150),
    [anon_sym_composer] = ACTIONS(150),
    [anon_sym_Compose] = ACTIONS(152),
    [anon_sym_compose] = ACTIONS(152),
    [anon_sym_Lyrics] = ACTIONS(150),
    [anon_sym_lyrics] = ACTIONS(150),
    [anon_sym_Lyricist] = ACTIONS(150),
    [anon_sym_lyricist] = ACTIONS(150),
    [anon_sym_Lyric] = ACTIONS(152),
    [anon_sym_lyric] = ACTIONS(152),
    [anon_sym_Arrangement] = ACTIONS(150),
    [anon_sym_arrangement] = ACTIONS(150),
    [anon_sym_Arranger] = ACTIONS(150),
    [anon_sym_arranger] = ACTIONS(150),
    [anon_sym_Arrange] = ACTIONS(152),
    [anon_sym_arrange] = ACTIONS(152),
    [anon_sym_Vocal] = ACTIONS(150),
    [anon_sym_vocal] = ACTIONS(150),
    [anon_sym_Vo] = ACTIONS(152),
    [anon_sym_vo] = ACTIONS(152),
    [anon_sym_Performer] = ACTIONS(150),
    [anon_sym_performer] = ACTIONS(150),
    [anon_sym_Illustration] = ACTIONS(150),
    [anon_sym_illustration] = ACTIONS(150),
    [anon_sym_Illust] = ACTIONS(152),
    [anon_sym_illust] = ACTIONS(152),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(152),
    [anon_sym_u5382u724c] = ACTIONS(150),
    [anon_sym_u811au672c] = ACTIONS(150),
    [anon_sym_u63d2u56fe] = ACTIONS(150),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(150),
    [anon_sym_u51fau7248u65b9] = ACTIONS(150),
    [anon_sym_u5f55u97f3] = ACTIONS(150),
    [anon_sym_u539fu4f5c] = ACTIONS(150),
  },
  [50] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DISC] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(158),
    [anon_sym_Music] = ACTIONS(156),
    [anon_sym_music] = ACTIONS(156),
    [anon_sym_Composition] = ACTIONS(156),
    [anon_sym_composition] = ACTIONS(156),
    [anon_sym_Composer] = ACTIONS(156),
    [anon_sym_composer] = ACTIONS(156),
    [anon_sym_Compose] = ACTIONS(156),
    [anon_sym_compose] = ACTIONS(156),
    [anon_sym_Lyrics] = ACTIONS(156),
    [anon_sym_lyrics] = ACTIONS(156),
    [anon_sym_Lyricist] = ACTIONS(156),
    [anon_sym_lyricist] = ACTIONS(156),
    [anon_sym_Lyric] = ACTIONS(156),
    [anon_sym_lyric] = ACTIONS(156),
    [anon_sym_Arrangement] = ACTIONS(156),
    [anon_sym_arrangement] = ACTIONS(156),
    [anon_sym_Arranger] = ACTIONS(156),
    [anon_sym_arranger] = ACTIONS(156),
    [anon_sym_Arrange] = ACTIONS(156),
    [anon_sym_arrange] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(156),
    [anon_sym_vocal] = ACTIONS(156),
    [anon_sym_Vo] = ACTIONS(156),
    [anon_sym_vo] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(156),
    [anon_sym_performer] = ACTIONS(156),
    [anon_sym_Illustration] = ACTIONS(156),
    [anon_sym_illustration] = ACTIONS(156),
    [anon_sym_Illust] = ACTIONS(156),
    [anon_sym_illust] = ACTIONS(156),
    [anon_sym_Label] = ACTIONS(156),
    [anon_sym_label] = ACTIONS(156),
    [anon_sym_Circle] = ACTIONS(156),
    [anon_sym_circle] = ACTIONS(156),
    [anon_sym_Producer] = ACTIONS(156),
    [anon_sym_producer] = ACTIONS(156),
    [anon_sym_Recording] = ACTIONS(156),
    [anon_sym_recording] = ACTIONS(156),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(156),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(156),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(156),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu66f2] = ACTIONS(156),
    [anon_sym_u7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(156),
    [anon_sym_u811au672c] = ACTIONS(156),
    [anon_sym_u63d2u56fe] = ACTIONS(156),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(156),
    [anon_sym_u51fau7248u65b9] = ACTIONS(156),
    [anon_sym_u5f55u97f3] = ACTIONS(156),
    [anon_sym_u539fu4f5c] = ACTIONS(156),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DISC] = ACTIONS(162),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(162),
    [anon_sym_u300a] = ACTIONS(162),
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
    [sym__sep] = ACTIONS(164),
  },
  [52] = {
    [sym__quotable_creator_name] = STATE(139),
    [anon_sym_LF] = ACTIONS(166),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
    [sym_creator_name] = ACTIONS(104),
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
  [53] = {
    [aux_sym_feat_field_repeat1] = STATE(57),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(86),
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
    [sym__ssep] = ACTIONS(168),
  },
  [54] = {
    [sym__quotable_creator_name] = STATE(114),
    [sym_role] = STATE(149),
    [aux_sym_credit_field_repeat1] = STATE(67),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(104),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [55] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DISC] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(170),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_DISC] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(173),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(173),
    [anon_sym_Music] = ACTIONS(173),
    [anon_sym_music] = ACTIONS(173),
    [anon_sym_Composition] = ACTIONS(173),
    [anon_sym_composition] = ACTIONS(173),
    [anon_sym_Composer] = ACTIONS(173),
    [anon_sym_composer] = ACTIONS(173),
    [anon_sym_Compose] = ACTIONS(175),
    [anon_sym_compose] = ACTIONS(175),
    [anon_sym_Lyrics] = ACTIONS(173),
    [anon_sym_lyrics] = ACTIONS(173),
    [anon_sym_Lyricist] = ACTIONS(173),
    [anon_sym_lyricist] = ACTIONS(173),
    [anon_sym_Lyric] = ACTIONS(175),
    [anon_sym_lyric] = ACTIONS(175),
    [anon_sym_Arrangement] = ACTIONS(173),
    [anon_sym_arrangement] = ACTIONS(173),
    [anon_sym_Arranger] = ACTIONS(173),
    [anon_sym_arranger] = ACTIONS(173),
    [anon_sym_Arrange] = ACTIONS(175),
    [anon_sym_arrange] = ACTIONS(175),
    [anon_sym_Vocal] = ACTIONS(173),
    [anon_sym_vocal] = ACTIONS(173),
    [anon_sym_Vo] = ACTIONS(175),
    [anon_sym_vo] = ACTIONS(175),
    [anon_sym_Performer] = ACTIONS(173),
    [anon_sym_performer] = ACTIONS(173),
    [anon_sym_Illustration] = ACTIONS(173),
    [anon_sym_illustration] = ACTIONS(173),
    [anon_sym_Illust] = ACTIONS(175),
    [anon_sym_illust] = ACTIONS(175),
    [anon_sym_Label] = ACTIONS(173),
    [anon_sym_label] = ACTIONS(173),
    [anon_sym_Circle] = ACTIONS(173),
    [anon_sym_circle] = ACTIONS(173),
    [anon_sym_Producer] = ACTIONS(173),
    [anon_sym_producer] = ACTIONS(173),
    [anon_sym_Recording] = ACTIONS(173),
    [anon_sym_recording] = ACTIONS(173),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(173),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(173),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(173),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(173),
    [anon_sym_u6b4cu5531] = ACTIONS(173),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(173),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(173),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(173),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(173),
    [anon_sym_u4f5cu66f2] = ACTIONS(173),
    [anon_sym_u7de8u66f2] = ACTIONS(173),
    [anon_sym_u4f5cu8a5e] = ACTIONS(175),
    [anon_sym_u5382u724c] = ACTIONS(173),
    [anon_sym_u811au672c] = ACTIONS(173),
    [anon_sym_u63d2u56fe] = ACTIONS(173),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(173),
    [anon_sym_u51fau7248u65b9] = ACTIONS(173),
    [anon_sym_u5f55u97f3] = ACTIONS(173),
    [anon_sym_u539fu4f5c] = ACTIONS(173),
  },
  [57] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(80),
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
    [sym__ssep] = ACTIONS(177),
  },
  [58] = {
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
  [59] = {
    [sym_feat_field] = STATE(32),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(68),
    [aux_sym_feat_field_token1] = ACTIONS(179),
    [anon_sym_Music] = ACTIONS(68),
    [anon_sym_music] = ACTIONS(68),
    [anon_sym_Composition] = ACTIONS(68),
    [anon_sym_composition] = ACTIONS(68),
    [anon_sym_Composer] = ACTIONS(68),
    [anon_sym_composer] = ACTIONS(68),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(68),
    [anon_sym_lyrics] = ACTIONS(68),
    [anon_sym_Lyricist] = ACTIONS(68),
    [anon_sym_lyricist] = ACTIONS(68),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(68),
    [anon_sym_arrangement] = ACTIONS(68),
    [anon_sym_Arranger] = ACTIONS(68),
    [anon_sym_arranger] = ACTIONS(68),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(68),
    [anon_sym_vocal] = ACTIONS(68),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(68),
    [anon_sym_performer] = ACTIONS(68),
    [anon_sym_Illustration] = ACTIONS(68),
    [anon_sym_illustration] = ACTIONS(68),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(68),
    [anon_sym_u811au672c] = ACTIONS(68),
    [anon_sym_u63d2u56fe] = ACTIONS(68),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(68),
    [anon_sym_u51fau7248u65b9] = ACTIONS(68),
    [anon_sym_u5f55u97f3] = ACTIONS(68),
    [anon_sym_u539fu4f5c] = ACTIONS(68),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DISC] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(183),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(185),
    [anon_sym_Music] = ACTIONS(181),
    [anon_sym_music] = ACTIONS(181),
    [anon_sym_Composition] = ACTIONS(181),
    [anon_sym_composition] = ACTIONS(181),
    [anon_sym_Composer] = ACTIONS(181),
    [anon_sym_composer] = ACTIONS(181),
    [anon_sym_Compose] = ACTIONS(187),
    [anon_sym_compose] = ACTIONS(187),
    [anon_sym_Lyrics] = ACTIONS(181),
    [anon_sym_lyrics] = ACTIONS(181),
    [anon_sym_Lyricist] = ACTIONS(181),
    [anon_sym_lyricist] = ACTIONS(181),
    [anon_sym_Lyric] = ACTIONS(187),
    [anon_sym_lyric] = ACTIONS(187),
    [anon_sym_Arrangement] = ACTIONS(181),
    [anon_sym_arrangement] = ACTIONS(181),
    [anon_sym_Arranger] = ACTIONS(181),
    [anon_sym_arranger] = ACTIONS(181),
    [anon_sym_Arrange] = ACTIONS(187),
    [anon_sym_arrange] = ACTIONS(187),
    [anon_sym_Vocal] = ACTIONS(181),
    [anon_sym_vocal] = ACTIONS(181),
    [anon_sym_Vo] = ACTIONS(187),
    [anon_sym_vo] = ACTIONS(187),
    [anon_sym_Performer] = ACTIONS(181),
    [anon_sym_performer] = ACTIONS(181),
    [anon_sym_Illustration] = ACTIONS(181),
    [anon_sym_illustration] = ACTIONS(181),
    [anon_sym_Illust] = ACTIONS(187),
    [anon_sym_illust] = ACTIONS(187),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(187),
    [anon_sym_u5382u724c] = ACTIONS(181),
    [anon_sym_u811au672c] = ACTIONS(181),
    [anon_sym_u63d2u56fe] = ACTIONS(181),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(181),
    [anon_sym_u51fau7248u65b9] = ACTIONS(181),
    [anon_sym_u5f55u97f3] = ACTIONS(181),
    [anon_sym_u539fu4f5c] = ACTIONS(181),
  },
  [61] = {
    [sym__quotable_creator_name] = STATE(131),
    [sym_role] = STATE(149),
    [aux_sym_credit_field_repeat1] = STATE(67),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(104),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [62] = {
    [sym__quotable_creator_name] = STATE(136),
    [sym_role] = STATE(149),
    [aux_sym_credit_field_repeat1] = STATE(67),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(104),
    [anon_sym_Music] = ACTIONS(9),
    [anon_sym_music] = ACTIONS(9),
    [anon_sym_Composition] = ACTIONS(9),
    [anon_sym_composition] = ACTIONS(9),
    [anon_sym_Composer] = ACTIONS(9),
    [anon_sym_composer] = ACTIONS(9),
    [anon_sym_Compose] = ACTIONS(9),
    [anon_sym_compose] = ACTIONS(9),
    [anon_sym_Lyrics] = ACTIONS(9),
    [anon_sym_lyrics] = ACTIONS(9),
    [anon_sym_Lyricist] = ACTIONS(9),
    [anon_sym_lyricist] = ACTIONS(9),
    [anon_sym_Lyric] = ACTIONS(9),
    [anon_sym_lyric] = ACTIONS(9),
    [anon_sym_Arrangement] = ACTIONS(9),
    [anon_sym_arrangement] = ACTIONS(9),
    [anon_sym_Arranger] = ACTIONS(9),
    [anon_sym_arranger] = ACTIONS(9),
    [anon_sym_Arrange] = ACTIONS(9),
    [anon_sym_arrange] = ACTIONS(9),
    [anon_sym_Vocal] = ACTIONS(9),
    [anon_sym_vocal] = ACTIONS(9),
    [anon_sym_Vo] = ACTIONS(9),
    [anon_sym_vo] = ACTIONS(9),
    [anon_sym_Performer] = ACTIONS(9),
    [anon_sym_performer] = ACTIONS(9),
    [anon_sym_Illustration] = ACTIONS(9),
    [anon_sym_illustration] = ACTIONS(9),
    [anon_sym_Illust] = ACTIONS(9),
    [anon_sym_illust] = ACTIONS(9),
    [anon_sym_Label] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(9),
    [anon_sym_Circle] = ACTIONS(9),
    [anon_sym_circle] = ACTIONS(9),
    [anon_sym_Producer] = ACTIONS(9),
    [anon_sym_producer] = ACTIONS(9),
    [anon_sym_Recording] = ACTIONS(9),
    [anon_sym_recording] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
  },
  [63] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(189),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [64] = {
    [anon_sym_DISC] = ACTIONS(146),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(146),
    [anon_sym_u300a] = ACTIONS(146),
    [anon_sym_Music] = ACTIONS(146),
    [anon_sym_music] = ACTIONS(146),
    [anon_sym_Composition] = ACTIONS(146),
    [anon_sym_composition] = ACTIONS(146),
    [anon_sym_Composer] = ACTIONS(146),
    [anon_sym_composer] = ACTIONS(146),
    [anon_sym_Compose] = ACTIONS(146),
    [anon_sym_compose] = ACTIONS(146),
    [anon_sym_Lyrics] = ACTIONS(146),
    [anon_sym_lyrics] = ACTIONS(146),
    [anon_sym_Lyricist] = ACTIONS(146),
    [anon_sym_lyricist] = ACTIONS(146),
    [anon_sym_Lyric] = ACTIONS(146),
    [anon_sym_lyric] = ACTIONS(146),
    [anon_sym_Arrangement] = ACTIONS(146),
    [anon_sym_arrangement] = ACTIONS(146),
    [anon_sym_Arranger] = ACTIONS(146),
    [anon_sym_arranger] = ACTIONS(146),
    [anon_sym_Arrange] = ACTIONS(146),
    [anon_sym_arrange] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Vo] = ACTIONS(146),
    [anon_sym_vo] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illust] = ACTIONS(146),
    [anon_sym_illust] = ACTIONS(146),
    [anon_sym_Label] = ACTIONS(146),
    [anon_sym_label] = ACTIONS(146),
    [anon_sym_Circle] = ACTIONS(146),
    [anon_sym_circle] = ACTIONS(146),
    [anon_sym_Producer] = ACTIONS(146),
    [anon_sym_producer] = ACTIONS(146),
    [anon_sym_Recording] = ACTIONS(146),
    [anon_sym_recording] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [sym__sep] = ACTIONS(192),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DISC] = ACTIONS(92),
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
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(146),
    [anon_sym_u300a] = ACTIONS(146),
    [anon_sym_Music] = ACTIONS(146),
    [anon_sym_music] = ACTIONS(146),
    [anon_sym_Composition] = ACTIONS(146),
    [anon_sym_composition] = ACTIONS(146),
    [anon_sym_Composer] = ACTIONS(146),
    [anon_sym_composer] = ACTIONS(146),
    [anon_sym_Compose] = ACTIONS(146),
    [anon_sym_compose] = ACTIONS(146),
    [anon_sym_Lyrics] = ACTIONS(146),
    [anon_sym_lyrics] = ACTIONS(146),
    [anon_sym_Lyricist] = ACTIONS(146),
    [anon_sym_lyricist] = ACTIONS(146),
    [anon_sym_Lyric] = ACTIONS(146),
    [anon_sym_lyric] = ACTIONS(146),
    [anon_sym_Arrangement] = ACTIONS(146),
    [anon_sym_arrangement] = ACTIONS(146),
    [anon_sym_Arranger] = ACTIONS(146),
    [anon_sym_arranger] = ACTIONS(146),
    [anon_sym_Arrange] = ACTIONS(146),
    [anon_sym_arrange] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Vo] = ACTIONS(146),
    [anon_sym_vo] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illust] = ACTIONS(146),
    [anon_sym_illust] = ACTIONS(146),
    [anon_sym_Label] = ACTIONS(146),
    [anon_sym_label] = ACTIONS(146),
    [anon_sym_Circle] = ACTIONS(146),
    [anon_sym_circle] = ACTIONS(146),
    [anon_sym_Producer] = ACTIONS(146),
    [anon_sym_producer] = ACTIONS(146),
    [anon_sym_Recording] = ACTIONS(146),
    [anon_sym_recording] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [sym__sep] = ACTIONS(194),
  },
  [67] = {
    [sym_role] = STATE(149),
    [aux_sym_credit_field_repeat1] = STATE(67),
    [anon_sym_u300a] = ACTIONS(196),
    [sym_creator_name] = ACTIONS(196),
    [anon_sym_Music] = ACTIONS(198),
    [anon_sym_music] = ACTIONS(198),
    [anon_sym_Composition] = ACTIONS(198),
    [anon_sym_composition] = ACTIONS(198),
    [anon_sym_Composer] = ACTIONS(198),
    [anon_sym_composer] = ACTIONS(198),
    [anon_sym_Compose] = ACTIONS(198),
    [anon_sym_compose] = ACTIONS(198),
    [anon_sym_Lyrics] = ACTIONS(198),
    [anon_sym_lyrics] = ACTIONS(198),
    [anon_sym_Lyricist] = ACTIONS(198),
    [anon_sym_lyricist] = ACTIONS(198),
    [anon_sym_Lyric] = ACTIONS(198),
    [anon_sym_lyric] = ACTIONS(198),
    [anon_sym_Arrangement] = ACTIONS(198),
    [anon_sym_arrangement] = ACTIONS(198),
    [anon_sym_Arranger] = ACTIONS(198),
    [anon_sym_arranger] = ACTIONS(198),
    [anon_sym_Arrange] = ACTIONS(198),
    [anon_sym_arrange] = ACTIONS(198),
    [anon_sym_Vocal] = ACTIONS(198),
    [anon_sym_vocal] = ACTIONS(198),
    [anon_sym_Vo] = ACTIONS(198),
    [anon_sym_vo] = ACTIONS(198),
    [anon_sym_Performer] = ACTIONS(198),
    [anon_sym_performer] = ACTIONS(198),
    [anon_sym_Illustration] = ACTIONS(198),
    [anon_sym_illustration] = ACTIONS(198),
    [anon_sym_Illust] = ACTIONS(198),
    [anon_sym_illust] = ACTIONS(198),
    [anon_sym_Label] = ACTIONS(198),
    [anon_sym_label] = ACTIONS(198),
    [anon_sym_Circle] = ACTIONS(198),
    [anon_sym_circle] = ACTIONS(198),
    [anon_sym_Producer] = ACTIONS(198),
    [anon_sym_producer] = ACTIONS(198),
    [anon_sym_Recording] = ACTIONS(198),
    [anon_sym_recording] = ACTIONS(198),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(198),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(198),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(198),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(198),
    [anon_sym_u6b4cu5531] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu66f2] = ACTIONS(198),
    [anon_sym_u7de8u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5e] = ACTIONS(198),
    [anon_sym_u5382u724c] = ACTIONS(198),
    [anon_sym_u811au672c] = ACTIONS(198),
    [anon_sym_u63d2u56fe] = ACTIONS(198),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(198),
    [anon_sym_u51fau7248u65b9] = ACTIONS(198),
    [anon_sym_u5f55u97f3] = ACTIONS(198),
    [anon_sym_u539fu4f5c] = ACTIONS(198),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(162),
    [anon_sym_u300a] = ACTIONS(162),
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
    [sym__sep] = ACTIONS(201),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(203),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(185),
    [anon_sym_Music] = ACTIONS(181),
    [anon_sym_music] = ACTIONS(181),
    [anon_sym_Composition] = ACTIONS(181),
    [anon_sym_composition] = ACTIONS(181),
    [anon_sym_Composer] = ACTIONS(181),
    [anon_sym_composer] = ACTIONS(181),
    [anon_sym_Compose] = ACTIONS(187),
    [anon_sym_compose] = ACTIONS(187),
    [anon_sym_Lyrics] = ACTIONS(181),
    [anon_sym_lyrics] = ACTIONS(181),
    [anon_sym_Lyricist] = ACTIONS(181),
    [anon_sym_lyricist] = ACTIONS(181),
    [anon_sym_Lyric] = ACTIONS(187),
    [anon_sym_lyric] = ACTIONS(187),
    [anon_sym_Arrangement] = ACTIONS(181),
    [anon_sym_arrangement] = ACTIONS(181),
    [anon_sym_Arranger] = ACTIONS(181),
    [anon_sym_arranger] = ACTIONS(181),
    [anon_sym_Arrange] = ACTIONS(187),
    [anon_sym_arrange] = ACTIONS(187),
    [anon_sym_Vocal] = ACTIONS(181),
    [anon_sym_vocal] = ACTIONS(181),
    [anon_sym_Vo] = ACTIONS(187),
    [anon_sym_vo] = ACTIONS(187),
    [anon_sym_Performer] = ACTIONS(181),
    [anon_sym_performer] = ACTIONS(181),
    [anon_sym_Illustration] = ACTIONS(181),
    [anon_sym_illustration] = ACTIONS(181),
    [anon_sym_Illust] = ACTIONS(187),
    [anon_sym_illust] = ACTIONS(187),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(187),
    [anon_sym_u5382u724c] = ACTIONS(181),
    [anon_sym_u811au672c] = ACTIONS(181),
    [anon_sym_u63d2u56fe] = ACTIONS(181),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(181),
    [anon_sym_u51fau7248u65b9] = ACTIONS(181),
    [anon_sym_u5f55u97f3] = ACTIONS(181),
    [anon_sym_u539fu4f5c] = ACTIONS(181),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_DISC] = ACTIONS(100),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
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
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_DISC] = ACTIONS(207),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [anon_sym_Music] = ACTIONS(207),
    [anon_sym_music] = ACTIONS(207),
    [anon_sym_Composition] = ACTIONS(207),
    [anon_sym_composition] = ACTIONS(207),
    [anon_sym_Composer] = ACTIONS(207),
    [anon_sym_composer] = ACTIONS(207),
    [anon_sym_Compose] = ACTIONS(207),
    [anon_sym_compose] = ACTIONS(207),
    [anon_sym_Lyrics] = ACTIONS(207),
    [anon_sym_lyrics] = ACTIONS(207),
    [anon_sym_Lyricist] = ACTIONS(207),
    [anon_sym_lyricist] = ACTIONS(207),
    [anon_sym_Lyric] = ACTIONS(207),
    [anon_sym_lyric] = ACTIONS(207),
    [anon_sym_Arrangement] = ACTIONS(207),
    [anon_sym_arrangement] = ACTIONS(207),
    [anon_sym_Arranger] = ACTIONS(207),
    [anon_sym_arranger] = ACTIONS(207),
    [anon_sym_Arrange] = ACTIONS(207),
    [anon_sym_arrange] = ACTIONS(207),
    [anon_sym_Vocal] = ACTIONS(207),
    [anon_sym_vocal] = ACTIONS(207),
    [anon_sym_Vo] = ACTIONS(207),
    [anon_sym_vo] = ACTIONS(207),
    [anon_sym_Performer] = ACTIONS(207),
    [anon_sym_performer] = ACTIONS(207),
    [anon_sym_Illustration] = ACTIONS(207),
    [anon_sym_illustration] = ACTIONS(207),
    [anon_sym_Illust] = ACTIONS(207),
    [anon_sym_illust] = ACTIONS(207),
    [anon_sym_Label] = ACTIONS(207),
    [anon_sym_label] = ACTIONS(207),
    [anon_sym_Circle] = ACTIONS(207),
    [anon_sym_circle] = ACTIONS(207),
    [anon_sym_Producer] = ACTIONS(207),
    [anon_sym_producer] = ACTIONS(207),
    [anon_sym_Recording] = ACTIONS(207),
    [anon_sym_recording] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
  },
  [72] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(209),
    [anon_sym_Music] = ACTIONS(156),
    [anon_sym_music] = ACTIONS(156),
    [anon_sym_Composition] = ACTIONS(156),
    [anon_sym_composition] = ACTIONS(156),
    [anon_sym_Composer] = ACTIONS(156),
    [anon_sym_composer] = ACTIONS(156),
    [anon_sym_Compose] = ACTIONS(156),
    [anon_sym_compose] = ACTIONS(156),
    [anon_sym_Lyrics] = ACTIONS(156),
    [anon_sym_lyrics] = ACTIONS(156),
    [anon_sym_Lyricist] = ACTIONS(156),
    [anon_sym_lyricist] = ACTIONS(156),
    [anon_sym_Lyric] = ACTIONS(156),
    [anon_sym_lyric] = ACTIONS(156),
    [anon_sym_Arrangement] = ACTIONS(156),
    [anon_sym_arrangement] = ACTIONS(156),
    [anon_sym_Arranger] = ACTIONS(156),
    [anon_sym_arranger] = ACTIONS(156),
    [anon_sym_Arrange] = ACTIONS(156),
    [anon_sym_arrange] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(156),
    [anon_sym_vocal] = ACTIONS(156),
    [anon_sym_Vo] = ACTIONS(156),
    [anon_sym_vo] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(156),
    [anon_sym_performer] = ACTIONS(156),
    [anon_sym_Illustration] = ACTIONS(156),
    [anon_sym_illustration] = ACTIONS(156),
    [anon_sym_Illust] = ACTIONS(156),
    [anon_sym_illust] = ACTIONS(156),
    [anon_sym_Label] = ACTIONS(156),
    [anon_sym_label] = ACTIONS(156),
    [anon_sym_Circle] = ACTIONS(156),
    [anon_sym_circle] = ACTIONS(156),
    [anon_sym_Producer] = ACTIONS(156),
    [anon_sym_producer] = ACTIONS(156),
    [anon_sym_Recording] = ACTIONS(156),
    [anon_sym_recording] = ACTIONS(156),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(156),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(156),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(156),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu66f2] = ACTIONS(156),
    [anon_sym_u7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(156),
    [anon_sym_u811au672c] = ACTIONS(156),
    [anon_sym_u63d2u56fe] = ACTIONS(156),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(156),
    [anon_sym_u51fau7248u65b9] = ACTIONS(156),
    [anon_sym_u5f55u97f3] = ACTIONS(156),
    [anon_sym_u539fu4f5c] = ACTIONS(156),
  },
  [73] = {
    [anon_sym_DISC] = ACTIONS(162),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(162),
    [anon_sym_u300a] = ACTIONS(162),
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
    [sym__sep] = ACTIONS(211),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_DISC] = ACTIONS(108),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
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
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DISC] = ACTIONS(215),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [anon_sym_Music] = ACTIONS(215),
    [anon_sym_music] = ACTIONS(215),
    [anon_sym_Composition] = ACTIONS(215),
    [anon_sym_composition] = ACTIONS(215),
    [anon_sym_Composer] = ACTIONS(215),
    [anon_sym_composer] = ACTIONS(215),
    [anon_sym_Compose] = ACTIONS(215),
    [anon_sym_compose] = ACTIONS(215),
    [anon_sym_Lyrics] = ACTIONS(215),
    [anon_sym_lyrics] = ACTIONS(215),
    [anon_sym_Lyricist] = ACTIONS(215),
    [anon_sym_lyricist] = ACTIONS(215),
    [anon_sym_Lyric] = ACTIONS(215),
    [anon_sym_lyric] = ACTIONS(215),
    [anon_sym_Arrangement] = ACTIONS(215),
    [anon_sym_arrangement] = ACTIONS(215),
    [anon_sym_Arranger] = ACTIONS(215),
    [anon_sym_arranger] = ACTIONS(215),
    [anon_sym_Arrange] = ACTIONS(215),
    [anon_sym_arrange] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Vo] = ACTIONS(215),
    [anon_sym_vo] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illust] = ACTIONS(215),
    [anon_sym_illust] = ACTIONS(215),
    [anon_sym_Label] = ACTIONS(215),
    [anon_sym_label] = ACTIONS(215),
    [anon_sym_Circle] = ACTIONS(215),
    [anon_sym_circle] = ACTIONS(215),
    [anon_sym_Producer] = ACTIONS(215),
    [anon_sym_producer] = ACTIONS(215),
    [anon_sym_Recording] = ACTIONS(215),
    [anon_sym_recording] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
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
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_DISC] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_Music] = ACTIONS(217),
    [anon_sym_music] = ACTIONS(217),
    [anon_sym_Composition] = ACTIONS(217),
    [anon_sym_composition] = ACTIONS(217),
    [anon_sym_Composer] = ACTIONS(217),
    [anon_sym_composer] = ACTIONS(217),
    [anon_sym_Compose] = ACTIONS(219),
    [anon_sym_compose] = ACTIONS(219),
    [anon_sym_Lyrics] = ACTIONS(217),
    [anon_sym_lyrics] = ACTIONS(217),
    [anon_sym_Lyricist] = ACTIONS(217),
    [anon_sym_lyricist] = ACTIONS(217),
    [anon_sym_Lyric] = ACTIONS(219),
    [anon_sym_lyric] = ACTIONS(219),
    [anon_sym_Arrangement] = ACTIONS(217),
    [anon_sym_arrangement] = ACTIONS(217),
    [anon_sym_Arranger] = ACTIONS(217),
    [anon_sym_arranger] = ACTIONS(217),
    [anon_sym_Arrange] = ACTIONS(219),
    [anon_sym_arrange] = ACTIONS(219),
    [anon_sym_Vocal] = ACTIONS(217),
    [anon_sym_vocal] = ACTIONS(217),
    [anon_sym_Vo] = ACTIONS(219),
    [anon_sym_vo] = ACTIONS(219),
    [anon_sym_Performer] = ACTIONS(217),
    [anon_sym_performer] = ACTIONS(217),
    [anon_sym_Illustration] = ACTIONS(217),
    [anon_sym_illustration] = ACTIONS(217),
    [anon_sym_Illust] = ACTIONS(219),
    [anon_sym_illust] = ACTIONS(219),
    [anon_sym_Label] = ACTIONS(217),
    [anon_sym_label] = ACTIONS(217),
    [anon_sym_Circle] = ACTIONS(217),
    [anon_sym_circle] = ACTIONS(217),
    [anon_sym_Producer] = ACTIONS(217),
    [anon_sym_producer] = ACTIONS(217),
    [anon_sym_Recording] = ACTIONS(217),
    [anon_sym_recording] = ACTIONS(217),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(217),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(217),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(217),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(217),
    [anon_sym_u6b4cu5531] = ACTIONS(217),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(217),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(217),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(217),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(217),
    [anon_sym_u4f5cu66f2] = ACTIONS(217),
    [anon_sym_u7de8u66f2] = ACTIONS(217),
    [anon_sym_u4f5cu8a5e] = ACTIONS(219),
    [anon_sym_u5382u724c] = ACTIONS(217),
    [anon_sym_u811au672c] = ACTIONS(217),
    [anon_sym_u63d2u56fe] = ACTIONS(217),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(217),
    [anon_sym_u51fau7248u65b9] = ACTIONS(217),
    [anon_sym_u5f55u97f3] = ACTIONS(217),
    [anon_sym_u539fu4f5c] = ACTIONS(217),
  },
  [78] = {
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(221),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(185),
    [anon_sym_Music] = ACTIONS(181),
    [anon_sym_music] = ACTIONS(181),
    [anon_sym_Composition] = ACTIONS(181),
    [anon_sym_composition] = ACTIONS(181),
    [anon_sym_Composer] = ACTIONS(181),
    [anon_sym_composer] = ACTIONS(181),
    [anon_sym_Compose] = ACTIONS(187),
    [anon_sym_compose] = ACTIONS(187),
    [anon_sym_Lyrics] = ACTIONS(181),
    [anon_sym_lyrics] = ACTIONS(181),
    [anon_sym_Lyricist] = ACTIONS(181),
    [anon_sym_lyricist] = ACTIONS(181),
    [anon_sym_Lyric] = ACTIONS(187),
    [anon_sym_lyric] = ACTIONS(187),
    [anon_sym_Arrangement] = ACTIONS(181),
    [anon_sym_arrangement] = ACTIONS(181),
    [anon_sym_Arranger] = ACTIONS(181),
    [anon_sym_arranger] = ACTIONS(181),
    [anon_sym_Arrange] = ACTIONS(187),
    [anon_sym_arrange] = ACTIONS(187),
    [anon_sym_Vocal] = ACTIONS(181),
    [anon_sym_vocal] = ACTIONS(181),
    [anon_sym_Vo] = ACTIONS(187),
    [anon_sym_vo] = ACTIONS(187),
    [anon_sym_Performer] = ACTIONS(181),
    [anon_sym_performer] = ACTIONS(181),
    [anon_sym_Illustration] = ACTIONS(181),
    [anon_sym_illustration] = ACTIONS(181),
    [anon_sym_Illust] = ACTIONS(187),
    [anon_sym_illust] = ACTIONS(187),
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
    [anon_sym_u4f5cu8a5e] = ACTIONS(187),
    [anon_sym_u5382u724c] = ACTIONS(181),
    [anon_sym_u811au672c] = ACTIONS(181),
    [anon_sym_u63d2u56fe] = ACTIONS(181),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(181),
    [anon_sym_u51fau7248u65b9] = ACTIONS(181),
    [anon_sym_u5f55u97f3] = ACTIONS(181),
    [anon_sym_u539fu4f5c] = ACTIONS(181),
  },
  [79] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(79),
    [anon_sym_AT] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(223),
    [anon_sym_Music] = ACTIONS(45),
    [anon_sym_music] = ACTIONS(45),
    [anon_sym_Composition] = ACTIONS(45),
    [anon_sym_composition] = ACTIONS(45),
    [anon_sym_Composer] = ACTIONS(45),
    [anon_sym_composer] = ACTIONS(45),
    [anon_sym_Compose] = ACTIONS(45),
    [anon_sym_compose] = ACTIONS(45),
    [anon_sym_Lyrics] = ACTIONS(45),
    [anon_sym_lyrics] = ACTIONS(45),
    [anon_sym_Lyricist] = ACTIONS(45),
    [anon_sym_lyricist] = ACTIONS(45),
    [anon_sym_Lyric] = ACTIONS(45),
    [anon_sym_lyric] = ACTIONS(45),
    [anon_sym_Arrangement] = ACTIONS(45),
    [anon_sym_arrangement] = ACTIONS(45),
    [anon_sym_Arranger] = ACTIONS(45),
    [anon_sym_arranger] = ACTIONS(45),
    [anon_sym_Arrange] = ACTIONS(45),
    [anon_sym_arrange] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Vo] = ACTIONS(45),
    [anon_sym_vo] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illust] = ACTIONS(45),
    [anon_sym_illust] = ACTIONS(45),
    [anon_sym_Label] = ACTIONS(45),
    [anon_sym_label] = ACTIONS(45),
    [anon_sym_Circle] = ACTIONS(45),
    [anon_sym_circle] = ACTIONS(45),
    [anon_sym_Producer] = ACTIONS(45),
    [anon_sym_producer] = ACTIONS(45),
    [anon_sym_Recording] = ACTIONS(45),
    [anon_sym_recording] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u5382u724c] = ACTIONS(45),
    [anon_sym_u811au672c] = ACTIONS(45),
    [anon_sym_u63d2u56fe] = ACTIONS(45),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(45),
    [anon_sym_u51fau7248u65b9] = ACTIONS(45),
    [anon_sym_u5f55u97f3] = ACTIONS(45),
    [anon_sym_u539fu4f5c] = ACTIONS(45),
  },
  [80] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(146),
    [anon_sym_u300a] = ACTIONS(146),
    [anon_sym_Music] = ACTIONS(146),
    [anon_sym_music] = ACTIONS(146),
    [anon_sym_Composition] = ACTIONS(146),
    [anon_sym_composition] = ACTIONS(146),
    [anon_sym_Composer] = ACTIONS(146),
    [anon_sym_composer] = ACTIONS(146),
    [anon_sym_Compose] = ACTIONS(146),
    [anon_sym_compose] = ACTIONS(146),
    [anon_sym_Lyrics] = ACTIONS(146),
    [anon_sym_lyrics] = ACTIONS(146),
    [anon_sym_Lyricist] = ACTIONS(146),
    [anon_sym_lyricist] = ACTIONS(146),
    [anon_sym_Lyric] = ACTIONS(146),
    [anon_sym_lyric] = ACTIONS(146),
    [anon_sym_Arrangement] = ACTIONS(146),
    [anon_sym_arrangement] = ACTIONS(146),
    [anon_sym_Arranger] = ACTIONS(146),
    [anon_sym_arranger] = ACTIONS(146),
    [anon_sym_Arrange] = ACTIONS(146),
    [anon_sym_arrange] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Vo] = ACTIONS(146),
    [anon_sym_vo] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illust] = ACTIONS(146),
    [anon_sym_illust] = ACTIONS(146),
    [anon_sym_Label] = ACTIONS(146),
    [anon_sym_label] = ACTIONS(146),
    [anon_sym_Circle] = ACTIONS(146),
    [anon_sym_circle] = ACTIONS(146),
    [anon_sym_Producer] = ACTIONS(146),
    [anon_sym_producer] = ACTIONS(146),
    [anon_sym_Recording] = ACTIONS(146),
    [anon_sym_recording] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [sym__sep] = ACTIONS(226),
  },
  [81] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(162),
    [anon_sym_u300a] = ACTIONS(162),
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
    [sym__sep] = ACTIONS(228),
  },
  [82] = {
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
  [83] = {
    [anon_sym_DISC] = ACTIONS(100),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
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
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
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
  [85] = {
    [anon_sym_DISC] = ACTIONS(108),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
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
  [86] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1] = STATE(79),
    [anon_sym_AT] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(230),
    [anon_sym_Music] = ACTIONS(156),
    [anon_sym_music] = ACTIONS(156),
    [anon_sym_Composition] = ACTIONS(156),
    [anon_sym_composition] = ACTIONS(156),
    [anon_sym_Composer] = ACTIONS(156),
    [anon_sym_composer] = ACTIONS(156),
    [anon_sym_Compose] = ACTIONS(156),
    [anon_sym_compose] = ACTIONS(156),
    [anon_sym_Lyrics] = ACTIONS(156),
    [anon_sym_lyrics] = ACTIONS(156),
    [anon_sym_Lyricist] = ACTIONS(156),
    [anon_sym_lyricist] = ACTIONS(156),
    [anon_sym_Lyric] = ACTIONS(156),
    [anon_sym_lyric] = ACTIONS(156),
    [anon_sym_Arrangement] = ACTIONS(156),
    [anon_sym_arrangement] = ACTIONS(156),
    [anon_sym_Arranger] = ACTIONS(156),
    [anon_sym_arranger] = ACTIONS(156),
    [anon_sym_Arrange] = ACTIONS(156),
    [anon_sym_arrange] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(156),
    [anon_sym_vocal] = ACTIONS(156),
    [anon_sym_Vo] = ACTIONS(156),
    [anon_sym_vo] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(156),
    [anon_sym_performer] = ACTIONS(156),
    [anon_sym_Illustration] = ACTIONS(156),
    [anon_sym_illustration] = ACTIONS(156),
    [anon_sym_Illust] = ACTIONS(156),
    [anon_sym_illust] = ACTIONS(156),
    [anon_sym_Label] = ACTIONS(156),
    [anon_sym_label] = ACTIONS(156),
    [anon_sym_Circle] = ACTIONS(156),
    [anon_sym_circle] = ACTIONS(156),
    [anon_sym_Producer] = ACTIONS(156),
    [anon_sym_producer] = ACTIONS(156),
    [anon_sym_Recording] = ACTIONS(156),
    [anon_sym_recording] = ACTIONS(156),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(156),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(156),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(156),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu66f2] = ACTIONS(156),
    [anon_sym_u7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(156),
    [anon_sym_u811au672c] = ACTIONS(156),
    [anon_sym_u63d2u56fe] = ACTIONS(156),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(156),
    [anon_sym_u51fau7248u65b9] = ACTIONS(156),
    [anon_sym_u5f55u97f3] = ACTIONS(156),
    [anon_sym_u539fu4f5c] = ACTIONS(156),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [anon_sym_Music] = ACTIONS(207),
    [anon_sym_music] = ACTIONS(207),
    [anon_sym_Composition] = ACTIONS(207),
    [anon_sym_composition] = ACTIONS(207),
    [anon_sym_Composer] = ACTIONS(207),
    [anon_sym_composer] = ACTIONS(207),
    [anon_sym_Compose] = ACTIONS(207),
    [anon_sym_compose] = ACTIONS(207),
    [anon_sym_Lyrics] = ACTIONS(207),
    [anon_sym_lyrics] = ACTIONS(207),
    [anon_sym_Lyricist] = ACTIONS(207),
    [anon_sym_lyricist] = ACTIONS(207),
    [anon_sym_Lyric] = ACTIONS(207),
    [anon_sym_lyric] = ACTIONS(207),
    [anon_sym_Arrangement] = ACTIONS(207),
    [anon_sym_arrangement] = ACTIONS(207),
    [anon_sym_Arranger] = ACTIONS(207),
    [anon_sym_arranger] = ACTIONS(207),
    [anon_sym_Arrange] = ACTIONS(207),
    [anon_sym_arrange] = ACTIONS(207),
    [anon_sym_Vocal] = ACTIONS(207),
    [anon_sym_vocal] = ACTIONS(207),
    [anon_sym_Vo] = ACTIONS(207),
    [anon_sym_vo] = ACTIONS(207),
    [anon_sym_Performer] = ACTIONS(207),
    [anon_sym_performer] = ACTIONS(207),
    [anon_sym_Illustration] = ACTIONS(207),
    [anon_sym_illustration] = ACTIONS(207),
    [anon_sym_Illust] = ACTIONS(207),
    [anon_sym_illust] = ACTIONS(207),
    [anon_sym_Label] = ACTIONS(207),
    [anon_sym_label] = ACTIONS(207),
    [anon_sym_Circle] = ACTIONS(207),
    [anon_sym_circle] = ACTIONS(207),
    [anon_sym_Producer] = ACTIONS(207),
    [anon_sym_producer] = ACTIONS(207),
    [anon_sym_Recording] = ACTIONS(207),
    [anon_sym_recording] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
  },
  [88] = {
    [anon_sym_DISC] = ACTIONS(207),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [anon_sym_Music] = ACTIONS(207),
    [anon_sym_music] = ACTIONS(207),
    [anon_sym_Composition] = ACTIONS(207),
    [anon_sym_composition] = ACTIONS(207),
    [anon_sym_Composer] = ACTIONS(207),
    [anon_sym_composer] = ACTIONS(207),
    [anon_sym_Compose] = ACTIONS(207),
    [anon_sym_compose] = ACTIONS(207),
    [anon_sym_Lyrics] = ACTIONS(207),
    [anon_sym_lyrics] = ACTIONS(207),
    [anon_sym_Lyricist] = ACTIONS(207),
    [anon_sym_lyricist] = ACTIONS(207),
    [anon_sym_Lyric] = ACTIONS(207),
    [anon_sym_lyric] = ACTIONS(207),
    [anon_sym_Arrangement] = ACTIONS(207),
    [anon_sym_arrangement] = ACTIONS(207),
    [anon_sym_Arranger] = ACTIONS(207),
    [anon_sym_arranger] = ACTIONS(207),
    [anon_sym_Arrange] = ACTIONS(207),
    [anon_sym_arrange] = ACTIONS(207),
    [anon_sym_Vocal] = ACTIONS(207),
    [anon_sym_vocal] = ACTIONS(207),
    [anon_sym_Vo] = ACTIONS(207),
    [anon_sym_vo] = ACTIONS(207),
    [anon_sym_Performer] = ACTIONS(207),
    [anon_sym_performer] = ACTIONS(207),
    [anon_sym_Illustration] = ACTIONS(207),
    [anon_sym_illustration] = ACTIONS(207),
    [anon_sym_Illust] = ACTIONS(207),
    [anon_sym_illust] = ACTIONS(207),
    [anon_sym_Label] = ACTIONS(207),
    [anon_sym_label] = ACTIONS(207),
    [anon_sym_Circle] = ACTIONS(207),
    [anon_sym_circle] = ACTIONS(207),
    [anon_sym_Producer] = ACTIONS(207),
    [anon_sym_producer] = ACTIONS(207),
    [anon_sym_Recording] = ACTIONS(207),
    [anon_sym_recording] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [anon_sym_Music] = ACTIONS(215),
    [anon_sym_music] = ACTIONS(215),
    [anon_sym_Composition] = ACTIONS(215),
    [anon_sym_composition] = ACTIONS(215),
    [anon_sym_Composer] = ACTIONS(215),
    [anon_sym_composer] = ACTIONS(215),
    [anon_sym_Compose] = ACTIONS(215),
    [anon_sym_compose] = ACTIONS(215),
    [anon_sym_Lyrics] = ACTIONS(215),
    [anon_sym_lyrics] = ACTIONS(215),
    [anon_sym_Lyricist] = ACTIONS(215),
    [anon_sym_lyricist] = ACTIONS(215),
    [anon_sym_Lyric] = ACTIONS(215),
    [anon_sym_lyric] = ACTIONS(215),
    [anon_sym_Arrangement] = ACTIONS(215),
    [anon_sym_arrangement] = ACTIONS(215),
    [anon_sym_Arranger] = ACTIONS(215),
    [anon_sym_arranger] = ACTIONS(215),
    [anon_sym_Arrange] = ACTIONS(215),
    [anon_sym_arrange] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Vo] = ACTIONS(215),
    [anon_sym_vo] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illust] = ACTIONS(215),
    [anon_sym_illust] = ACTIONS(215),
    [anon_sym_Label] = ACTIONS(215),
    [anon_sym_label] = ACTIONS(215),
    [anon_sym_Circle] = ACTIONS(215),
    [anon_sym_circle] = ACTIONS(215),
    [anon_sym_Producer] = ACTIONS(215),
    [anon_sym_producer] = ACTIONS(215),
    [anon_sym_Recording] = ACTIONS(215),
    [anon_sym_recording] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
  },
  [90] = {
    [anon_sym_DISC] = ACTIONS(215),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [anon_sym_Music] = ACTIONS(215),
    [anon_sym_music] = ACTIONS(215),
    [anon_sym_Composition] = ACTIONS(215),
    [anon_sym_composition] = ACTIONS(215),
    [anon_sym_Composer] = ACTIONS(215),
    [anon_sym_composer] = ACTIONS(215),
    [anon_sym_Compose] = ACTIONS(215),
    [anon_sym_compose] = ACTIONS(215),
    [anon_sym_Lyrics] = ACTIONS(215),
    [anon_sym_lyrics] = ACTIONS(215),
    [anon_sym_Lyricist] = ACTIONS(215),
    [anon_sym_lyricist] = ACTIONS(215),
    [anon_sym_Lyric] = ACTIONS(215),
    [anon_sym_lyric] = ACTIONS(215),
    [anon_sym_Arrangement] = ACTIONS(215),
    [anon_sym_arrangement] = ACTIONS(215),
    [anon_sym_Arranger] = ACTIONS(215),
    [anon_sym_arranger] = ACTIONS(215),
    [anon_sym_Arrange] = ACTIONS(215),
    [anon_sym_arrange] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Vo] = ACTIONS(215),
    [anon_sym_vo] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illust] = ACTIONS(215),
    [anon_sym_illust] = ACTIONS(215),
    [anon_sym_Label] = ACTIONS(215),
    [anon_sym_label] = ACTIONS(215),
    [anon_sym_Circle] = ACTIONS(215),
    [anon_sym_circle] = ACTIONS(215),
    [anon_sym_Producer] = ACTIONS(215),
    [anon_sym_producer] = ACTIONS(215),
    [anon_sym_Recording] = ACTIONS(215),
    [anon_sym_recording] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
  },
  [91] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(108),
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
  [92] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(100),
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
  },
  [93] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [anon_sym_Music] = ACTIONS(207),
    [anon_sym_music] = ACTIONS(207),
    [anon_sym_Composition] = ACTIONS(207),
    [anon_sym_composition] = ACTIONS(207),
    [anon_sym_Composer] = ACTIONS(207),
    [anon_sym_composer] = ACTIONS(207),
    [anon_sym_Compose] = ACTIONS(207),
    [anon_sym_compose] = ACTIONS(207),
    [anon_sym_Lyrics] = ACTIONS(207),
    [anon_sym_lyrics] = ACTIONS(207),
    [anon_sym_Lyricist] = ACTIONS(207),
    [anon_sym_lyricist] = ACTIONS(207),
    [anon_sym_Lyric] = ACTIONS(207),
    [anon_sym_lyric] = ACTIONS(207),
    [anon_sym_Arrangement] = ACTIONS(207),
    [anon_sym_arrangement] = ACTIONS(207),
    [anon_sym_Arranger] = ACTIONS(207),
    [anon_sym_arranger] = ACTIONS(207),
    [anon_sym_Arrange] = ACTIONS(207),
    [anon_sym_arrange] = ACTIONS(207),
    [anon_sym_Vocal] = ACTIONS(207),
    [anon_sym_vocal] = ACTIONS(207),
    [anon_sym_Vo] = ACTIONS(207),
    [anon_sym_vo] = ACTIONS(207),
    [anon_sym_Performer] = ACTIONS(207),
    [anon_sym_performer] = ACTIONS(207),
    [anon_sym_Illustration] = ACTIONS(207),
    [anon_sym_illustration] = ACTIONS(207),
    [anon_sym_Illust] = ACTIONS(207),
    [anon_sym_illust] = ACTIONS(207),
    [anon_sym_Label] = ACTIONS(207),
    [anon_sym_label] = ACTIONS(207),
    [anon_sym_Circle] = ACTIONS(207),
    [anon_sym_circle] = ACTIONS(207),
    [anon_sym_Producer] = ACTIONS(207),
    [anon_sym_producer] = ACTIONS(207),
    [anon_sym_Recording] = ACTIONS(207),
    [anon_sym_recording] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
  },
  [94] = {
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
  [95] = {
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [anon_sym_Music] = ACTIONS(215),
    [anon_sym_music] = ACTIONS(215),
    [anon_sym_Composition] = ACTIONS(215),
    [anon_sym_composition] = ACTIONS(215),
    [anon_sym_Composer] = ACTIONS(215),
    [anon_sym_composer] = ACTIONS(215),
    [anon_sym_Compose] = ACTIONS(215),
    [anon_sym_compose] = ACTIONS(215),
    [anon_sym_Lyrics] = ACTIONS(215),
    [anon_sym_lyrics] = ACTIONS(215),
    [anon_sym_Lyricist] = ACTIONS(215),
    [anon_sym_lyricist] = ACTIONS(215),
    [anon_sym_Lyric] = ACTIONS(215),
    [anon_sym_lyric] = ACTIONS(215),
    [anon_sym_Arrangement] = ACTIONS(215),
    [anon_sym_arrangement] = ACTIONS(215),
    [anon_sym_Arranger] = ACTIONS(215),
    [anon_sym_arranger] = ACTIONS(215),
    [anon_sym_Arrange] = ACTIONS(215),
    [anon_sym_arrange] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Vo] = ACTIONS(215),
    [anon_sym_vo] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illust] = ACTIONS(215),
    [anon_sym_illust] = ACTIONS(215),
    [anon_sym_Label] = ACTIONS(215),
    [anon_sym_label] = ACTIONS(215),
    [anon_sym_Circle] = ACTIONS(215),
    [anon_sym_circle] = ACTIONS(215),
    [anon_sym_Producer] = ACTIONS(215),
    [anon_sym_producer] = ACTIONS(215),
    [anon_sym_Recording] = ACTIONS(215),
    [anon_sym_recording] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
  },
  [96] = {
    [anon_sym_u300a] = ACTIONS(196),
    [sym_creator_name] = ACTIONS(196),
    [anon_sym_Music] = ACTIONS(196),
    [anon_sym_music] = ACTIONS(196),
    [anon_sym_Composition] = ACTIONS(196),
    [anon_sym_composition] = ACTIONS(196),
    [anon_sym_Composer] = ACTIONS(196),
    [anon_sym_composer] = ACTIONS(196),
    [anon_sym_Compose] = ACTIONS(196),
    [anon_sym_compose] = ACTIONS(196),
    [anon_sym_Lyrics] = ACTIONS(196),
    [anon_sym_lyrics] = ACTIONS(196),
    [anon_sym_Lyricist] = ACTIONS(196),
    [anon_sym_lyricist] = ACTIONS(196),
    [anon_sym_Lyric] = ACTIONS(196),
    [anon_sym_lyric] = ACTIONS(196),
    [anon_sym_Arrangement] = ACTIONS(196),
    [anon_sym_arrangement] = ACTIONS(196),
    [anon_sym_Arranger] = ACTIONS(196),
    [anon_sym_arranger] = ACTIONS(196),
    [anon_sym_Arrange] = ACTIONS(196),
    [anon_sym_arrange] = ACTIONS(196),
    [anon_sym_Vocal] = ACTIONS(196),
    [anon_sym_vocal] = ACTIONS(196),
    [anon_sym_Vo] = ACTIONS(196),
    [anon_sym_vo] = ACTIONS(196),
    [anon_sym_Performer] = ACTIONS(196),
    [anon_sym_performer] = ACTIONS(196),
    [anon_sym_Illustration] = ACTIONS(196),
    [anon_sym_illustration] = ACTIONS(196),
    [anon_sym_Illust] = ACTIONS(196),
    [anon_sym_illust] = ACTIONS(196),
    [anon_sym_Label] = ACTIONS(196),
    [anon_sym_label] = ACTIONS(196),
    [anon_sym_Circle] = ACTIONS(196),
    [anon_sym_circle] = ACTIONS(196),
    [anon_sym_Producer] = ACTIONS(196),
    [anon_sym_producer] = ACTIONS(196),
    [anon_sym_Recording] = ACTIONS(196),
    [anon_sym_recording] = ACTIONS(196),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(196),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(196),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(196),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(196),
    [anon_sym_u6b4cu5531] = ACTIONS(196),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(196),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(196),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(196),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(196),
    [anon_sym_u4f5cu66f2] = ACTIONS(196),
    [anon_sym_u7de8u66f2] = ACTIONS(196),
    [anon_sym_u4f5cu8a5e] = ACTIONS(196),
    [anon_sym_u5382u724c] = ACTIONS(196),
    [anon_sym_u811au672c] = ACTIONS(196),
    [anon_sym_u63d2u56fe] = ACTIONS(196),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(196),
    [anon_sym_u51fau7248u65b9] = ACTIONS(196),
    [anon_sym_u5f55u97f3] = ACTIONS(196),
    [anon_sym_u539fu4f5c] = ACTIONS(196),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_DISC,
    ACTIONS(5), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(7), 1,
      anon_sym_u300a,
    STATE(20), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(25), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(33), 1,
      sym_song_title,
    STATE(49), 1,
      sym__song_title_maybefeat,
    STATE(69), 1,
      sym__quotable_song_title_maybefeat,
    STATE(101), 1,
      aux_sym__disc_repeat1,
    STATE(126), 1,
      sym_song,
    STATE(151), 1,
      sym__disc,
    STATE(109), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [38] = 10,
    ACTIONS(7), 1,
      anon_sym_u300a,
    ACTIONS(27), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(5), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(14), 1,
      sym_song_title,
    STATE(49), 1,
      sym__song_title_maybefeat,
    STATE(60), 1,
      sym__quotable_song_title_maybefeat,
    STATE(99), 1,
      aux_sym__disc_repeat1,
    STATE(111), 1,
      sym_song,
    STATE(144), 1,
      sym__disc,
  [69] = 9,
    ACTIONS(7), 1,
      anon_sym_u300a,
    ACTIONS(27), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(3), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(5), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(14), 1,
      sym_song_title,
    STATE(49), 1,
      sym__song_title_maybefeat,
    STATE(60), 1,
      sym__quotable_song_title_maybefeat,
    STATE(100), 1,
      aux_sym__disc_repeat1,
    STATE(107), 1,
      sym_song,
  [97] = 8,
    ACTIONS(232), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(235), 1,
      anon_sym_u300a,
    STATE(30), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(35), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(49), 1,
      sym__song_title_maybefeat,
    STATE(59), 1,
      sym_song_title,
    STATE(78), 1,
      sym__quotable_song_title_maybefeat,
    STATE(100), 2,
      sym_song,
      aux_sym__disc_repeat1,
  [123] = 9,
    ACTIONS(5), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    ACTIONS(7), 1,
      anon_sym_u300a,
    STATE(12), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(20), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(33), 1,
      sym_song_title,
    STATE(49), 1,
      sym__song_title_maybefeat,
    STATE(69), 1,
      sym__quotable_song_title_maybefeat,
    STATE(100), 1,
      aux_sym__disc_repeat1,
    STATE(120), 1,
      sym_song,
  [151] = 4,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(60), 1,
      anon_sym_u300b,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(11), 1,
      sym__quotable_creator_name,
  [164] = 3,
    ACTIONS(240), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(103), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(45), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [175] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 3,
      anon_sym_DISC,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [184] = 4,
    ACTIONS(52), 1,
      anon_sym_u300b,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(11), 1,
      sym__quotable_creator_name,
  [197] = 4,
    ACTIONS(247), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(110), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    STATE(116), 1,
      sym_song_title,
    STATE(148), 1,
      sym__song_title_maybefeat,
  [210] = 3,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 1,
      anon_sym_DISC,
    ACTIONS(253), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [221] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 3,
      anon_sym_DISC,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [230] = 3,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      anon_sym_DISC,
    STATE(112), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [241] = 3,
    ACTIONS(259), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(103), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
    ACTIONS(25), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [252] = 3,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      anon_sym_DISC,
    ACTIONS(253), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [263] = 3,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      anon_sym_DISC,
    STATE(112), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [274] = 3,
    ACTIONS(257), 1,
      anon_sym_DISC,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(112), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [285] = 3,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym__sep,
    STATE(127), 1,
      aux_sym_credit_field_repeat2,
  [295] = 3,
    ACTIONS(80), 1,
      anon_sym_u300b,
    ACTIONS(276), 1,
      sym__ssep,
    STATE(7), 1,
      aux_sym_feat_field_repeat1,
  [305] = 3,
    ACTIONS(68), 1,
      anon_sym_u300b,
    ACTIONS(278), 1,
      aux_sym_feat_field_token1,
    STATE(32), 1,
      sym_feat_field,
  [315] = 1,
    ACTIONS(92), 3,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [321] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(53), 1,
      sym__quotable_creator_name,
  [331] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(17), 1,
      sym__quotable_creator_name,
  [341] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [349] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(44), 1,
      sym__quotable_creator_name,
  [359] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(132), 1,
      sym__quotable_creator_name,
  [369] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [377] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [385] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(238), 1,
      sym_creator_name,
    STATE(11), 1,
      sym__quotable_creator_name,
  [395] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [403] = 3,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      sym__sep,
    STATE(130), 1,
      aux_sym_credit_field_repeat2,
  [413] = 3,
    ACTIONS(140), 1,
      anon_sym_u300a,
    ACTIONS(284), 1,
      sym_creator_name,
    STATE(139), 1,
      sym__quotable_creator_name,
  [423] = 3,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      sym__sep,
    STATE(130), 1,
      aux_sym_credit_field_repeat2,
  [433] = 3,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      sym__sep,
    STATE(130), 1,
      aux_sym_credit_field_repeat2,
  [443] = 3,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      sym__sep,
    STATE(134), 1,
      aux_sym_credit_field_repeat2,
  [453] = 3,
    ACTIONS(86), 1,
      anon_sym_u300b,
    ACTIONS(299), 1,
      sym__ssep,
    STATE(115), 1,
      aux_sym_feat_field_repeat1,
  [463] = 3,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(303), 1,
      sym__sep,
    STATE(129), 1,
      aux_sym_credit_field_repeat2,
  [473] = 3,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      sym__sep,
    STATE(130), 1,
      aux_sym_credit_field_repeat2,
  [483] = 3,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      sym__sep,
    STATE(130), 1,
      aux_sym_credit_field_repeat2,
  [493] = 3,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      sym__sep,
    STATE(135), 1,
      aux_sym_credit_field_repeat2,
  [503] = 2,
    ACTIONS(317), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(86), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [510] = 2,
    ACTIONS(74), 1,
      sym__sep,
    ACTIONS(76), 1,
      anon_sym_LF,
  [517] = 2,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      sym__sep,
  [524] = 2,
    ACTIONS(323), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(50), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [531] = 2,
    ACTIONS(325), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
    STATE(72), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1,
  [538] = 1,
    ACTIONS(245), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [543] = 2,
    ACTIONS(94), 1,
      sym__sep,
    ACTIONS(96), 1,
      anon_sym_LF,
  [550] = 1,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_DISC,
  [555] = 1,
    ACTIONS(245), 2,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
      anon_sym_u300a,
  [560] = 1,
    ACTIONS(329), 1,
      anon_sym_u300b,
  [564] = 1,
    ACTIONS(331), 1,
      anon_sym_u300b,
  [568] = 1,
    ACTIONS(333), 1,
      anon_sym_u300b,
  [572] = 1,
    ACTIONS(335), 1,
      sym__sep,
  [576] = 1,
    ACTIONS(337), 1,
      anon_sym_LF,
  [580] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [584] = 1,
    ACTIONS(339), 1,
      aux_sym__quotable_creator_name_token1,
  [588] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [592] = 1,
    ACTIONS(341), 1,
      aux_sym__quotable_creator_name_token1,
  [596] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [600] = 1,
    ACTIONS(345), 1,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(97)] = 0,
  [SMALL_STATE(98)] = 38,
  [SMALL_STATE(99)] = 69,
  [SMALL_STATE(100)] = 97,
  [SMALL_STATE(101)] = 123,
  [SMALL_STATE(102)] = 151,
  [SMALL_STATE(103)] = 164,
  [SMALL_STATE(104)] = 175,
  [SMALL_STATE(105)] = 184,
  [SMALL_STATE(106)] = 197,
  [SMALL_STATE(107)] = 210,
  [SMALL_STATE(108)] = 221,
  [SMALL_STATE(109)] = 230,
  [SMALL_STATE(110)] = 241,
  [SMALL_STATE(111)] = 252,
  [SMALL_STATE(112)] = 263,
  [SMALL_STATE(113)] = 274,
  [SMALL_STATE(114)] = 285,
  [SMALL_STATE(115)] = 295,
  [SMALL_STATE(116)] = 305,
  [SMALL_STATE(117)] = 315,
  [SMALL_STATE(118)] = 321,
  [SMALL_STATE(119)] = 331,
  [SMALL_STATE(120)] = 341,
  [SMALL_STATE(121)] = 349,
  [SMALL_STATE(122)] = 359,
  [SMALL_STATE(123)] = 369,
  [SMALL_STATE(124)] = 377,
  [SMALL_STATE(125)] = 385,
  [SMALL_STATE(126)] = 395,
  [SMALL_STATE(127)] = 403,
  [SMALL_STATE(128)] = 413,
  [SMALL_STATE(129)] = 423,
  [SMALL_STATE(130)] = 433,
  [SMALL_STATE(131)] = 443,
  [SMALL_STATE(132)] = 453,
  [SMALL_STATE(133)] = 463,
  [SMALL_STATE(134)] = 473,
  [SMALL_STATE(135)] = 483,
  [SMALL_STATE(136)] = 493,
  [SMALL_STATE(137)] = 503,
  [SMALL_STATE(138)] = 510,
  [SMALL_STATE(139)] = 517,
  [SMALL_STATE(140)] = 524,
  [SMALL_STATE(141)] = 531,
  [SMALL_STATE(142)] = 538,
  [SMALL_STATE(143)] = 543,
  [SMALL_STATE(144)] = 550,
  [SMALL_STATE(145)] = 555,
  [SMALL_STATE(146)] = 560,
  [SMALL_STATE(147)] = 564,
  [SMALL_STATE(148)] = 568,
  [SMALL_STATE(149)] = 572,
  [SMALL_STATE(150)] = 576,
  [SMALL_STATE(151)] = 580,
  [SMALL_STATE(152)] = 584,
  [SMALL_STATE(153)] = 588,
  [SMALL_STATE(154)] = 592,
  [SMALL_STATE(155)] = 596,
  [SMALL_STATE(156)] = 600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 1, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 2, 0, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 13),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 13), SHIFT_REPEAT(125),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 9),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 9),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 4, 0, 10),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 4, 0, 10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 12),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 11),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 10),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 10),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 9),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 9),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 9),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 10),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 10),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 10),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 8),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quotable_song_title_maybefeat_maybecomment_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__disc, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__disc, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 13), SHIFT_REPEAT(128),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
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
