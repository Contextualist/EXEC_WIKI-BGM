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
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 81
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_DISC = 1,
  anon_sym_LF = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token1 = 4,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token2 = 5,
  anon_sym_u300a = 6,
  anon_sym_u300b = 7,
  aux_sym_song_title_token1 = 8,
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
  anon_sym_GuestVocal = 50,
  anon_sym_Guestvocal = 51,
  anon_sym_guestvocal = 52,
  anon_sym_Chorus = 53,
  anon_sym_chorus = 54,
  anon_sym_Mixing = 55,
  anon_sym_mixing = 56,
  anon_sym_Mastering = 57,
  anon_sym_mastering = 58,
  anon_sym_u30dcu30fcu30abu30eb = 59,
  anon_sym_u30a2u30ecu30f3u30b8 = 60,
  anon_sym_u30a4u30e9u30b9u30c8 = 61,
  anon_sym_u30ecu30fcu30d9u30eb = 62,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 63,
  anon_sym_u6b4cu5531 = 64,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 65,
  anon_sym_u4f5cu8bcdu4f5cu7f16u66f2 = 66,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 67,
  anon_sym_u4f5cu8bcdu4f5cu66f2 = 68,
  anon_sym_u4f5cu8a5eu66f2 = 69,
  anon_sym_u4f5cu8bcdu66f2 = 70,
  anon_sym_u4f5cu7de8u66f2 = 71,
  anon_sym_u4f5cu7f16u66f2 = 72,
  anon_sym_u4f5cu66f2 = 73,
  anon_sym_u7de8u66f2 = 74,
  anon_sym_u7f16u66f2 = 75,
  anon_sym_u4f5cu8a5e = 76,
  anon_sym_u4f5cu8bcd = 77,
  anon_sym_u5382u724c = 78,
  anon_sym_u811au672c = 79,
  anon_sym_u63d2u56fe = 80,
  anon_sym_u5236u4f5cu4eba = 81,
  anon_sym_u51fau7248u65b9 = 82,
  anon_sym_u5f55u97f3 = 83,
  anon_sym_u539fu4f5c = 84,
  anon_sym_u58f0u4e50 = 85,
  anon_sym_u4e50u5668 = 86,
  anon_sym_u6df7u97f3 = 87,
  anon_sym_u6bcdu5e26u5236u4f5c = 88,
  sym__sep = 89,
  sym__ssep = 90,
  sym_source_file = 91,
  sym_disc = 92,
  aux_sym__disc = 93,
  sym_song = 94,
  sym_credit_block = 95,
  sym_credit_field = 96,
  sym__quotable_song_title_maybefeat_maybecomment = 97,
  sym__quotable_song_title_maybefeat = 98,
  sym__song_title_maybefeat = 99,
  sym_song_title = 100,
  sym_feat_field = 101,
  sym__quotable_creator_name = 102,
  sym_role = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_credit_block_repeat1 = 105,
  aux_sym_credit_field_repeat1 = 106,
  aux_sym_credit_field_repeat2 = 107,
  aux_sym_song_title_repeat1 = 108,
  aux_sym_feat_field_repeat1 = 109,
  alias_sym_creator_sep = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DISC] = "DISC",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = "comment",
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = "comment",
  [anon_sym_u300a] = "\u300a",
  [anon_sym_u300b] = "\u300b",
  [aux_sym_song_title_token1] = "song_title_token1",
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
  [anon_sym_GuestVocal] = "Guest Vocal",
  [anon_sym_Guestvocal] = "Guest vocal",
  [anon_sym_guestvocal] = "guest vocal",
  [anon_sym_Chorus] = "Chorus",
  [anon_sym_chorus] = "chorus",
  [anon_sym_Mixing] = "Mixing",
  [anon_sym_mixing] = "mixing",
  [anon_sym_Mastering] = "Mastering",
  [anon_sym_mastering] = "mastering",
  [anon_sym_u30dcu30fcu30abu30eb] = "\u30dc\u30fc\u30ab\u30eb",
  [anon_sym_u30a2u30ecu30f3u30b8] = "\u30a2\u30ec\u30f3\u30b8",
  [anon_sym_u30a4u30e9u30b9u30c8] = "\u30a4\u30e9\u30b9\u30c8",
  [anon_sym_u30ecu30fcu30d9u30eb] = "\u30ec\u30fc\u30d9\u30eb",
  [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = "\u30de\u30b9\u30bf\u30ea\u30f3\u30b0",
  [anon_sym_u6b4cu5531] = "\u6b4c\u5531",
  [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = "\u4f5c\u8a5e\u4f5c\u7de8\u66f2",
  [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = "\u4f5c\u8bcd\u4f5c\u7f16\u66f2",
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = "\u4f5c\u8a5e\u4f5c\u66f2",
  [anon_sym_u4f5cu8bcdu4f5cu66f2] = "\u4f5c\u8bcd\u4f5c\u66f2",
  [anon_sym_u4f5cu8a5eu66f2] = "\u4f5c\u8a5e\u66f2",
  [anon_sym_u4f5cu8bcdu66f2] = "\u4f5c\u8bcd\u66f2",
  [anon_sym_u4f5cu7de8u66f2] = "\u4f5c\u7de8\u66f2",
  [anon_sym_u4f5cu7f16u66f2] = "\u4f5c\u7f16\u66f2",
  [anon_sym_u4f5cu66f2] = "\u4f5c\u66f2",
  [anon_sym_u7de8u66f2] = "\u7de8\u66f2",
  [anon_sym_u7f16u66f2] = "\u7f16\u66f2",
  [anon_sym_u4f5cu8a5e] = "\u4f5c\u8a5e",
  [anon_sym_u4f5cu8bcd] = "\u4f5c\u8bcd",
  [anon_sym_u5382u724c] = "\u5382\u724c",
  [anon_sym_u811au672c] = "\u811a\u672c",
  [anon_sym_u63d2u56fe] = "\u63d2\u56fe",
  [anon_sym_u5236u4f5cu4eba] = "\u5236\u4f5c\u4eba",
  [anon_sym_u51fau7248u65b9] = "\u51fa\u7248\u65b9",
  [anon_sym_u5f55u97f3] = "\u5f55\u97f3",
  [anon_sym_u539fu4f5c] = "\u539f\u4f5c",
  [anon_sym_u58f0u4e50] = "\u58f0\u4e50",
  [anon_sym_u4e50u5668] = "\u4e50\u5668",
  [anon_sym_u6df7u97f3] = "\u6df7\u97f3",
  [anon_sym_u6bcdu5e26u5236u4f5c] = "\u6bcd\u5e26\u5236\u4f5c",
  [sym__sep] = "_sep",
  [sym__ssep] = "_ssep",
  [sym_source_file] = "source_file",
  [sym_disc] = "disc",
  [aux_sym__disc] = "_disc",
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
  [aux_sym_song_title_repeat1] = "song_title_repeat1",
  [aux_sym_feat_field_repeat1] = "feat_field_repeat1",
  [alias_sym_creator_sep] = "creator_sep",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DISC] = anon_sym_DISC,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [anon_sym_u300a] = anon_sym_u300a,
  [anon_sym_u300b] = anon_sym_u300b,
  [aux_sym_song_title_token1] = aux_sym_song_title_token1,
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
  [anon_sym_GuestVocal] = anon_sym_GuestVocal,
  [anon_sym_Guestvocal] = anon_sym_Guestvocal,
  [anon_sym_guestvocal] = anon_sym_guestvocal,
  [anon_sym_Chorus] = anon_sym_Chorus,
  [anon_sym_chorus] = anon_sym_chorus,
  [anon_sym_Mixing] = anon_sym_Mixing,
  [anon_sym_mixing] = anon_sym_mixing,
  [anon_sym_Mastering] = anon_sym_Mastering,
  [anon_sym_mastering] = anon_sym_mastering,
  [anon_sym_u30dcu30fcu30abu30eb] = anon_sym_u30dcu30fcu30abu30eb,
  [anon_sym_u30a2u30ecu30f3u30b8] = anon_sym_u30a2u30ecu30f3u30b8,
  [anon_sym_u30a4u30e9u30b9u30c8] = anon_sym_u30a4u30e9u30b9u30c8,
  [anon_sym_u30ecu30fcu30d9u30eb] = anon_sym_u30ecu30fcu30d9u30eb,
  [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = anon_sym_u30deu30b9u30bfu30eau30f3u30b0,
  [anon_sym_u6b4cu5531] = anon_sym_u6b4cu5531,
  [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = anon_sym_u4f5cu8a5eu4f5cu7de8u66f2,
  [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = anon_sym_u4f5cu8bcdu4f5cu7f16u66f2,
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = anon_sym_u4f5cu8a5eu4f5cu66f2,
  [anon_sym_u4f5cu8bcdu4f5cu66f2] = anon_sym_u4f5cu8bcdu4f5cu66f2,
  [anon_sym_u4f5cu8a5eu66f2] = anon_sym_u4f5cu8a5eu66f2,
  [anon_sym_u4f5cu8bcdu66f2] = anon_sym_u4f5cu8bcdu66f2,
  [anon_sym_u4f5cu7de8u66f2] = anon_sym_u4f5cu7de8u66f2,
  [anon_sym_u4f5cu7f16u66f2] = anon_sym_u4f5cu7f16u66f2,
  [anon_sym_u4f5cu66f2] = anon_sym_u4f5cu66f2,
  [anon_sym_u7de8u66f2] = anon_sym_u7de8u66f2,
  [anon_sym_u7f16u66f2] = anon_sym_u7f16u66f2,
  [anon_sym_u4f5cu8a5e] = anon_sym_u4f5cu8a5e,
  [anon_sym_u4f5cu8bcd] = anon_sym_u4f5cu8bcd,
  [anon_sym_u5382u724c] = anon_sym_u5382u724c,
  [anon_sym_u811au672c] = anon_sym_u811au672c,
  [anon_sym_u63d2u56fe] = anon_sym_u63d2u56fe,
  [anon_sym_u5236u4f5cu4eba] = anon_sym_u5236u4f5cu4eba,
  [anon_sym_u51fau7248u65b9] = anon_sym_u51fau7248u65b9,
  [anon_sym_u5f55u97f3] = anon_sym_u5f55u97f3,
  [anon_sym_u539fu4f5c] = anon_sym_u539fu4f5c,
  [anon_sym_u58f0u4e50] = anon_sym_u58f0u4e50,
  [anon_sym_u4e50u5668] = anon_sym_u4e50u5668,
  [anon_sym_u6df7u97f3] = anon_sym_u6df7u97f3,
  [anon_sym_u6bcdu5e26u5236u4f5c] = anon_sym_u6bcdu5e26u5236u4f5c,
  [sym__sep] = sym__sep,
  [sym__ssep] = sym__ssep,
  [sym_source_file] = sym_source_file,
  [sym_disc] = sym_disc,
  [aux_sym__disc] = aux_sym__disc,
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
  [aux_sym_song_title_repeat1] = aux_sym_song_title_repeat1,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quotable_song_title_maybefeat_maybecomment_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym_song_title_token1] = {
    .visible = false,
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
  [anon_sym_GuestVocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Guestvocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guestvocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Chorus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chorus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mixing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mastering] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mastering] = {
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
  [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = {
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
  [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5eu4f5cu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8bcdu4f5cu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5eu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8bcdu66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu7de8u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu7f16u66f2] = {
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
  [anon_sym_u7f16u66f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8a5e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4f5cu8bcd] = {
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
  [anon_sym_u58f0u4e50] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u4e50u5668] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u6df7u97f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u6bcdu5e26u5236u4f5c] = {
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
  [aux_sym__disc] = {
    .visible = false,
    .named = false,
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
  [aux_sym_song_title_repeat1] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role, 0},
  [1] =
    {field_title, 0, .inherited = true},
  [2] =
    {field_title, 0},
  [3] =
    {field_creator, 0},
  [4] =
    {field_title, 1},
  [5] =
    {field_creator, 1, .inherited = true},
  [6] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [9] =
    {field_creator, 1},
  [10] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [12] =
    {field_creator, 0, .inherited = true},
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0, .inherited = true},
    {field_creatorSeparator, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 10,
  [15] = 5,
  [16] = 9,
  [17] = 3,
  [18] = 18,
  [19] = 19,
  [20] = 7,
  [21] = 21,
  [22] = 6,
  [23] = 4,
  [24] = 11,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 19,
  [30] = 30,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 25,
  [35] = 21,
  [36] = 36,
  [37] = 37,
  [38] = 26,
  [39] = 18,
  [40] = 40,
  [41] = 32,
  [42] = 40,
  [43] = 32,
  [44] = 37,
  [45] = 30,
  [46] = 33,
  [47] = 36,
  [48] = 36,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 52,
  [58] = 52,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 50,
  [63] = 63,
  [64] = 51,
  [65] = 56,
  [66] = 56,
  [67] = 67,
  [68] = 55,
  [69] = 53,
  [70] = 70,
  [71] = 54,
  [72] = 60,
  [73] = 63,
  [74] = 63,
  [75] = 67,
  [76] = 70,
  [77] = 67,
  [78] = 60,
  [79] = 70,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 11,
  [91] = 91,
  [92] = 9,
  [93] = 93,
  [94] = 94,
  [95] = 3,
  [96] = 5,
  [97] = 97,
  [98] = 97,
  [99] = 10,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 100,
  [104] = 104,
  [105] = 104,
  [106] = 101,
  [107] = 101,
  [108] = 102,
  [109] = 93,
  [110] = 12,
  [111] = 111,
  [112] = 112,
  [113] = 100,
  [114] = 89,
  [115] = 104,
  [116] = 102,
  [117] = 4,
  [118] = 7,
  [119] = 119,
  [120] = 19,
  [121] = 25,
  [122] = 25,
  [123] = 18,
  [124] = 18,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 127,
  [134] = 129,
  [135] = 27,
  [136] = 130,
  [137] = 129,
  [138] = 129,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 140,
  [143] = 140,
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
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'G') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'V') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x300b) ADVANCE(293);
      if (lookahead == 0x30a2) ADVANCE(330);
      if (lookahead == 0x30a4) ADVANCE(329);
      if (lookahead == 0x30dc) ADVANCE(331);
      if (lookahead == 0x30de) ADVANCE(328);
      if (lookahead == 0x30ec) ADVANCE(332);
      if (lookahead == 0x4e50) ADVANCE(338);
      if (lookahead == 0x4f5c) ADVANCE(341);
      if (lookahead == 0x51fa) ADVANCE(345);
      if (lookahead == 0x5236) ADVANCE(334);
      if (lookahead == 0x5382) ADVANCE(346);
      if (lookahead == 0x539f) ADVANCE(336);
      if (lookahead == 0x58f0) ADVANCE(333);
      if (lookahead == 0x5f55) ADVANCE(347);
      if (lookahead == 0x63d2) ADVANCE(339);
      if (lookahead == 0x6b4c) ADVANCE(337);
      if (lookahead == 0x6bcd) ADVANCE(340);
      if (lookahead == 0x6df7) ADVANCE(348);
      if (lookahead == 0x7de8) ADVANCE(342);
      if (lookahead == 0x7f16) ADVANCE(343);
      if (lookahead == 0x811a) ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 0x300b) ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(740);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(741);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(282);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(353);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(351);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'A', 490,
        'C', 421,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x300a, 292,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 564,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(11);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'A', 150,
        'C', 82,
        'G', 201,
        'I', 98,
        'L', 16,
        'M', 17,
        'P', 59,
        'R', 49,
        'V', 129,
        'a', 169,
        'c', 83,
        'g', 207,
        'i', 110,
        'l', 27,
        'm', 29,
        'p', 69,
        'r', 71,
        'v', 130,
        0x300a, 292,
        0x30a2, 228,
        0x30a4, 224,
        0x30dc, 231,
        0x30de, 219,
        0x30ec, 232,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 254,
        0x5236, 235,
        0x5382, 255,
        0x539f, 236,
        0x58f0, 233,
        0x5f55, 256,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 257,
        0x7de8, 245,
        0x7f16, 246,
        0x811a, 253,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(279);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'V') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(672);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(674);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(676);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(661);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(678);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(663);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(639);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 210:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 212:
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x300b) ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(213);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(586);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 213:
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x300b) ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == 0x300b) ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(742);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(215);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(743);
      END_STATE();
    case 215:
      if (lookahead == 0x300b) ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == 0x30ab) ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 0x30b0) ADVANCE(688);
      END_STATE();
    case 218:
      if (lookahead == 0x30b8) ADVANCE(682);
      END_STATE();
    case 219:
      if (lookahead == 0x30b9) ADVANCE(221);
      END_STATE();
    case 220:
      if (lookahead == 0x30b9) ADVANCE(222);
      END_STATE();
    case 221:
      if (lookahead == 0x30bf) ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == 0x30c8) ADVANCE(684);
      END_STATE();
    case 223:
      if (lookahead == 0x30d9) ADVANCE(227);
      END_STATE();
    case 224:
      if (lookahead == 0x30e9) ADVANCE(220);
      END_STATE();
    case 225:
      if (lookahead == 0x30ea) ADVANCE(230);
      END_STATE();
    case 226:
      if (lookahead == 0x30eb) ADVANCE(680);
      END_STATE();
    case 227:
      if (lookahead == 0x30eb) ADVANCE(686);
      END_STATE();
    case 228:
      if (lookahead == 0x30ec) ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 0x30f3) ADVANCE(218);
      END_STATE();
    case 230:
      if (lookahead == 0x30f3) ADVANCE(217);
      END_STATE();
    case 231:
      if (lookahead == 0x30fc) ADVANCE(216);
      END_STATE();
    case 232:
      if (lookahead == 0x30fc) ADVANCE(223);
      END_STATE();
    case 233:
      if (lookahead == 0x4e50) ADVANCE(732);
      END_STATE();
    case 234:
      if (lookahead == 0x4eba) ADVANCE(724);
      END_STATE();
    case 235:
      if (lookahead == 0x4f5c) ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 0x4f5c) ADVANCE(730);
      END_STATE();
    case 237:
      if (lookahead == 0x4f5c) ADVANCE(738);
      END_STATE();
    case 238:
      if (lookahead == 0x5236) ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == 0x5531) ADVANCE(690);
      END_STATE();
    case 240:
      if (lookahead == 0x5668) ADVANCE(734);
      END_STATE();
    case 241:
      if (lookahead == 0x56fe) ADVANCE(722);
      END_STATE();
    case 242:
      if (lookahead == 0x5e26) ADVANCE(238);
      END_STATE();
    case 243:
      if (lookahead == 0x65b9) ADVANCE(726);
      END_STATE();
    case 244:
      if (lookahead == 0x66f2) ADVANCE(708);
      if (lookahead == 0x7de8) ADVANCE(247);
      if (lookahead == 0x7f16) ADVANCE(248);
      if (lookahead == 0x8a5e) ADVANCE(714);
      if (lookahead == 0x8bcd) ADVANCE(716);
      END_STATE();
    case 245:
      if (lookahead == 0x66f2) ADVANCE(710);
      END_STATE();
    case 246:
      if (lookahead == 0x66f2) ADVANCE(712);
      END_STATE();
    case 247:
      if (lookahead == 0x66f2) ADVANCE(704);
      END_STATE();
    case 248:
      if (lookahead == 0x66f2) ADVANCE(706);
      END_STATE();
    case 249:
      if (lookahead == 0x66f2) ADVANCE(696);
      if (lookahead == 0x7de8) ADVANCE(251);
      END_STATE();
    case 250:
      if (lookahead == 0x66f2) ADVANCE(698);
      if (lookahead == 0x7f16) ADVANCE(252);
      END_STATE();
    case 251:
      if (lookahead == 0x66f2) ADVANCE(692);
      END_STATE();
    case 252:
      if (lookahead == 0x66f2) ADVANCE(694);
      END_STATE();
    case 253:
      if (lookahead == 0x672c) ADVANCE(720);
      END_STATE();
    case 254:
      if (lookahead == 0x7248) ADVANCE(243);
      END_STATE();
    case 255:
      if (lookahead == 0x724c) ADVANCE(718);
      END_STATE();
    case 256:
      if (lookahead == 0x97f3) ADVANCE(728);
      END_STATE();
    case 257:
      if (lookahead == 0x97f3) ADVANCE(736);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 259:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(260);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'G') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'V') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x30a2) ADVANCE(330);
      if (lookahead == 0x30a4) ADVANCE(329);
      if (lookahead == 0x30dc) ADVANCE(331);
      if (lookahead == 0x30de) ADVANCE(328);
      if (lookahead == 0x30ec) ADVANCE(332);
      if (lookahead == 0x4e50) ADVANCE(338);
      if (lookahead == 0x4f5c) ADVANCE(341);
      if (lookahead == 0x51fa) ADVANCE(345);
      if (lookahead == 0x5236) ADVANCE(334);
      if (lookahead == 0x5382) ADVANCE(346);
      if (lookahead == 0x539f) ADVANCE(335);
      if (lookahead == 0x58f0) ADVANCE(333);
      if (lookahead == 0x5f55) ADVANCE(347);
      if (lookahead == 0x63d2) ADVANCE(339);
      if (lookahead == 0x6b4c) ADVANCE(337);
      if (lookahead == 0x6bcd) ADVANCE(340);
      if (lookahead == 0x6df7) ADVANCE(348);
      if (lookahead == 0x7de8) ADVANCE(342);
      if (lookahead == 0x7f16) ADVANCE(343);
      if (lookahead == 0x811a) ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(740);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(303);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(741);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 260:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(260);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'G') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'V') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x30a2) ADVANCE(330);
      if (lookahead == 0x30a4) ADVANCE(329);
      if (lookahead == 0x30dc) ADVANCE(331);
      if (lookahead == 0x30de) ADVANCE(328);
      if (lookahead == 0x30ec) ADVANCE(332);
      if (lookahead == 0x4e50) ADVANCE(338);
      if (lookahead == 0x4f5c) ADVANCE(341);
      if (lookahead == 0x51fa) ADVANCE(345);
      if (lookahead == 0x5236) ADVANCE(334);
      if (lookahead == 0x5382) ADVANCE(346);
      if (lookahead == 0x539f) ADVANCE(335);
      if (lookahead == 0x58f0) ADVANCE(333);
      if (lookahead == 0x5f55) ADVANCE(347);
      if (lookahead == 0x63d2) ADVANCE(339);
      if (lookahead == 0x6b4c) ADVANCE(337);
      if (lookahead == 0x6bcd) ADVANCE(340);
      if (lookahead == 0x6df7) ADVANCE(348);
      if (lookahead == 0x7de8) ADVANCE(342);
      if (lookahead == 0x7f16) ADVANCE(343);
      if (lookahead == 0x811a) ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 261:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 281,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 262:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 281,
        'A', 490,
        'C', 421,
        'D', 361,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x300a, 292,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 564,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
        '\t', 295,
        ' ', 295,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(294);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 263:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(264);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'G') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'V') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x30a2) ADVANCE(330);
      if (lookahead == 0x30a4) ADVANCE(329);
      if (lookahead == 0x30dc) ADVANCE(331);
      if (lookahead == 0x30de) ADVANCE(328);
      if (lookahead == 0x30ec) ADVANCE(332);
      if (lookahead == 0x4e50) ADVANCE(338);
      if (lookahead == 0x4f5c) ADVANCE(341);
      if (lookahead == 0x51fa) ADVANCE(345);
      if (lookahead == 0x5236) ADVANCE(334);
      if (lookahead == 0x5382) ADVANCE(346);
      if (lookahead == 0x539f) ADVANCE(335);
      if (lookahead == 0x58f0) ADVANCE(333);
      if (lookahead == 0x5f55) ADVANCE(347);
      if (lookahead == 0x63d2) ADVANCE(339);
      if (lookahead == 0x6b4c) ADVANCE(337);
      if (lookahead == 0x6bcd) ADVANCE(340);
      if (lookahead == 0x6df7) ADVANCE(348);
      if (lookahead == 0x7de8) ADVANCE(342);
      if (lookahead == 0x7f16) ADVANCE(343);
      if (lookahead == 0x811a) ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(740);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(304);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(741);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 264:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(264);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'G') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'M') ADVANCE(308);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'V') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == 0x30a2) ADVANCE(330);
      if (lookahead == 0x30a4) ADVANCE(329);
      if (lookahead == 0x30dc) ADVANCE(331);
      if (lookahead == 0x30de) ADVANCE(328);
      if (lookahead == 0x30ec) ADVANCE(332);
      if (lookahead == 0x4e50) ADVANCE(338);
      if (lookahead == 0x4f5c) ADVANCE(341);
      if (lookahead == 0x51fa) ADVANCE(345);
      if (lookahead == 0x5236) ADVANCE(334);
      if (lookahead == 0x5382) ADVANCE(346);
      if (lookahead == 0x539f) ADVANCE(335);
      if (lookahead == 0x58f0) ADVANCE(333);
      if (lookahead == 0x5f55) ADVANCE(347);
      if (lookahead == 0x63d2) ADVANCE(339);
      if (lookahead == 0x6b4c) ADVANCE(337);
      if (lookahead == 0x6bcd) ADVANCE(340);
      if (lookahead == 0x6df7) ADVANCE(348);
      if (lookahead == 0x7de8) ADVANCE(342);
      if (lookahead == 0x7f16) ADVANCE(343);
      if (lookahead == 0x811a) ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 265:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(265);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 0x300a) ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 266:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(266);
      if (lookahead == 0x300a) ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 267:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 283,
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
        '\t', 742,
        ' ', 742,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(296);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(743);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 268:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 283,
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 269:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 283,
        '/', 302,
        'A', 490,
        'C', 421,
        'D', 361,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x300a, 292,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 563,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
        '\t', 296,
        ' ', 296,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(356);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(294);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 270:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 284,
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'f', 312,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 271:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 285,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 272:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 285,
        'A', 490,
        'C', 421,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x300a, 292,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 564,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
        '\t', 298,
        ' ', 298,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(294);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 273:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 286,
        '/', 302,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
        '\t', 742,
        ' ', 742,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(299);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(743);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 274:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 286,
        '/', 302,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 275:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 286,
        '/', 302,
        'A', 490,
        'C', 421,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x300a, 292,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 563,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
        '\t', 299,
        ' ', 299,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(294);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 276:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        '\n', 287,
        '/', 302,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'f', 312,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 277:
      if (eof) ADVANCE(278);
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 0x300b) ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DISC);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 281,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 283,
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 284,
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'f', 312,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 285,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 286,
        '/', 302,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 287,
        '/', 302,
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'f', 312,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 302,
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'f', 312,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x300b, 293,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 336,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(288);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 323,
        'C', 317,
        'D', 306,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 323,
        'C', 317,
        'G', 325,
        'I', 319,
        'L', 307,
        'M', 308,
        'P', 313,
        'R', 311,
        'V', 321,
        'a', 324,
        'c', 318,
        'g', 326,
        'i', 320,
        'l', 309,
        'm', 310,
        'p', 314,
        'r', 315,
        'v', 322,
        0x300a, 292,
        0x30a2, 330,
        0x30a4, 329,
        0x30dc, 331,
        0x30de, 328,
        0x30ec, 332,
        0x4e50, 338,
        0x4f5c, 341,
        0x51fa, 345,
        0x5236, 334,
        0x5382, 346,
        0x539f, 335,
        0x58f0, 333,
        0x5f55, 347,
        0x63d2, 339,
        0x6b4c, 337,
        0x6bcd, 340,
        0x6df7, 348,
        0x7de8, 342,
        0x7f16, 343,
        0x811a, 344,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 0x300b) ADVANCE(293);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(292);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(221);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(220);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(229);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(216);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(223);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(732);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(234);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(730);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(730);
      if (lookahead == 0x66f2) ADVANCE(258);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(690);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(734);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(722);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(238);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(708);
      if (lookahead == 0x7de8) ADVANCE(247);
      if (lookahead == 0x7f16) ADVANCE(248);
      if (lookahead == 0x8a5e) ADVANCE(714);
      if (lookahead == 0x8bcd) ADVANCE(716);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(710);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(712);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(720);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(243);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(718);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(728);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(736);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(15);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(209);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 490,
        'C', 421,
        'D', 361,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 563,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 490,
        'C', 421,
        'D', 361,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 564,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 490,
        'C', 421,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 563,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 490,
        'C', 421,
        'G', 533,
        'I', 442,
        'L', 363,
        'M', 364,
        'P', 398,
        'R', 389,
        'V', 465,
        'a', 503,
        'c', 422,
        'g', 539,
        'i', 446,
        'l', 370,
        'm', 372,
        'p', 408,
        'r', 410,
        'v', 466,
        0x30a2, 555,
        0x30a4, 551,
        0x30dc, 558,
        0x30de, 546,
        0x30ec, 559,
        0x4e50, 568,
        0x4f5c, 572,
        0x51fa, 582,
        0x5236, 562,
        0x5382, 583,
        0x539f, 564,
        0x58f0, 560,
        0x5f55, 584,
        0x63d2, 569,
        0x6b4c, 567,
        0x6bcd, 570,
        0x6df7, 585,
        0x7de8, 573,
        0x7f16, 574,
        0x811a, 581,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'C') ADVANCE(280);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'I') ADVANCE(362);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'S') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(451);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(530);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'y') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(517);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(397);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(614);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(590);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(616);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(592);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(443);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(475);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(401);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(402);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(479);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(536);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(436);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(540);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(654);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(656);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(626);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(527);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(628);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(529);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(437);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(439);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(499);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(487);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(489);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(509);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(463);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(511);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(673);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(675);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(677);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(662);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(679);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(664);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(447);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(468);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(471);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(456);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(457);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(459);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(461);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(650);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(630);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(652);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(632);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(537);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(441);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(538);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(445);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(481);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(594);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(596);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(642);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(644);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(413);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(415);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(417);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(525);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(633);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(635);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(507);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(454);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(494);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(493);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(491);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(495);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(497);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(469);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(423);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(411);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(658);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(660);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(638);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(640);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(534);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(535);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(425);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(433);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(435);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(501);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(387);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(528);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(669);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(671);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(519);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(395);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(521);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(523);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(532);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(645);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(647);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(610);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(612);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(618);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(620);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(427);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(400);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(429);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(513);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(407);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(431);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(553);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b0) ADVANCE(689);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(683);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(548);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(549);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30bf) ADVANCE(552);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(685);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(554);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(547);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ea) ADVANCE(557);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(681);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(687);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(556);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(545);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(544);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(543);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(550);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4e50) ADVANCE(733);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(725);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(561);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(731);
      if (lookahead == 0x66f2) ADVANCE(587);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(731);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(739);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5236) ADVANCE(565);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(691);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5668) ADVANCE(735);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(723);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5e26) ADVANCE(566);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(727);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(709);
      if (lookahead == 0x7de8) ADVANCE(575);
      if (lookahead == 0x7f16) ADVANCE(576);
      if (lookahead == 0x8a5e) ADVANCE(715);
      if (lookahead == 0x8bcd) ADVANCE(717);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(711);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(713);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(705);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(707);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(697);
      if (lookahead == 0x7de8) ADVANCE(579);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(699);
      if (lookahead == 0x7f16) ADVANCE(580);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(693);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(695);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(721);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(571);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(719);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(729);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(737);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(586);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '\t', 291,
        ' ', 291,
        '&', 291,
        ',', 291,
        '/', 291,
        ':', 291,
        0x3000, 291,
        0x3001, 291,
        0x300a, 291,
        0x300b, 291,
        0x30fb, 291,
        0xff06, 291,
        0xff1a, 291,
        0xff1b, 291,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(598);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(600);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 's') ADVANCE(606);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 's') ADVANCE(608);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(622);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(624);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_Chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_Mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_Mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(249);
      if (lookahead == 0x66f2) ADVANCE(700);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(577);
      if (lookahead == 0x66f2) ADVANCE(701);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(250);
      if (lookahead == 0x66f2) ADVANCE(702);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(578);
      if (lookahead == 0x66f2) ADVANCE(703);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(588);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 740,
        ' ', 740,
        '&', 741,
        ',', 741,
        '/', 741,
        ':', 741,
        0x3000, 741,
        0x3001, 741,
        0x30fb, 741,
        0xff06, 741,
        0xff1a, 741,
        0xff1b, 741,
      );
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 741,
        ' ', 741,
        '&', 741,
        ',', 741,
        '/', 741,
        ':', 741,
        0x3000, 741,
        0x3001, 741,
        0x30fb, 741,
        0xff06, 741,
        0xff1a, 741,
        0xff1b, 741,
      );
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 742,
        ' ', 742,
        '&', 743,
        ',', 743,
        0x3000, 743,
        0x3001, 743,
        0x30fb, 743,
        0xff06, 743,
        0xff1b, 743,
      );
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 743,
        ' ', 743,
        '&', 743,
        ',', 743,
        0x3000, 743,
        0x3001, 743,
        0x30fb, 743,
        0xff06, 743,
        0xff1b, 743,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 260},
  [2] = {.lex_state = 261},
  [3] = {.lex_state = 269},
  [4] = {.lex_state = 270},
  [5] = {.lex_state = 270},
  [6] = {.lex_state = 260},
  [7] = {.lex_state = 267},
  [8] = {.lex_state = 271},
  [9] = {.lex_state = 270},
  [10] = {.lex_state = 267},
  [11] = {.lex_state = 269},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 273},
  [14] = {.lex_state = 273},
  [15] = {.lex_state = 276},
  [16] = {.lex_state = 276},
  [17] = {.lex_state = 275},
  [18] = {.lex_state = 267},
  [19] = {.lex_state = 267},
  [20] = {.lex_state = 273},
  [21] = {.lex_state = 260},
  [22] = {.lex_state = 264},
  [23] = {.lex_state = 276},
  [24] = {.lex_state = 275},
  [25] = {.lex_state = 267},
  [26] = {.lex_state = 260},
  [27] = {.lex_state = 268},
  [28] = {.lex_state = 260},
  [29] = {.lex_state = 273},
  [30] = {.lex_state = 268},
  [31] = {.lex_state = 260},
  [32] = {.lex_state = 262},
  [33] = {.lex_state = 268},
  [34] = {.lex_state = 273},
  [35] = {.lex_state = 264},
  [36] = {.lex_state = 262},
  [37] = {.lex_state = 268},
  [38] = {.lex_state = 264},
  [39] = {.lex_state = 273},
  [40] = {.lex_state = 268},
  [41] = {.lex_state = 272},
  [42] = {.lex_state = 274},
  [43] = {.lex_state = 262},
  [44] = {.lex_state = 274},
  [45] = {.lex_state = 274},
  [46] = {.lex_state = 274},
  [47] = {.lex_state = 272},
  [48] = {.lex_state = 262},
  [49] = {.lex_state = 274},
  [50] = {.lex_state = 261},
  [51] = {.lex_state = 261},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 261},
  [54] = {.lex_state = 261},
  [55] = {.lex_state = 259},
  [56] = {.lex_state = 259},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 260},
  [61] = {.lex_state = 263},
  [62] = {.lex_state = 271},
  [63] = {.lex_state = 260},
  [64] = {.lex_state = 271},
  [65] = {.lex_state = 259},
  [66] = {.lex_state = 263},
  [67] = {.lex_state = 260},
  [68] = {.lex_state = 259},
  [69] = {.lex_state = 271},
  [70] = {.lex_state = 260},
  [71] = {.lex_state = 271},
  [72] = {.lex_state = 260},
  [73] = {.lex_state = 260},
  [74] = {.lex_state = 264},
  [75] = {.lex_state = 260},
  [76] = {.lex_state = 260},
  [77] = {.lex_state = 264},
  [78] = {.lex_state = 264},
  [79] = {.lex_state = 264},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 265},
  [82] = {.lex_state = 265},
  [83] = {.lex_state = 265},
  [84] = {.lex_state = 266},
  [85] = {.lex_state = 266},
  [86] = {.lex_state = 266},
  [87] = {.lex_state = 266},
  [88] = {.lex_state = 277},
  [89] = {.lex_state = 265},
  [90] = {.lex_state = 212},
  [91] = {.lex_state = 277},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 265},
  [94] = {.lex_state = 277},
  [95] = {.lex_state = 212},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 214},
  [100] = {.lex_state = 212},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 212},
  [104] = {.lex_state = 212},
  [105] = {.lex_state = 212},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 266},
  [110] = {.lex_state = 214},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 212},
  [113] = {.lex_state = 212},
  [114] = {.lex_state = 266},
  [115] = {.lex_state = 212},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 277},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 214},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 277},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 277},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 277},
  [134] = {.lex_state = 277},
  [135] = {.lex_state = 277},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 277},
  [138] = {.lex_state = 277},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(1),
    [anon_sym_u300a] = ACTIONS(1),
    [anon_sym_u300b] = ACTIONS(1),
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
    [anon_sym_GuestVocal] = ACTIONS(1),
    [anon_sym_Guestvocal] = ACTIONS(1),
    [anon_sym_guestvocal] = ACTIONS(1),
    [anon_sym_Chorus] = ACTIONS(1),
    [anon_sym_chorus] = ACTIONS(1),
    [anon_sym_Mixing] = ACTIONS(1),
    [anon_sym_mixing] = ACTIONS(1),
    [anon_sym_Mastering] = ACTIONS(1),
    [anon_sym_mastering] = ACTIONS(1),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(1),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(1),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(1),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(1),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(1),
    [anon_sym_u6b4cu5531] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(1),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu66f2] = ACTIONS(1),
    [anon_sym_u7de8u66f2] = ACTIONS(1),
    [anon_sym_u7f16u66f2] = ACTIONS(1),
    [anon_sym_u4f5cu8a5e] = ACTIONS(1),
    [anon_sym_u4f5cu8bcd] = ACTIONS(1),
    [anon_sym_u5382u724c] = ACTIONS(1),
    [anon_sym_u811au672c] = ACTIONS(1),
    [anon_sym_u63d2u56fe] = ACTIONS(1),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(1),
    [anon_sym_u51fau7248u65b9] = ACTIONS(1),
    [anon_sym_u5f55u97f3] = ACTIONS(1),
    [anon_sym_u539fu4f5c] = ACTIONS(1),
    [anon_sym_u58f0u4e50] = ACTIONS(1),
    [anon_sym_u4e50u5668] = ACTIONS(1),
    [anon_sym_u6df7u97f3] = ACTIONS(1),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(126),
    [sym_disc] = STATE(91),
    [aux_sym__disc] = STATE(86),
    [sym_song] = STATE(86),
    [sym_credit_block] = STATE(81),
    [sym_credit_field] = STATE(28),
    [sym__quotable_song_title_maybefeat_maybecomment] = STATE(8),
    [sym__quotable_song_title_maybefeat] = STATE(46),
    [sym__song_title_maybefeat] = STATE(45),
    [sym_song_title] = STATE(23),
    [sym_role] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(28),
    [aux_sym_credit_field_repeat1] = STATE(52),
    [aux_sym_song_title_repeat1] = STATE(16),
    [anon_sym_DISC] = ACTIONS(3),
    [anon_sym_u300a] = ACTIONS(5),
    [aux_sym_song_title_token1] = ACTIONS(7),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [2] = {
    [sym_credit_block] = STATE(93),
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [aux_sym_credit_field_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DISC] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_u300a] = ACTIONS(13),
    [aux_sym_song_title_token1] = ACTIONS(13),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [3] = {
    [sym__quotable_creator_name] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DISC] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(19),
    [sym_creator_name] = ACTIONS(23),
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
    [anon_sym_GuestVocal] = ACTIONS(19),
    [anon_sym_Guestvocal] = ACTIONS(19),
    [anon_sym_guestvocal] = ACTIONS(19),
    [anon_sym_Chorus] = ACTIONS(19),
    [anon_sym_chorus] = ACTIONS(19),
    [anon_sym_Mixing] = ACTIONS(19),
    [anon_sym_mixing] = ACTIONS(19),
    [anon_sym_Mastering] = ACTIONS(19),
    [anon_sym_mastering] = ACTIONS(19),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(19),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(19),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(19),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(19),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(19),
    [anon_sym_u6b4cu5531] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu66f2] = ACTIONS(19),
    [anon_sym_u7de8u66f2] = ACTIONS(19),
    [anon_sym_u7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5e] = ACTIONS(19),
    [anon_sym_u4f5cu8bcd] = ACTIONS(19),
    [anon_sym_u5382u724c] = ACTIONS(19),
    [anon_sym_u811au672c] = ACTIONS(19),
    [anon_sym_u63d2u56fe] = ACTIONS(19),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(19),
    [anon_sym_u51fau7248u65b9] = ACTIONS(19),
    [anon_sym_u5f55u97f3] = ACTIONS(19),
    [anon_sym_u539fu4f5c] = ACTIONS(19),
    [anon_sym_u58f0u4e50] = ACTIONS(19),
    [anon_sym_u4e50u5668] = ACTIONS(19),
    [anon_sym_u6df7u97f3] = ACTIONS(19),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(19),
  },
  [4] = {
    [sym_feat_field] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_DISC] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(27),
    [anon_sym_u300a] = ACTIONS(27),
    [aux_sym_song_title_token1] = ACTIONS(27),
    [aux_sym_feat_field_token1] = ACTIONS(29),
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
    [anon_sym_GuestVocal] = ACTIONS(27),
    [anon_sym_Guestvocal] = ACTIONS(27),
    [anon_sym_guestvocal] = ACTIONS(27),
    [anon_sym_Chorus] = ACTIONS(27),
    [anon_sym_chorus] = ACTIONS(27),
    [anon_sym_Mixing] = ACTIONS(27),
    [anon_sym_mixing] = ACTIONS(27),
    [anon_sym_Mastering] = ACTIONS(27),
    [anon_sym_mastering] = ACTIONS(27),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(27),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(27),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(27),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(27),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(27),
    [anon_sym_u6b4cu5531] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu66f2] = ACTIONS(27),
    [anon_sym_u7de8u66f2] = ACTIONS(27),
    [anon_sym_u7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5e] = ACTIONS(27),
    [anon_sym_u4f5cu8bcd] = ACTIONS(27),
    [anon_sym_u5382u724c] = ACTIONS(27),
    [anon_sym_u811au672c] = ACTIONS(27),
    [anon_sym_u63d2u56fe] = ACTIONS(27),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(27),
    [anon_sym_u51fau7248u65b9] = ACTIONS(27),
    [anon_sym_u5f55u97f3] = ACTIONS(27),
    [anon_sym_u539fu4f5c] = ACTIONS(27),
    [anon_sym_u58f0u4e50] = ACTIONS(27),
    [anon_sym_u4e50u5668] = ACTIONS(27),
    [anon_sym_u6df7u97f3] = ACTIONS(27),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(27),
  },
  [5] = {
    [aux_sym_song_title_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_DISC] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(33),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(35),
    [aux_sym_feat_field_token1] = ACTIONS(33),
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
    [anon_sym_GuestVocal] = ACTIONS(33),
    [anon_sym_Guestvocal] = ACTIONS(33),
    [anon_sym_guestvocal] = ACTIONS(33),
    [anon_sym_Chorus] = ACTIONS(33),
    [anon_sym_chorus] = ACTIONS(33),
    [anon_sym_Mixing] = ACTIONS(33),
    [anon_sym_mixing] = ACTIONS(33),
    [anon_sym_Mastering] = ACTIONS(33),
    [anon_sym_mastering] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u4f5cu8bcd] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
    [anon_sym_u58f0u4e50] = ACTIONS(33),
    [anon_sym_u4e50u5668] = ACTIONS(33),
    [anon_sym_u6df7u97f3] = ACTIONS(33),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(33),
  },
  [6] = {
    [sym_credit_block] = STATE(89),
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [aux_sym_credit_field_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_DISC] = ACTIONS(40),
    [anon_sym_u300a] = ACTIONS(40),
    [aux_sym_song_title_token1] = ACTIONS(40),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [7] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_DISC] = ACTIONS(44),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_SLASH_SLASH] = ACTIONS(44),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(44),
    [anon_sym_u300a] = ACTIONS(44),
    [aux_sym_song_title_token1] = ACTIONS(44),
    [anon_sym_Music] = ACTIONS(44),
    [anon_sym_music] = ACTIONS(44),
    [anon_sym_Composition] = ACTIONS(44),
    [anon_sym_composition] = ACTIONS(44),
    [anon_sym_Composer] = ACTIONS(44),
    [anon_sym_composer] = ACTIONS(44),
    [anon_sym_Compose] = ACTIONS(44),
    [anon_sym_compose] = ACTIONS(44),
    [anon_sym_Lyrics] = ACTIONS(44),
    [anon_sym_lyrics] = ACTIONS(44),
    [anon_sym_Lyricist] = ACTIONS(44),
    [anon_sym_lyricist] = ACTIONS(44),
    [anon_sym_Lyric] = ACTIONS(44),
    [anon_sym_lyric] = ACTIONS(44),
    [anon_sym_Arrangement] = ACTIONS(44),
    [anon_sym_arrangement] = ACTIONS(44),
    [anon_sym_Arranger] = ACTIONS(44),
    [anon_sym_arranger] = ACTIONS(44),
    [anon_sym_Arrange] = ACTIONS(44),
    [anon_sym_arrange] = ACTIONS(44),
    [anon_sym_Vocal] = ACTIONS(44),
    [anon_sym_vocal] = ACTIONS(44),
    [anon_sym_Vo] = ACTIONS(44),
    [anon_sym_vo] = ACTIONS(44),
    [anon_sym_Performer] = ACTIONS(44),
    [anon_sym_performer] = ACTIONS(44),
    [anon_sym_Illustration] = ACTIONS(44),
    [anon_sym_illustration] = ACTIONS(44),
    [anon_sym_Illust] = ACTIONS(44),
    [anon_sym_illust] = ACTIONS(44),
    [anon_sym_Label] = ACTIONS(44),
    [anon_sym_label] = ACTIONS(44),
    [anon_sym_Circle] = ACTIONS(44),
    [anon_sym_circle] = ACTIONS(44),
    [anon_sym_Producer] = ACTIONS(44),
    [anon_sym_producer] = ACTIONS(44),
    [anon_sym_Recording] = ACTIONS(44),
    [anon_sym_recording] = ACTIONS(44),
    [anon_sym_GuestVocal] = ACTIONS(44),
    [anon_sym_Guestvocal] = ACTIONS(44),
    [anon_sym_guestvocal] = ACTIONS(44),
    [anon_sym_Chorus] = ACTIONS(44),
    [anon_sym_chorus] = ACTIONS(44),
    [anon_sym_Mixing] = ACTIONS(44),
    [anon_sym_mixing] = ACTIONS(44),
    [anon_sym_Mastering] = ACTIONS(44),
    [anon_sym_mastering] = ACTIONS(44),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(44),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(44),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(44),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(44),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(44),
    [anon_sym_u6b4cu5531] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu66f2] = ACTIONS(44),
    [anon_sym_u7de8u66f2] = ACTIONS(44),
    [anon_sym_u7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5e] = ACTIONS(44),
    [anon_sym_u4f5cu8bcd] = ACTIONS(44),
    [anon_sym_u5382u724c] = ACTIONS(44),
    [anon_sym_u811au672c] = ACTIONS(44),
    [anon_sym_u63d2u56fe] = ACTIONS(44),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(44),
    [anon_sym_u51fau7248u65b9] = ACTIONS(44),
    [anon_sym_u5f55u97f3] = ACTIONS(44),
    [anon_sym_u539fu4f5c] = ACTIONS(44),
    [anon_sym_u58f0u4e50] = ACTIONS(44),
    [anon_sym_u4e50u5668] = ACTIONS(44),
    [anon_sym_u6df7u97f3] = ACTIONS(44),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(44),
    [sym__ssep] = ACTIONS(46),
  },
  [8] = {
    [sym_credit_block] = STATE(109),
    [sym_credit_field] = STATE(35),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(35),
    [aux_sym_credit_field_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(13),
    [aux_sym_song_title_token1] = ACTIONS(13),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [9] = {
    [aux_sym_song_title_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_DISC] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_SLASH_SLASH] = ACTIONS(53),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [aux_sym_song_title_token1] = ACTIONS(55),
    [aux_sym_feat_field_token1] = ACTIONS(53),
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
    [anon_sym_GuestVocal] = ACTIONS(53),
    [anon_sym_Guestvocal] = ACTIONS(53),
    [anon_sym_guestvocal] = ACTIONS(53),
    [anon_sym_Chorus] = ACTIONS(53),
    [anon_sym_chorus] = ACTIONS(53),
    [anon_sym_Mixing] = ACTIONS(53),
    [anon_sym_mixing] = ACTIONS(53),
    [anon_sym_Mastering] = ACTIONS(53),
    [anon_sym_mastering] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u4f5cu8bcd] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
    [anon_sym_u58f0u4e50] = ACTIONS(53),
    [anon_sym_u4e50u5668] = ACTIONS(53),
    [anon_sym_u6df7u97f3] = ACTIONS(53),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(53),
  },
  [10] = {
    [aux_sym_feat_field_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DISC] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(59),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
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
    [anon_sym_GuestVocal] = ACTIONS(59),
    [anon_sym_Guestvocal] = ACTIONS(59),
    [anon_sym_guestvocal] = ACTIONS(59),
    [anon_sym_Chorus] = ACTIONS(59),
    [anon_sym_chorus] = ACTIONS(59),
    [anon_sym_Mixing] = ACTIONS(59),
    [anon_sym_mixing] = ACTIONS(59),
    [anon_sym_Mastering] = ACTIONS(59),
    [anon_sym_mastering] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u4f5cu8bcd] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
    [anon_sym_u58f0u4e50] = ACTIONS(59),
    [anon_sym_u4e50u5668] = ACTIONS(59),
    [anon_sym_u6df7u97f3] = ACTIONS(59),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(59),
    [sym__ssep] = ACTIONS(61),
  },
  [11] = {
    [sym__quotable_creator_name] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_DISC] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(65),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(65),
    [sym_creator_name] = ACTIONS(23),
    [anon_sym_Music] = ACTIONS(65),
    [anon_sym_music] = ACTIONS(65),
    [anon_sym_Composition] = ACTIONS(65),
    [anon_sym_composition] = ACTIONS(65),
    [anon_sym_Composer] = ACTIONS(65),
    [anon_sym_composer] = ACTIONS(65),
    [anon_sym_Compose] = ACTIONS(65),
    [anon_sym_compose] = ACTIONS(65),
    [anon_sym_Lyrics] = ACTIONS(65),
    [anon_sym_lyrics] = ACTIONS(65),
    [anon_sym_Lyricist] = ACTIONS(65),
    [anon_sym_lyricist] = ACTIONS(65),
    [anon_sym_Lyric] = ACTIONS(65),
    [anon_sym_lyric] = ACTIONS(65),
    [anon_sym_Arrangement] = ACTIONS(65),
    [anon_sym_arrangement] = ACTIONS(65),
    [anon_sym_Arranger] = ACTIONS(65),
    [anon_sym_arranger] = ACTIONS(65),
    [anon_sym_Arrange] = ACTIONS(65),
    [anon_sym_arrange] = ACTIONS(65),
    [anon_sym_Vocal] = ACTIONS(65),
    [anon_sym_vocal] = ACTIONS(65),
    [anon_sym_Vo] = ACTIONS(65),
    [anon_sym_vo] = ACTIONS(65),
    [anon_sym_Performer] = ACTIONS(65),
    [anon_sym_performer] = ACTIONS(65),
    [anon_sym_Illustration] = ACTIONS(65),
    [anon_sym_illustration] = ACTIONS(65),
    [anon_sym_Illust] = ACTIONS(65),
    [anon_sym_illust] = ACTIONS(65),
    [anon_sym_Label] = ACTIONS(65),
    [anon_sym_label] = ACTIONS(65),
    [anon_sym_Circle] = ACTIONS(65),
    [anon_sym_circle] = ACTIONS(65),
    [anon_sym_Producer] = ACTIONS(65),
    [anon_sym_producer] = ACTIONS(65),
    [anon_sym_Recording] = ACTIONS(65),
    [anon_sym_recording] = ACTIONS(65),
    [anon_sym_GuestVocal] = ACTIONS(65),
    [anon_sym_Guestvocal] = ACTIONS(65),
    [anon_sym_guestvocal] = ACTIONS(65),
    [anon_sym_Chorus] = ACTIONS(65),
    [anon_sym_chorus] = ACTIONS(65),
    [anon_sym_Mixing] = ACTIONS(65),
    [anon_sym_mixing] = ACTIONS(65),
    [anon_sym_Mastering] = ACTIONS(65),
    [anon_sym_mastering] = ACTIONS(65),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(65),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(65),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(65),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(65),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(65),
    [anon_sym_u6b4cu5531] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu66f2] = ACTIONS(65),
    [anon_sym_u7de8u66f2] = ACTIONS(65),
    [anon_sym_u7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5e] = ACTIONS(65),
    [anon_sym_u4f5cu8bcd] = ACTIONS(65),
    [anon_sym_u5382u724c] = ACTIONS(65),
    [anon_sym_u811au672c] = ACTIONS(65),
    [anon_sym_u63d2u56fe] = ACTIONS(65),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(65),
    [anon_sym_u51fau7248u65b9] = ACTIONS(65),
    [anon_sym_u5f55u97f3] = ACTIONS(65),
    [anon_sym_u539fu4f5c] = ACTIONS(65),
    [anon_sym_u58f0u4e50] = ACTIONS(65),
    [anon_sym_u4e50u5668] = ACTIONS(65),
    [anon_sym_u6df7u97f3] = ACTIONS(65),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(65),
  },
  [12] = {
    [aux_sym_feat_field_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DISC] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [anon_sym_Music] = ACTIONS(69),
    [anon_sym_music] = ACTIONS(69),
    [anon_sym_Composition] = ACTIONS(69),
    [anon_sym_composition] = ACTIONS(69),
    [anon_sym_Composer] = ACTIONS(69),
    [anon_sym_composer] = ACTIONS(69),
    [anon_sym_Compose] = ACTIONS(69),
    [anon_sym_compose] = ACTIONS(69),
    [anon_sym_Lyrics] = ACTIONS(69),
    [anon_sym_lyrics] = ACTIONS(69),
    [anon_sym_Lyricist] = ACTIONS(69),
    [anon_sym_lyricist] = ACTIONS(69),
    [anon_sym_Lyric] = ACTIONS(69),
    [anon_sym_lyric] = ACTIONS(69),
    [anon_sym_Arrangement] = ACTIONS(69),
    [anon_sym_arrangement] = ACTIONS(69),
    [anon_sym_Arranger] = ACTIONS(69),
    [anon_sym_arranger] = ACTIONS(69),
    [anon_sym_Arrange] = ACTIONS(69),
    [anon_sym_arrange] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Vo] = ACTIONS(69),
    [anon_sym_vo] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illust] = ACTIONS(69),
    [anon_sym_illust] = ACTIONS(69),
    [anon_sym_Label] = ACTIONS(69),
    [anon_sym_label] = ACTIONS(69),
    [anon_sym_Circle] = ACTIONS(69),
    [anon_sym_circle] = ACTIONS(69),
    [anon_sym_Producer] = ACTIONS(69),
    [anon_sym_producer] = ACTIONS(69),
    [anon_sym_Recording] = ACTIONS(69),
    [anon_sym_recording] = ACTIONS(69),
    [anon_sym_GuestVocal] = ACTIONS(69),
    [anon_sym_Guestvocal] = ACTIONS(69),
    [anon_sym_guestvocal] = ACTIONS(69),
    [anon_sym_Chorus] = ACTIONS(69),
    [anon_sym_chorus] = ACTIONS(69),
    [anon_sym_Mixing] = ACTIONS(69),
    [anon_sym_mixing] = ACTIONS(69),
    [anon_sym_Mastering] = ACTIONS(69),
    [anon_sym_mastering] = ACTIONS(69),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(69),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(69),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(69),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(69),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(69),
    [anon_sym_u6b4cu5531] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu66f2] = ACTIONS(69),
    [anon_sym_u7de8u66f2] = ACTIONS(69),
    [anon_sym_u7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5e] = ACTIONS(69),
    [anon_sym_u4f5cu8bcd] = ACTIONS(69),
    [anon_sym_u5382u724c] = ACTIONS(69),
    [anon_sym_u811au672c] = ACTIONS(69),
    [anon_sym_u63d2u56fe] = ACTIONS(69),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(69),
    [anon_sym_u51fau7248u65b9] = ACTIONS(69),
    [anon_sym_u5f55u97f3] = ACTIONS(69),
    [anon_sym_u539fu4f5c] = ACTIONS(69),
    [anon_sym_u58f0u4e50] = ACTIONS(69),
    [anon_sym_u4e50u5668] = ACTIONS(69),
    [anon_sym_u6df7u97f3] = ACTIONS(69),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(69),
    [sym__ssep] = ACTIONS(71),
  },
  [13] = {
    [aux_sym_feat_field_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [anon_sym_Music] = ACTIONS(69),
    [anon_sym_music] = ACTIONS(69),
    [anon_sym_Composition] = ACTIONS(69),
    [anon_sym_composition] = ACTIONS(69),
    [anon_sym_Composer] = ACTIONS(69),
    [anon_sym_composer] = ACTIONS(69),
    [anon_sym_Compose] = ACTIONS(69),
    [anon_sym_compose] = ACTIONS(69),
    [anon_sym_Lyrics] = ACTIONS(69),
    [anon_sym_lyrics] = ACTIONS(69),
    [anon_sym_Lyricist] = ACTIONS(69),
    [anon_sym_lyricist] = ACTIONS(69),
    [anon_sym_Lyric] = ACTIONS(69),
    [anon_sym_lyric] = ACTIONS(69),
    [anon_sym_Arrangement] = ACTIONS(69),
    [anon_sym_arrangement] = ACTIONS(69),
    [anon_sym_Arranger] = ACTIONS(69),
    [anon_sym_arranger] = ACTIONS(69),
    [anon_sym_Arrange] = ACTIONS(69),
    [anon_sym_arrange] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Vo] = ACTIONS(69),
    [anon_sym_vo] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illust] = ACTIONS(69),
    [anon_sym_illust] = ACTIONS(69),
    [anon_sym_Label] = ACTIONS(69),
    [anon_sym_label] = ACTIONS(69),
    [anon_sym_Circle] = ACTIONS(69),
    [anon_sym_circle] = ACTIONS(69),
    [anon_sym_Producer] = ACTIONS(69),
    [anon_sym_producer] = ACTIONS(69),
    [anon_sym_Recording] = ACTIONS(69),
    [anon_sym_recording] = ACTIONS(69),
    [anon_sym_GuestVocal] = ACTIONS(69),
    [anon_sym_Guestvocal] = ACTIONS(69),
    [anon_sym_guestvocal] = ACTIONS(69),
    [anon_sym_Chorus] = ACTIONS(69),
    [anon_sym_chorus] = ACTIONS(69),
    [anon_sym_Mixing] = ACTIONS(69),
    [anon_sym_mixing] = ACTIONS(69),
    [anon_sym_Mastering] = ACTIONS(69),
    [anon_sym_mastering] = ACTIONS(69),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(69),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(69),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(69),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(69),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(69),
    [anon_sym_u6b4cu5531] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(69),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu66f2] = ACTIONS(69),
    [anon_sym_u7de8u66f2] = ACTIONS(69),
    [anon_sym_u7f16u66f2] = ACTIONS(69),
    [anon_sym_u4f5cu8a5e] = ACTIONS(69),
    [anon_sym_u4f5cu8bcd] = ACTIONS(69),
    [anon_sym_u5382u724c] = ACTIONS(69),
    [anon_sym_u811au672c] = ACTIONS(69),
    [anon_sym_u63d2u56fe] = ACTIONS(69),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(69),
    [anon_sym_u51fau7248u65b9] = ACTIONS(69),
    [anon_sym_u5f55u97f3] = ACTIONS(69),
    [anon_sym_u539fu4f5c] = ACTIONS(69),
    [anon_sym_u58f0u4e50] = ACTIONS(69),
    [anon_sym_u4e50u5668] = ACTIONS(69),
    [anon_sym_u6df7u97f3] = ACTIONS(69),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(69),
    [sym__ssep] = ACTIONS(73),
  },
  [14] = {
    [aux_sym_feat_field_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(59),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
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
    [anon_sym_GuestVocal] = ACTIONS(59),
    [anon_sym_Guestvocal] = ACTIONS(59),
    [anon_sym_guestvocal] = ACTIONS(59),
    [anon_sym_Chorus] = ACTIONS(59),
    [anon_sym_chorus] = ACTIONS(59),
    [anon_sym_Mixing] = ACTIONS(59),
    [anon_sym_mixing] = ACTIONS(59),
    [anon_sym_Mastering] = ACTIONS(59),
    [anon_sym_mastering] = ACTIONS(59),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(59),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(59),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(59),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(59),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(59),
    [anon_sym_u6b4cu5531] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu66f2] = ACTIONS(59),
    [anon_sym_u7de8u66f2] = ACTIONS(59),
    [anon_sym_u7f16u66f2] = ACTIONS(59),
    [anon_sym_u4f5cu8a5e] = ACTIONS(59),
    [anon_sym_u4f5cu8bcd] = ACTIONS(59),
    [anon_sym_u5382u724c] = ACTIONS(59),
    [anon_sym_u811au672c] = ACTIONS(59),
    [anon_sym_u63d2u56fe] = ACTIONS(59),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(59),
    [anon_sym_u51fau7248u65b9] = ACTIONS(59),
    [anon_sym_u5f55u97f3] = ACTIONS(59),
    [anon_sym_u539fu4f5c] = ACTIONS(59),
    [anon_sym_u58f0u4e50] = ACTIONS(59),
    [anon_sym_u4e50u5668] = ACTIONS(59),
    [anon_sym_u6df7u97f3] = ACTIONS(59),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(59),
    [sym__ssep] = ACTIONS(75),
  },
  [15] = {
    [aux_sym_song_title_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(33),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(77),
    [aux_sym_feat_field_token1] = ACTIONS(33),
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
    [anon_sym_GuestVocal] = ACTIONS(33),
    [anon_sym_Guestvocal] = ACTIONS(33),
    [anon_sym_guestvocal] = ACTIONS(33),
    [anon_sym_Chorus] = ACTIONS(33),
    [anon_sym_chorus] = ACTIONS(33),
    [anon_sym_Mixing] = ACTIONS(33),
    [anon_sym_mixing] = ACTIONS(33),
    [anon_sym_Mastering] = ACTIONS(33),
    [anon_sym_mastering] = ACTIONS(33),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(33),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(33),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(33),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(33),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(33),
    [anon_sym_u6b4cu5531] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu66f2] = ACTIONS(33),
    [anon_sym_u7de8u66f2] = ACTIONS(33),
    [anon_sym_u7f16u66f2] = ACTIONS(33),
    [anon_sym_u4f5cu8a5e] = ACTIONS(33),
    [anon_sym_u4f5cu8bcd] = ACTIONS(33),
    [anon_sym_u5382u724c] = ACTIONS(33),
    [anon_sym_u811au672c] = ACTIONS(33),
    [anon_sym_u63d2u56fe] = ACTIONS(33),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(33),
    [anon_sym_u51fau7248u65b9] = ACTIONS(33),
    [anon_sym_u5f55u97f3] = ACTIONS(33),
    [anon_sym_u539fu4f5c] = ACTIONS(33),
    [anon_sym_u58f0u4e50] = ACTIONS(33),
    [anon_sym_u4e50u5668] = ACTIONS(33),
    [anon_sym_u6df7u97f3] = ACTIONS(33),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(33),
  },
  [16] = {
    [aux_sym_song_title_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_SLASH_SLASH] = ACTIONS(53),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(53),
    [aux_sym_song_title_token1] = ACTIONS(80),
    [aux_sym_feat_field_token1] = ACTIONS(53),
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
    [anon_sym_GuestVocal] = ACTIONS(53),
    [anon_sym_Guestvocal] = ACTIONS(53),
    [anon_sym_guestvocal] = ACTIONS(53),
    [anon_sym_Chorus] = ACTIONS(53),
    [anon_sym_chorus] = ACTIONS(53),
    [anon_sym_Mixing] = ACTIONS(53),
    [anon_sym_mixing] = ACTIONS(53),
    [anon_sym_Mastering] = ACTIONS(53),
    [anon_sym_mastering] = ACTIONS(53),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(53),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(53),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(53),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(53),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(53),
    [anon_sym_u6b4cu5531] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu66f2] = ACTIONS(53),
    [anon_sym_u7de8u66f2] = ACTIONS(53),
    [anon_sym_u7f16u66f2] = ACTIONS(53),
    [anon_sym_u4f5cu8a5e] = ACTIONS(53),
    [anon_sym_u4f5cu8bcd] = ACTIONS(53),
    [anon_sym_u5382u724c] = ACTIONS(53),
    [anon_sym_u811au672c] = ACTIONS(53),
    [anon_sym_u63d2u56fe] = ACTIONS(53),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(53),
    [anon_sym_u51fau7248u65b9] = ACTIONS(53),
    [anon_sym_u5f55u97f3] = ACTIONS(53),
    [anon_sym_u539fu4f5c] = ACTIONS(53),
    [anon_sym_u58f0u4e50] = ACTIONS(53),
    [anon_sym_u4e50u5668] = ACTIONS(53),
    [anon_sym_u6df7u97f3] = ACTIONS(53),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(53),
  },
  [17] = {
    [sym__quotable_creator_name] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(82),
    [aux_sym_song_title_token1] = ACTIONS(19),
    [sym_creator_name] = ACTIONS(84),
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
    [anon_sym_GuestVocal] = ACTIONS(19),
    [anon_sym_Guestvocal] = ACTIONS(19),
    [anon_sym_guestvocal] = ACTIONS(19),
    [anon_sym_Chorus] = ACTIONS(19),
    [anon_sym_chorus] = ACTIONS(19),
    [anon_sym_Mixing] = ACTIONS(19),
    [anon_sym_mixing] = ACTIONS(19),
    [anon_sym_Mastering] = ACTIONS(19),
    [anon_sym_mastering] = ACTIONS(19),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(19),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(19),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(19),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(19),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(19),
    [anon_sym_u6b4cu5531] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu66f2] = ACTIONS(19),
    [anon_sym_u7de8u66f2] = ACTIONS(19),
    [anon_sym_u7f16u66f2] = ACTIONS(19),
    [anon_sym_u4f5cu8a5e] = ACTIONS(19),
    [anon_sym_u4f5cu8bcd] = ACTIONS(19),
    [anon_sym_u5382u724c] = ACTIONS(19),
    [anon_sym_u811au672c] = ACTIONS(19),
    [anon_sym_u63d2u56fe] = ACTIONS(19),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(19),
    [anon_sym_u51fau7248u65b9] = ACTIONS(19),
    [anon_sym_u5f55u97f3] = ACTIONS(19),
    [anon_sym_u539fu4f5c] = ACTIONS(19),
    [anon_sym_u58f0u4e50] = ACTIONS(19),
    [anon_sym_u4e50u5668] = ACTIONS(19),
    [anon_sym_u6df7u97f3] = ACTIONS(19),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(19),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DISC] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(88),
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
    [anon_sym_GuestVocal] = ACTIONS(88),
    [anon_sym_Guestvocal] = ACTIONS(88),
    [anon_sym_guestvocal] = ACTIONS(88),
    [anon_sym_Chorus] = ACTIONS(88),
    [anon_sym_chorus] = ACTIONS(88),
    [anon_sym_Mixing] = ACTIONS(88),
    [anon_sym_mixing] = ACTIONS(88),
    [anon_sym_Mastering] = ACTIONS(88),
    [anon_sym_mastering] = ACTIONS(88),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(88),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(88),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(88),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(88),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(88),
    [anon_sym_u6b4cu5531] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu66f2] = ACTIONS(88),
    [anon_sym_u7de8u66f2] = ACTIONS(88),
    [anon_sym_u7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5e] = ACTIONS(88),
    [anon_sym_u4f5cu8bcd] = ACTIONS(88),
    [anon_sym_u5382u724c] = ACTIONS(88),
    [anon_sym_u811au672c] = ACTIONS(88),
    [anon_sym_u63d2u56fe] = ACTIONS(88),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(88),
    [anon_sym_u51fau7248u65b9] = ACTIONS(88),
    [anon_sym_u5f55u97f3] = ACTIONS(88),
    [anon_sym_u539fu4f5c] = ACTIONS(88),
    [anon_sym_u58f0u4e50] = ACTIONS(88),
    [anon_sym_u4e50u5668] = ACTIONS(88),
    [anon_sym_u6df7u97f3] = ACTIONS(88),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(88),
    [sym__ssep] = ACTIONS(88),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DISC] = ACTIONS(92),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
    [anon_sym_GuestVocal] = ACTIONS(92),
    [anon_sym_Guestvocal] = ACTIONS(92),
    [anon_sym_guestvocal] = ACTIONS(92),
    [anon_sym_Chorus] = ACTIONS(92),
    [anon_sym_chorus] = ACTIONS(92),
    [anon_sym_Mixing] = ACTIONS(92),
    [anon_sym_mixing] = ACTIONS(92),
    [anon_sym_Mastering] = ACTIONS(92),
    [anon_sym_mastering] = ACTIONS(92),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(92),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(92),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(92),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(92),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(92),
    [anon_sym_u6b4cu5531] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu66f2] = ACTIONS(92),
    [anon_sym_u7de8u66f2] = ACTIONS(92),
    [anon_sym_u7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5e] = ACTIONS(92),
    [anon_sym_u4f5cu8bcd] = ACTIONS(92),
    [anon_sym_u5382u724c] = ACTIONS(92),
    [anon_sym_u811au672c] = ACTIONS(92),
    [anon_sym_u63d2u56fe] = ACTIONS(92),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(92),
    [anon_sym_u51fau7248u65b9] = ACTIONS(92),
    [anon_sym_u5f55u97f3] = ACTIONS(92),
    [anon_sym_u539fu4f5c] = ACTIONS(92),
    [anon_sym_u58f0u4e50] = ACTIONS(92),
    [anon_sym_u4e50u5668] = ACTIONS(92),
    [anon_sym_u6df7u97f3] = ACTIONS(92),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(92),
    [sym__ssep] = ACTIONS(92),
  },
  [20] = {
    [aux_sym_feat_field_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_SLASH_SLASH] = ACTIONS(44),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(44),
    [anon_sym_u300a] = ACTIONS(44),
    [aux_sym_song_title_token1] = ACTIONS(44),
    [anon_sym_Music] = ACTIONS(44),
    [anon_sym_music] = ACTIONS(44),
    [anon_sym_Composition] = ACTIONS(44),
    [anon_sym_composition] = ACTIONS(44),
    [anon_sym_Composer] = ACTIONS(44),
    [anon_sym_composer] = ACTIONS(44),
    [anon_sym_Compose] = ACTIONS(44),
    [anon_sym_compose] = ACTIONS(44),
    [anon_sym_Lyrics] = ACTIONS(44),
    [anon_sym_lyrics] = ACTIONS(44),
    [anon_sym_Lyricist] = ACTIONS(44),
    [anon_sym_lyricist] = ACTIONS(44),
    [anon_sym_Lyric] = ACTIONS(44),
    [anon_sym_lyric] = ACTIONS(44),
    [anon_sym_Arrangement] = ACTIONS(44),
    [anon_sym_arrangement] = ACTIONS(44),
    [anon_sym_Arranger] = ACTIONS(44),
    [anon_sym_arranger] = ACTIONS(44),
    [anon_sym_Arrange] = ACTIONS(44),
    [anon_sym_arrange] = ACTIONS(44),
    [anon_sym_Vocal] = ACTIONS(44),
    [anon_sym_vocal] = ACTIONS(44),
    [anon_sym_Vo] = ACTIONS(44),
    [anon_sym_vo] = ACTIONS(44),
    [anon_sym_Performer] = ACTIONS(44),
    [anon_sym_performer] = ACTIONS(44),
    [anon_sym_Illustration] = ACTIONS(44),
    [anon_sym_illustration] = ACTIONS(44),
    [anon_sym_Illust] = ACTIONS(44),
    [anon_sym_illust] = ACTIONS(44),
    [anon_sym_Label] = ACTIONS(44),
    [anon_sym_label] = ACTIONS(44),
    [anon_sym_Circle] = ACTIONS(44),
    [anon_sym_circle] = ACTIONS(44),
    [anon_sym_Producer] = ACTIONS(44),
    [anon_sym_producer] = ACTIONS(44),
    [anon_sym_Recording] = ACTIONS(44),
    [anon_sym_recording] = ACTIONS(44),
    [anon_sym_GuestVocal] = ACTIONS(44),
    [anon_sym_Guestvocal] = ACTIONS(44),
    [anon_sym_guestvocal] = ACTIONS(44),
    [anon_sym_Chorus] = ACTIONS(44),
    [anon_sym_chorus] = ACTIONS(44),
    [anon_sym_Mixing] = ACTIONS(44),
    [anon_sym_mixing] = ACTIONS(44),
    [anon_sym_Mastering] = ACTIONS(44),
    [anon_sym_mastering] = ACTIONS(44),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(44),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(44),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(44),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(44),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(44),
    [anon_sym_u6b4cu5531] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(44),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu66f2] = ACTIONS(44),
    [anon_sym_u7de8u66f2] = ACTIONS(44),
    [anon_sym_u7f16u66f2] = ACTIONS(44),
    [anon_sym_u4f5cu8a5e] = ACTIONS(44),
    [anon_sym_u4f5cu8bcd] = ACTIONS(44),
    [anon_sym_u5382u724c] = ACTIONS(44),
    [anon_sym_u811au672c] = ACTIONS(44),
    [anon_sym_u63d2u56fe] = ACTIONS(44),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(44),
    [anon_sym_u51fau7248u65b9] = ACTIONS(44),
    [anon_sym_u5f55u97f3] = ACTIONS(44),
    [anon_sym_u539fu4f5c] = ACTIONS(44),
    [anon_sym_u58f0u4e50] = ACTIONS(44),
    [anon_sym_u4e50u5668] = ACTIONS(44),
    [anon_sym_u6df7u97f3] = ACTIONS(44),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(44),
    [sym__ssep] = ACTIONS(94),
  },
  [21] = {
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [aux_sym_credit_field_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_DISC] = ACTIONS(99),
    [anon_sym_u300a] = ACTIONS(99),
    [aux_sym_song_title_token1] = ACTIONS(99),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [22] = {
    [sym_credit_block] = STATE(114),
    [sym_credit_field] = STATE(35),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(35),
    [aux_sym_credit_field_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_u300a] = ACTIONS(40),
    [aux_sym_song_title_token1] = ACTIONS(40),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [23] = {
    [sym_feat_field] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(27),
    [anon_sym_u300a] = ACTIONS(27),
    [aux_sym_song_title_token1] = ACTIONS(27),
    [aux_sym_feat_field_token1] = ACTIONS(101),
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
    [anon_sym_GuestVocal] = ACTIONS(27),
    [anon_sym_Guestvocal] = ACTIONS(27),
    [anon_sym_guestvocal] = ACTIONS(27),
    [anon_sym_Chorus] = ACTIONS(27),
    [anon_sym_chorus] = ACTIONS(27),
    [anon_sym_Mixing] = ACTIONS(27),
    [anon_sym_mixing] = ACTIONS(27),
    [anon_sym_Mastering] = ACTIONS(27),
    [anon_sym_mastering] = ACTIONS(27),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(27),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(27),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(27),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(27),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(27),
    [anon_sym_u6b4cu5531] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu66f2] = ACTIONS(27),
    [anon_sym_u7de8u66f2] = ACTIONS(27),
    [anon_sym_u7f16u66f2] = ACTIONS(27),
    [anon_sym_u4f5cu8a5e] = ACTIONS(27),
    [anon_sym_u4f5cu8bcd] = ACTIONS(27),
    [anon_sym_u5382u724c] = ACTIONS(27),
    [anon_sym_u811au672c] = ACTIONS(27),
    [anon_sym_u63d2u56fe] = ACTIONS(27),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(27),
    [anon_sym_u51fau7248u65b9] = ACTIONS(27),
    [anon_sym_u5f55u97f3] = ACTIONS(27),
    [anon_sym_u539fu4f5c] = ACTIONS(27),
    [anon_sym_u58f0u4e50] = ACTIONS(27),
    [anon_sym_u4e50u5668] = ACTIONS(27),
    [anon_sym_u6df7u97f3] = ACTIONS(27),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(27),
  },
  [24] = {
    [sym__quotable_creator_name] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(65),
    [anon_sym_u300a] = ACTIONS(82),
    [aux_sym_song_title_token1] = ACTIONS(65),
    [sym_creator_name] = ACTIONS(84),
    [anon_sym_Music] = ACTIONS(65),
    [anon_sym_music] = ACTIONS(65),
    [anon_sym_Composition] = ACTIONS(65),
    [anon_sym_composition] = ACTIONS(65),
    [anon_sym_Composer] = ACTIONS(65),
    [anon_sym_composer] = ACTIONS(65),
    [anon_sym_Compose] = ACTIONS(65),
    [anon_sym_compose] = ACTIONS(65),
    [anon_sym_Lyrics] = ACTIONS(65),
    [anon_sym_lyrics] = ACTIONS(65),
    [anon_sym_Lyricist] = ACTIONS(65),
    [anon_sym_lyricist] = ACTIONS(65),
    [anon_sym_Lyric] = ACTIONS(65),
    [anon_sym_lyric] = ACTIONS(65),
    [anon_sym_Arrangement] = ACTIONS(65),
    [anon_sym_arrangement] = ACTIONS(65),
    [anon_sym_Arranger] = ACTIONS(65),
    [anon_sym_arranger] = ACTIONS(65),
    [anon_sym_Arrange] = ACTIONS(65),
    [anon_sym_arrange] = ACTIONS(65),
    [anon_sym_Vocal] = ACTIONS(65),
    [anon_sym_vocal] = ACTIONS(65),
    [anon_sym_Vo] = ACTIONS(65),
    [anon_sym_vo] = ACTIONS(65),
    [anon_sym_Performer] = ACTIONS(65),
    [anon_sym_performer] = ACTIONS(65),
    [anon_sym_Illustration] = ACTIONS(65),
    [anon_sym_illustration] = ACTIONS(65),
    [anon_sym_Illust] = ACTIONS(65),
    [anon_sym_illust] = ACTIONS(65),
    [anon_sym_Label] = ACTIONS(65),
    [anon_sym_label] = ACTIONS(65),
    [anon_sym_Circle] = ACTIONS(65),
    [anon_sym_circle] = ACTIONS(65),
    [anon_sym_Producer] = ACTIONS(65),
    [anon_sym_producer] = ACTIONS(65),
    [anon_sym_Recording] = ACTIONS(65),
    [anon_sym_recording] = ACTIONS(65),
    [anon_sym_GuestVocal] = ACTIONS(65),
    [anon_sym_Guestvocal] = ACTIONS(65),
    [anon_sym_guestvocal] = ACTIONS(65),
    [anon_sym_Chorus] = ACTIONS(65),
    [anon_sym_chorus] = ACTIONS(65),
    [anon_sym_Mixing] = ACTIONS(65),
    [anon_sym_mixing] = ACTIONS(65),
    [anon_sym_Mastering] = ACTIONS(65),
    [anon_sym_mastering] = ACTIONS(65),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(65),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(65),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(65),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(65),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(65),
    [anon_sym_u6b4cu5531] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(65),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu66f2] = ACTIONS(65),
    [anon_sym_u7de8u66f2] = ACTIONS(65),
    [anon_sym_u7f16u66f2] = ACTIONS(65),
    [anon_sym_u4f5cu8a5e] = ACTIONS(65),
    [anon_sym_u4f5cu8bcd] = ACTIONS(65),
    [anon_sym_u5382u724c] = ACTIONS(65),
    [anon_sym_u811au672c] = ACTIONS(65),
    [anon_sym_u63d2u56fe] = ACTIONS(65),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(65),
    [anon_sym_u51fau7248u65b9] = ACTIONS(65),
    [anon_sym_u5f55u97f3] = ACTIONS(65),
    [anon_sym_u539fu4f5c] = ACTIONS(65),
    [anon_sym_u58f0u4e50] = ACTIONS(65),
    [anon_sym_u4e50u5668] = ACTIONS(65),
    [anon_sym_u6df7u97f3] = ACTIONS(65),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(65),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_DISC] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(105),
    [anon_sym_u300a] = ACTIONS(105),
    [aux_sym_song_title_token1] = ACTIONS(105),
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
    [anon_sym_GuestVocal] = ACTIONS(105),
    [anon_sym_Guestvocal] = ACTIONS(105),
    [anon_sym_guestvocal] = ACTIONS(105),
    [anon_sym_Chorus] = ACTIONS(105),
    [anon_sym_chorus] = ACTIONS(105),
    [anon_sym_Mixing] = ACTIONS(105),
    [anon_sym_mixing] = ACTIONS(105),
    [anon_sym_Mastering] = ACTIONS(105),
    [anon_sym_mastering] = ACTIONS(105),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(105),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(105),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(105),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(105),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(105),
    [anon_sym_u6b4cu5531] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu66f2] = ACTIONS(105),
    [anon_sym_u7de8u66f2] = ACTIONS(105),
    [anon_sym_u7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5e] = ACTIONS(105),
    [anon_sym_u4f5cu8bcd] = ACTIONS(105),
    [anon_sym_u5382u724c] = ACTIONS(105),
    [anon_sym_u811au672c] = ACTIONS(105),
    [anon_sym_u63d2u56fe] = ACTIONS(105),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(105),
    [anon_sym_u51fau7248u65b9] = ACTIONS(105),
    [anon_sym_u5f55u97f3] = ACTIONS(105),
    [anon_sym_u539fu4f5c] = ACTIONS(105),
    [anon_sym_u58f0u4e50] = ACTIONS(105),
    [anon_sym_u4e50u5668] = ACTIONS(105),
    [anon_sym_u6df7u97f3] = ACTIONS(105),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(105),
    [sym__ssep] = ACTIONS(105),
  },
  [26] = {
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [aux_sym_credit_field_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_DISC] = ACTIONS(109),
    [anon_sym_u300a] = ACTIONS(109),
    [aux_sym_song_title_token1] = ACTIONS(109),
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
    [anon_sym_GuestVocal] = ACTIONS(111),
    [anon_sym_Guestvocal] = ACTIONS(111),
    [anon_sym_guestvocal] = ACTIONS(111),
    [anon_sym_Chorus] = ACTIONS(111),
    [anon_sym_chorus] = ACTIONS(111),
    [anon_sym_Mixing] = ACTIONS(111),
    [anon_sym_mixing] = ACTIONS(111),
    [anon_sym_Mastering] = ACTIONS(111),
    [anon_sym_mastering] = ACTIONS(111),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(111),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(111),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(111),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(111),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu66f2] = ACTIONS(111),
    [anon_sym_u7de8u66f2] = ACTIONS(111),
    [anon_sym_u7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u4f5cu8bcd] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(111),
    [anon_sym_u811au672c] = ACTIONS(111),
    [anon_sym_u63d2u56fe] = ACTIONS(111),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(111),
    [anon_sym_u51fau7248u65b9] = ACTIONS(111),
    [anon_sym_u5f55u97f3] = ACTIONS(111),
    [anon_sym_u539fu4f5c] = ACTIONS(111),
    [anon_sym_u58f0u4e50] = ACTIONS(111),
    [anon_sym_u4e50u5668] = ACTIONS(111),
    [anon_sym_u6df7u97f3] = ACTIONS(111),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(111),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_DISC] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(116),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(116),
    [anon_sym_u300a] = ACTIONS(116),
    [aux_sym_song_title_token1] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(116),
    [anon_sym_music] = ACTIONS(116),
    [anon_sym_Composition] = ACTIONS(116),
    [anon_sym_composition] = ACTIONS(116),
    [anon_sym_Composer] = ACTIONS(116),
    [anon_sym_composer] = ACTIONS(116),
    [anon_sym_Compose] = ACTIONS(116),
    [anon_sym_compose] = ACTIONS(116),
    [anon_sym_Lyrics] = ACTIONS(116),
    [anon_sym_lyrics] = ACTIONS(116),
    [anon_sym_Lyricist] = ACTIONS(116),
    [anon_sym_lyricist] = ACTIONS(116),
    [anon_sym_Lyric] = ACTIONS(116),
    [anon_sym_lyric] = ACTIONS(116),
    [anon_sym_Arrangement] = ACTIONS(116),
    [anon_sym_arrangement] = ACTIONS(116),
    [anon_sym_Arranger] = ACTIONS(116),
    [anon_sym_arranger] = ACTIONS(116),
    [anon_sym_Arrange] = ACTIONS(116),
    [anon_sym_arrange] = ACTIONS(116),
    [anon_sym_Vocal] = ACTIONS(116),
    [anon_sym_vocal] = ACTIONS(116),
    [anon_sym_Vo] = ACTIONS(116),
    [anon_sym_vo] = ACTIONS(116),
    [anon_sym_Performer] = ACTIONS(116),
    [anon_sym_performer] = ACTIONS(116),
    [anon_sym_Illustration] = ACTIONS(116),
    [anon_sym_illustration] = ACTIONS(116),
    [anon_sym_Illust] = ACTIONS(116),
    [anon_sym_illust] = ACTIONS(116),
    [anon_sym_Label] = ACTIONS(116),
    [anon_sym_label] = ACTIONS(116),
    [anon_sym_Circle] = ACTIONS(116),
    [anon_sym_circle] = ACTIONS(116),
    [anon_sym_Producer] = ACTIONS(116),
    [anon_sym_producer] = ACTIONS(116),
    [anon_sym_Recording] = ACTIONS(116),
    [anon_sym_recording] = ACTIONS(116),
    [anon_sym_GuestVocal] = ACTIONS(116),
    [anon_sym_Guestvocal] = ACTIONS(116),
    [anon_sym_guestvocal] = ACTIONS(116),
    [anon_sym_Chorus] = ACTIONS(116),
    [anon_sym_chorus] = ACTIONS(116),
    [anon_sym_Mixing] = ACTIONS(116),
    [anon_sym_mixing] = ACTIONS(116),
    [anon_sym_Mastering] = ACTIONS(116),
    [anon_sym_mastering] = ACTIONS(116),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(116),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(116),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(116),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(116),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(116),
    [anon_sym_u6b4cu5531] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu66f2] = ACTIONS(116),
    [anon_sym_u7de8u66f2] = ACTIONS(116),
    [anon_sym_u7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5e] = ACTIONS(116),
    [anon_sym_u4f5cu8bcd] = ACTIONS(116),
    [anon_sym_u5382u724c] = ACTIONS(116),
    [anon_sym_u811au672c] = ACTIONS(116),
    [anon_sym_u63d2u56fe] = ACTIONS(116),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(116),
    [anon_sym_u51fau7248u65b9] = ACTIONS(116),
    [anon_sym_u5f55u97f3] = ACTIONS(116),
    [anon_sym_u539fu4f5c] = ACTIONS(116),
    [anon_sym_u58f0u4e50] = ACTIONS(116),
    [anon_sym_u4e50u5668] = ACTIONS(116),
    [anon_sym_u6df7u97f3] = ACTIONS(116),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(116),
  },
  [28] = {
    [sym_credit_field] = STATE(31),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(31),
    [aux_sym_credit_field_repeat1] = STATE(52),
    [anon_sym_DISC] = ACTIONS(99),
    [anon_sym_u300a] = ACTIONS(99),
    [aux_sym_song_title_token1] = ACTIONS(99),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
    [anon_sym_GuestVocal] = ACTIONS(92),
    [anon_sym_Guestvocal] = ACTIONS(92),
    [anon_sym_guestvocal] = ACTIONS(92),
    [anon_sym_Chorus] = ACTIONS(92),
    [anon_sym_chorus] = ACTIONS(92),
    [anon_sym_Mixing] = ACTIONS(92),
    [anon_sym_mixing] = ACTIONS(92),
    [anon_sym_Mastering] = ACTIONS(92),
    [anon_sym_mastering] = ACTIONS(92),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(92),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(92),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(92),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(92),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(92),
    [anon_sym_u6b4cu5531] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu66f2] = ACTIONS(92),
    [anon_sym_u7de8u66f2] = ACTIONS(92),
    [anon_sym_u7f16u66f2] = ACTIONS(92),
    [anon_sym_u4f5cu8a5e] = ACTIONS(92),
    [anon_sym_u4f5cu8bcd] = ACTIONS(92),
    [anon_sym_u5382u724c] = ACTIONS(92),
    [anon_sym_u811au672c] = ACTIONS(92),
    [anon_sym_u63d2u56fe] = ACTIONS(92),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(92),
    [anon_sym_u51fau7248u65b9] = ACTIONS(92),
    [anon_sym_u5f55u97f3] = ACTIONS(92),
    [anon_sym_u539fu4f5c] = ACTIONS(92),
    [anon_sym_u58f0u4e50] = ACTIONS(92),
    [anon_sym_u4e50u5668] = ACTIONS(92),
    [anon_sym_u6df7u97f3] = ACTIONS(92),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(92),
    [sym__ssep] = ACTIONS(92),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_DISC] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(120),
    [anon_sym_u300a] = ACTIONS(120),
    [aux_sym_song_title_token1] = ACTIONS(120),
    [anon_sym_Music] = ACTIONS(120),
    [anon_sym_music] = ACTIONS(120),
    [anon_sym_Composition] = ACTIONS(120),
    [anon_sym_composition] = ACTIONS(120),
    [anon_sym_Composer] = ACTIONS(120),
    [anon_sym_composer] = ACTIONS(120),
    [anon_sym_Compose] = ACTIONS(120),
    [anon_sym_compose] = ACTIONS(120),
    [anon_sym_Lyrics] = ACTIONS(120),
    [anon_sym_lyrics] = ACTIONS(120),
    [anon_sym_Lyricist] = ACTIONS(120),
    [anon_sym_lyricist] = ACTIONS(120),
    [anon_sym_Lyric] = ACTIONS(120),
    [anon_sym_lyric] = ACTIONS(120),
    [anon_sym_Arrangement] = ACTIONS(120),
    [anon_sym_arrangement] = ACTIONS(120),
    [anon_sym_Arranger] = ACTIONS(120),
    [anon_sym_arranger] = ACTIONS(120),
    [anon_sym_Arrange] = ACTIONS(120),
    [anon_sym_arrange] = ACTIONS(120),
    [anon_sym_Vocal] = ACTIONS(120),
    [anon_sym_vocal] = ACTIONS(120),
    [anon_sym_Vo] = ACTIONS(120),
    [anon_sym_vo] = ACTIONS(120),
    [anon_sym_Performer] = ACTIONS(120),
    [anon_sym_performer] = ACTIONS(120),
    [anon_sym_Illustration] = ACTIONS(120),
    [anon_sym_illustration] = ACTIONS(120),
    [anon_sym_Illust] = ACTIONS(120),
    [anon_sym_illust] = ACTIONS(120),
    [anon_sym_Label] = ACTIONS(120),
    [anon_sym_label] = ACTIONS(120),
    [anon_sym_Circle] = ACTIONS(120),
    [anon_sym_circle] = ACTIONS(120),
    [anon_sym_Producer] = ACTIONS(120),
    [anon_sym_producer] = ACTIONS(120),
    [anon_sym_Recording] = ACTIONS(120),
    [anon_sym_recording] = ACTIONS(120),
    [anon_sym_GuestVocal] = ACTIONS(120),
    [anon_sym_Guestvocal] = ACTIONS(120),
    [anon_sym_guestvocal] = ACTIONS(120),
    [anon_sym_Chorus] = ACTIONS(120),
    [anon_sym_chorus] = ACTIONS(120),
    [anon_sym_Mixing] = ACTIONS(120),
    [anon_sym_mixing] = ACTIONS(120),
    [anon_sym_Mastering] = ACTIONS(120),
    [anon_sym_mastering] = ACTIONS(120),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(120),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(120),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(120),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(120),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(120),
    [anon_sym_u6b4cu5531] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu66f2] = ACTIONS(120),
    [anon_sym_u7de8u66f2] = ACTIONS(120),
    [anon_sym_u7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5e] = ACTIONS(120),
    [anon_sym_u4f5cu8bcd] = ACTIONS(120),
    [anon_sym_u5382u724c] = ACTIONS(120),
    [anon_sym_u811au672c] = ACTIONS(120),
    [anon_sym_u63d2u56fe] = ACTIONS(120),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(120),
    [anon_sym_u51fau7248u65b9] = ACTIONS(120),
    [anon_sym_u5f55u97f3] = ACTIONS(120),
    [anon_sym_u539fu4f5c] = ACTIONS(120),
    [anon_sym_u58f0u4e50] = ACTIONS(120),
    [anon_sym_u4e50u5668] = ACTIONS(120),
    [anon_sym_u6df7u97f3] = ACTIONS(120),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(120),
  },
  [31] = {
    [sym_credit_field] = STATE(31),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(31),
    [aux_sym_credit_field_repeat1] = STATE(52),
    [anon_sym_DISC] = ACTIONS(109),
    [anon_sym_u300a] = ACTIONS(109),
    [aux_sym_song_title_token1] = ACTIONS(109),
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
    [anon_sym_GuestVocal] = ACTIONS(111),
    [anon_sym_Guestvocal] = ACTIONS(111),
    [anon_sym_guestvocal] = ACTIONS(111),
    [anon_sym_Chorus] = ACTIONS(111),
    [anon_sym_chorus] = ACTIONS(111),
    [anon_sym_Mixing] = ACTIONS(111),
    [anon_sym_mixing] = ACTIONS(111),
    [anon_sym_Mastering] = ACTIONS(111),
    [anon_sym_mastering] = ACTIONS(111),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(111),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(111),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(111),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(111),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu66f2] = ACTIONS(111),
    [anon_sym_u7de8u66f2] = ACTIONS(111),
    [anon_sym_u7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u4f5cu8bcd] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(111),
    [anon_sym_u811au672c] = ACTIONS(111),
    [anon_sym_u63d2u56fe] = ACTIONS(111),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(111),
    [anon_sym_u51fau7248u65b9] = ACTIONS(111),
    [anon_sym_u5f55u97f3] = ACTIONS(111),
    [anon_sym_u539fu4f5c] = ACTIONS(111),
    [anon_sym_u58f0u4e50] = ACTIONS(111),
    [anon_sym_u4e50u5668] = ACTIONS(111),
    [anon_sym_u6df7u97f3] = ACTIONS(111),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(111),
  },
  [32] = {
    [sym__quotable_creator_name] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_DISC] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(126),
    [anon_sym_u300a] = ACTIONS(124),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_DISC] = ACTIONS(132),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(138),
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
    [anon_sym_GuestVocal] = ACTIONS(132),
    [anon_sym_Guestvocal] = ACTIONS(132),
    [anon_sym_guestvocal] = ACTIONS(132),
    [anon_sym_Chorus] = ACTIONS(132),
    [anon_sym_chorus] = ACTIONS(132),
    [anon_sym_Mixing] = ACTIONS(132),
    [anon_sym_mixing] = ACTIONS(132),
    [anon_sym_Mastering] = ACTIONS(132),
    [anon_sym_mastering] = ACTIONS(132),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(132),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(132),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(132),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(132),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(132),
    [anon_sym_u6b4cu5531] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu66f2] = ACTIONS(132),
    [anon_sym_u7de8u66f2] = ACTIONS(132),
    [anon_sym_u7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5e] = ACTIONS(132),
    [anon_sym_u4f5cu8bcd] = ACTIONS(132),
    [anon_sym_u5382u724c] = ACTIONS(132),
    [anon_sym_u811au672c] = ACTIONS(132),
    [anon_sym_u63d2u56fe] = ACTIONS(132),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(132),
    [anon_sym_u51fau7248u65b9] = ACTIONS(132),
    [anon_sym_u5f55u97f3] = ACTIONS(132),
    [anon_sym_u539fu4f5c] = ACTIONS(132),
    [anon_sym_u58f0u4e50] = ACTIONS(132),
    [anon_sym_u4e50u5668] = ACTIONS(132),
    [anon_sym_u6df7u97f3] = ACTIONS(132),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(132),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(105),
    [anon_sym_u300a] = ACTIONS(105),
    [aux_sym_song_title_token1] = ACTIONS(105),
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
    [anon_sym_GuestVocal] = ACTIONS(105),
    [anon_sym_Guestvocal] = ACTIONS(105),
    [anon_sym_guestvocal] = ACTIONS(105),
    [anon_sym_Chorus] = ACTIONS(105),
    [anon_sym_chorus] = ACTIONS(105),
    [anon_sym_Mixing] = ACTIONS(105),
    [anon_sym_mixing] = ACTIONS(105),
    [anon_sym_Mastering] = ACTIONS(105),
    [anon_sym_mastering] = ACTIONS(105),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(105),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(105),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(105),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(105),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(105),
    [anon_sym_u6b4cu5531] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(105),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu66f2] = ACTIONS(105),
    [anon_sym_u7de8u66f2] = ACTIONS(105),
    [anon_sym_u7f16u66f2] = ACTIONS(105),
    [anon_sym_u4f5cu8a5e] = ACTIONS(105),
    [anon_sym_u4f5cu8bcd] = ACTIONS(105),
    [anon_sym_u5382u724c] = ACTIONS(105),
    [anon_sym_u811au672c] = ACTIONS(105),
    [anon_sym_u63d2u56fe] = ACTIONS(105),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(105),
    [anon_sym_u51fau7248u65b9] = ACTIONS(105),
    [anon_sym_u5f55u97f3] = ACTIONS(105),
    [anon_sym_u539fu4f5c] = ACTIONS(105),
    [anon_sym_u58f0u4e50] = ACTIONS(105),
    [anon_sym_u4e50u5668] = ACTIONS(105),
    [anon_sym_u6df7u97f3] = ACTIONS(105),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(105),
    [sym__ssep] = ACTIONS(105),
  },
  [35] = {
    [sym_credit_field] = STATE(38),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(38),
    [aux_sym_credit_field_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_u300a] = ACTIONS(99),
    [aux_sym_song_title_token1] = ACTIONS(99),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [36] = {
    [sym__quotable_creator_name] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_DISC] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [sym_creator_name] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DISC] = ACTIONS(148),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(152),
    [anon_sym_u300a] = ACTIONS(148),
    [aux_sym_song_title_token1] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(148),
    [anon_sym_music] = ACTIONS(148),
    [anon_sym_Composition] = ACTIONS(148),
    [anon_sym_composition] = ACTIONS(148),
    [anon_sym_Composer] = ACTIONS(148),
    [anon_sym_composer] = ACTIONS(148),
    [anon_sym_Compose] = ACTIONS(148),
    [anon_sym_compose] = ACTIONS(148),
    [anon_sym_Lyrics] = ACTIONS(148),
    [anon_sym_lyrics] = ACTIONS(148),
    [anon_sym_Lyricist] = ACTIONS(148),
    [anon_sym_lyricist] = ACTIONS(148),
    [anon_sym_Lyric] = ACTIONS(148),
    [anon_sym_lyric] = ACTIONS(148),
    [anon_sym_Arrangement] = ACTIONS(148),
    [anon_sym_arrangement] = ACTIONS(148),
    [anon_sym_Arranger] = ACTIONS(148),
    [anon_sym_arranger] = ACTIONS(148),
    [anon_sym_Arrange] = ACTIONS(148),
    [anon_sym_arrange] = ACTIONS(148),
    [anon_sym_Vocal] = ACTIONS(148),
    [anon_sym_vocal] = ACTIONS(148),
    [anon_sym_Vo] = ACTIONS(148),
    [anon_sym_vo] = ACTIONS(148),
    [anon_sym_Performer] = ACTIONS(148),
    [anon_sym_performer] = ACTIONS(148),
    [anon_sym_Illustration] = ACTIONS(148),
    [anon_sym_illustration] = ACTIONS(148),
    [anon_sym_Illust] = ACTIONS(148),
    [anon_sym_illust] = ACTIONS(148),
    [anon_sym_Label] = ACTIONS(148),
    [anon_sym_label] = ACTIONS(148),
    [anon_sym_Circle] = ACTIONS(148),
    [anon_sym_circle] = ACTIONS(148),
    [anon_sym_Producer] = ACTIONS(148),
    [anon_sym_producer] = ACTIONS(148),
    [anon_sym_Recording] = ACTIONS(148),
    [anon_sym_recording] = ACTIONS(148),
    [anon_sym_GuestVocal] = ACTIONS(148),
    [anon_sym_Guestvocal] = ACTIONS(148),
    [anon_sym_guestvocal] = ACTIONS(148),
    [anon_sym_Chorus] = ACTIONS(148),
    [anon_sym_chorus] = ACTIONS(148),
    [anon_sym_Mixing] = ACTIONS(148),
    [anon_sym_mixing] = ACTIONS(148),
    [anon_sym_Mastering] = ACTIONS(148),
    [anon_sym_mastering] = ACTIONS(148),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(148),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(148),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(148),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(148),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(148),
    [anon_sym_u6b4cu5531] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu66f2] = ACTIONS(148),
    [anon_sym_u7de8u66f2] = ACTIONS(148),
    [anon_sym_u7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5e] = ACTIONS(148),
    [anon_sym_u4f5cu8bcd] = ACTIONS(148),
    [anon_sym_u5382u724c] = ACTIONS(148),
    [anon_sym_u811au672c] = ACTIONS(148),
    [anon_sym_u63d2u56fe] = ACTIONS(148),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(148),
    [anon_sym_u51fau7248u65b9] = ACTIONS(148),
    [anon_sym_u5f55u97f3] = ACTIONS(148),
    [anon_sym_u539fu4f5c] = ACTIONS(148),
    [anon_sym_u58f0u4e50] = ACTIONS(148),
    [anon_sym_u4e50u5668] = ACTIONS(148),
    [anon_sym_u6df7u97f3] = ACTIONS(148),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(148),
  },
  [38] = {
    [sym_credit_field] = STATE(38),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(38),
    [aux_sym_credit_field_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_u300a] = ACTIONS(109),
    [aux_sym_song_title_token1] = ACTIONS(109),
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
    [anon_sym_GuestVocal] = ACTIONS(111),
    [anon_sym_Guestvocal] = ACTIONS(111),
    [anon_sym_guestvocal] = ACTIONS(111),
    [anon_sym_Chorus] = ACTIONS(111),
    [anon_sym_chorus] = ACTIONS(111),
    [anon_sym_Mixing] = ACTIONS(111),
    [anon_sym_mixing] = ACTIONS(111),
    [anon_sym_Mastering] = ACTIONS(111),
    [anon_sym_mastering] = ACTIONS(111),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(111),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(111),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(111),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(111),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu66f2] = ACTIONS(111),
    [anon_sym_u7de8u66f2] = ACTIONS(111),
    [anon_sym_u7f16u66f2] = ACTIONS(111),
    [anon_sym_u4f5cu8a5e] = ACTIONS(111),
    [anon_sym_u4f5cu8bcd] = ACTIONS(111),
    [anon_sym_u5382u724c] = ACTIONS(111),
    [anon_sym_u811au672c] = ACTIONS(111),
    [anon_sym_u63d2u56fe] = ACTIONS(111),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(111),
    [anon_sym_u51fau7248u65b9] = ACTIONS(111),
    [anon_sym_u5f55u97f3] = ACTIONS(111),
    [anon_sym_u539fu4f5c] = ACTIONS(111),
    [anon_sym_u58f0u4e50] = ACTIONS(111),
    [anon_sym_u4e50u5668] = ACTIONS(111),
    [anon_sym_u6df7u97f3] = ACTIONS(111),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(111),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(88),
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
    [anon_sym_GuestVocal] = ACTIONS(88),
    [anon_sym_Guestvocal] = ACTIONS(88),
    [anon_sym_guestvocal] = ACTIONS(88),
    [anon_sym_Chorus] = ACTIONS(88),
    [anon_sym_chorus] = ACTIONS(88),
    [anon_sym_Mixing] = ACTIONS(88),
    [anon_sym_mixing] = ACTIONS(88),
    [anon_sym_Mastering] = ACTIONS(88),
    [anon_sym_mastering] = ACTIONS(88),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(88),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(88),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(88),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(88),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(88),
    [anon_sym_u6b4cu5531] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu66f2] = ACTIONS(88),
    [anon_sym_u7de8u66f2] = ACTIONS(88),
    [anon_sym_u7f16u66f2] = ACTIONS(88),
    [anon_sym_u4f5cu8a5e] = ACTIONS(88),
    [anon_sym_u4f5cu8bcd] = ACTIONS(88),
    [anon_sym_u5382u724c] = ACTIONS(88),
    [anon_sym_u811au672c] = ACTIONS(88),
    [anon_sym_u63d2u56fe] = ACTIONS(88),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(88),
    [anon_sym_u51fau7248u65b9] = ACTIONS(88),
    [anon_sym_u5f55u97f3] = ACTIONS(88),
    [anon_sym_u539fu4f5c] = ACTIONS(88),
    [anon_sym_u58f0u4e50] = ACTIONS(88),
    [anon_sym_u4e50u5668] = ACTIONS(88),
    [anon_sym_u6df7u97f3] = ACTIONS(88),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(88),
    [sym__ssep] = ACTIONS(88),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DISC] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(156),
    [anon_sym_u300a] = ACTIONS(156),
    [aux_sym_song_title_token1] = ACTIONS(156),
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
    [anon_sym_GuestVocal] = ACTIONS(156),
    [anon_sym_Guestvocal] = ACTIONS(156),
    [anon_sym_guestvocal] = ACTIONS(156),
    [anon_sym_Chorus] = ACTIONS(156),
    [anon_sym_chorus] = ACTIONS(156),
    [anon_sym_Mixing] = ACTIONS(156),
    [anon_sym_mixing] = ACTIONS(156),
    [anon_sym_Mastering] = ACTIONS(156),
    [anon_sym_mastering] = ACTIONS(156),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(156),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(156),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(156),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(156),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu66f2] = ACTIONS(156),
    [anon_sym_u7de8u66f2] = ACTIONS(156),
    [anon_sym_u7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u4f5cu8bcd] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(156),
    [anon_sym_u811au672c] = ACTIONS(156),
    [anon_sym_u63d2u56fe] = ACTIONS(156),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(156),
    [anon_sym_u51fau7248u65b9] = ACTIONS(156),
    [anon_sym_u5f55u97f3] = ACTIONS(156),
    [anon_sym_u539fu4f5c] = ACTIONS(156),
    [anon_sym_u58f0u4e50] = ACTIONS(156),
    [anon_sym_u4e50u5668] = ACTIONS(156),
    [anon_sym_u6df7u97f3] = ACTIONS(156),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(156),
  },
  [41] = {
    [sym__quotable_creator_name] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_u300a] = ACTIONS(124),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(156),
    [anon_sym_u300a] = ACTIONS(156),
    [aux_sym_song_title_token1] = ACTIONS(156),
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
    [anon_sym_GuestVocal] = ACTIONS(156),
    [anon_sym_Guestvocal] = ACTIONS(156),
    [anon_sym_guestvocal] = ACTIONS(156),
    [anon_sym_Chorus] = ACTIONS(156),
    [anon_sym_chorus] = ACTIONS(156),
    [anon_sym_Mixing] = ACTIONS(156),
    [anon_sym_mixing] = ACTIONS(156),
    [anon_sym_Mastering] = ACTIONS(156),
    [anon_sym_mastering] = ACTIONS(156),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(156),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(156),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(156),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(156),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu66f2] = ACTIONS(156),
    [anon_sym_u7de8u66f2] = ACTIONS(156),
    [anon_sym_u7f16u66f2] = ACTIONS(156),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u4f5cu8bcd] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(156),
    [anon_sym_u811au672c] = ACTIONS(156),
    [anon_sym_u63d2u56fe] = ACTIONS(156),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(156),
    [anon_sym_u51fau7248u65b9] = ACTIONS(156),
    [anon_sym_u5f55u97f3] = ACTIONS(156),
    [anon_sym_u539fu4f5c] = ACTIONS(156),
    [anon_sym_u58f0u4e50] = ACTIONS(156),
    [anon_sym_u4e50u5668] = ACTIONS(156),
    [anon_sym_u6df7u97f3] = ACTIONS(156),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(156),
  },
  [43] = {
    [sym__quotable_creator_name] = STATE(119),
    [anon_sym_DISC] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_u300a] = ACTIONS(124),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_SLASH_SLASH] = ACTIONS(162),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(164),
    [anon_sym_u300a] = ACTIONS(148),
    [aux_sym_song_title_token1] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(148),
    [anon_sym_music] = ACTIONS(148),
    [anon_sym_Composition] = ACTIONS(148),
    [anon_sym_composition] = ACTIONS(148),
    [anon_sym_Composer] = ACTIONS(148),
    [anon_sym_composer] = ACTIONS(148),
    [anon_sym_Compose] = ACTIONS(148),
    [anon_sym_compose] = ACTIONS(148),
    [anon_sym_Lyrics] = ACTIONS(148),
    [anon_sym_lyrics] = ACTIONS(148),
    [anon_sym_Lyricist] = ACTIONS(148),
    [anon_sym_lyricist] = ACTIONS(148),
    [anon_sym_Lyric] = ACTIONS(148),
    [anon_sym_lyric] = ACTIONS(148),
    [anon_sym_Arrangement] = ACTIONS(148),
    [anon_sym_arrangement] = ACTIONS(148),
    [anon_sym_Arranger] = ACTIONS(148),
    [anon_sym_arranger] = ACTIONS(148),
    [anon_sym_Arrange] = ACTIONS(148),
    [anon_sym_arrange] = ACTIONS(148),
    [anon_sym_Vocal] = ACTIONS(148),
    [anon_sym_vocal] = ACTIONS(148),
    [anon_sym_Vo] = ACTIONS(148),
    [anon_sym_vo] = ACTIONS(148),
    [anon_sym_Performer] = ACTIONS(148),
    [anon_sym_performer] = ACTIONS(148),
    [anon_sym_Illustration] = ACTIONS(148),
    [anon_sym_illustration] = ACTIONS(148),
    [anon_sym_Illust] = ACTIONS(148),
    [anon_sym_illust] = ACTIONS(148),
    [anon_sym_Label] = ACTIONS(148),
    [anon_sym_label] = ACTIONS(148),
    [anon_sym_Circle] = ACTIONS(148),
    [anon_sym_circle] = ACTIONS(148),
    [anon_sym_Producer] = ACTIONS(148),
    [anon_sym_producer] = ACTIONS(148),
    [anon_sym_Recording] = ACTIONS(148),
    [anon_sym_recording] = ACTIONS(148),
    [anon_sym_GuestVocal] = ACTIONS(148),
    [anon_sym_Guestvocal] = ACTIONS(148),
    [anon_sym_guestvocal] = ACTIONS(148),
    [anon_sym_Chorus] = ACTIONS(148),
    [anon_sym_chorus] = ACTIONS(148),
    [anon_sym_Mixing] = ACTIONS(148),
    [anon_sym_mixing] = ACTIONS(148),
    [anon_sym_Mastering] = ACTIONS(148),
    [anon_sym_mastering] = ACTIONS(148),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(148),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(148),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(148),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(148),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(148),
    [anon_sym_u6b4cu5531] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu66f2] = ACTIONS(148),
    [anon_sym_u7de8u66f2] = ACTIONS(148),
    [anon_sym_u7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5e] = ACTIONS(148),
    [anon_sym_u4f5cu8bcd] = ACTIONS(148),
    [anon_sym_u5382u724c] = ACTIONS(148),
    [anon_sym_u811au672c] = ACTIONS(148),
    [anon_sym_u63d2u56fe] = ACTIONS(148),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(148),
    [anon_sym_u51fau7248u65b9] = ACTIONS(148),
    [anon_sym_u5f55u97f3] = ACTIONS(148),
    [anon_sym_u539fu4f5c] = ACTIONS(148),
    [anon_sym_u58f0u4e50] = ACTIONS(148),
    [anon_sym_u4e50u5668] = ACTIONS(148),
    [anon_sym_u6df7u97f3] = ACTIONS(148),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(148),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(120),
    [anon_sym_u300a] = ACTIONS(120),
    [aux_sym_song_title_token1] = ACTIONS(120),
    [anon_sym_Music] = ACTIONS(120),
    [anon_sym_music] = ACTIONS(120),
    [anon_sym_Composition] = ACTIONS(120),
    [anon_sym_composition] = ACTIONS(120),
    [anon_sym_Composer] = ACTIONS(120),
    [anon_sym_composer] = ACTIONS(120),
    [anon_sym_Compose] = ACTIONS(120),
    [anon_sym_compose] = ACTIONS(120),
    [anon_sym_Lyrics] = ACTIONS(120),
    [anon_sym_lyrics] = ACTIONS(120),
    [anon_sym_Lyricist] = ACTIONS(120),
    [anon_sym_lyricist] = ACTIONS(120),
    [anon_sym_Lyric] = ACTIONS(120),
    [anon_sym_lyric] = ACTIONS(120),
    [anon_sym_Arrangement] = ACTIONS(120),
    [anon_sym_arrangement] = ACTIONS(120),
    [anon_sym_Arranger] = ACTIONS(120),
    [anon_sym_arranger] = ACTIONS(120),
    [anon_sym_Arrange] = ACTIONS(120),
    [anon_sym_arrange] = ACTIONS(120),
    [anon_sym_Vocal] = ACTIONS(120),
    [anon_sym_vocal] = ACTIONS(120),
    [anon_sym_Vo] = ACTIONS(120),
    [anon_sym_vo] = ACTIONS(120),
    [anon_sym_Performer] = ACTIONS(120),
    [anon_sym_performer] = ACTIONS(120),
    [anon_sym_Illustration] = ACTIONS(120),
    [anon_sym_illustration] = ACTIONS(120),
    [anon_sym_Illust] = ACTIONS(120),
    [anon_sym_illust] = ACTIONS(120),
    [anon_sym_Label] = ACTIONS(120),
    [anon_sym_label] = ACTIONS(120),
    [anon_sym_Circle] = ACTIONS(120),
    [anon_sym_circle] = ACTIONS(120),
    [anon_sym_Producer] = ACTIONS(120),
    [anon_sym_producer] = ACTIONS(120),
    [anon_sym_Recording] = ACTIONS(120),
    [anon_sym_recording] = ACTIONS(120),
    [anon_sym_GuestVocal] = ACTIONS(120),
    [anon_sym_Guestvocal] = ACTIONS(120),
    [anon_sym_guestvocal] = ACTIONS(120),
    [anon_sym_Chorus] = ACTIONS(120),
    [anon_sym_chorus] = ACTIONS(120),
    [anon_sym_Mixing] = ACTIONS(120),
    [anon_sym_mixing] = ACTIONS(120),
    [anon_sym_Mastering] = ACTIONS(120),
    [anon_sym_mastering] = ACTIONS(120),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(120),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(120),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(120),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(120),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(120),
    [anon_sym_u6b4cu5531] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(120),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu66f2] = ACTIONS(120),
    [anon_sym_u7de8u66f2] = ACTIONS(120),
    [anon_sym_u7f16u66f2] = ACTIONS(120),
    [anon_sym_u4f5cu8a5e] = ACTIONS(120),
    [anon_sym_u4f5cu8bcd] = ACTIONS(120),
    [anon_sym_u5382u724c] = ACTIONS(120),
    [anon_sym_u811au672c] = ACTIONS(120),
    [anon_sym_u63d2u56fe] = ACTIONS(120),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(120),
    [anon_sym_u51fau7248u65b9] = ACTIONS(120),
    [anon_sym_u5f55u97f3] = ACTIONS(120),
    [anon_sym_u539fu4f5c] = ACTIONS(120),
    [anon_sym_u58f0u4e50] = ACTIONS(120),
    [anon_sym_u4e50u5668] = ACTIONS(120),
    [anon_sym_u6df7u97f3] = ACTIONS(120),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(120),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(170),
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
    [anon_sym_GuestVocal] = ACTIONS(132),
    [anon_sym_Guestvocal] = ACTIONS(132),
    [anon_sym_guestvocal] = ACTIONS(132),
    [anon_sym_Chorus] = ACTIONS(132),
    [anon_sym_chorus] = ACTIONS(132),
    [anon_sym_Mixing] = ACTIONS(132),
    [anon_sym_mixing] = ACTIONS(132),
    [anon_sym_Mastering] = ACTIONS(132),
    [anon_sym_mastering] = ACTIONS(132),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(132),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(132),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(132),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(132),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(132),
    [anon_sym_u6b4cu5531] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu66f2] = ACTIONS(132),
    [anon_sym_u7de8u66f2] = ACTIONS(132),
    [anon_sym_u7f16u66f2] = ACTIONS(132),
    [anon_sym_u4f5cu8a5e] = ACTIONS(132),
    [anon_sym_u4f5cu8bcd] = ACTIONS(132),
    [anon_sym_u5382u724c] = ACTIONS(132),
    [anon_sym_u811au672c] = ACTIONS(132),
    [anon_sym_u63d2u56fe] = ACTIONS(132),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(132),
    [anon_sym_u51fau7248u65b9] = ACTIONS(132),
    [anon_sym_u5f55u97f3] = ACTIONS(132),
    [anon_sym_u539fu4f5c] = ACTIONS(132),
    [anon_sym_u58f0u4e50] = ACTIONS(132),
    [anon_sym_u4e50u5668] = ACTIONS(132),
    [anon_sym_u6df7u97f3] = ACTIONS(132),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(132),
  },
  [47] = {
    [sym__quotable_creator_name] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [sym_creator_name] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [48] = {
    [sym__quotable_creator_name] = STATE(119),
    [anon_sym_DISC] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [sym_creator_name] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_SLASH_SLASH] = ACTIONS(116),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(116),
    [anon_sym_u300a] = ACTIONS(116),
    [aux_sym_song_title_token1] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(116),
    [anon_sym_music] = ACTIONS(116),
    [anon_sym_Composition] = ACTIONS(116),
    [anon_sym_composition] = ACTIONS(116),
    [anon_sym_Composer] = ACTIONS(116),
    [anon_sym_composer] = ACTIONS(116),
    [anon_sym_Compose] = ACTIONS(116),
    [anon_sym_compose] = ACTIONS(116),
    [anon_sym_Lyrics] = ACTIONS(116),
    [anon_sym_lyrics] = ACTIONS(116),
    [anon_sym_Lyricist] = ACTIONS(116),
    [anon_sym_lyricist] = ACTIONS(116),
    [anon_sym_Lyric] = ACTIONS(116),
    [anon_sym_lyric] = ACTIONS(116),
    [anon_sym_Arrangement] = ACTIONS(116),
    [anon_sym_arrangement] = ACTIONS(116),
    [anon_sym_Arranger] = ACTIONS(116),
    [anon_sym_arranger] = ACTIONS(116),
    [anon_sym_Arrange] = ACTIONS(116),
    [anon_sym_arrange] = ACTIONS(116),
    [anon_sym_Vocal] = ACTIONS(116),
    [anon_sym_vocal] = ACTIONS(116),
    [anon_sym_Vo] = ACTIONS(116),
    [anon_sym_vo] = ACTIONS(116),
    [anon_sym_Performer] = ACTIONS(116),
    [anon_sym_performer] = ACTIONS(116),
    [anon_sym_Illustration] = ACTIONS(116),
    [anon_sym_illustration] = ACTIONS(116),
    [anon_sym_Illust] = ACTIONS(116),
    [anon_sym_illust] = ACTIONS(116),
    [anon_sym_Label] = ACTIONS(116),
    [anon_sym_label] = ACTIONS(116),
    [anon_sym_Circle] = ACTIONS(116),
    [anon_sym_circle] = ACTIONS(116),
    [anon_sym_Producer] = ACTIONS(116),
    [anon_sym_producer] = ACTIONS(116),
    [anon_sym_Recording] = ACTIONS(116),
    [anon_sym_recording] = ACTIONS(116),
    [anon_sym_GuestVocal] = ACTIONS(116),
    [anon_sym_Guestvocal] = ACTIONS(116),
    [anon_sym_guestvocal] = ACTIONS(116),
    [anon_sym_Chorus] = ACTIONS(116),
    [anon_sym_chorus] = ACTIONS(116),
    [anon_sym_Mixing] = ACTIONS(116),
    [anon_sym_mixing] = ACTIONS(116),
    [anon_sym_Mastering] = ACTIONS(116),
    [anon_sym_mastering] = ACTIONS(116),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(116),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(116),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(116),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(116),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(116),
    [anon_sym_u6b4cu5531] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(116),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu66f2] = ACTIONS(116),
    [anon_sym_u7de8u66f2] = ACTIONS(116),
    [anon_sym_u7f16u66f2] = ACTIONS(116),
    [anon_sym_u4f5cu8a5e] = ACTIONS(116),
    [anon_sym_u4f5cu8bcd] = ACTIONS(116),
    [anon_sym_u5382u724c] = ACTIONS(116),
    [anon_sym_u811au672c] = ACTIONS(116),
    [anon_sym_u63d2u56fe] = ACTIONS(116),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(116),
    [anon_sym_u51fau7248u65b9] = ACTIONS(116),
    [anon_sym_u5f55u97f3] = ACTIONS(116),
    [anon_sym_u539fu4f5c] = ACTIONS(116),
    [anon_sym_u58f0u4e50] = ACTIONS(116),
    [anon_sym_u4e50u5668] = ACTIONS(116),
    [anon_sym_u6df7u97f3] = ACTIONS(116),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(116),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_DISC] = ACTIONS(178),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_u300a] = ACTIONS(178),
    [aux_sym_song_title_token1] = ACTIONS(178),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(178),
    [anon_sym_compose] = ACTIONS(178),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(178),
    [anon_sym_lyric] = ACTIONS(178),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(178),
    [anon_sym_arrange] = ACTIONS(178),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(178),
    [anon_sym_vo] = ACTIONS(178),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(178),
    [anon_sym_illust] = ACTIONS(178),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_GuestVocal] = ACTIONS(178),
    [anon_sym_Guestvocal] = ACTIONS(178),
    [anon_sym_guestvocal] = ACTIONS(178),
    [anon_sym_Chorus] = ACTIONS(178),
    [anon_sym_chorus] = ACTIONS(178),
    [anon_sym_Mixing] = ACTIONS(178),
    [anon_sym_mixing] = ACTIONS(178),
    [anon_sym_Mastering] = ACTIONS(178),
    [anon_sym_mastering] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(178),
    [anon_sym_u4f5cu8bcd] = ACTIONS(178),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
    [anon_sym_u58f0u4e50] = ACTIONS(178),
    [anon_sym_u4e50u5668] = ACTIONS(178),
    [anon_sym_u6df7u97f3] = ACTIONS(178),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(178),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_DISC] = ACTIONS(178),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_u300a] = ACTIONS(178),
    [aux_sym_song_title_token1] = ACTIONS(178),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(178),
    [anon_sym_compose] = ACTIONS(178),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(178),
    [anon_sym_lyric] = ACTIONS(178),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(178),
    [anon_sym_arrange] = ACTIONS(178),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(178),
    [anon_sym_vo] = ACTIONS(178),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(178),
    [anon_sym_illust] = ACTIONS(178),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_GuestVocal] = ACTIONS(178),
    [anon_sym_Guestvocal] = ACTIONS(178),
    [anon_sym_guestvocal] = ACTIONS(178),
    [anon_sym_Chorus] = ACTIONS(178),
    [anon_sym_chorus] = ACTIONS(178),
    [anon_sym_Mixing] = ACTIONS(178),
    [anon_sym_mixing] = ACTIONS(178),
    [anon_sym_Mastering] = ACTIONS(178),
    [anon_sym_mastering] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(178),
    [anon_sym_u4f5cu8bcd] = ACTIONS(178),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
    [anon_sym_u58f0u4e50] = ACTIONS(178),
    [anon_sym_u4e50u5668] = ACTIONS(178),
    [anon_sym_u6df7u97f3] = ACTIONS(178),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(178),
  },
  [52] = {
    [sym__quotable_creator_name] = STATE(116),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(59),
    [anon_sym_u300a] = ACTIONS(180),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DISC] = ACTIONS(148),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_u300a] = ACTIONS(148),
    [aux_sym_song_title_token1] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(148),
    [anon_sym_music] = ACTIONS(148),
    [anon_sym_Composition] = ACTIONS(148),
    [anon_sym_composition] = ACTIONS(148),
    [anon_sym_Composer] = ACTIONS(148),
    [anon_sym_composer] = ACTIONS(148),
    [anon_sym_Compose] = ACTIONS(148),
    [anon_sym_compose] = ACTIONS(148),
    [anon_sym_Lyrics] = ACTIONS(148),
    [anon_sym_lyrics] = ACTIONS(148),
    [anon_sym_Lyricist] = ACTIONS(148),
    [anon_sym_lyricist] = ACTIONS(148),
    [anon_sym_Lyric] = ACTIONS(148),
    [anon_sym_lyric] = ACTIONS(148),
    [anon_sym_Arrangement] = ACTIONS(148),
    [anon_sym_arrangement] = ACTIONS(148),
    [anon_sym_Arranger] = ACTIONS(148),
    [anon_sym_arranger] = ACTIONS(148),
    [anon_sym_Arrange] = ACTIONS(148),
    [anon_sym_arrange] = ACTIONS(148),
    [anon_sym_Vocal] = ACTIONS(148),
    [anon_sym_vocal] = ACTIONS(148),
    [anon_sym_Vo] = ACTIONS(148),
    [anon_sym_vo] = ACTIONS(148),
    [anon_sym_Performer] = ACTIONS(148),
    [anon_sym_performer] = ACTIONS(148),
    [anon_sym_Illustration] = ACTIONS(148),
    [anon_sym_illustration] = ACTIONS(148),
    [anon_sym_Illust] = ACTIONS(148),
    [anon_sym_illust] = ACTIONS(148),
    [anon_sym_Label] = ACTIONS(148),
    [anon_sym_label] = ACTIONS(148),
    [anon_sym_Circle] = ACTIONS(148),
    [anon_sym_circle] = ACTIONS(148),
    [anon_sym_Producer] = ACTIONS(148),
    [anon_sym_producer] = ACTIONS(148),
    [anon_sym_Recording] = ACTIONS(148),
    [anon_sym_recording] = ACTIONS(148),
    [anon_sym_GuestVocal] = ACTIONS(148),
    [anon_sym_Guestvocal] = ACTIONS(148),
    [anon_sym_guestvocal] = ACTIONS(148),
    [anon_sym_Chorus] = ACTIONS(148),
    [anon_sym_chorus] = ACTIONS(148),
    [anon_sym_Mixing] = ACTIONS(148),
    [anon_sym_mixing] = ACTIONS(148),
    [anon_sym_Mastering] = ACTIONS(148),
    [anon_sym_mastering] = ACTIONS(148),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(148),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(148),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(148),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(148),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(148),
    [anon_sym_u6b4cu5531] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu66f2] = ACTIONS(148),
    [anon_sym_u7de8u66f2] = ACTIONS(148),
    [anon_sym_u7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5e] = ACTIONS(148),
    [anon_sym_u4f5cu8bcd] = ACTIONS(148),
    [anon_sym_u5382u724c] = ACTIONS(148),
    [anon_sym_u811au672c] = ACTIONS(148),
    [anon_sym_u63d2u56fe] = ACTIONS(148),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(148),
    [anon_sym_u51fau7248u65b9] = ACTIONS(148),
    [anon_sym_u5f55u97f3] = ACTIONS(148),
    [anon_sym_u539fu4f5c] = ACTIONS(148),
    [anon_sym_u58f0u4e50] = ACTIONS(148),
    [anon_sym_u4e50u5668] = ACTIONS(148),
    [anon_sym_u6df7u97f3] = ACTIONS(148),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(148),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_DISC] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_u300a] = ACTIONS(184),
    [aux_sym_song_title_token1] = ACTIONS(184),
    [anon_sym_Music] = ACTIONS(184),
    [anon_sym_music] = ACTIONS(184),
    [anon_sym_Composition] = ACTIONS(184),
    [anon_sym_composition] = ACTIONS(184),
    [anon_sym_Composer] = ACTIONS(184),
    [anon_sym_composer] = ACTIONS(184),
    [anon_sym_Compose] = ACTIONS(184),
    [anon_sym_compose] = ACTIONS(184),
    [anon_sym_Lyrics] = ACTIONS(184),
    [anon_sym_lyrics] = ACTIONS(184),
    [anon_sym_Lyricist] = ACTIONS(184),
    [anon_sym_lyricist] = ACTIONS(184),
    [anon_sym_Lyric] = ACTIONS(184),
    [anon_sym_lyric] = ACTIONS(184),
    [anon_sym_Arrangement] = ACTIONS(184),
    [anon_sym_arrangement] = ACTIONS(184),
    [anon_sym_Arranger] = ACTIONS(184),
    [anon_sym_arranger] = ACTIONS(184),
    [anon_sym_Arrange] = ACTIONS(184),
    [anon_sym_arrange] = ACTIONS(184),
    [anon_sym_Vocal] = ACTIONS(184),
    [anon_sym_vocal] = ACTIONS(184),
    [anon_sym_Vo] = ACTIONS(184),
    [anon_sym_vo] = ACTIONS(184),
    [anon_sym_Performer] = ACTIONS(184),
    [anon_sym_performer] = ACTIONS(184),
    [anon_sym_Illustration] = ACTIONS(184),
    [anon_sym_illustration] = ACTIONS(184),
    [anon_sym_Illust] = ACTIONS(184),
    [anon_sym_illust] = ACTIONS(184),
    [anon_sym_Label] = ACTIONS(184),
    [anon_sym_label] = ACTIONS(184),
    [anon_sym_Circle] = ACTIONS(184),
    [anon_sym_circle] = ACTIONS(184),
    [anon_sym_Producer] = ACTIONS(184),
    [anon_sym_producer] = ACTIONS(184),
    [anon_sym_Recording] = ACTIONS(184),
    [anon_sym_recording] = ACTIONS(184),
    [anon_sym_GuestVocal] = ACTIONS(184),
    [anon_sym_Guestvocal] = ACTIONS(184),
    [anon_sym_guestvocal] = ACTIONS(184),
    [anon_sym_Chorus] = ACTIONS(184),
    [anon_sym_chorus] = ACTIONS(184),
    [anon_sym_Mixing] = ACTIONS(184),
    [anon_sym_mixing] = ACTIONS(184),
    [anon_sym_Mastering] = ACTIONS(184),
    [anon_sym_mastering] = ACTIONS(184),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(184),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(184),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(184),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(184),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(184),
    [anon_sym_u6b4cu5531] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu66f2] = ACTIONS(184),
    [anon_sym_u7de8u66f2] = ACTIONS(184),
    [anon_sym_u7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5e] = ACTIONS(184),
    [anon_sym_u4f5cu8bcd] = ACTIONS(184),
    [anon_sym_u5382u724c] = ACTIONS(184),
    [anon_sym_u811au672c] = ACTIONS(184),
    [anon_sym_u63d2u56fe] = ACTIONS(184),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(184),
    [anon_sym_u51fau7248u65b9] = ACTIONS(184),
    [anon_sym_u5f55u97f3] = ACTIONS(184),
    [anon_sym_u539fu4f5c] = ACTIONS(184),
    [anon_sym_u58f0u4e50] = ACTIONS(184),
    [anon_sym_u4e50u5668] = ACTIONS(184),
    [anon_sym_u6df7u97f3] = ACTIONS(184),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(184),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_DISC] = ACTIONS(188),
    [anon_sym_u300a] = ACTIONS(188),
    [aux_sym_song_title_token1] = ACTIONS(188),
    [anon_sym_Music] = ACTIONS(188),
    [anon_sym_music] = ACTIONS(188),
    [anon_sym_Composition] = ACTIONS(188),
    [anon_sym_composition] = ACTIONS(188),
    [anon_sym_Composer] = ACTIONS(188),
    [anon_sym_composer] = ACTIONS(188),
    [anon_sym_Compose] = ACTIONS(188),
    [anon_sym_compose] = ACTIONS(188),
    [anon_sym_Lyrics] = ACTIONS(188),
    [anon_sym_lyrics] = ACTIONS(188),
    [anon_sym_Lyricist] = ACTIONS(188),
    [anon_sym_lyricist] = ACTIONS(188),
    [anon_sym_Lyric] = ACTIONS(188),
    [anon_sym_lyric] = ACTIONS(188),
    [anon_sym_Arrangement] = ACTIONS(188),
    [anon_sym_arrangement] = ACTIONS(188),
    [anon_sym_Arranger] = ACTIONS(188),
    [anon_sym_arranger] = ACTIONS(188),
    [anon_sym_Arrange] = ACTIONS(188),
    [anon_sym_arrange] = ACTIONS(188),
    [anon_sym_Vocal] = ACTIONS(188),
    [anon_sym_vocal] = ACTIONS(188),
    [anon_sym_Vo] = ACTIONS(188),
    [anon_sym_vo] = ACTIONS(188),
    [anon_sym_Performer] = ACTIONS(188),
    [anon_sym_performer] = ACTIONS(188),
    [anon_sym_Illustration] = ACTIONS(188),
    [anon_sym_illustration] = ACTIONS(188),
    [anon_sym_Illust] = ACTIONS(188),
    [anon_sym_illust] = ACTIONS(188),
    [anon_sym_Label] = ACTIONS(188),
    [anon_sym_label] = ACTIONS(188),
    [anon_sym_Circle] = ACTIONS(188),
    [anon_sym_circle] = ACTIONS(188),
    [anon_sym_Producer] = ACTIONS(188),
    [anon_sym_producer] = ACTIONS(188),
    [anon_sym_Recording] = ACTIONS(188),
    [anon_sym_recording] = ACTIONS(188),
    [anon_sym_GuestVocal] = ACTIONS(188),
    [anon_sym_Guestvocal] = ACTIONS(188),
    [anon_sym_guestvocal] = ACTIONS(188),
    [anon_sym_Chorus] = ACTIONS(188),
    [anon_sym_chorus] = ACTIONS(188),
    [anon_sym_Mixing] = ACTIONS(188),
    [anon_sym_mixing] = ACTIONS(188),
    [anon_sym_Mastering] = ACTIONS(188),
    [anon_sym_mastering] = ACTIONS(188),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(188),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(188),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(188),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(188),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(188),
    [anon_sym_u6b4cu5531] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu66f2] = ACTIONS(188),
    [anon_sym_u7de8u66f2] = ACTIONS(188),
    [anon_sym_u7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5e] = ACTIONS(188),
    [anon_sym_u4f5cu8bcd] = ACTIONS(188),
    [anon_sym_u5382u724c] = ACTIONS(188),
    [anon_sym_u811au672c] = ACTIONS(188),
    [anon_sym_u63d2u56fe] = ACTIONS(188),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(188),
    [anon_sym_u51fau7248u65b9] = ACTIONS(188),
    [anon_sym_u5f55u97f3] = ACTIONS(188),
    [anon_sym_u539fu4f5c] = ACTIONS(188),
    [anon_sym_u58f0u4e50] = ACTIONS(188),
    [anon_sym_u4e50u5668] = ACTIONS(188),
    [anon_sym_u6df7u97f3] = ACTIONS(188),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(188),
    [sym__sep] = ACTIONS(190),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_DISC] = ACTIONS(194),
    [anon_sym_u300a] = ACTIONS(194),
    [aux_sym_song_title_token1] = ACTIONS(194),
    [anon_sym_Music] = ACTIONS(194),
    [anon_sym_music] = ACTIONS(194),
    [anon_sym_Composition] = ACTIONS(194),
    [anon_sym_composition] = ACTIONS(194),
    [anon_sym_Composer] = ACTIONS(194),
    [anon_sym_composer] = ACTIONS(194),
    [anon_sym_Compose] = ACTIONS(194),
    [anon_sym_compose] = ACTIONS(194),
    [anon_sym_Lyrics] = ACTIONS(194),
    [anon_sym_lyrics] = ACTIONS(194),
    [anon_sym_Lyricist] = ACTIONS(194),
    [anon_sym_lyricist] = ACTIONS(194),
    [anon_sym_Lyric] = ACTIONS(194),
    [anon_sym_lyric] = ACTIONS(194),
    [anon_sym_Arrangement] = ACTIONS(194),
    [anon_sym_arrangement] = ACTIONS(194),
    [anon_sym_Arranger] = ACTIONS(194),
    [anon_sym_arranger] = ACTIONS(194),
    [anon_sym_Arrange] = ACTIONS(194),
    [anon_sym_arrange] = ACTIONS(194),
    [anon_sym_Vocal] = ACTIONS(194),
    [anon_sym_vocal] = ACTIONS(194),
    [anon_sym_Vo] = ACTIONS(194),
    [anon_sym_vo] = ACTIONS(194),
    [anon_sym_Performer] = ACTIONS(194),
    [anon_sym_performer] = ACTIONS(194),
    [anon_sym_Illustration] = ACTIONS(194),
    [anon_sym_illustration] = ACTIONS(194),
    [anon_sym_Illust] = ACTIONS(194),
    [anon_sym_illust] = ACTIONS(194),
    [anon_sym_Label] = ACTIONS(194),
    [anon_sym_label] = ACTIONS(194),
    [anon_sym_Circle] = ACTIONS(194),
    [anon_sym_circle] = ACTIONS(194),
    [anon_sym_Producer] = ACTIONS(194),
    [anon_sym_producer] = ACTIONS(194),
    [anon_sym_Recording] = ACTIONS(194),
    [anon_sym_recording] = ACTIONS(194),
    [anon_sym_GuestVocal] = ACTIONS(194),
    [anon_sym_Guestvocal] = ACTIONS(194),
    [anon_sym_guestvocal] = ACTIONS(194),
    [anon_sym_Chorus] = ACTIONS(194),
    [anon_sym_chorus] = ACTIONS(194),
    [anon_sym_Mixing] = ACTIONS(194),
    [anon_sym_mixing] = ACTIONS(194),
    [anon_sym_Mastering] = ACTIONS(194),
    [anon_sym_mastering] = ACTIONS(194),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(194),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(194),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(194),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(194),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(194),
    [anon_sym_u6b4cu5531] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu66f2] = ACTIONS(194),
    [anon_sym_u7de8u66f2] = ACTIONS(194),
    [anon_sym_u7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5e] = ACTIONS(194),
    [anon_sym_u4f5cu8bcd] = ACTIONS(194),
    [anon_sym_u5382u724c] = ACTIONS(194),
    [anon_sym_u811au672c] = ACTIONS(194),
    [anon_sym_u63d2u56fe] = ACTIONS(194),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(194),
    [anon_sym_u51fau7248u65b9] = ACTIONS(194),
    [anon_sym_u5f55u97f3] = ACTIONS(194),
    [anon_sym_u539fu4f5c] = ACTIONS(194),
    [anon_sym_u58f0u4e50] = ACTIONS(194),
    [anon_sym_u4e50u5668] = ACTIONS(194),
    [anon_sym_u6df7u97f3] = ACTIONS(194),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(194),
    [sym__sep] = ACTIONS(196),
  },
  [57] = {
    [sym__quotable_creator_name] = STATE(108),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(59),
    [anon_sym_u300a] = ACTIONS(180),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [58] = {
    [sym__quotable_creator_name] = STATE(102),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(59),
    [anon_sym_u300a] = ACTIONS(180),
    [sym_creator_name] = ACTIONS(128),
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
    [anon_sym_GuestVocal] = ACTIONS(9),
    [anon_sym_Guestvocal] = ACTIONS(9),
    [anon_sym_guestvocal] = ACTIONS(9),
    [anon_sym_Chorus] = ACTIONS(9),
    [anon_sym_chorus] = ACTIONS(9),
    [anon_sym_Mixing] = ACTIONS(9),
    [anon_sym_mixing] = ACTIONS(9),
    [anon_sym_Mastering] = ACTIONS(9),
    [anon_sym_mastering] = ACTIONS(9),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(9),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(9),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(9),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(9),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(9),
    [anon_sym_u6b4cu5531] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu66f2] = ACTIONS(9),
    [anon_sym_u7de8u66f2] = ACTIONS(9),
    [anon_sym_u7f16u66f2] = ACTIONS(9),
    [anon_sym_u4f5cu8a5e] = ACTIONS(9),
    [anon_sym_u4f5cu8bcd] = ACTIONS(9),
    [anon_sym_u5382u724c] = ACTIONS(9),
    [anon_sym_u811au672c] = ACTIONS(9),
    [anon_sym_u63d2u56fe] = ACTIONS(9),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(9),
    [anon_sym_u51fau7248u65b9] = ACTIONS(9),
    [anon_sym_u5f55u97f3] = ACTIONS(9),
    [anon_sym_u539fu4f5c] = ACTIONS(9),
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [59] = {
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(59),
    [anon_sym_u300a] = ACTIONS(198),
    [sym_creator_name] = ACTIONS(198),
    [anon_sym_Music] = ACTIONS(200),
    [anon_sym_music] = ACTIONS(200),
    [anon_sym_Composition] = ACTIONS(200),
    [anon_sym_composition] = ACTIONS(200),
    [anon_sym_Composer] = ACTIONS(200),
    [anon_sym_composer] = ACTIONS(200),
    [anon_sym_Compose] = ACTIONS(200),
    [anon_sym_compose] = ACTIONS(200),
    [anon_sym_Lyrics] = ACTIONS(200),
    [anon_sym_lyrics] = ACTIONS(200),
    [anon_sym_Lyricist] = ACTIONS(200),
    [anon_sym_lyricist] = ACTIONS(200),
    [anon_sym_Lyric] = ACTIONS(200),
    [anon_sym_lyric] = ACTIONS(200),
    [anon_sym_Arrangement] = ACTIONS(200),
    [anon_sym_arrangement] = ACTIONS(200),
    [anon_sym_Arranger] = ACTIONS(200),
    [anon_sym_arranger] = ACTIONS(200),
    [anon_sym_Arrange] = ACTIONS(200),
    [anon_sym_arrange] = ACTIONS(200),
    [anon_sym_Vocal] = ACTIONS(200),
    [anon_sym_vocal] = ACTIONS(200),
    [anon_sym_Vo] = ACTIONS(200),
    [anon_sym_vo] = ACTIONS(200),
    [anon_sym_Performer] = ACTIONS(200),
    [anon_sym_performer] = ACTIONS(200),
    [anon_sym_Illustration] = ACTIONS(200),
    [anon_sym_illustration] = ACTIONS(200),
    [anon_sym_Illust] = ACTIONS(200),
    [anon_sym_illust] = ACTIONS(200),
    [anon_sym_Label] = ACTIONS(200),
    [anon_sym_label] = ACTIONS(200),
    [anon_sym_Circle] = ACTIONS(200),
    [anon_sym_circle] = ACTIONS(200),
    [anon_sym_Producer] = ACTIONS(200),
    [anon_sym_producer] = ACTIONS(200),
    [anon_sym_Recording] = ACTIONS(200),
    [anon_sym_recording] = ACTIONS(200),
    [anon_sym_GuestVocal] = ACTIONS(200),
    [anon_sym_Guestvocal] = ACTIONS(200),
    [anon_sym_guestvocal] = ACTIONS(200),
    [anon_sym_Chorus] = ACTIONS(200),
    [anon_sym_chorus] = ACTIONS(200),
    [anon_sym_Mixing] = ACTIONS(200),
    [anon_sym_mixing] = ACTIONS(200),
    [anon_sym_Mastering] = ACTIONS(200),
    [anon_sym_mastering] = ACTIONS(200),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(200),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(200),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(200),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(200),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(200),
    [anon_sym_u6b4cu5531] = ACTIONS(200),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(200),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(200),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(200),
    [anon_sym_u4f5cu66f2] = ACTIONS(200),
    [anon_sym_u7de8u66f2] = ACTIONS(200),
    [anon_sym_u7f16u66f2] = ACTIONS(200),
    [anon_sym_u4f5cu8a5e] = ACTIONS(200),
    [anon_sym_u4f5cu8bcd] = ACTIONS(200),
    [anon_sym_u5382u724c] = ACTIONS(200),
    [anon_sym_u811au672c] = ACTIONS(200),
    [anon_sym_u63d2u56fe] = ACTIONS(200),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(200),
    [anon_sym_u51fau7248u65b9] = ACTIONS(200),
    [anon_sym_u5f55u97f3] = ACTIONS(200),
    [anon_sym_u539fu4f5c] = ACTIONS(200),
    [anon_sym_u58f0u4e50] = ACTIONS(200),
    [anon_sym_u4e50u5668] = ACTIONS(200),
    [anon_sym_u6df7u97f3] = ACTIONS(200),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(200),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_DISC] = ACTIONS(124),
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_u300a] = ACTIONS(188),
    [aux_sym_song_title_token1] = ACTIONS(188),
    [anon_sym_Music] = ACTIONS(188),
    [anon_sym_music] = ACTIONS(188),
    [anon_sym_Composition] = ACTIONS(188),
    [anon_sym_composition] = ACTIONS(188),
    [anon_sym_Composer] = ACTIONS(188),
    [anon_sym_composer] = ACTIONS(188),
    [anon_sym_Compose] = ACTIONS(188),
    [anon_sym_compose] = ACTIONS(188),
    [anon_sym_Lyrics] = ACTIONS(188),
    [anon_sym_lyrics] = ACTIONS(188),
    [anon_sym_Lyricist] = ACTIONS(188),
    [anon_sym_lyricist] = ACTIONS(188),
    [anon_sym_Lyric] = ACTIONS(188),
    [anon_sym_lyric] = ACTIONS(188),
    [anon_sym_Arrangement] = ACTIONS(188),
    [anon_sym_arrangement] = ACTIONS(188),
    [anon_sym_Arranger] = ACTIONS(188),
    [anon_sym_arranger] = ACTIONS(188),
    [anon_sym_Arrange] = ACTIONS(188),
    [anon_sym_arrange] = ACTIONS(188),
    [anon_sym_Vocal] = ACTIONS(188),
    [anon_sym_vocal] = ACTIONS(188),
    [anon_sym_Vo] = ACTIONS(188),
    [anon_sym_vo] = ACTIONS(188),
    [anon_sym_Performer] = ACTIONS(188),
    [anon_sym_performer] = ACTIONS(188),
    [anon_sym_Illustration] = ACTIONS(188),
    [anon_sym_illustration] = ACTIONS(188),
    [anon_sym_Illust] = ACTIONS(188),
    [anon_sym_illust] = ACTIONS(188),
    [anon_sym_Label] = ACTIONS(188),
    [anon_sym_label] = ACTIONS(188),
    [anon_sym_Circle] = ACTIONS(188),
    [anon_sym_circle] = ACTIONS(188),
    [anon_sym_Producer] = ACTIONS(188),
    [anon_sym_producer] = ACTIONS(188),
    [anon_sym_Recording] = ACTIONS(188),
    [anon_sym_recording] = ACTIONS(188),
    [anon_sym_GuestVocal] = ACTIONS(188),
    [anon_sym_Guestvocal] = ACTIONS(188),
    [anon_sym_guestvocal] = ACTIONS(188),
    [anon_sym_Chorus] = ACTIONS(188),
    [anon_sym_chorus] = ACTIONS(188),
    [anon_sym_Mixing] = ACTIONS(188),
    [anon_sym_mixing] = ACTIONS(188),
    [anon_sym_Mastering] = ACTIONS(188),
    [anon_sym_mastering] = ACTIONS(188),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(188),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(188),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(188),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(188),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(188),
    [anon_sym_u6b4cu5531] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu66f2] = ACTIONS(188),
    [anon_sym_u7de8u66f2] = ACTIONS(188),
    [anon_sym_u7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5e] = ACTIONS(188),
    [anon_sym_u4f5cu8bcd] = ACTIONS(188),
    [anon_sym_u5382u724c] = ACTIONS(188),
    [anon_sym_u811au672c] = ACTIONS(188),
    [anon_sym_u63d2u56fe] = ACTIONS(188),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(188),
    [anon_sym_u51fau7248u65b9] = ACTIONS(188),
    [anon_sym_u5f55u97f3] = ACTIONS(188),
    [anon_sym_u539fu4f5c] = ACTIONS(188),
    [anon_sym_u58f0u4e50] = ACTIONS(188),
    [anon_sym_u4e50u5668] = ACTIONS(188),
    [anon_sym_u6df7u97f3] = ACTIONS(188),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(188),
    [sym__sep] = ACTIONS(203),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_u300a] = ACTIONS(178),
    [aux_sym_song_title_token1] = ACTIONS(178),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(178),
    [anon_sym_compose] = ACTIONS(178),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(178),
    [anon_sym_lyric] = ACTIONS(178),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(178),
    [anon_sym_arrange] = ACTIONS(178),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(178),
    [anon_sym_vo] = ACTIONS(178),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(178),
    [anon_sym_illust] = ACTIONS(178),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_GuestVocal] = ACTIONS(178),
    [anon_sym_Guestvocal] = ACTIONS(178),
    [anon_sym_guestvocal] = ACTIONS(178),
    [anon_sym_Chorus] = ACTIONS(178),
    [anon_sym_chorus] = ACTIONS(178),
    [anon_sym_Mixing] = ACTIONS(178),
    [anon_sym_mixing] = ACTIONS(178),
    [anon_sym_Mastering] = ACTIONS(178),
    [anon_sym_mastering] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(178),
    [anon_sym_u4f5cu8bcd] = ACTIONS(178),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
    [anon_sym_u58f0u4e50] = ACTIONS(178),
    [anon_sym_u4e50u5668] = ACTIONS(178),
    [anon_sym_u6df7u97f3] = ACTIONS(178),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(178),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_DISC] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [aux_sym_song_title_token1] = ACTIONS(207),
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
    [anon_sym_GuestVocal] = ACTIONS(207),
    [anon_sym_Guestvocal] = ACTIONS(207),
    [anon_sym_guestvocal] = ACTIONS(207),
    [anon_sym_Chorus] = ACTIONS(207),
    [anon_sym_chorus] = ACTIONS(207),
    [anon_sym_Mixing] = ACTIONS(207),
    [anon_sym_mixing] = ACTIONS(207),
    [anon_sym_Mastering] = ACTIONS(207),
    [anon_sym_mastering] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u4f5cu8bcd] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
    [anon_sym_u58f0u4e50] = ACTIONS(207),
    [anon_sym_u4e50u5668] = ACTIONS(207),
    [anon_sym_u6df7u97f3] = ACTIONS(207),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(207),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_u300a] = ACTIONS(178),
    [aux_sym_song_title_token1] = ACTIONS(178),
    [anon_sym_Music] = ACTIONS(178),
    [anon_sym_music] = ACTIONS(178),
    [anon_sym_Composition] = ACTIONS(178),
    [anon_sym_composition] = ACTIONS(178),
    [anon_sym_Composer] = ACTIONS(178),
    [anon_sym_composer] = ACTIONS(178),
    [anon_sym_Compose] = ACTIONS(178),
    [anon_sym_compose] = ACTIONS(178),
    [anon_sym_Lyrics] = ACTIONS(178),
    [anon_sym_lyrics] = ACTIONS(178),
    [anon_sym_Lyricist] = ACTIONS(178),
    [anon_sym_lyricist] = ACTIONS(178),
    [anon_sym_Lyric] = ACTIONS(178),
    [anon_sym_lyric] = ACTIONS(178),
    [anon_sym_Arrangement] = ACTIONS(178),
    [anon_sym_arrangement] = ACTIONS(178),
    [anon_sym_Arranger] = ACTIONS(178),
    [anon_sym_arranger] = ACTIONS(178),
    [anon_sym_Arrange] = ACTIONS(178),
    [anon_sym_arrange] = ACTIONS(178),
    [anon_sym_Vocal] = ACTIONS(178),
    [anon_sym_vocal] = ACTIONS(178),
    [anon_sym_Vo] = ACTIONS(178),
    [anon_sym_vo] = ACTIONS(178),
    [anon_sym_Performer] = ACTIONS(178),
    [anon_sym_performer] = ACTIONS(178),
    [anon_sym_Illustration] = ACTIONS(178),
    [anon_sym_illustration] = ACTIONS(178),
    [anon_sym_Illust] = ACTIONS(178),
    [anon_sym_illust] = ACTIONS(178),
    [anon_sym_Label] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_Circle] = ACTIONS(178),
    [anon_sym_circle] = ACTIONS(178),
    [anon_sym_Producer] = ACTIONS(178),
    [anon_sym_producer] = ACTIONS(178),
    [anon_sym_Recording] = ACTIONS(178),
    [anon_sym_recording] = ACTIONS(178),
    [anon_sym_GuestVocal] = ACTIONS(178),
    [anon_sym_Guestvocal] = ACTIONS(178),
    [anon_sym_guestvocal] = ACTIONS(178),
    [anon_sym_Chorus] = ACTIONS(178),
    [anon_sym_chorus] = ACTIONS(178),
    [anon_sym_Mixing] = ACTIONS(178),
    [anon_sym_mixing] = ACTIONS(178),
    [anon_sym_Mastering] = ACTIONS(178),
    [anon_sym_mastering] = ACTIONS(178),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(178),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(178),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(178),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(178),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(178),
    [anon_sym_u6b4cu5531] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu66f2] = ACTIONS(178),
    [anon_sym_u7de8u66f2] = ACTIONS(178),
    [anon_sym_u7f16u66f2] = ACTIONS(178),
    [anon_sym_u4f5cu8a5e] = ACTIONS(178),
    [anon_sym_u4f5cu8bcd] = ACTIONS(178),
    [anon_sym_u5382u724c] = ACTIONS(178),
    [anon_sym_u811au672c] = ACTIONS(178),
    [anon_sym_u63d2u56fe] = ACTIONS(178),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(178),
    [anon_sym_u51fau7248u65b9] = ACTIONS(178),
    [anon_sym_u5f55u97f3] = ACTIONS(178),
    [anon_sym_u539fu4f5c] = ACTIONS(178),
    [anon_sym_u58f0u4e50] = ACTIONS(178),
    [anon_sym_u4e50u5668] = ACTIONS(178),
    [anon_sym_u6df7u97f3] = ACTIONS(178),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(178),
  },
  [65] = {
    [anon_sym_DISC] = ACTIONS(194),
    [anon_sym_u300a] = ACTIONS(194),
    [aux_sym_song_title_token1] = ACTIONS(194),
    [anon_sym_Music] = ACTIONS(194),
    [anon_sym_music] = ACTIONS(194),
    [anon_sym_Composition] = ACTIONS(194),
    [anon_sym_composition] = ACTIONS(194),
    [anon_sym_Composer] = ACTIONS(194),
    [anon_sym_composer] = ACTIONS(194),
    [anon_sym_Compose] = ACTIONS(194),
    [anon_sym_compose] = ACTIONS(194),
    [anon_sym_Lyrics] = ACTIONS(194),
    [anon_sym_lyrics] = ACTIONS(194),
    [anon_sym_Lyricist] = ACTIONS(194),
    [anon_sym_lyricist] = ACTIONS(194),
    [anon_sym_Lyric] = ACTIONS(194),
    [anon_sym_lyric] = ACTIONS(194),
    [anon_sym_Arrangement] = ACTIONS(194),
    [anon_sym_arrangement] = ACTIONS(194),
    [anon_sym_Arranger] = ACTIONS(194),
    [anon_sym_arranger] = ACTIONS(194),
    [anon_sym_Arrange] = ACTIONS(194),
    [anon_sym_arrange] = ACTIONS(194),
    [anon_sym_Vocal] = ACTIONS(194),
    [anon_sym_vocal] = ACTIONS(194),
    [anon_sym_Vo] = ACTIONS(194),
    [anon_sym_vo] = ACTIONS(194),
    [anon_sym_Performer] = ACTIONS(194),
    [anon_sym_performer] = ACTIONS(194),
    [anon_sym_Illustration] = ACTIONS(194),
    [anon_sym_illustration] = ACTIONS(194),
    [anon_sym_Illust] = ACTIONS(194),
    [anon_sym_illust] = ACTIONS(194),
    [anon_sym_Label] = ACTIONS(194),
    [anon_sym_label] = ACTIONS(194),
    [anon_sym_Circle] = ACTIONS(194),
    [anon_sym_circle] = ACTIONS(194),
    [anon_sym_Producer] = ACTIONS(194),
    [anon_sym_producer] = ACTIONS(194),
    [anon_sym_Recording] = ACTIONS(194),
    [anon_sym_recording] = ACTIONS(194),
    [anon_sym_GuestVocal] = ACTIONS(194),
    [anon_sym_Guestvocal] = ACTIONS(194),
    [anon_sym_guestvocal] = ACTIONS(194),
    [anon_sym_Chorus] = ACTIONS(194),
    [anon_sym_chorus] = ACTIONS(194),
    [anon_sym_Mixing] = ACTIONS(194),
    [anon_sym_mixing] = ACTIONS(194),
    [anon_sym_Mastering] = ACTIONS(194),
    [anon_sym_mastering] = ACTIONS(194),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(194),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(194),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(194),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(194),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(194),
    [anon_sym_u6b4cu5531] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu66f2] = ACTIONS(194),
    [anon_sym_u7de8u66f2] = ACTIONS(194),
    [anon_sym_u7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5e] = ACTIONS(194),
    [anon_sym_u4f5cu8bcd] = ACTIONS(194),
    [anon_sym_u5382u724c] = ACTIONS(194),
    [anon_sym_u811au672c] = ACTIONS(194),
    [anon_sym_u63d2u56fe] = ACTIONS(194),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(194),
    [anon_sym_u51fau7248u65b9] = ACTIONS(194),
    [anon_sym_u5f55u97f3] = ACTIONS(194),
    [anon_sym_u539fu4f5c] = ACTIONS(194),
    [anon_sym_u58f0u4e50] = ACTIONS(194),
    [anon_sym_u4e50u5668] = ACTIONS(194),
    [anon_sym_u6df7u97f3] = ACTIONS(194),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(194),
    [sym__sep] = ACTIONS(209),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_u300a] = ACTIONS(194),
    [aux_sym_song_title_token1] = ACTIONS(194),
    [anon_sym_Music] = ACTIONS(194),
    [anon_sym_music] = ACTIONS(194),
    [anon_sym_Composition] = ACTIONS(194),
    [anon_sym_composition] = ACTIONS(194),
    [anon_sym_Composer] = ACTIONS(194),
    [anon_sym_composer] = ACTIONS(194),
    [anon_sym_Compose] = ACTIONS(194),
    [anon_sym_compose] = ACTIONS(194),
    [anon_sym_Lyrics] = ACTIONS(194),
    [anon_sym_lyrics] = ACTIONS(194),
    [anon_sym_Lyricist] = ACTIONS(194),
    [anon_sym_lyricist] = ACTIONS(194),
    [anon_sym_Lyric] = ACTIONS(194),
    [anon_sym_lyric] = ACTIONS(194),
    [anon_sym_Arrangement] = ACTIONS(194),
    [anon_sym_arrangement] = ACTIONS(194),
    [anon_sym_Arranger] = ACTIONS(194),
    [anon_sym_arranger] = ACTIONS(194),
    [anon_sym_Arrange] = ACTIONS(194),
    [anon_sym_arrange] = ACTIONS(194),
    [anon_sym_Vocal] = ACTIONS(194),
    [anon_sym_vocal] = ACTIONS(194),
    [anon_sym_Vo] = ACTIONS(194),
    [anon_sym_vo] = ACTIONS(194),
    [anon_sym_Performer] = ACTIONS(194),
    [anon_sym_performer] = ACTIONS(194),
    [anon_sym_Illustration] = ACTIONS(194),
    [anon_sym_illustration] = ACTIONS(194),
    [anon_sym_Illust] = ACTIONS(194),
    [anon_sym_illust] = ACTIONS(194),
    [anon_sym_Label] = ACTIONS(194),
    [anon_sym_label] = ACTIONS(194),
    [anon_sym_Circle] = ACTIONS(194),
    [anon_sym_circle] = ACTIONS(194),
    [anon_sym_Producer] = ACTIONS(194),
    [anon_sym_producer] = ACTIONS(194),
    [anon_sym_Recording] = ACTIONS(194),
    [anon_sym_recording] = ACTIONS(194),
    [anon_sym_GuestVocal] = ACTIONS(194),
    [anon_sym_Guestvocal] = ACTIONS(194),
    [anon_sym_guestvocal] = ACTIONS(194),
    [anon_sym_Chorus] = ACTIONS(194),
    [anon_sym_chorus] = ACTIONS(194),
    [anon_sym_Mixing] = ACTIONS(194),
    [anon_sym_mixing] = ACTIONS(194),
    [anon_sym_Mastering] = ACTIONS(194),
    [anon_sym_mastering] = ACTIONS(194),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(194),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(194),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(194),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(194),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(194),
    [anon_sym_u6b4cu5531] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu66f2] = ACTIONS(194),
    [anon_sym_u7de8u66f2] = ACTIONS(194),
    [anon_sym_u7f16u66f2] = ACTIONS(194),
    [anon_sym_u4f5cu8a5e] = ACTIONS(194),
    [anon_sym_u4f5cu8bcd] = ACTIONS(194),
    [anon_sym_u5382u724c] = ACTIONS(194),
    [anon_sym_u811au672c] = ACTIONS(194),
    [anon_sym_u63d2u56fe] = ACTIONS(194),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(194),
    [anon_sym_u51fau7248u65b9] = ACTIONS(194),
    [anon_sym_u5f55u97f3] = ACTIONS(194),
    [anon_sym_u539fu4f5c] = ACTIONS(194),
    [anon_sym_u58f0u4e50] = ACTIONS(194),
    [anon_sym_u4e50u5668] = ACTIONS(194),
    [anon_sym_u6df7u97f3] = ACTIONS(194),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(194),
    [sym__sep] = ACTIONS(211),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DISC] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [aux_sym_song_title_token1] = ACTIONS(215),
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
    [anon_sym_GuestVocal] = ACTIONS(215),
    [anon_sym_Guestvocal] = ACTIONS(215),
    [anon_sym_guestvocal] = ACTIONS(215),
    [anon_sym_Chorus] = ACTIONS(215),
    [anon_sym_chorus] = ACTIONS(215),
    [anon_sym_Mixing] = ACTIONS(215),
    [anon_sym_mixing] = ACTIONS(215),
    [anon_sym_Mastering] = ACTIONS(215),
    [anon_sym_mastering] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u4f5cu8bcd] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
    [anon_sym_u58f0u4e50] = ACTIONS(215),
    [anon_sym_u4e50u5668] = ACTIONS(215),
    [anon_sym_u6df7u97f3] = ACTIONS(215),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(215),
  },
  [68] = {
    [anon_sym_DISC] = ACTIONS(188),
    [anon_sym_u300a] = ACTIONS(188),
    [aux_sym_song_title_token1] = ACTIONS(188),
    [anon_sym_Music] = ACTIONS(188),
    [anon_sym_music] = ACTIONS(188),
    [anon_sym_Composition] = ACTIONS(188),
    [anon_sym_composition] = ACTIONS(188),
    [anon_sym_Composer] = ACTIONS(188),
    [anon_sym_composer] = ACTIONS(188),
    [anon_sym_Compose] = ACTIONS(188),
    [anon_sym_compose] = ACTIONS(188),
    [anon_sym_Lyrics] = ACTIONS(188),
    [anon_sym_lyrics] = ACTIONS(188),
    [anon_sym_Lyricist] = ACTIONS(188),
    [anon_sym_lyricist] = ACTIONS(188),
    [anon_sym_Lyric] = ACTIONS(188),
    [anon_sym_lyric] = ACTIONS(188),
    [anon_sym_Arrangement] = ACTIONS(188),
    [anon_sym_arrangement] = ACTIONS(188),
    [anon_sym_Arranger] = ACTIONS(188),
    [anon_sym_arranger] = ACTIONS(188),
    [anon_sym_Arrange] = ACTIONS(188),
    [anon_sym_arrange] = ACTIONS(188),
    [anon_sym_Vocal] = ACTIONS(188),
    [anon_sym_vocal] = ACTIONS(188),
    [anon_sym_Vo] = ACTIONS(188),
    [anon_sym_vo] = ACTIONS(188),
    [anon_sym_Performer] = ACTIONS(188),
    [anon_sym_performer] = ACTIONS(188),
    [anon_sym_Illustration] = ACTIONS(188),
    [anon_sym_illustration] = ACTIONS(188),
    [anon_sym_Illust] = ACTIONS(188),
    [anon_sym_illust] = ACTIONS(188),
    [anon_sym_Label] = ACTIONS(188),
    [anon_sym_label] = ACTIONS(188),
    [anon_sym_Circle] = ACTIONS(188),
    [anon_sym_circle] = ACTIONS(188),
    [anon_sym_Producer] = ACTIONS(188),
    [anon_sym_producer] = ACTIONS(188),
    [anon_sym_Recording] = ACTIONS(188),
    [anon_sym_recording] = ACTIONS(188),
    [anon_sym_GuestVocal] = ACTIONS(188),
    [anon_sym_Guestvocal] = ACTIONS(188),
    [anon_sym_guestvocal] = ACTIONS(188),
    [anon_sym_Chorus] = ACTIONS(188),
    [anon_sym_chorus] = ACTIONS(188),
    [anon_sym_Mixing] = ACTIONS(188),
    [anon_sym_mixing] = ACTIONS(188),
    [anon_sym_Mastering] = ACTIONS(188),
    [anon_sym_mastering] = ACTIONS(188),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(188),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(188),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(188),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(188),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(188),
    [anon_sym_u6b4cu5531] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu66f2] = ACTIONS(188),
    [anon_sym_u7de8u66f2] = ACTIONS(188),
    [anon_sym_u7f16u66f2] = ACTIONS(188),
    [anon_sym_u4f5cu8a5e] = ACTIONS(188),
    [anon_sym_u4f5cu8bcd] = ACTIONS(188),
    [anon_sym_u5382u724c] = ACTIONS(188),
    [anon_sym_u811au672c] = ACTIONS(188),
    [anon_sym_u63d2u56fe] = ACTIONS(188),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(188),
    [anon_sym_u51fau7248u65b9] = ACTIONS(188),
    [anon_sym_u5f55u97f3] = ACTIONS(188),
    [anon_sym_u539fu4f5c] = ACTIONS(188),
    [anon_sym_u58f0u4e50] = ACTIONS(188),
    [anon_sym_u4e50u5668] = ACTIONS(188),
    [anon_sym_u6df7u97f3] = ACTIONS(188),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(188),
    [sym__sep] = ACTIONS(217),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_u300a] = ACTIONS(148),
    [aux_sym_song_title_token1] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(148),
    [anon_sym_music] = ACTIONS(148),
    [anon_sym_Composition] = ACTIONS(148),
    [anon_sym_composition] = ACTIONS(148),
    [anon_sym_Composer] = ACTIONS(148),
    [anon_sym_composer] = ACTIONS(148),
    [anon_sym_Compose] = ACTIONS(148),
    [anon_sym_compose] = ACTIONS(148),
    [anon_sym_Lyrics] = ACTIONS(148),
    [anon_sym_lyrics] = ACTIONS(148),
    [anon_sym_Lyricist] = ACTIONS(148),
    [anon_sym_lyricist] = ACTIONS(148),
    [anon_sym_Lyric] = ACTIONS(148),
    [anon_sym_lyric] = ACTIONS(148),
    [anon_sym_Arrangement] = ACTIONS(148),
    [anon_sym_arrangement] = ACTIONS(148),
    [anon_sym_Arranger] = ACTIONS(148),
    [anon_sym_arranger] = ACTIONS(148),
    [anon_sym_Arrange] = ACTIONS(148),
    [anon_sym_arrange] = ACTIONS(148),
    [anon_sym_Vocal] = ACTIONS(148),
    [anon_sym_vocal] = ACTIONS(148),
    [anon_sym_Vo] = ACTIONS(148),
    [anon_sym_vo] = ACTIONS(148),
    [anon_sym_Performer] = ACTIONS(148),
    [anon_sym_performer] = ACTIONS(148),
    [anon_sym_Illustration] = ACTIONS(148),
    [anon_sym_illustration] = ACTIONS(148),
    [anon_sym_Illust] = ACTIONS(148),
    [anon_sym_illust] = ACTIONS(148),
    [anon_sym_Label] = ACTIONS(148),
    [anon_sym_label] = ACTIONS(148),
    [anon_sym_Circle] = ACTIONS(148),
    [anon_sym_circle] = ACTIONS(148),
    [anon_sym_Producer] = ACTIONS(148),
    [anon_sym_producer] = ACTIONS(148),
    [anon_sym_Recording] = ACTIONS(148),
    [anon_sym_recording] = ACTIONS(148),
    [anon_sym_GuestVocal] = ACTIONS(148),
    [anon_sym_Guestvocal] = ACTIONS(148),
    [anon_sym_guestvocal] = ACTIONS(148),
    [anon_sym_Chorus] = ACTIONS(148),
    [anon_sym_chorus] = ACTIONS(148),
    [anon_sym_Mixing] = ACTIONS(148),
    [anon_sym_mixing] = ACTIONS(148),
    [anon_sym_Mastering] = ACTIONS(148),
    [anon_sym_mastering] = ACTIONS(148),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(148),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(148),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(148),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(148),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(148),
    [anon_sym_u6b4cu5531] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu66f2] = ACTIONS(148),
    [anon_sym_u7de8u66f2] = ACTIONS(148),
    [anon_sym_u7f16u66f2] = ACTIONS(148),
    [anon_sym_u4f5cu8a5e] = ACTIONS(148),
    [anon_sym_u4f5cu8bcd] = ACTIONS(148),
    [anon_sym_u5382u724c] = ACTIONS(148),
    [anon_sym_u811au672c] = ACTIONS(148),
    [anon_sym_u63d2u56fe] = ACTIONS(148),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(148),
    [anon_sym_u51fau7248u65b9] = ACTIONS(148),
    [anon_sym_u5f55u97f3] = ACTIONS(148),
    [anon_sym_u539fu4f5c] = ACTIONS(148),
    [anon_sym_u58f0u4e50] = ACTIONS(148),
    [anon_sym_u4e50u5668] = ACTIONS(148),
    [anon_sym_u6df7u97f3] = ACTIONS(148),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(148),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_DISC] = ACTIONS(142),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_u300a] = ACTIONS(184),
    [aux_sym_song_title_token1] = ACTIONS(184),
    [anon_sym_Music] = ACTIONS(184),
    [anon_sym_music] = ACTIONS(184),
    [anon_sym_Composition] = ACTIONS(184),
    [anon_sym_composition] = ACTIONS(184),
    [anon_sym_Composer] = ACTIONS(184),
    [anon_sym_composer] = ACTIONS(184),
    [anon_sym_Compose] = ACTIONS(184),
    [anon_sym_compose] = ACTIONS(184),
    [anon_sym_Lyrics] = ACTIONS(184),
    [anon_sym_lyrics] = ACTIONS(184),
    [anon_sym_Lyricist] = ACTIONS(184),
    [anon_sym_lyricist] = ACTIONS(184),
    [anon_sym_Lyric] = ACTIONS(184),
    [anon_sym_lyric] = ACTIONS(184),
    [anon_sym_Arrangement] = ACTIONS(184),
    [anon_sym_arrangement] = ACTIONS(184),
    [anon_sym_Arranger] = ACTIONS(184),
    [anon_sym_arranger] = ACTIONS(184),
    [anon_sym_Arrange] = ACTIONS(184),
    [anon_sym_arrange] = ACTIONS(184),
    [anon_sym_Vocal] = ACTIONS(184),
    [anon_sym_vocal] = ACTIONS(184),
    [anon_sym_Vo] = ACTIONS(184),
    [anon_sym_vo] = ACTIONS(184),
    [anon_sym_Performer] = ACTIONS(184),
    [anon_sym_performer] = ACTIONS(184),
    [anon_sym_Illustration] = ACTIONS(184),
    [anon_sym_illustration] = ACTIONS(184),
    [anon_sym_Illust] = ACTIONS(184),
    [anon_sym_illust] = ACTIONS(184),
    [anon_sym_Label] = ACTIONS(184),
    [anon_sym_label] = ACTIONS(184),
    [anon_sym_Circle] = ACTIONS(184),
    [anon_sym_circle] = ACTIONS(184),
    [anon_sym_Producer] = ACTIONS(184),
    [anon_sym_producer] = ACTIONS(184),
    [anon_sym_Recording] = ACTIONS(184),
    [anon_sym_recording] = ACTIONS(184),
    [anon_sym_GuestVocal] = ACTIONS(184),
    [anon_sym_Guestvocal] = ACTIONS(184),
    [anon_sym_guestvocal] = ACTIONS(184),
    [anon_sym_Chorus] = ACTIONS(184),
    [anon_sym_chorus] = ACTIONS(184),
    [anon_sym_Mixing] = ACTIONS(184),
    [anon_sym_mixing] = ACTIONS(184),
    [anon_sym_Mastering] = ACTIONS(184),
    [anon_sym_mastering] = ACTIONS(184),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(184),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(184),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(184),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(184),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(184),
    [anon_sym_u6b4cu5531] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu66f2] = ACTIONS(184),
    [anon_sym_u7de8u66f2] = ACTIONS(184),
    [anon_sym_u7f16u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5e] = ACTIONS(184),
    [anon_sym_u4f5cu8bcd] = ACTIONS(184),
    [anon_sym_u5382u724c] = ACTIONS(184),
    [anon_sym_u811au672c] = ACTIONS(184),
    [anon_sym_u63d2u56fe] = ACTIONS(184),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(184),
    [anon_sym_u51fau7248u65b9] = ACTIONS(184),
    [anon_sym_u5f55u97f3] = ACTIONS(184),
    [anon_sym_u539fu4f5c] = ACTIONS(184),
    [anon_sym_u58f0u4e50] = ACTIONS(184),
    [anon_sym_u4e50u5668] = ACTIONS(184),
    [anon_sym_u6df7u97f3] = ACTIONS(184),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(184),
  },
  [72] = {
    [anon_sym_DISC] = ACTIONS(124),
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [73] = {
    [anon_sym_DISC] = ACTIONS(207),
    [anon_sym_u300a] = ACTIONS(207),
    [aux_sym_song_title_token1] = ACTIONS(207),
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
    [anon_sym_GuestVocal] = ACTIONS(207),
    [anon_sym_Guestvocal] = ACTIONS(207),
    [anon_sym_guestvocal] = ACTIONS(207),
    [anon_sym_Chorus] = ACTIONS(207),
    [anon_sym_chorus] = ACTIONS(207),
    [anon_sym_Mixing] = ACTIONS(207),
    [anon_sym_mixing] = ACTIONS(207),
    [anon_sym_Mastering] = ACTIONS(207),
    [anon_sym_mastering] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u4f5cu8bcd] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
    [anon_sym_u58f0u4e50] = ACTIONS(207),
    [anon_sym_u4e50u5668] = ACTIONS(207),
    [anon_sym_u6df7u97f3] = ACTIONS(207),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(207),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_u300a] = ACTIONS(207),
    [aux_sym_song_title_token1] = ACTIONS(207),
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
    [anon_sym_GuestVocal] = ACTIONS(207),
    [anon_sym_Guestvocal] = ACTIONS(207),
    [anon_sym_guestvocal] = ACTIONS(207),
    [anon_sym_Chorus] = ACTIONS(207),
    [anon_sym_chorus] = ACTIONS(207),
    [anon_sym_Mixing] = ACTIONS(207),
    [anon_sym_mixing] = ACTIONS(207),
    [anon_sym_Mastering] = ACTIONS(207),
    [anon_sym_mastering] = ACTIONS(207),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(207),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(207),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(207),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(207),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(207),
    [anon_sym_u6b4cu5531] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu66f2] = ACTIONS(207),
    [anon_sym_u7de8u66f2] = ACTIONS(207),
    [anon_sym_u7f16u66f2] = ACTIONS(207),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u4f5cu8bcd] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(207),
    [anon_sym_u811au672c] = ACTIONS(207),
    [anon_sym_u63d2u56fe] = ACTIONS(207),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(207),
    [anon_sym_u51fau7248u65b9] = ACTIONS(207),
    [anon_sym_u5f55u97f3] = ACTIONS(207),
    [anon_sym_u539fu4f5c] = ACTIONS(207),
    [anon_sym_u58f0u4e50] = ACTIONS(207),
    [anon_sym_u4e50u5668] = ACTIONS(207),
    [anon_sym_u6df7u97f3] = ACTIONS(207),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(207),
  },
  [75] = {
    [anon_sym_DISC] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [aux_sym_song_title_token1] = ACTIONS(215),
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
    [anon_sym_GuestVocal] = ACTIONS(215),
    [anon_sym_Guestvocal] = ACTIONS(215),
    [anon_sym_guestvocal] = ACTIONS(215),
    [anon_sym_Chorus] = ACTIONS(215),
    [anon_sym_chorus] = ACTIONS(215),
    [anon_sym_Mixing] = ACTIONS(215),
    [anon_sym_mixing] = ACTIONS(215),
    [anon_sym_Mastering] = ACTIONS(215),
    [anon_sym_mastering] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u4f5cu8bcd] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
    [anon_sym_u58f0u4e50] = ACTIONS(215),
    [anon_sym_u4e50u5668] = ACTIONS(215),
    [anon_sym_u6df7u97f3] = ACTIONS(215),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(215),
  },
  [76] = {
    [anon_sym_DISC] = ACTIONS(142),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_u300a] = ACTIONS(215),
    [aux_sym_song_title_token1] = ACTIONS(215),
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
    [anon_sym_GuestVocal] = ACTIONS(215),
    [anon_sym_Guestvocal] = ACTIONS(215),
    [anon_sym_guestvocal] = ACTIONS(215),
    [anon_sym_Chorus] = ACTIONS(215),
    [anon_sym_chorus] = ACTIONS(215),
    [anon_sym_Mixing] = ACTIONS(215),
    [anon_sym_mixing] = ACTIONS(215),
    [anon_sym_Mastering] = ACTIONS(215),
    [anon_sym_mastering] = ACTIONS(215),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(215),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(215),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(215),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(215),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu66f2] = ACTIONS(215),
    [anon_sym_u7de8u66f2] = ACTIONS(215),
    [anon_sym_u7f16u66f2] = ACTIONS(215),
    [anon_sym_u4f5cu8a5e] = ACTIONS(215),
    [anon_sym_u4f5cu8bcd] = ACTIONS(215),
    [anon_sym_u5382u724c] = ACTIONS(215),
    [anon_sym_u811au672c] = ACTIONS(215),
    [anon_sym_u63d2u56fe] = ACTIONS(215),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(215),
    [anon_sym_u51fau7248u65b9] = ACTIONS(215),
    [anon_sym_u5f55u97f3] = ACTIONS(215),
    [anon_sym_u539fu4f5c] = ACTIONS(215),
    [anon_sym_u58f0u4e50] = ACTIONS(215),
    [anon_sym_u4e50u5668] = ACTIONS(215),
    [anon_sym_u6df7u97f3] = ACTIONS(215),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(215),
  },
  [78] = {
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
    [anon_sym_GuestVocal] = ACTIONS(124),
    [anon_sym_Guestvocal] = ACTIONS(124),
    [anon_sym_guestvocal] = ACTIONS(124),
    [anon_sym_Chorus] = ACTIONS(124),
    [anon_sym_chorus] = ACTIONS(124),
    [anon_sym_Mixing] = ACTIONS(124),
    [anon_sym_mixing] = ACTIONS(124),
    [anon_sym_Mastering] = ACTIONS(124),
    [anon_sym_mastering] = ACTIONS(124),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(124),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(124),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(124),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(124),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(124),
    [anon_sym_u6b4cu5531] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu66f2] = ACTIONS(124),
    [anon_sym_u7de8u66f2] = ACTIONS(124),
    [anon_sym_u7f16u66f2] = ACTIONS(124),
    [anon_sym_u4f5cu8a5e] = ACTIONS(124),
    [anon_sym_u4f5cu8bcd] = ACTIONS(124),
    [anon_sym_u5382u724c] = ACTIONS(124),
    [anon_sym_u811au672c] = ACTIONS(124),
    [anon_sym_u63d2u56fe] = ACTIONS(124),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(124),
    [anon_sym_u51fau7248u65b9] = ACTIONS(124),
    [anon_sym_u5f55u97f3] = ACTIONS(124),
    [anon_sym_u539fu4f5c] = ACTIONS(124),
    [anon_sym_u58f0u4e50] = ACTIONS(124),
    [anon_sym_u4e50u5668] = ACTIONS(124),
    [anon_sym_u6df7u97f3] = ACTIONS(124),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(124),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_u300a] = ACTIONS(142),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(142),
    [anon_sym_compose] = ACTIONS(142),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(142),
    [anon_sym_lyric] = ACTIONS(142),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(142),
    [anon_sym_arrange] = ACTIONS(142),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(142),
    [anon_sym_vo] = ACTIONS(142),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(142),
    [anon_sym_illust] = ACTIONS(142),
    [anon_sym_Label] = ACTIONS(142),
    [anon_sym_label] = ACTIONS(142),
    [anon_sym_Circle] = ACTIONS(142),
    [anon_sym_circle] = ACTIONS(142),
    [anon_sym_Producer] = ACTIONS(142),
    [anon_sym_producer] = ACTIONS(142),
    [anon_sym_Recording] = ACTIONS(142),
    [anon_sym_recording] = ACTIONS(142),
    [anon_sym_GuestVocal] = ACTIONS(142),
    [anon_sym_Guestvocal] = ACTIONS(142),
    [anon_sym_guestvocal] = ACTIONS(142),
    [anon_sym_Chorus] = ACTIONS(142),
    [anon_sym_chorus] = ACTIONS(142),
    [anon_sym_Mixing] = ACTIONS(142),
    [anon_sym_mixing] = ACTIONS(142),
    [anon_sym_Mastering] = ACTIONS(142),
    [anon_sym_mastering] = ACTIONS(142),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(142),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(142),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(142),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(142),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(142),
    [anon_sym_u6b4cu5531] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u7f16u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(142),
    [anon_sym_u4f5cu8bcd] = ACTIONS(142),
    [anon_sym_u5382u724c] = ACTIONS(142),
    [anon_sym_u811au672c] = ACTIONS(142),
    [anon_sym_u63d2u56fe] = ACTIONS(142),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(142),
    [anon_sym_u51fau7248u65b9] = ACTIONS(142),
    [anon_sym_u5f55u97f3] = ACTIONS(142),
    [anon_sym_u539fu4f5c] = ACTIONS(142),
    [anon_sym_u58f0u4e50] = ACTIONS(142),
    [anon_sym_u4e50u5668] = ACTIONS(142),
    [anon_sym_u6df7u97f3] = ACTIONS(142),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(142),
  },
  [80] = {
    [anon_sym_u300a] = ACTIONS(198),
    [sym_creator_name] = ACTIONS(198),
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
    [anon_sym_GuestVocal] = ACTIONS(198),
    [anon_sym_Guestvocal] = ACTIONS(198),
    [anon_sym_guestvocal] = ACTIONS(198),
    [anon_sym_Chorus] = ACTIONS(198),
    [anon_sym_chorus] = ACTIONS(198),
    [anon_sym_Mixing] = ACTIONS(198),
    [anon_sym_mixing] = ACTIONS(198),
    [anon_sym_Mastering] = ACTIONS(198),
    [anon_sym_mastering] = ACTIONS(198),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(198),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(198),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(198),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(198),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(198),
    [anon_sym_u6b4cu5531] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(198),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu66f2] = ACTIONS(198),
    [anon_sym_u7de8u66f2] = ACTIONS(198),
    [anon_sym_u7f16u66f2] = ACTIONS(198),
    [anon_sym_u4f5cu8a5e] = ACTIONS(198),
    [anon_sym_u4f5cu8bcd] = ACTIONS(198),
    [anon_sym_u5382u724c] = ACTIONS(198),
    [anon_sym_u811au672c] = ACTIONS(198),
    [anon_sym_u63d2u56fe] = ACTIONS(198),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(198),
    [anon_sym_u51fau7248u65b9] = ACTIONS(198),
    [anon_sym_u5f55u97f3] = ACTIONS(198),
    [anon_sym_u539fu4f5c] = ACTIONS(198),
    [anon_sym_u58f0u4e50] = ACTIONS(198),
    [anon_sym_u4e50u5668] = ACTIONS(198),
    [anon_sym_u6df7u97f3] = ACTIONS(198),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(198),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_DISC,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    STATE(8), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(16), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym_song_title,
    STATE(45), 1,
      sym__song_title_maybefeat,
    STATE(46), 1,
      sym__quotable_song_title_maybefeat,
    STATE(85), 2,
      aux_sym__disc,
      sym_song,
    STATE(94), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [33] = 10,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_DISC,
    ACTIONS(223), 1,
      anon_sym_u300a,
    ACTIONS(225), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(4), 1,
      sym_song_title,
    STATE(9), 1,
      aux_sym_song_title_repeat1,
    STATE(30), 1,
      sym__song_title_maybefeat,
    STATE(33), 1,
      sym__quotable_song_title_maybefeat,
    STATE(83), 2,
      aux_sym__disc,
      sym_song,
  [65] = 10,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_DISC,
    ACTIONS(231), 1,
      anon_sym_u300a,
    ACTIONS(234), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(4), 1,
      sym_song_title,
    STATE(9), 1,
      aux_sym_song_title_repeat1,
    STATE(30), 1,
      sym__song_title_maybefeat,
    STATE(33), 1,
      sym__quotable_song_title_maybefeat,
    STATE(83), 2,
      aux_sym__disc,
      sym_song,
  [97] = 9,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      anon_sym_u300a,
    ACTIONS(240), 1,
      aux_sym_song_title_token1,
    STATE(8), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(16), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym_song_title,
    STATE(45), 1,
      sym__song_title_maybefeat,
    STATE(46), 1,
      sym__quotable_song_title_maybefeat,
    STATE(84), 2,
      aux_sym__disc,
      sym_song,
  [126] = 9,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(16), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym_song_title,
    STATE(45), 1,
      sym__song_title_maybefeat,
    STATE(46), 1,
      sym__quotable_song_title_maybefeat,
    STATE(84), 2,
      aux_sym__disc,
      sym_song,
  [155] = 9,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(16), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym_song_title,
    STATE(45), 1,
      sym__song_title_maybefeat,
    STATE(46), 1,
      sym__quotable_song_title_maybefeat,
    STATE(84), 2,
      aux_sym__disc,
      sym_song,
  [184] = 8,
    ACTIONS(223), 1,
      anon_sym_u300a,
    ACTIONS(225), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(4), 1,
      sym_song_title,
    STATE(9), 1,
      aux_sym_song_title_repeat1,
    STATE(30), 1,
      sym__song_title_maybefeat,
    STATE(33), 1,
      sym__quotable_song_title_maybefeat,
    STATE(82), 2,
      aux_sym__disc,
      sym_song,
  [210] = 3,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      anon_sym_DISC,
    STATE(88), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [221] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [230] = 4,
    ACTIONS(65), 1,
      anon_sym_u300b,
    ACTIONS(256), 1,
      anon_sym_u300a,
    ACTIONS(258), 1,
      sym_creator_name,
    STATE(120), 1,
      sym__quotable_creator_name,
  [243] = 3,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      anon_sym_DISC,
    STATE(88), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [254] = 3,
    ACTIONS(262), 1,
      aux_sym_song_title_token1,
    STATE(96), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(53), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [265] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [274] = 3,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      anon_sym_DISC,
    STATE(88), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [285] = 4,
    ACTIONS(19), 1,
      anon_sym_u300b,
    ACTIONS(256), 1,
      anon_sym_u300a,
    ACTIONS(258), 1,
      sym_creator_name,
    STATE(120), 1,
      sym__quotable_creator_name,
  [298] = 3,
    ACTIONS(264), 1,
      aux_sym_song_title_token1,
    STATE(96), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(33), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [309] = 4,
    ACTIONS(267), 1,
      aux_sym_song_title_token1,
    STATE(92), 1,
      aux_sym_song_title_repeat1,
    STATE(117), 1,
      sym_song_title,
    STATE(133), 1,
      sym__song_title_maybefeat,
  [322] = 4,
    ACTIONS(267), 1,
      aux_sym_song_title_token1,
    STATE(92), 1,
      aux_sym_song_title_repeat1,
    STATE(117), 1,
      sym_song_title,
    STATE(127), 1,
      sym__song_title_maybefeat,
  [335] = 3,
    ACTIONS(59), 1,
      anon_sym_u300b,
    ACTIONS(269), 1,
      sym__ssep,
    STATE(110), 1,
      aux_sym_feat_field_repeat1,
  [345] = 3,
    ACTIONS(256), 1,
      anon_sym_u300a,
    ACTIONS(258), 1,
      sym_creator_name,
    STATE(120), 1,
      sym__quotable_creator_name,
  [355] = 3,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 1,
      sym__sep,
    STATE(111), 1,
      aux_sym_credit_field_repeat2,
  [365] = 3,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(277), 1,
      sym__sep,
    STATE(101), 1,
      aux_sym_credit_field_repeat2,
  [375] = 3,
    ACTIONS(21), 1,
      anon_sym_u300a,
    ACTIONS(279), 1,
      sym_creator_name,
    STATE(19), 1,
      sym__quotable_creator_name,
  [385] = 3,
    ACTIONS(82), 1,
      anon_sym_u300a,
    ACTIONS(281), 1,
      sym_creator_name,
    STATE(14), 1,
      sym__quotable_creator_name,
  [395] = 3,
    ACTIONS(256), 1,
      anon_sym_u300a,
    ACTIONS(258), 1,
      sym_creator_name,
    STATE(99), 1,
      sym__quotable_creator_name,
  [405] = 3,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 1,
      sym__sep,
    STATE(111), 1,
      aux_sym_credit_field_repeat2,
  [415] = 3,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      sym__sep,
    STATE(111), 1,
      aux_sym_credit_field_repeat2,
  [425] = 3,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      sym__sep,
    STATE(107), 1,
      aux_sym_credit_field_repeat2,
  [435] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [443] = 3,
    ACTIONS(69), 1,
      anon_sym_u300b,
    ACTIONS(295), 1,
      sym__ssep,
    STATE(118), 1,
      aux_sym_feat_field_repeat1,
  [453] = 3,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      sym__sep,
    STATE(111), 1,
      aux_sym_credit_field_repeat2,
  [463] = 3,
    ACTIONS(180), 1,
      anon_sym_u300a,
    ACTIONS(302), 1,
      sym_creator_name,
    STATE(119), 1,
      sym__quotable_creator_name,
  [473] = 3,
    ACTIONS(82), 1,
      anon_sym_u300a,
    ACTIONS(281), 1,
      sym_creator_name,
    STATE(29), 1,
      sym__quotable_creator_name,
  [483] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [491] = 3,
    ACTIONS(21), 1,
      anon_sym_u300a,
    ACTIONS(279), 1,
      sym_creator_name,
    STATE(10), 1,
      sym__quotable_creator_name,
  [501] = 3,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 1,
      sym__sep,
    STATE(106), 1,
      aux_sym_credit_field_repeat2,
  [511] = 3,
    ACTIONS(25), 1,
      anon_sym_u300b,
    ACTIONS(308), 1,
      aux_sym_feat_field_token1,
    STATE(135), 1,
      sym_feat_field,
  [521] = 3,
    ACTIONS(44), 1,
      anon_sym_u300b,
    ACTIONS(310), 1,
      sym__ssep,
    STATE(118), 1,
      aux_sym_feat_field_repeat1,
  [531] = 2,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      sym__sep,
  [538] = 2,
    ACTIONS(90), 1,
      sym__ssep,
    ACTIONS(92), 1,
      anon_sym_u300b,
  [545] = 2,
    ACTIONS(103), 1,
      sym__ssep,
    ACTIONS(105), 1,
      anon_sym_u300b,
  [552] = 2,
    ACTIONS(103), 1,
      sym__sep,
    ACTIONS(105), 1,
      anon_sym_LF,
  [559] = 2,
    ACTIONS(86), 1,
      sym__ssep,
    ACTIONS(88), 1,
      anon_sym_u300b,
  [566] = 2,
    ACTIONS(86), 1,
      sym__sep,
    ACTIONS(88), 1,
      anon_sym_LF,
  [573] = 1,
    ACTIONS(317), 1,
      anon_sym_LF,
  [577] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [581] = 1,
    ACTIONS(321), 1,
      anon_sym_u300b,
  [585] = 1,
    ACTIONS(323), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [589] = 1,
    ACTIONS(325), 1,
      anon_sym_u300b,
  [593] = 1,
    ACTIONS(327), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [597] = 1,
    ACTIONS(329), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [601] = 1,
    ACTIONS(331), 1,
      sym__sep,
  [605] = 1,
    ACTIONS(333), 1,
      anon_sym_u300b,
  [609] = 1,
    ACTIONS(335), 1,
      anon_sym_u300b,
  [613] = 1,
    ACTIONS(114), 1,
      anon_sym_u300b,
  [617] = 1,
    ACTIONS(337), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [621] = 1,
    ACTIONS(339), 1,
      anon_sym_u300b,
  [625] = 1,
    ACTIONS(341), 1,
      anon_sym_u300b,
  [629] = 1,
    ACTIONS(343), 1,
      sym__sep,
  [633] = 1,
    ACTIONS(345), 1,
      aux_sym__quotable_creator_name_token1,
  [637] = 1,
    ACTIONS(347), 1,
      aux_sym__quotable_creator_name_token1,
  [641] = 1,
    ACTIONS(349), 1,
      aux_sym__quotable_creator_name_token1,
  [645] = 1,
    ACTIONS(351), 1,
      aux_sym__quotable_creator_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(81)] = 0,
  [SMALL_STATE(82)] = 33,
  [SMALL_STATE(83)] = 65,
  [SMALL_STATE(84)] = 97,
  [SMALL_STATE(85)] = 126,
  [SMALL_STATE(86)] = 155,
  [SMALL_STATE(87)] = 184,
  [SMALL_STATE(88)] = 210,
  [SMALL_STATE(89)] = 221,
  [SMALL_STATE(90)] = 230,
  [SMALL_STATE(91)] = 243,
  [SMALL_STATE(92)] = 254,
  [SMALL_STATE(93)] = 265,
  [SMALL_STATE(94)] = 274,
  [SMALL_STATE(95)] = 285,
  [SMALL_STATE(96)] = 298,
  [SMALL_STATE(97)] = 309,
  [SMALL_STATE(98)] = 322,
  [SMALL_STATE(99)] = 335,
  [SMALL_STATE(100)] = 345,
  [SMALL_STATE(101)] = 355,
  [SMALL_STATE(102)] = 365,
  [SMALL_STATE(103)] = 375,
  [SMALL_STATE(104)] = 385,
  [SMALL_STATE(105)] = 395,
  [SMALL_STATE(106)] = 405,
  [SMALL_STATE(107)] = 415,
  [SMALL_STATE(108)] = 425,
  [SMALL_STATE(109)] = 435,
  [SMALL_STATE(110)] = 443,
  [SMALL_STATE(111)] = 453,
  [SMALL_STATE(112)] = 463,
  [SMALL_STATE(113)] = 473,
  [SMALL_STATE(114)] = 483,
  [SMALL_STATE(115)] = 491,
  [SMALL_STATE(116)] = 501,
  [SMALL_STATE(117)] = 511,
  [SMALL_STATE(118)] = 521,
  [SMALL_STATE(119)] = 531,
  [SMALL_STATE(120)] = 538,
  [SMALL_STATE(121)] = 545,
  [SMALL_STATE(122)] = 552,
  [SMALL_STATE(123)] = 559,
  [SMALL_STATE(124)] = 566,
  [SMALL_STATE(125)] = 573,
  [SMALL_STATE(126)] = 577,
  [SMALL_STATE(127)] = 581,
  [SMALL_STATE(128)] = 585,
  [SMALL_STATE(129)] = 589,
  [SMALL_STATE(130)] = 593,
  [SMALL_STATE(131)] = 597,
  [SMALL_STATE(132)] = 601,
  [SMALL_STATE(133)] = 605,
  [SMALL_STATE(134)] = 609,
  [SMALL_STATE(135)] = 613,
  [SMALL_STATE(136)] = 617,
  [SMALL_STATE(137)] = 621,
  [SMALL_STATE(138)] = 625,
  [SMALL_STATE(139)] = 629,
  [SMALL_STATE(140)] = 633,
  [SMALL_STATE(141)] = 637,
  [SMALL_STATE(142)] = 641,
  [SMALL_STATE(143)] = 645,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 4, 0, 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 4, 0, 7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 10),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 10),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 10), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 6),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 7),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 9),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 9),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 10), SHIFT_REPEAT(113),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 8),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 6),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 4, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 4, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 7),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(98),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(9),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(97),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 3, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 3, 0, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10), SHIFT_REPEAT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 10), SHIFT_REPEAT(100),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
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
