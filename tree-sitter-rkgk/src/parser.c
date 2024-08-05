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
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 84
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  anon_sym_DISC = 1,
  anon_sym_LF = 2,
  anon_sym_AT = 3,
  anon_sym_SLASH_SLASH = 4,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token1 = 5,
  aux_sym__quotable_song_title_maybefeat_maybecomment_token2 = 6,
  anon_sym_u300a = 7,
  anon_sym_u300b = 8,
  aux_sym_song_title_token1 = 9,
  aux_sym_feat_field_token1 = 10,
  aux_sym__quotable_creator_name_token1 = 11,
  sym_creator_name = 12,
  anon_sym_Music = 13,
  anon_sym_music = 14,
  anon_sym_Composition = 15,
  anon_sym_composition = 16,
  anon_sym_Composer = 17,
  anon_sym_composer = 18,
  anon_sym_Compose = 19,
  anon_sym_compose = 20,
  anon_sym_Lyrics = 21,
  anon_sym_lyrics = 22,
  anon_sym_Lyricist = 23,
  anon_sym_lyricist = 24,
  anon_sym_Lyric = 25,
  anon_sym_lyric = 26,
  anon_sym_Arrangement = 27,
  anon_sym_arrangement = 28,
  anon_sym_Arranger = 29,
  anon_sym_arranger = 30,
  anon_sym_Arrange = 31,
  anon_sym_arrange = 32,
  anon_sym_Vocal = 33,
  anon_sym_vocal = 34,
  anon_sym_Vo = 35,
  anon_sym_vo = 36,
  anon_sym_Performer = 37,
  anon_sym_performer = 38,
  anon_sym_Illustration = 39,
  anon_sym_illustration = 40,
  anon_sym_Illust = 41,
  anon_sym_illust = 42,
  anon_sym_Label = 43,
  anon_sym_label = 44,
  anon_sym_Circle = 45,
  anon_sym_circle = 46,
  anon_sym_Producer = 47,
  anon_sym_producer = 48,
  anon_sym_Recording = 49,
  anon_sym_recording = 50,
  anon_sym_GuestVocal = 51,
  anon_sym_Guestvocal = 52,
  anon_sym_guestvocal = 53,
  anon_sym_Chorus = 54,
  anon_sym_chorus = 55,
  anon_sym_Mixing = 56,
  anon_sym_mixing = 57,
  anon_sym_Mastering = 58,
  anon_sym_mastering = 59,
  anon_sym_u30dcu30fcu30abu30eb = 60,
  anon_sym_u30a2u30ecu30f3u30b8 = 61,
  anon_sym_u30a4u30e9u30b9u30c8 = 62,
  anon_sym_u30ecu30fcu30d9u30eb = 63,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 64,
  anon_sym_u6b4cu5531 = 65,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 66,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 67,
  anon_sym_u4f5cu8a5eu66f2 = 68,
  anon_sym_u4f5cu7de8u66f2 = 69,
  anon_sym_u4f5cu66f2 = 70,
  anon_sym_u7de8u66f2 = 71,
  anon_sym_u4f5cu8a5e = 72,
  anon_sym_u5382u724c = 73,
  anon_sym_u811au672c = 74,
  anon_sym_u63d2u56fe = 75,
  anon_sym_u5236u4f5cu4eba = 76,
  anon_sym_u51fau7248u65b9 = 77,
  anon_sym_u5f55u97f3 = 78,
  anon_sym_u539fu4f5c = 79,
  anon_sym_u58f0u4e50 = 80,
  anon_sym_u4e50u5668 = 81,
  anon_sym_u6df7u97f3 = 82,
  anon_sym_u6bcdu5e26u5236u4f5c = 83,
  sym__sep = 84,
  sym__ssep = 85,
  sym_source_file = 86,
  sym_disc = 87,
  sym__disc = 88,
  sym_song = 89,
  sym_credit_block = 90,
  sym_credit_field = 91,
  sym__quotable_song_title_maybefeat_maybecomment = 92,
  sym__quotable_song_title_maybefeat = 93,
  sym__song_title_maybefeat = 94,
  sym_song_title = 95,
  sym_feat_field = 96,
  sym__quotable_creator_name = 97,
  sym_role = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym__disc_repeat1 = 100,
  aux_sym_credit_block_repeat1 = 101,
  aux_sym_credit_field_repeat1 = 102,
  aux_sym_credit_field_repeat2 = 103,
  aux_sym_song_title_repeat1 = 104,
  aux_sym_feat_field_repeat1 = 105,
  alias_sym_creator_sep = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DISC] = "DISC",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
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
  [anon_sym_u58f0u4e50] = "\u58f0\u4e50",
  [anon_sym_u4e50u5668] = "\u4e50\u5668",
  [anon_sym_u6df7u97f3] = "\u6df7\u97f3",
  [anon_sym_u6bcdu5e26u5236u4f5c] = "\u6bcd\u5e26\u5236\u4f5c",
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
  [aux_sym_song_title_repeat1] = "song_title_repeat1",
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
  [anon_sym_u58f0u4e50] = anon_sym_u58f0u4e50,
  [anon_sym_u4e50u5668] = anon_sym_u4e50u5668,
  [anon_sym_u6df7u97f3] = anon_sym_u6df7u97f3,
  [anon_sym_u6bcdu5e26u5236u4f5c] = anon_sym_u6bcdu5e26u5236u4f5c,
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
  [anon_sym_AT] = {
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 3},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 4},
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
  [11] = {
    [0] = alias_sym_creator_sep,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__quotable_song_title_maybefeat_maybecomment, 2,
    sym__quotable_song_title_maybefeat_maybecomment,
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 2,
  [12] = 5,
  [13] = 7,
  [14] = 14,
  [15] = 5,
  [16] = 16,
  [17] = 17,
  [18] = 6,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 10,
  [24] = 24,
  [25] = 9,
  [26] = 7,
  [27] = 4,
  [28] = 3,
  [29] = 29,
  [30] = 20,
  [31] = 17,
  [32] = 32,
  [33] = 16,
  [34] = 14,
  [35] = 10,
  [36] = 17,
  [37] = 9,
  [38] = 5,
  [39] = 22,
  [40] = 16,
  [41] = 4,
  [42] = 6,
  [43] = 7,
  [44] = 20,
  [45] = 45,
  [46] = 45,
  [47] = 45,
  [48] = 48,
  [49] = 45,
  [50] = 22,
  [51] = 14,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 17,
  [56] = 56,
  [57] = 16,
  [58] = 58,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 56,
  [64] = 64,
  [65] = 54,
  [66] = 54,
  [67] = 56,
  [68] = 60,
  [69] = 64,
  [70] = 70,
  [71] = 61,
  [72] = 58,
  [73] = 64,
  [74] = 74,
  [75] = 54,
  [76] = 61,
  [77] = 58,
  [78] = 60,
  [79] = 79,
  [80] = 58,
  [81] = 60,
  [82] = 64,
  [83] = 61,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 89,
  [90] = 90,
  [91] = 9,
  [92] = 92,
  [93] = 10,
  [94] = 4,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 6,
  [99] = 99,
  [100] = 100,
  [101] = 89,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 14,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 106,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 92,
  [114] = 106,
  [115] = 107,
  [116] = 110,
  [117] = 97,
  [118] = 110,
  [119] = 20,
  [120] = 107,
  [121] = 107,
  [122] = 22,
  [123] = 21,
  [124] = 124,
  [125] = 97,
  [126] = 89,
  [127] = 127,
  [128] = 19,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 137,
  [138] = 131,
  [139] = 139,
  [140] = 140,
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
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x300b) ADVANCE(285);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 0x300b) ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(714);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(342);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(340);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(280);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'A', 479,
        'C', 410,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x300a, 284,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 553,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'A', 151,
        'C', 83,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300a, 284,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 235,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(273);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'V') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(102);
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
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(576);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(168);
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
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(657);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(659);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(661);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(663);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(140);
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
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(652);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(628);
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
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(195);
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
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 213:
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x300b) ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(214);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(571);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 214:
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x300b) ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == 0x30ab) ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 0x30b0) ADVANCE(673);
      END_STATE();
    case 217:
      if (lookahead == 0x30b8) ADVANCE(667);
      END_STATE();
    case 218:
      if (lookahead == 0x30b9) ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == 0x30b9) ADVANCE(221);
      END_STATE();
    case 220:
      if (lookahead == 0x30bf) ADVANCE(224);
      END_STATE();
    case 221:
      if (lookahead == 0x30c8) ADVANCE(669);
      END_STATE();
    case 222:
      if (lookahead == 0x30d9) ADVANCE(226);
      END_STATE();
    case 223:
      if (lookahead == 0x30e9) ADVANCE(219);
      END_STATE();
    case 224:
      if (lookahead == 0x30ea) ADVANCE(229);
      END_STATE();
    case 225:
      if (lookahead == 0x30eb) ADVANCE(665);
      END_STATE();
    case 226:
      if (lookahead == 0x30eb) ADVANCE(671);
      END_STATE();
    case 227:
      if (lookahead == 0x30ec) ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 0x30f3) ADVANCE(217);
      END_STATE();
    case 229:
      if (lookahead == 0x30f3) ADVANCE(216);
      END_STATE();
    case 230:
      if (lookahead == 0x30fc) ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 0x30fc) ADVANCE(222);
      END_STATE();
    case 232:
      if (lookahead == 0x4e50) ADVANCE(705);
      END_STATE();
    case 233:
      if (lookahead == 0x4eba) ADVANCE(697);
      END_STATE();
    case 234:
      if (lookahead == 0x4f5c) ADVANCE(233);
      END_STATE();
    case 235:
      if (lookahead == 0x4f5c) ADVANCE(703);
      END_STATE();
    case 236:
      if (lookahead == 0x4f5c) ADVANCE(703);
      if (lookahead == 0x66f2) ADVANCE(254);
      END_STATE();
    case 237:
      if (lookahead == 0x4f5c) ADVANCE(711);
      END_STATE();
    case 238:
      if (lookahead == 0x5236) ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == 0x5531) ADVANCE(675);
      END_STATE();
    case 240:
      if (lookahead == 0x5668) ADVANCE(707);
      END_STATE();
    case 241:
      if (lookahead == 0x56fe) ADVANCE(695);
      END_STATE();
    case 242:
      if (lookahead == 0x5e26) ADVANCE(238);
      END_STATE();
    case 243:
      if (lookahead == 0x65b9) ADVANCE(699);
      END_STATE();
    case 244:
      if (lookahead == 0x66f2) ADVANCE(685);
      if (lookahead == 0x7de8) ADVANCE(246);
      if (lookahead == 0x8a5e) ADVANCE(689);
      END_STATE();
    case 245:
      if (lookahead == 0x66f2) ADVANCE(687);
      END_STATE();
    case 246:
      if (lookahead == 0x66f2) ADVANCE(683);
      END_STATE();
    case 247:
      if (lookahead == 0x66f2) ADVANCE(679);
      if (lookahead == 0x7de8) ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 0x66f2) ADVANCE(677);
      END_STATE();
    case 249:
      if (lookahead == 0x672c) ADVANCE(693);
      END_STATE();
    case 250:
      if (lookahead == 0x7248) ADVANCE(243);
      END_STATE();
    case 251:
      if (lookahead == 0x724c) ADVANCE(691);
      END_STATE();
    case 252:
      if (lookahead == 0x97f3) ADVANCE(701);
      END_STATE();
    case 253:
      if (lookahead == 0x97f3) ADVANCE(709);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 255:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(256);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(325);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(293);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(714);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 256:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(256);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(325);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 257:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(257);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 258:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(259);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(325);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(294);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(714);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 259:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(259);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(325);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 260:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '\n', 275,
        'A', 479,
        'C', 410,
        'D', 350,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x300a, 284,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 553,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
        '\t', 287,
        ' ', 287,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(286);
      if (lookahead != 0) ADVANCE(573);
      END_STATE();
    case 261:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(261);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'M') ADVANCE(298);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x30a2) ADVANCE(320);
      if (lookahead == 0x30a4) ADVANCE(319);
      if (lookahead == 0x30dc) ADVANCE(321);
      if (lookahead == 0x30de) ADVANCE(318);
      if (lookahead == 0x30ec) ADVANCE(322);
      if (lookahead == 0x4e50) ADVANCE(328);
      if (lookahead == 0x4f5c) ADVANCE(331);
      if (lookahead == 0x51fa) ADVANCE(334);
      if (lookahead == 0x5236) ADVANCE(324);
      if (lookahead == 0x5382) ADVANCE(335);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(323);
      if (lookahead == 0x5f55) ADVANCE(336);
      if (lookahead == 0x63d2) ADVANCE(329);
      if (lookahead == 0x6b4c) ADVANCE(327);
      if (lookahead == 0x6bcd) ADVANCE(330);
      if (lookahead == 0x6df7) ADVANCE(337);
      if (lookahead == 0x7de8) ADVANCE(332);
      if (lookahead == 0x811a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 262:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(262);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 0x300a) ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 263:
      if (eof) ADVANCE(272);
      if (lookahead == '\n') SKIP(263);
      if (lookahead == 0x300a) ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 264:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '\n', 277,
        'A', 479,
        'C', 410,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x300a, 284,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 553,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
        '\t', 288,
        ' ', 288,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(286);
      if (lookahead != 0) ADVANCE(573);
      END_STATE();
    case 265:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 278,
        'A', 151,
        'C', 83,
        'D', 14,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'f', 51,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300b, 285,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 236,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(265);
      END_STATE();
    case 266:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 278,
        'A', 151,
        'C', 83,
        'D', 14,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300a, 284,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 236,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266);
      END_STATE();
    case 267:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 278,
        'A', 151,
        'C', 83,
        'D', 14,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300b, 285,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 236,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
        '\t', 715,
        ' ', 715,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(268);
      if (lookahead == '&' ||
          lookahead == ',' ||
          lookahead == 0x3000 ||
          lookahead == 0x3001 ||
          lookahead == 0x30fb ||
          lookahead == 0xff06 ||
          lookahead == 0xff1b) ADVANCE(716);
      END_STATE();
    case 268:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 278,
        'A', 151,
        'C', 83,
        'D', 14,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300b, 285,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 236,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(268);
      END_STATE();
    case 269:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 278,
        'A', 151,
        'C', 83,
        'G', 202,
        'I', 99,
        'L', 17,
        'M', 18,
        'P', 60,
        'R', 50,
        'V', 130,
        'a', 170,
        'c', 84,
        'g', 208,
        'i', 111,
        'l', 28,
        'm', 30,
        'p', 70,
        'r', 72,
        'v', 131,
        0x300a, 284,
        0x30a2, 227,
        0x30a4, 223,
        0x30dc, 230,
        0x30de, 218,
        0x30ec, 231,
        0x4e50, 240,
        0x4f5c, 244,
        0x51fa, 250,
        0x5236, 234,
        0x5382, 251,
        0x539f, 236,
        0x58f0, 232,
        0x5f55, 252,
        0x63d2, 241,
        0x6b4c, 239,
        0x6bcd, 242,
        0x6df7, 253,
        0x7de8, 245,
        0x811a, 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(269);
      END_STATE();
    case 270:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 279,
        'A', 479,
        'C', 410,
        'D', 350,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x300a, 284,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 552,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(266);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 271:
      if (eof) ADVANCE(272);
      ADVANCE_MAP(
        '/', 10,
        '@', 279,
        'A', 479,
        'C', 410,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x300a, 284,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 552,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(269);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DISC);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(277);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AT);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybefeat_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 275,
        'A', 313,
        'C', 307,
        'D', 296,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x300a, 284,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 325,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 277,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x300a, 284,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 325,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 292,
        '@', 278,
        'A', 313,
        'C', 307,
        'D', 296,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'f', 302,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x300a, 284,
        0x300b, 285,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 326,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 292,
        '@', 278,
        'A', 313,
        'C', 307,
        'D', 296,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'f', 302,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 326,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 292,
        '@', 278,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'f', 302,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 326,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(280);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 313,
        'C', 307,
        'D', 296,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x300a, 284,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 325,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 297,
        'M', 298,
        'P', 303,
        'R', 301,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 299,
        'm', 300,
        'p', 304,
        'r', 305,
        'v', 312,
        0x300a, 284,
        0x30a2, 320,
        0x30a4, 319,
        0x30dc, 321,
        0x30de, 318,
        0x30ec, 322,
        0x4e50, 328,
        0x4f5c, 331,
        0x51fa, 334,
        0x5236, 324,
        0x5382, 335,
        0x539f, 325,
        0x58f0, 323,
        0x5f55, 336,
        0x63d2, 329,
        0x6b4c, 327,
        0x6bcd, 330,
        0x6df7, 337,
        0x7de8, 332,
        0x811a, 333,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 0x300b) ADVANCE(285);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(284);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(220);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(219);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(228);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(215);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(222);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(705);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(233);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(703);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(703);
      if (lookahead == 0x66f2) ADVANCE(254);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(675);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(707);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(695);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(238);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(685);
      if (lookahead == 0x7de8) ADVANCE(246);
      if (lookahead == 0x8a5e) ADVANCE(689);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(687);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(693);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(243);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(691);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(701);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(709);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_feat_field_token1);
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(16);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(210);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 279,
        'A', 479,
        'C', 410,
        'D', 350,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 552,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '@', 279,
        'A', 479,
        'C', 410,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 552,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 479,
        'C', 410,
        'D', 350,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 553,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 479,
        'C', 410,
        'G', 522,
        'I', 431,
        'L', 352,
        'M', 353,
        'P', 387,
        'R', 378,
        'V', 454,
        'a', 492,
        'c', 411,
        'g', 528,
        'i', 435,
        'l', 359,
        'm', 361,
        'p', 397,
        'r', 399,
        'v', 455,
        0x30a2, 544,
        0x30a4, 540,
        0x30dc, 547,
        0x30de, 535,
        0x30ec, 548,
        0x4e50, 557,
        0x4f5c, 561,
        0x51fa, 567,
        0x5236, 551,
        0x5382, 568,
        0x539f, 553,
        0x58f0, 549,
        0x5f55, 569,
        0x63d2, 558,
        0x6b4c, 556,
        0x6bcd, 559,
        0x6df7, 570,
        0x7de8, 562,
        0x811a, 566,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'C') ADVANCE(274);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'I') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'S') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'y') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(505);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(427);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(429);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(519);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'y') ADVANCE(485);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(599);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(575);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(601);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(577);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(433);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(468);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(525);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(423);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(425);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(529);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(639);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(641);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(611);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(613);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(451);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(456);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(475);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(477);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(469);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(489);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(465);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(658);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(660);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(662);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(647);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(664);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(649);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(436);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(437);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(457);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(459);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(463);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(445);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(447);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(635);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(615);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(637);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(617);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(527);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(471);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(408);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(579);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(581);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(627);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(629);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(402);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(406);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(407);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(513);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(618);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(620);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(441);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(443);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(499);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(493);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(400);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(643);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(645);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(623);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(625);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(523);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(439);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(401);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(517);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(654);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(656);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(515);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(509);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(511);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(413);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(415);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(521);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(343);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(630);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(632);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(595);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(597);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(603);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(605);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(389);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(417);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(495);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(497);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(501);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(396);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(421);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(542);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b0) ADVANCE(674);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(537);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(538);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30bf) ADVANCE(541);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(670);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(543);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(536);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ea) ADVANCE(546);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(666);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(672);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(545);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(534);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(533);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(532);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(539);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4e50) ADVANCE(706);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(698);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(550);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(704);
      if (lookahead == 0x66f2) ADVANCE(572);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(704);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(712);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5236) ADVANCE(554);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(676);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5668) ADVANCE(708);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(696);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5e26) ADVANCE(555);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(700);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(686);
      if (lookahead == 0x7de8) ADVANCE(563);
      if (lookahead == 0x8a5e) ADVANCE(690);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(688);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(684);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(680);
      if (lookahead == 0x7de8) ADVANCE(565);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(678);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(694);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(560);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(692);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(702);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(710);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(571);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        '\t', 283,
        ' ', 283,
        '&', 283,
        ',', 283,
        '/', 283,
        ':', 283,
        0x3000, 283,
        0x3001, 283,
        0x300a, 283,
        0x300b, 283,
        0x30fb, 283,
        0xff06, 283,
        0xff1a, 283,
        0xff1b, 283,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(583);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(585);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == 's') ADVANCE(591);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 's') ADVANCE(593);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(607);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(609);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_Chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_Mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_Mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(247);
      if (lookahead == 0x66f2) ADVANCE(681);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(564);
      if (lookahead == 0x66f2) ADVANCE(682);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(573);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 713,
        ' ', 713,
        '&', 714,
        ',', 714,
        '/', 714,
        ':', 714,
        0x3000, 714,
        0x3001, 714,
        0x30fb, 714,
        0xff06, 714,
        0xff1a, 714,
        0xff1b, 714,
      );
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 714,
        ' ', 714,
        '&', 714,
        ',', 714,
        '/', 714,
        ':', 714,
        0x3000, 714,
        0x3001, 714,
        0x30fb, 714,
        0xff06, 714,
        0xff1a, 714,
        0xff1b, 714,
      );
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 715,
        ' ', 715,
        '&', 716,
        ',', 716,
        0x3000, 716,
        0x3001, 716,
        0x30fb, 716,
        0xff06, 716,
        0xff1b, 716,
      );
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__ssep);
      ADVANCE_MAP(
        '\t', 716,
        ' ', 716,
        '&', 716,
        ',', 716,
        0x3000, 716,
        0x3001, 716,
        0x30fb, 716,
        0xff06, 716,
        0xff1b, 716,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 256},
  [2] = {.lex_state = 265},
  [3] = {.lex_state = 265},
  [4] = {.lex_state = 257},
  [5] = {.lex_state = 256},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 256},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 270},
  [10] = {.lex_state = 270},
  [11] = {.lex_state = 265},
  [12] = {.lex_state = 259},
  [13] = {.lex_state = 256},
  [14] = {.lex_state = 265},
  [15] = {.lex_state = 256},
  [16] = {.lex_state = 260},
  [17] = {.lex_state = 260},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 267},
  [20] = {.lex_state = 267},
  [21] = {.lex_state = 267},
  [22] = {.lex_state = 267},
  [23] = {.lex_state = 271},
  [24] = {.lex_state = 267},
  [25] = {.lex_state = 271},
  [26] = {.lex_state = 259},
  [27] = {.lex_state = 261},
  [28] = {.lex_state = 265},
  [29] = {.lex_state = 265},
  [30] = {.lex_state = 267},
  [31] = {.lex_state = 264},
  [32] = {.lex_state = 265},
  [33] = {.lex_state = 264},
  [34] = {.lex_state = 265},
  [35] = {.lex_state = 271},
  [36] = {.lex_state = 260},
  [37] = {.lex_state = 271},
  [38] = {.lex_state = 259},
  [39] = {.lex_state = 267},
  [40] = {.lex_state = 260},
  [41] = {.lex_state = 261},
  [42] = {.lex_state = 261},
  [43] = {.lex_state = 259},
  [44] = {.lex_state = 267},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 265},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 267},
  [51] = {.lex_state = 265},
  [52] = {.lex_state = 265},
  [53] = {.lex_state = 265},
  [54] = {.lex_state = 255},
  [55] = {.lex_state = 264},
  [56] = {.lex_state = 255},
  [57] = {.lex_state = 264},
  [58] = {.lex_state = 256},
  [59] = {.lex_state = 255},
  [60] = {.lex_state = 256},
  [61] = {.lex_state = 256},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 258},
  [64] = {.lex_state = 256},
  [65] = {.lex_state = 255},
  [66] = {.lex_state = 258},
  [67] = {.lex_state = 258},
  [68] = {.lex_state = 256},
  [69] = {.lex_state = 256},
  [70] = {.lex_state = 265},
  [71] = {.lex_state = 256},
  [72] = {.lex_state = 256},
  [73] = {.lex_state = 259},
  [74] = {.lex_state = 265},
  [75] = {.lex_state = 258},
  [76] = {.lex_state = 259},
  [77] = {.lex_state = 259},
  [78] = {.lex_state = 259},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 259},
  [81] = {.lex_state = 259},
  [82] = {.lex_state = 259},
  [83] = {.lex_state = 259},
  [84] = {.lex_state = 262},
  [85] = {.lex_state = 263},
  [86] = {.lex_state = 263},
  [87] = {.lex_state = 263},
  [88] = {.lex_state = 263},
  [89] = {.lex_state = 262},
  [90] = {.lex_state = 265},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 262},
  [93] = {.lex_state = 213},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 265},
  [97] = {.lex_state = 262},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 262},
  [100] = {.lex_state = 265},
  [101] = {.lex_state = 263},
  [102] = {.lex_state = 263},
  [103] = {.lex_state = 213},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 265},
  [106] = {.lex_state = 213},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 213},
  [109] = {.lex_state = 213},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 213},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 263},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 263},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 267},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 267},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 263},
  [126] = {.lex_state = 263},
  [127] = {.lex_state = 265},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 265},
  [131] = {.lex_state = 265},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 265},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
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
    [anon_sym_u58f0u4e50] = ACTIONS(1),
    [anon_sym_u4e50u5668] = ACTIONS(1),
    [anon_sym_u6df7u97f3] = ACTIONS(1),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_disc] = STATE(96),
    [sym__disc] = STATE(136),
    [sym_song] = STATE(102),
    [sym_credit_block] = STATE(84),
    [sym_credit_field] = STATE(13),
    [sym__quotable_song_title_maybefeat_maybecomment] = STATE(11),
    [sym__quotable_song_title_maybefeat] = STATE(52),
    [sym__song_title_maybefeat] = STATE(53),
    [sym_song_title] = STATE(34),
    [sym_role] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(96),
    [aux_sym__disc_repeat1] = STATE(86),
    [aux_sym_credit_block_repeat1] = STATE(13),
    [aux_sym_credit_field_repeat1] = STATE(45),
    [aux_sym_song_title_repeat1] = STATE(18),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [2] = {
    [sym_credit_block] = STATE(89),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(47),
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
    [anon_sym_GuestVocal] = ACTIONS(15),
    [anon_sym_Guestvocal] = ACTIONS(15),
    [anon_sym_guestvocal] = ACTIONS(15),
    [anon_sym_Chorus] = ACTIONS(15),
    [anon_sym_chorus] = ACTIONS(15),
    [anon_sym_Mixing] = ACTIONS(15),
    [anon_sym_mixing] = ACTIONS(15),
    [anon_sym_Mastering] = ACTIONS(15),
    [anon_sym_mastering] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(15),
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
    [anon_sym_u58f0u4e50] = ACTIONS(15),
    [anon_sym_u4e50u5668] = ACTIONS(15),
    [anon_sym_u6df7u97f3] = ACTIONS(15),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(15),
  },
  [3] = {
    [sym_credit_block] = STATE(89),
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(47),
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
    [anon_sym_GuestVocal] = ACTIONS(15),
    [anon_sym_Guestvocal] = ACTIONS(15),
    [anon_sym_guestvocal] = ACTIONS(15),
    [anon_sym_Chorus] = ACTIONS(15),
    [anon_sym_chorus] = ACTIONS(15),
    [anon_sym_Mixing] = ACTIONS(15),
    [anon_sym_mixing] = ACTIONS(15),
    [anon_sym_Mastering] = ACTIONS(15),
    [anon_sym_mastering] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(15),
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
    [anon_sym_u58f0u4e50] = ACTIONS(15),
    [anon_sym_u4e50u5668] = ACTIONS(15),
    [anon_sym_u6df7u97f3] = ACTIONS(15),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(15),
  },
  [4] = {
    [aux_sym_song_title_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_DISC] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(23),
    [aux_sym_feat_field_token1] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(21),
    [anon_sym_music] = ACTIONS(21),
    [anon_sym_Composition] = ACTIONS(21),
    [anon_sym_composition] = ACTIONS(21),
    [anon_sym_Composer] = ACTIONS(21),
    [anon_sym_composer] = ACTIONS(21),
    [anon_sym_Compose] = ACTIONS(21),
    [anon_sym_compose] = ACTIONS(21),
    [anon_sym_Lyrics] = ACTIONS(21),
    [anon_sym_lyrics] = ACTIONS(21),
    [anon_sym_Lyricist] = ACTIONS(21),
    [anon_sym_lyricist] = ACTIONS(21),
    [anon_sym_Lyric] = ACTIONS(21),
    [anon_sym_lyric] = ACTIONS(21),
    [anon_sym_Arrangement] = ACTIONS(21),
    [anon_sym_arrangement] = ACTIONS(21),
    [anon_sym_Arranger] = ACTIONS(21),
    [anon_sym_arranger] = ACTIONS(21),
    [anon_sym_Arrange] = ACTIONS(21),
    [anon_sym_arrange] = ACTIONS(21),
    [anon_sym_Vocal] = ACTIONS(21),
    [anon_sym_vocal] = ACTIONS(21),
    [anon_sym_Vo] = ACTIONS(21),
    [anon_sym_vo] = ACTIONS(21),
    [anon_sym_Performer] = ACTIONS(21),
    [anon_sym_performer] = ACTIONS(21),
    [anon_sym_Illustration] = ACTIONS(21),
    [anon_sym_illustration] = ACTIONS(21),
    [anon_sym_Illust] = ACTIONS(21),
    [anon_sym_illust] = ACTIONS(21),
    [anon_sym_Label] = ACTIONS(21),
    [anon_sym_label] = ACTIONS(21),
    [anon_sym_Circle] = ACTIONS(21),
    [anon_sym_circle] = ACTIONS(21),
    [anon_sym_Producer] = ACTIONS(21),
    [anon_sym_producer] = ACTIONS(21),
    [anon_sym_Recording] = ACTIONS(21),
    [anon_sym_recording] = ACTIONS(21),
    [anon_sym_GuestVocal] = ACTIONS(21),
    [anon_sym_Guestvocal] = ACTIONS(21),
    [anon_sym_guestvocal] = ACTIONS(21),
    [anon_sym_Chorus] = ACTIONS(21),
    [anon_sym_chorus] = ACTIONS(21),
    [anon_sym_Mixing] = ACTIONS(21),
    [anon_sym_mixing] = ACTIONS(21),
    [anon_sym_Mastering] = ACTIONS(21),
    [anon_sym_mastering] = ACTIONS(21),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(21),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(21),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(21),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(21),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(21),
    [anon_sym_u6b4cu5531] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu66f2] = ACTIONS(21),
    [anon_sym_u7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5e] = ACTIONS(21),
    [anon_sym_u5382u724c] = ACTIONS(21),
    [anon_sym_u811au672c] = ACTIONS(21),
    [anon_sym_u63d2u56fe] = ACTIONS(21),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(21),
    [anon_sym_u51fau7248u65b9] = ACTIONS(21),
    [anon_sym_u5f55u97f3] = ACTIONS(21),
    [anon_sym_u539fu4f5c] = ACTIONS(21),
    [anon_sym_u58f0u4e50] = ACTIONS(21),
    [anon_sym_u4e50u5668] = ACTIONS(21),
    [anon_sym_u6df7u97f3] = ACTIONS(21),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(21),
  },
  [5] = {
    [sym_credit_field] = STATE(5),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(5),
    [aux_sym_credit_field_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_DISC] = ACTIONS(28),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
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
    [anon_sym_GuestVocal] = ACTIONS(30),
    [anon_sym_Guestvocal] = ACTIONS(30),
    [anon_sym_guestvocal] = ACTIONS(30),
    [anon_sym_Chorus] = ACTIONS(30),
    [anon_sym_chorus] = ACTIONS(30),
    [anon_sym_Mixing] = ACTIONS(30),
    [anon_sym_mixing] = ACTIONS(30),
    [anon_sym_Mastering] = ACTIONS(30),
    [anon_sym_mastering] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(30),
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
    [anon_sym_u58f0u4e50] = ACTIONS(30),
    [anon_sym_u4e50u5668] = ACTIONS(30),
    [anon_sym_u6df7u97f3] = ACTIONS(30),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(30),
  },
  [6] = {
    [aux_sym_song_title_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DISC] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(37),
    [aux_sym_feat_field_token1] = ACTIONS(35),
    [anon_sym_Music] = ACTIONS(35),
    [anon_sym_music] = ACTIONS(35),
    [anon_sym_Composition] = ACTIONS(35),
    [anon_sym_composition] = ACTIONS(35),
    [anon_sym_Composer] = ACTIONS(35),
    [anon_sym_composer] = ACTIONS(35),
    [anon_sym_Compose] = ACTIONS(35),
    [anon_sym_compose] = ACTIONS(35),
    [anon_sym_Lyrics] = ACTIONS(35),
    [anon_sym_lyrics] = ACTIONS(35),
    [anon_sym_Lyricist] = ACTIONS(35),
    [anon_sym_lyricist] = ACTIONS(35),
    [anon_sym_Lyric] = ACTIONS(35),
    [anon_sym_lyric] = ACTIONS(35),
    [anon_sym_Arrangement] = ACTIONS(35),
    [anon_sym_arrangement] = ACTIONS(35),
    [anon_sym_Arranger] = ACTIONS(35),
    [anon_sym_arranger] = ACTIONS(35),
    [anon_sym_Arrange] = ACTIONS(35),
    [anon_sym_arrange] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Vo] = ACTIONS(35),
    [anon_sym_vo] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illust] = ACTIONS(35),
    [anon_sym_illust] = ACTIONS(35),
    [anon_sym_Label] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
    [anon_sym_Circle] = ACTIONS(35),
    [anon_sym_circle] = ACTIONS(35),
    [anon_sym_Producer] = ACTIONS(35),
    [anon_sym_producer] = ACTIONS(35),
    [anon_sym_Recording] = ACTIONS(35),
    [anon_sym_recording] = ACTIONS(35),
    [anon_sym_GuestVocal] = ACTIONS(35),
    [anon_sym_Guestvocal] = ACTIONS(35),
    [anon_sym_guestvocal] = ACTIONS(35),
    [anon_sym_Chorus] = ACTIONS(35),
    [anon_sym_chorus] = ACTIONS(35),
    [anon_sym_Mixing] = ACTIONS(35),
    [anon_sym_mixing] = ACTIONS(35),
    [anon_sym_Mastering] = ACTIONS(35),
    [anon_sym_mastering] = ACTIONS(35),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(35),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(35),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(35),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(35),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u5382u724c] = ACTIONS(35),
    [anon_sym_u811au672c] = ACTIONS(35),
    [anon_sym_u63d2u56fe] = ACTIONS(35),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(35),
    [anon_sym_u51fau7248u65b9] = ACTIONS(35),
    [anon_sym_u5f55u97f3] = ACTIONS(35),
    [anon_sym_u539fu4f5c] = ACTIONS(35),
    [anon_sym_u58f0u4e50] = ACTIONS(35),
    [anon_sym_u4e50u5668] = ACTIONS(35),
    [anon_sym_u6df7u97f3] = ACTIONS(35),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(35),
  },
  [7] = {
    [sym_credit_field] = STATE(5),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(5),
    [aux_sym_credit_field_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_DISC] = ACTIONS(41),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(41),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [8] = {
    [aux_sym_feat_field_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DISC] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(45),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(45),
    [anon_sym_u300b] = ACTIONS(45),
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
    [anon_sym_GuestVocal] = ACTIONS(45),
    [anon_sym_Guestvocal] = ACTIONS(45),
    [anon_sym_guestvocal] = ACTIONS(45),
    [anon_sym_Chorus] = ACTIONS(45),
    [anon_sym_chorus] = ACTIONS(45),
    [anon_sym_Mixing] = ACTIONS(45),
    [anon_sym_mixing] = ACTIONS(45),
    [anon_sym_Mastering] = ACTIONS(45),
    [anon_sym_mastering] = ACTIONS(45),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(45),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(45),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(45),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(45),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(45),
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
    [anon_sym_u58f0u4e50] = ACTIONS(45),
    [anon_sym_u4e50u5668] = ACTIONS(45),
    [anon_sym_u6df7u97f3] = ACTIONS(45),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(45),
    [sym__ssep] = ACTIONS(47),
  },
  [9] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(52),
    [anon_sym_Guestvocal] = ACTIONS(52),
    [anon_sym_guestvocal] = ACTIONS(52),
    [anon_sym_Chorus] = ACTIONS(52),
    [anon_sym_chorus] = ACTIONS(52),
    [anon_sym_Mixing] = ACTIONS(52),
    [anon_sym_mixing] = ACTIONS(52),
    [anon_sym_Mastering] = ACTIONS(52),
    [anon_sym_mastering] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(52),
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
    [anon_sym_u58f0u4e50] = ACTIONS(52),
    [anon_sym_u4e50u5668] = ACTIONS(52),
    [anon_sym_u6df7u97f3] = ACTIONS(52),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(52),
  },
  [10] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(60),
    [anon_sym_Guestvocal] = ACTIONS(60),
    [anon_sym_guestvocal] = ACTIONS(60),
    [anon_sym_Chorus] = ACTIONS(60),
    [anon_sym_chorus] = ACTIONS(60),
    [anon_sym_Mixing] = ACTIONS(60),
    [anon_sym_mixing] = ACTIONS(60),
    [anon_sym_Mastering] = ACTIONS(60),
    [anon_sym_mastering] = ACTIONS(60),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(60),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(60),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(60),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(60),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(60),
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
    [anon_sym_u58f0u4e50] = ACTIONS(60),
    [anon_sym_u4e50u5668] = ACTIONS(60),
    [anon_sym_u6df7u97f3] = ACTIONS(60),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(60),
  },
  [11] = {
    [sym_credit_block] = STATE(101),
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [aux_sym_credit_field_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(62),
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
    [anon_sym_GuestVocal] = ACTIONS(15),
    [anon_sym_Guestvocal] = ACTIONS(15),
    [anon_sym_guestvocal] = ACTIONS(15),
    [anon_sym_Chorus] = ACTIONS(15),
    [anon_sym_chorus] = ACTIONS(15),
    [anon_sym_Mixing] = ACTIONS(15),
    [anon_sym_mixing] = ACTIONS(15),
    [anon_sym_Mastering] = ACTIONS(15),
    [anon_sym_mastering] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(15),
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
    [anon_sym_u58f0u4e50] = ACTIONS(15),
    [anon_sym_u4e50u5668] = ACTIONS(15),
    [anon_sym_u6df7u97f3] = ACTIONS(15),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(15),
  },
  [12] = {
    [sym_credit_field] = STATE(12),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
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
    [anon_sym_GuestVocal] = ACTIONS(30),
    [anon_sym_Guestvocal] = ACTIONS(30),
    [anon_sym_guestvocal] = ACTIONS(30),
    [anon_sym_Chorus] = ACTIONS(30),
    [anon_sym_chorus] = ACTIONS(30),
    [anon_sym_Mixing] = ACTIONS(30),
    [anon_sym_mixing] = ACTIONS(30),
    [anon_sym_Mastering] = ACTIONS(30),
    [anon_sym_mastering] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(30),
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
    [anon_sym_u58f0u4e50] = ACTIONS(30),
    [anon_sym_u4e50u5668] = ACTIONS(30),
    [anon_sym_u6df7u97f3] = ACTIONS(30),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(30),
  },
  [13] = {
    [sym_credit_field] = STATE(15),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(15),
    [aux_sym_credit_field_repeat1] = STATE(45),
    [anon_sym_DISC] = ACTIONS(41),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(41),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [14] = {
    [sym_feat_field] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(64),
    [aux_sym_feat_field_token1] = ACTIONS(66),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_GuestVocal] = ACTIONS(64),
    [anon_sym_Guestvocal] = ACTIONS(64),
    [anon_sym_guestvocal] = ACTIONS(64),
    [anon_sym_Chorus] = ACTIONS(64),
    [anon_sym_chorus] = ACTIONS(64),
    [anon_sym_Mixing] = ACTIONS(64),
    [anon_sym_mixing] = ACTIONS(64),
    [anon_sym_Mastering] = ACTIONS(64),
    [anon_sym_mastering] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
    [anon_sym_u58f0u4e50] = ACTIONS(64),
    [anon_sym_u4e50u5668] = ACTIONS(64),
    [anon_sym_u6df7u97f3] = ACTIONS(64),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(64),
  },
  [15] = {
    [sym_credit_field] = STATE(15),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(15),
    [aux_sym_credit_field_repeat1] = STATE(45),
    [anon_sym_DISC] = ACTIONS(28),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
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
    [anon_sym_GuestVocal] = ACTIONS(30),
    [anon_sym_Guestvocal] = ACTIONS(30),
    [anon_sym_guestvocal] = ACTIONS(30),
    [anon_sym_Chorus] = ACTIONS(30),
    [anon_sym_chorus] = ACTIONS(30),
    [anon_sym_Mixing] = ACTIONS(30),
    [anon_sym_mixing] = ACTIONS(30),
    [anon_sym_Mastering] = ACTIONS(30),
    [anon_sym_mastering] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(30),
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
    [anon_sym_u58f0u4e50] = ACTIONS(30),
    [anon_sym_u4e50u5668] = ACTIONS(30),
    [anon_sym_u6df7u97f3] = ACTIONS(30),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(30),
  },
  [16] = {
    [sym__quotable_creator_name] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_DISC] = ACTIONS(72),
    [anon_sym_LF] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym_creator_name] = ACTIONS(76),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [17] = {
    [sym__quotable_creator_name] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [18] = {
    [aux_sym_song_title_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [aux_sym_feat_field_token1] = ACTIONS(35),
    [anon_sym_Music] = ACTIONS(35),
    [anon_sym_music] = ACTIONS(35),
    [anon_sym_Composition] = ACTIONS(35),
    [anon_sym_composition] = ACTIONS(35),
    [anon_sym_Composer] = ACTIONS(35),
    [anon_sym_composer] = ACTIONS(35),
    [anon_sym_Compose] = ACTIONS(35),
    [anon_sym_compose] = ACTIONS(35),
    [anon_sym_Lyrics] = ACTIONS(35),
    [anon_sym_lyrics] = ACTIONS(35),
    [anon_sym_Lyricist] = ACTIONS(35),
    [anon_sym_lyricist] = ACTIONS(35),
    [anon_sym_Lyric] = ACTIONS(35),
    [anon_sym_lyric] = ACTIONS(35),
    [anon_sym_Arrangement] = ACTIONS(35),
    [anon_sym_arrangement] = ACTIONS(35),
    [anon_sym_Arranger] = ACTIONS(35),
    [anon_sym_arranger] = ACTIONS(35),
    [anon_sym_Arrange] = ACTIONS(35),
    [anon_sym_arrange] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Vo] = ACTIONS(35),
    [anon_sym_vo] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illust] = ACTIONS(35),
    [anon_sym_illust] = ACTIONS(35),
    [anon_sym_Label] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
    [anon_sym_Circle] = ACTIONS(35),
    [anon_sym_circle] = ACTIONS(35),
    [anon_sym_Producer] = ACTIONS(35),
    [anon_sym_producer] = ACTIONS(35),
    [anon_sym_Recording] = ACTIONS(35),
    [anon_sym_recording] = ACTIONS(35),
    [anon_sym_GuestVocal] = ACTIONS(35),
    [anon_sym_Guestvocal] = ACTIONS(35),
    [anon_sym_guestvocal] = ACTIONS(35),
    [anon_sym_Chorus] = ACTIONS(35),
    [anon_sym_chorus] = ACTIONS(35),
    [anon_sym_Mixing] = ACTIONS(35),
    [anon_sym_mixing] = ACTIONS(35),
    [anon_sym_Mastering] = ACTIONS(35),
    [anon_sym_mastering] = ACTIONS(35),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(35),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(35),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(35),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(35),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u5382u724c] = ACTIONS(35),
    [anon_sym_u811au672c] = ACTIONS(35),
    [anon_sym_u63d2u56fe] = ACTIONS(35),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(35),
    [anon_sym_u51fau7248u65b9] = ACTIONS(35),
    [anon_sym_u5f55u97f3] = ACTIONS(35),
    [anon_sym_u539fu4f5c] = ACTIONS(35),
    [anon_sym_u58f0u4e50] = ACTIONS(35),
    [anon_sym_u4e50u5668] = ACTIONS(35),
    [anon_sym_u6df7u97f3] = ACTIONS(35),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(35),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DISC] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(88),
    [anon_sym_u300b] = ACTIONS(88),
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
    [anon_sym_u58f0u4e50] = ACTIONS(88),
    [anon_sym_u4e50u5668] = ACTIONS(88),
    [anon_sym_u6df7u97f3] = ACTIONS(88),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(88),
    [sym__ssep] = ACTIONS(86),
  },
  [20] = {
    [aux_sym_feat_field_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DISC] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
    [anon_sym_u58f0u4e50] = ACTIONS(92),
    [anon_sym_u4e50u5668] = ACTIONS(92),
    [anon_sym_u6df7u97f3] = ACTIONS(92),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(92),
    [sym__ssep] = ACTIONS(94),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_DISC] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [anon_sym_SLASH_SLASH] = ACTIONS(98),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(98),
    [anon_sym_u300b] = ACTIONS(98),
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
    [anon_sym_GuestVocal] = ACTIONS(98),
    [anon_sym_Guestvocal] = ACTIONS(98),
    [anon_sym_guestvocal] = ACTIONS(98),
    [anon_sym_Chorus] = ACTIONS(98),
    [anon_sym_chorus] = ACTIONS(98),
    [anon_sym_Mixing] = ACTIONS(98),
    [anon_sym_mixing] = ACTIONS(98),
    [anon_sym_Mastering] = ACTIONS(98),
    [anon_sym_mastering] = ACTIONS(98),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(98),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(98),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(98),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(98),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(98),
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
    [anon_sym_u58f0u4e50] = ACTIONS(98),
    [anon_sym_u4e50u5668] = ACTIONS(98),
    [anon_sym_u6df7u97f3] = ACTIONS(98),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(98),
    [sym__ssep] = ACTIONS(96),
  },
  [22] = {
    [aux_sym_feat_field_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_DISC] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(102),
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
    [anon_sym_GuestVocal] = ACTIONS(102),
    [anon_sym_Guestvocal] = ACTIONS(102),
    [anon_sym_guestvocal] = ACTIONS(102),
    [anon_sym_Chorus] = ACTIONS(102),
    [anon_sym_chorus] = ACTIONS(102),
    [anon_sym_Mixing] = ACTIONS(102),
    [anon_sym_mixing] = ACTIONS(102),
    [anon_sym_Mastering] = ACTIONS(102),
    [anon_sym_mastering] = ACTIONS(102),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(102),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(102),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(102),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(102),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(102),
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
    [anon_sym_u58f0u4e50] = ACTIONS(102),
    [anon_sym_u4e50u5668] = ACTIONS(102),
    [anon_sym_u6df7u97f3] = ACTIONS(102),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(102),
    [sym__ssep] = ACTIONS(104),
  },
  [23] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(60),
    [anon_sym_Guestvocal] = ACTIONS(60),
    [anon_sym_guestvocal] = ACTIONS(60),
    [anon_sym_Chorus] = ACTIONS(60),
    [anon_sym_chorus] = ACTIONS(60),
    [anon_sym_Mixing] = ACTIONS(60),
    [anon_sym_mixing] = ACTIONS(60),
    [anon_sym_Mastering] = ACTIONS(60),
    [anon_sym_mastering] = ACTIONS(60),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(60),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(60),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(60),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(60),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(60),
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
    [anon_sym_u58f0u4e50] = ACTIONS(60),
    [anon_sym_u4e50u5668] = ACTIONS(60),
    [anon_sym_u6df7u97f3] = ACTIONS(60),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(60),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_DISC] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_SLASH_SLASH] = ACTIONS(108),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(108),
    [anon_sym_u300b] = ACTIONS(108),
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
    [anon_sym_GuestVocal] = ACTIONS(108),
    [anon_sym_Guestvocal] = ACTIONS(108),
    [anon_sym_guestvocal] = ACTIONS(108),
    [anon_sym_Chorus] = ACTIONS(108),
    [anon_sym_chorus] = ACTIONS(108),
    [anon_sym_Mixing] = ACTIONS(108),
    [anon_sym_mixing] = ACTIONS(108),
    [anon_sym_Mastering] = ACTIONS(108),
    [anon_sym_mastering] = ACTIONS(108),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(108),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(108),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(108),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(108),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(108),
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
    [anon_sym_u58f0u4e50] = ACTIONS(108),
    [anon_sym_u4e50u5668] = ACTIONS(108),
    [anon_sym_u6df7u97f3] = ACTIONS(108),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(108),
    [sym__ssep] = ACTIONS(106),
  },
  [25] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(52),
    [anon_sym_Guestvocal] = ACTIONS(52),
    [anon_sym_guestvocal] = ACTIONS(52),
    [anon_sym_Chorus] = ACTIONS(52),
    [anon_sym_chorus] = ACTIONS(52),
    [anon_sym_Mixing] = ACTIONS(52),
    [anon_sym_mixing] = ACTIONS(52),
    [anon_sym_Mastering] = ACTIONS(52),
    [anon_sym_mastering] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(52),
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
    [anon_sym_u58f0u4e50] = ACTIONS(52),
    [anon_sym_u4e50u5668] = ACTIONS(52),
    [anon_sym_u6df7u97f3] = ACTIONS(52),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(52),
  },
  [26] = {
    [sym_credit_field] = STATE(12),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(41),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [27] = {
    [aux_sym_song_title_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(110),
    [aux_sym_feat_field_token1] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(21),
    [anon_sym_music] = ACTIONS(21),
    [anon_sym_Composition] = ACTIONS(21),
    [anon_sym_composition] = ACTIONS(21),
    [anon_sym_Composer] = ACTIONS(21),
    [anon_sym_composer] = ACTIONS(21),
    [anon_sym_Compose] = ACTIONS(21),
    [anon_sym_compose] = ACTIONS(21),
    [anon_sym_Lyrics] = ACTIONS(21),
    [anon_sym_lyrics] = ACTIONS(21),
    [anon_sym_Lyricist] = ACTIONS(21),
    [anon_sym_lyricist] = ACTIONS(21),
    [anon_sym_Lyric] = ACTIONS(21),
    [anon_sym_lyric] = ACTIONS(21),
    [anon_sym_Arrangement] = ACTIONS(21),
    [anon_sym_arrangement] = ACTIONS(21),
    [anon_sym_Arranger] = ACTIONS(21),
    [anon_sym_arranger] = ACTIONS(21),
    [anon_sym_Arrange] = ACTIONS(21),
    [anon_sym_arrange] = ACTIONS(21),
    [anon_sym_Vocal] = ACTIONS(21),
    [anon_sym_vocal] = ACTIONS(21),
    [anon_sym_Vo] = ACTIONS(21),
    [anon_sym_vo] = ACTIONS(21),
    [anon_sym_Performer] = ACTIONS(21),
    [anon_sym_performer] = ACTIONS(21),
    [anon_sym_Illustration] = ACTIONS(21),
    [anon_sym_illustration] = ACTIONS(21),
    [anon_sym_Illust] = ACTIONS(21),
    [anon_sym_illust] = ACTIONS(21),
    [anon_sym_Label] = ACTIONS(21),
    [anon_sym_label] = ACTIONS(21),
    [anon_sym_Circle] = ACTIONS(21),
    [anon_sym_circle] = ACTIONS(21),
    [anon_sym_Producer] = ACTIONS(21),
    [anon_sym_producer] = ACTIONS(21),
    [anon_sym_Recording] = ACTIONS(21),
    [anon_sym_recording] = ACTIONS(21),
    [anon_sym_GuestVocal] = ACTIONS(21),
    [anon_sym_Guestvocal] = ACTIONS(21),
    [anon_sym_guestvocal] = ACTIONS(21),
    [anon_sym_Chorus] = ACTIONS(21),
    [anon_sym_chorus] = ACTIONS(21),
    [anon_sym_Mixing] = ACTIONS(21),
    [anon_sym_mixing] = ACTIONS(21),
    [anon_sym_Mastering] = ACTIONS(21),
    [anon_sym_mastering] = ACTIONS(21),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(21),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(21),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(21),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(21),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(21),
    [anon_sym_u6b4cu5531] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu66f2] = ACTIONS(21),
    [anon_sym_u7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5e] = ACTIONS(21),
    [anon_sym_u5382u724c] = ACTIONS(21),
    [anon_sym_u811au672c] = ACTIONS(21),
    [anon_sym_u63d2u56fe] = ACTIONS(21),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(21),
    [anon_sym_u51fau7248u65b9] = ACTIONS(21),
    [anon_sym_u5f55u97f3] = ACTIONS(21),
    [anon_sym_u539fu4f5c] = ACTIONS(21),
    [anon_sym_u58f0u4e50] = ACTIONS(21),
    [anon_sym_u4e50u5668] = ACTIONS(21),
    [anon_sym_u6df7u97f3] = ACTIONS(21),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(21),
  },
  [28] = {
    [sym_credit_block] = STATE(101),
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [aux_sym_credit_field_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(62),
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
    [anon_sym_GuestVocal] = ACTIONS(15),
    [anon_sym_Guestvocal] = ACTIONS(15),
    [anon_sym_guestvocal] = ACTIONS(15),
    [anon_sym_Chorus] = ACTIONS(15),
    [anon_sym_chorus] = ACTIONS(15),
    [anon_sym_Mixing] = ACTIONS(15),
    [anon_sym_mixing] = ACTIONS(15),
    [anon_sym_Mastering] = ACTIONS(15),
    [anon_sym_mastering] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(15),
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
    [anon_sym_u58f0u4e50] = ACTIONS(15),
    [anon_sym_u4e50u5668] = ACTIONS(15),
    [anon_sym_u6df7u97f3] = ACTIONS(15),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(15),
  },
  [29] = {
    [sym_credit_block] = STATE(126),
    [sym_credit_field] = STATE(43),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(43),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [anon_sym_AT] = ACTIONS(113),
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
    [anon_sym_GuestVocal] = ACTIONS(15),
    [anon_sym_Guestvocal] = ACTIONS(15),
    [anon_sym_guestvocal] = ACTIONS(15),
    [anon_sym_Chorus] = ACTIONS(15),
    [anon_sym_chorus] = ACTIONS(15),
    [anon_sym_Mixing] = ACTIONS(15),
    [anon_sym_mixing] = ACTIONS(15),
    [anon_sym_Mastering] = ACTIONS(15),
    [anon_sym_mastering] = ACTIONS(15),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(15),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(15),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(15),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(15),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(15),
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
    [anon_sym_u58f0u4e50] = ACTIONS(15),
    [anon_sym_u4e50u5668] = ACTIONS(15),
    [anon_sym_u6df7u97f3] = ACTIONS(15),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(15),
  },
  [30] = {
    [aux_sym_feat_field_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
    [anon_sym_u58f0u4e50] = ACTIONS(92),
    [anon_sym_u4e50u5668] = ACTIONS(92),
    [anon_sym_u6df7u97f3] = ACTIONS(92),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(92),
    [sym__ssep] = ACTIONS(115),
  },
  [31] = {
    [sym__quotable_creator_name] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
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
    [anon_sym_GuestVocal] = ACTIONS(119),
    [anon_sym_Guestvocal] = ACTIONS(119),
    [anon_sym_guestvocal] = ACTIONS(119),
    [anon_sym_Chorus] = ACTIONS(119),
    [anon_sym_chorus] = ACTIONS(119),
    [anon_sym_Mixing] = ACTIONS(119),
    [anon_sym_mixing] = ACTIONS(119),
    [anon_sym_Mastering] = ACTIONS(119),
    [anon_sym_mastering] = ACTIONS(119),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(119),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(119),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(119),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(119),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(119),
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
    [anon_sym_u58f0u4e50] = ACTIONS(119),
    [anon_sym_u4e50u5668] = ACTIONS(119),
    [anon_sym_u6df7u97f3] = ACTIONS(119),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(119),
  },
  [33] = {
    [sym__quotable_creator_name] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym_creator_name] = ACTIONS(76),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [34] = {
    [sym_feat_field] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(64),
    [aux_sym_feat_field_token1] = ACTIONS(125),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_GuestVocal] = ACTIONS(64),
    [anon_sym_Guestvocal] = ACTIONS(64),
    [anon_sym_guestvocal] = ACTIONS(64),
    [anon_sym_Chorus] = ACTIONS(64),
    [anon_sym_chorus] = ACTIONS(64),
    [anon_sym_Mixing] = ACTIONS(64),
    [anon_sym_mixing] = ACTIONS(64),
    [anon_sym_Mastering] = ACTIONS(64),
    [anon_sym_mastering] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
    [anon_sym_u58f0u4e50] = ACTIONS(64),
    [anon_sym_u4e50u5668] = ACTIONS(64),
    [anon_sym_u6df7u97f3] = ACTIONS(64),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(64),
  },
  [35] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(60),
    [anon_sym_Guestvocal] = ACTIONS(60),
    [anon_sym_guestvocal] = ACTIONS(60),
    [anon_sym_Chorus] = ACTIONS(60),
    [anon_sym_chorus] = ACTIONS(60),
    [anon_sym_Mixing] = ACTIONS(60),
    [anon_sym_mixing] = ACTIONS(60),
    [anon_sym_Mastering] = ACTIONS(60),
    [anon_sym_mastering] = ACTIONS(60),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(60),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(60),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(60),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(60),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(60),
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
    [anon_sym_u58f0u4e50] = ACTIONS(60),
    [anon_sym_u4e50u5668] = ACTIONS(60),
    [anon_sym_u6df7u97f3] = ACTIONS(60),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(60),
  },
  [36] = {
    [sym__quotable_creator_name] = STATE(124),
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [37] = {
    [sym__quotable_creator_name] = STATE(24),
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
    [anon_sym_GuestVocal] = ACTIONS(52),
    [anon_sym_Guestvocal] = ACTIONS(52),
    [anon_sym_guestvocal] = ACTIONS(52),
    [anon_sym_Chorus] = ACTIONS(52),
    [anon_sym_chorus] = ACTIONS(52),
    [anon_sym_Mixing] = ACTIONS(52),
    [anon_sym_mixing] = ACTIONS(52),
    [anon_sym_Mastering] = ACTIONS(52),
    [anon_sym_mastering] = ACTIONS(52),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(52),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(52),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(52),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(52),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(52),
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
    [anon_sym_u58f0u4e50] = ACTIONS(52),
    [anon_sym_u4e50u5668] = ACTIONS(52),
    [anon_sym_u6df7u97f3] = ACTIONS(52),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(52),
  },
  [38] = {
    [sym_credit_field] = STATE(38),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(38),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [anon_sym_u300a] = ACTIONS(28),
    [aux_sym_song_title_token1] = ACTIONS(28),
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
    [anon_sym_GuestVocal] = ACTIONS(30),
    [anon_sym_Guestvocal] = ACTIONS(30),
    [anon_sym_guestvocal] = ACTIONS(30),
    [anon_sym_Chorus] = ACTIONS(30),
    [anon_sym_chorus] = ACTIONS(30),
    [anon_sym_Mixing] = ACTIONS(30),
    [anon_sym_mixing] = ACTIONS(30),
    [anon_sym_Mastering] = ACTIONS(30),
    [anon_sym_mastering] = ACTIONS(30),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(30),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(30),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(30),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(30),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(30),
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
    [anon_sym_u58f0u4e50] = ACTIONS(30),
    [anon_sym_u4e50u5668] = ACTIONS(30),
    [anon_sym_u6df7u97f3] = ACTIONS(30),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(30),
  },
  [39] = {
    [aux_sym_feat_field_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(102),
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
    [anon_sym_GuestVocal] = ACTIONS(102),
    [anon_sym_Guestvocal] = ACTIONS(102),
    [anon_sym_guestvocal] = ACTIONS(102),
    [anon_sym_Chorus] = ACTIONS(102),
    [anon_sym_chorus] = ACTIONS(102),
    [anon_sym_Mixing] = ACTIONS(102),
    [anon_sym_mixing] = ACTIONS(102),
    [anon_sym_Mastering] = ACTIONS(102),
    [anon_sym_mastering] = ACTIONS(102),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(102),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(102),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(102),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(102),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(102),
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
    [anon_sym_u58f0u4e50] = ACTIONS(102),
    [anon_sym_u4e50u5668] = ACTIONS(102),
    [anon_sym_u6df7u97f3] = ACTIONS(102),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(102),
    [sym__ssep] = ACTIONS(129),
  },
  [40] = {
    [sym__quotable_creator_name] = STATE(124),
    [anon_sym_DISC] = ACTIONS(72),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym_creator_name] = ACTIONS(76),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [41] = {
    [aux_sym_song_title_repeat1] = STATE(41),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(133),
    [aux_sym_feat_field_token1] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(21),
    [anon_sym_music] = ACTIONS(21),
    [anon_sym_Composition] = ACTIONS(21),
    [anon_sym_composition] = ACTIONS(21),
    [anon_sym_Composer] = ACTIONS(21),
    [anon_sym_composer] = ACTIONS(21),
    [anon_sym_Compose] = ACTIONS(21),
    [anon_sym_compose] = ACTIONS(21),
    [anon_sym_Lyrics] = ACTIONS(21),
    [anon_sym_lyrics] = ACTIONS(21),
    [anon_sym_Lyricist] = ACTIONS(21),
    [anon_sym_lyricist] = ACTIONS(21),
    [anon_sym_Lyric] = ACTIONS(21),
    [anon_sym_lyric] = ACTIONS(21),
    [anon_sym_Arrangement] = ACTIONS(21),
    [anon_sym_arrangement] = ACTIONS(21),
    [anon_sym_Arranger] = ACTIONS(21),
    [anon_sym_arranger] = ACTIONS(21),
    [anon_sym_Arrange] = ACTIONS(21),
    [anon_sym_arrange] = ACTIONS(21),
    [anon_sym_Vocal] = ACTIONS(21),
    [anon_sym_vocal] = ACTIONS(21),
    [anon_sym_Vo] = ACTIONS(21),
    [anon_sym_vo] = ACTIONS(21),
    [anon_sym_Performer] = ACTIONS(21),
    [anon_sym_performer] = ACTIONS(21),
    [anon_sym_Illustration] = ACTIONS(21),
    [anon_sym_illustration] = ACTIONS(21),
    [anon_sym_Illust] = ACTIONS(21),
    [anon_sym_illust] = ACTIONS(21),
    [anon_sym_Label] = ACTIONS(21),
    [anon_sym_label] = ACTIONS(21),
    [anon_sym_Circle] = ACTIONS(21),
    [anon_sym_circle] = ACTIONS(21),
    [anon_sym_Producer] = ACTIONS(21),
    [anon_sym_producer] = ACTIONS(21),
    [anon_sym_Recording] = ACTIONS(21),
    [anon_sym_recording] = ACTIONS(21),
    [anon_sym_GuestVocal] = ACTIONS(21),
    [anon_sym_Guestvocal] = ACTIONS(21),
    [anon_sym_guestvocal] = ACTIONS(21),
    [anon_sym_Chorus] = ACTIONS(21),
    [anon_sym_chorus] = ACTIONS(21),
    [anon_sym_Mixing] = ACTIONS(21),
    [anon_sym_mixing] = ACTIONS(21),
    [anon_sym_Mastering] = ACTIONS(21),
    [anon_sym_mastering] = ACTIONS(21),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(21),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(21),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(21),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(21),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(21),
    [anon_sym_u6b4cu5531] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(21),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu66f2] = ACTIONS(21),
    [anon_sym_u7de8u66f2] = ACTIONS(21),
    [anon_sym_u4f5cu8a5e] = ACTIONS(21),
    [anon_sym_u5382u724c] = ACTIONS(21),
    [anon_sym_u811au672c] = ACTIONS(21),
    [anon_sym_u63d2u56fe] = ACTIONS(21),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(21),
    [anon_sym_u51fau7248u65b9] = ACTIONS(21),
    [anon_sym_u5f55u97f3] = ACTIONS(21),
    [anon_sym_u539fu4f5c] = ACTIONS(21),
    [anon_sym_u58f0u4e50] = ACTIONS(21),
    [anon_sym_u4e50u5668] = ACTIONS(21),
    [anon_sym_u6df7u97f3] = ACTIONS(21),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(21),
  },
  [42] = {
    [aux_sym_song_title_repeat1] = STATE(41),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(136),
    [aux_sym_feat_field_token1] = ACTIONS(35),
    [anon_sym_Music] = ACTIONS(35),
    [anon_sym_music] = ACTIONS(35),
    [anon_sym_Composition] = ACTIONS(35),
    [anon_sym_composition] = ACTIONS(35),
    [anon_sym_Composer] = ACTIONS(35),
    [anon_sym_composer] = ACTIONS(35),
    [anon_sym_Compose] = ACTIONS(35),
    [anon_sym_compose] = ACTIONS(35),
    [anon_sym_Lyrics] = ACTIONS(35),
    [anon_sym_lyrics] = ACTIONS(35),
    [anon_sym_Lyricist] = ACTIONS(35),
    [anon_sym_lyricist] = ACTIONS(35),
    [anon_sym_Lyric] = ACTIONS(35),
    [anon_sym_lyric] = ACTIONS(35),
    [anon_sym_Arrangement] = ACTIONS(35),
    [anon_sym_arrangement] = ACTIONS(35),
    [anon_sym_Arranger] = ACTIONS(35),
    [anon_sym_arranger] = ACTIONS(35),
    [anon_sym_Arrange] = ACTIONS(35),
    [anon_sym_arrange] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Vo] = ACTIONS(35),
    [anon_sym_vo] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illust] = ACTIONS(35),
    [anon_sym_illust] = ACTIONS(35),
    [anon_sym_Label] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
    [anon_sym_Circle] = ACTIONS(35),
    [anon_sym_circle] = ACTIONS(35),
    [anon_sym_Producer] = ACTIONS(35),
    [anon_sym_producer] = ACTIONS(35),
    [anon_sym_Recording] = ACTIONS(35),
    [anon_sym_recording] = ACTIONS(35),
    [anon_sym_GuestVocal] = ACTIONS(35),
    [anon_sym_Guestvocal] = ACTIONS(35),
    [anon_sym_guestvocal] = ACTIONS(35),
    [anon_sym_Chorus] = ACTIONS(35),
    [anon_sym_chorus] = ACTIONS(35),
    [anon_sym_Mixing] = ACTIONS(35),
    [anon_sym_mixing] = ACTIONS(35),
    [anon_sym_Mastering] = ACTIONS(35),
    [anon_sym_mastering] = ACTIONS(35),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(35),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(35),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(35),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(35),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u5382u724c] = ACTIONS(35),
    [anon_sym_u811au672c] = ACTIONS(35),
    [anon_sym_u63d2u56fe] = ACTIONS(35),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(35),
    [anon_sym_u51fau7248u65b9] = ACTIONS(35),
    [anon_sym_u5f55u97f3] = ACTIONS(35),
    [anon_sym_u539fu4f5c] = ACTIONS(35),
    [anon_sym_u58f0u4e50] = ACTIONS(35),
    [anon_sym_u4e50u5668] = ACTIONS(35),
    [anon_sym_u6df7u97f3] = ACTIONS(35),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(35),
  },
  [43] = {
    [sym_credit_field] = STATE(38),
    [sym_role] = STATE(132),
    [aux_sym_credit_block_repeat1] = STATE(38),
    [aux_sym_credit_field_repeat1] = STATE(46),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(41),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [44] = {
    [aux_sym_feat_field_repeat1] = STATE(50),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(92),
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
    [anon_sym_u58f0u4e50] = ACTIONS(92),
    [anon_sym_u4e50u5668] = ACTIONS(92),
    [anon_sym_u6df7u97f3] = ACTIONS(92),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(92),
    [sym__ssep] = ACTIONS(138),
  },
  [45] = {
    [sym__quotable_creator_name] = STATE(110),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [46] = {
    [sym__quotable_creator_name] = STATE(116),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [47] = {
    [sym__quotable_creator_name] = STATE(112),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_DISC] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_SLASH_SLASH] = ACTIONS(142),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(142),
    [anon_sym_Music] = ACTIONS(142),
    [anon_sym_music] = ACTIONS(142),
    [anon_sym_Composition] = ACTIONS(142),
    [anon_sym_composition] = ACTIONS(142),
    [anon_sym_Composer] = ACTIONS(142),
    [anon_sym_composer] = ACTIONS(142),
    [anon_sym_Compose] = ACTIONS(144),
    [anon_sym_compose] = ACTIONS(144),
    [anon_sym_Lyrics] = ACTIONS(142),
    [anon_sym_lyrics] = ACTIONS(142),
    [anon_sym_Lyricist] = ACTIONS(142),
    [anon_sym_lyricist] = ACTIONS(142),
    [anon_sym_Lyric] = ACTIONS(144),
    [anon_sym_lyric] = ACTIONS(144),
    [anon_sym_Arrangement] = ACTIONS(142),
    [anon_sym_arrangement] = ACTIONS(142),
    [anon_sym_Arranger] = ACTIONS(142),
    [anon_sym_arranger] = ACTIONS(142),
    [anon_sym_Arrange] = ACTIONS(144),
    [anon_sym_arrange] = ACTIONS(144),
    [anon_sym_Vocal] = ACTIONS(142),
    [anon_sym_vocal] = ACTIONS(142),
    [anon_sym_Vo] = ACTIONS(144),
    [anon_sym_vo] = ACTIONS(144),
    [anon_sym_Performer] = ACTIONS(142),
    [anon_sym_performer] = ACTIONS(142),
    [anon_sym_Illustration] = ACTIONS(142),
    [anon_sym_illustration] = ACTIONS(142),
    [anon_sym_Illust] = ACTIONS(144),
    [anon_sym_illust] = ACTIONS(144),
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
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(142),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu66f2] = ACTIONS(142),
    [anon_sym_u7de8u66f2] = ACTIONS(142),
    [anon_sym_u4f5cu8a5e] = ACTIONS(144),
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
    [sym__quotable_creator_name] = STATE(118),
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [anon_sym_u300a] = ACTIONS(140),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_u58f0u4e50] = ACTIONS(9),
    [anon_sym_u4e50u5668] = ACTIONS(9),
    [anon_sym_u6df7u97f3] = ACTIONS(9),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(9),
  },
  [50] = {
    [aux_sym_feat_field_repeat1] = STATE(8),
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(102),
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
    [anon_sym_GuestVocal] = ACTIONS(102),
    [anon_sym_Guestvocal] = ACTIONS(102),
    [anon_sym_guestvocal] = ACTIONS(102),
    [anon_sym_Chorus] = ACTIONS(102),
    [anon_sym_chorus] = ACTIONS(102),
    [anon_sym_Mixing] = ACTIONS(102),
    [anon_sym_mixing] = ACTIONS(102),
    [anon_sym_Mastering] = ACTIONS(102),
    [anon_sym_mastering] = ACTIONS(102),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(102),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(102),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(102),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(102),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(102),
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
    [anon_sym_u58f0u4e50] = ACTIONS(102),
    [anon_sym_u4e50u5668] = ACTIONS(102),
    [anon_sym_u6df7u97f3] = ACTIONS(102),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(102),
    [sym__ssep] = ACTIONS(146),
  },
  [51] = {
    [sym_feat_field] = STATE(32),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(64),
    [aux_sym_feat_field_token1] = ACTIONS(148),
    [anon_sym_Music] = ACTIONS(64),
    [anon_sym_music] = ACTIONS(64),
    [anon_sym_Composition] = ACTIONS(64),
    [anon_sym_composition] = ACTIONS(64),
    [anon_sym_Composer] = ACTIONS(64),
    [anon_sym_composer] = ACTIONS(64),
    [anon_sym_Compose] = ACTIONS(68),
    [anon_sym_compose] = ACTIONS(68),
    [anon_sym_Lyrics] = ACTIONS(64),
    [anon_sym_lyrics] = ACTIONS(64),
    [anon_sym_Lyricist] = ACTIONS(64),
    [anon_sym_lyricist] = ACTIONS(64),
    [anon_sym_Lyric] = ACTIONS(68),
    [anon_sym_lyric] = ACTIONS(68),
    [anon_sym_Arrangement] = ACTIONS(64),
    [anon_sym_arrangement] = ACTIONS(64),
    [anon_sym_Arranger] = ACTIONS(64),
    [anon_sym_arranger] = ACTIONS(64),
    [anon_sym_Arrange] = ACTIONS(68),
    [anon_sym_arrange] = ACTIONS(68),
    [anon_sym_Vocal] = ACTIONS(64),
    [anon_sym_vocal] = ACTIONS(64),
    [anon_sym_Vo] = ACTIONS(68),
    [anon_sym_vo] = ACTIONS(68),
    [anon_sym_Performer] = ACTIONS(64),
    [anon_sym_performer] = ACTIONS(64),
    [anon_sym_Illustration] = ACTIONS(64),
    [anon_sym_illustration] = ACTIONS(64),
    [anon_sym_Illust] = ACTIONS(68),
    [anon_sym_illust] = ACTIONS(68),
    [anon_sym_Label] = ACTIONS(64),
    [anon_sym_label] = ACTIONS(64),
    [anon_sym_Circle] = ACTIONS(64),
    [anon_sym_circle] = ACTIONS(64),
    [anon_sym_Producer] = ACTIONS(64),
    [anon_sym_producer] = ACTIONS(64),
    [anon_sym_Recording] = ACTIONS(64),
    [anon_sym_recording] = ACTIONS(64),
    [anon_sym_GuestVocal] = ACTIONS(64),
    [anon_sym_Guestvocal] = ACTIONS(64),
    [anon_sym_guestvocal] = ACTIONS(64),
    [anon_sym_Chorus] = ACTIONS(64),
    [anon_sym_chorus] = ACTIONS(64),
    [anon_sym_Mixing] = ACTIONS(64),
    [anon_sym_mixing] = ACTIONS(64),
    [anon_sym_Mastering] = ACTIONS(64),
    [anon_sym_mastering] = ACTIONS(64),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(64),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(64),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(64),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(64),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(68),
    [anon_sym_u5382u724c] = ACTIONS(64),
    [anon_sym_u811au672c] = ACTIONS(64),
    [anon_sym_u63d2u56fe] = ACTIONS(64),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(64),
    [anon_sym_u51fau7248u65b9] = ACTIONS(64),
    [anon_sym_u5f55u97f3] = ACTIONS(64),
    [anon_sym_u539fu4f5c] = ACTIONS(64),
    [anon_sym_u58f0u4e50] = ACTIONS(64),
    [anon_sym_u4e50u5668] = ACTIONS(64),
    [anon_sym_u6df7u97f3] = ACTIONS(64),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(64),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DISC] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_SLASH_SLASH] = ACTIONS(152),
    [aux_sym__quotable_song_title_maybefeat_maybecomment_token2] = ACTIONS(154),
    [anon_sym_Music] = ACTIONS(150),
    [anon_sym_music] = ACTIONS(150),
    [anon_sym_Composition] = ACTIONS(150),
    [anon_sym_composition] = ACTIONS(150),
    [anon_sym_Composer] = ACTIONS(150),
    [anon_sym_composer] = ACTIONS(150),
    [anon_sym_Compose] = ACTIONS(156),
    [anon_sym_compose] = ACTIONS(156),
    [anon_sym_Lyrics] = ACTIONS(150),
    [anon_sym_lyrics] = ACTIONS(150),
    [anon_sym_Lyricist] = ACTIONS(150),
    [anon_sym_lyricist] = ACTIONS(150),
    [anon_sym_Lyric] = ACTIONS(156),
    [anon_sym_lyric] = ACTIONS(156),
    [anon_sym_Arrangement] = ACTIONS(150),
    [anon_sym_arrangement] = ACTIONS(150),
    [anon_sym_Arranger] = ACTIONS(150),
    [anon_sym_arranger] = ACTIONS(150),
    [anon_sym_Arrange] = ACTIONS(156),
    [anon_sym_arrange] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(150),
    [anon_sym_vocal] = ACTIONS(150),
    [anon_sym_Vo] = ACTIONS(156),
    [anon_sym_vo] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(150),
    [anon_sym_performer] = ACTIONS(150),
    [anon_sym_Illustration] = ACTIONS(150),
    [anon_sym_illustration] = ACTIONS(150),
    [anon_sym_Illust] = ACTIONS(156),
    [anon_sym_illust] = ACTIONS(156),
    [anon_sym_Label] = ACTIONS(150),
    [anon_sym_label] = ACTIONS(150),
    [anon_sym_Circle] = ACTIONS(150),
    [anon_sym_circle] = ACTIONS(150),
    [anon_sym_Producer] = ACTIONS(150),
    [anon_sym_producer] = ACTIONS(150),
    [anon_sym_Recording] = ACTIONS(150),
    [anon_sym_recording] = ACTIONS(150),
    [anon_sym_GuestVocal] = ACTIONS(150),
    [anon_sym_Guestvocal] = ACTIONS(150),
    [anon_sym_guestvocal] = ACTIONS(150),
    [anon_sym_Chorus] = ACTIONS(150),
    [anon_sym_chorus] = ACTIONS(150),
    [anon_sym_Mixing] = ACTIONS(150),
    [anon_sym_mixing] = ACTIONS(150),
    [anon_sym_Mastering] = ACTIONS(150),
    [anon_sym_mastering] = ACTIONS(150),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(150),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(150),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(150),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(150),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(150),
    [anon_sym_u6b4cu5531] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu66f2] = ACTIONS(150),
    [anon_sym_u7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5e] = ACTIONS(156),
    [anon_sym_u5382u724c] = ACTIONS(150),
    [anon_sym_u811au672c] = ACTIONS(150),
    [anon_sym_u63d2u56fe] = ACTIONS(150),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(150),
    [anon_sym_u51fau7248u65b9] = ACTIONS(150),
    [anon_sym_u5f55u97f3] = ACTIONS(150),
    [anon_sym_u539fu4f5c] = ACTIONS(150),
    [anon_sym_u58f0u4e50] = ACTIONS(150),
    [anon_sym_u4e50u5668] = ACTIONS(150),
    [anon_sym_u6df7u97f3] = ACTIONS(150),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(150),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DISC] = ACTIONS(158),
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
    [anon_sym_GuestVocal] = ACTIONS(158),
    [anon_sym_Guestvocal] = ACTIONS(158),
    [anon_sym_guestvocal] = ACTIONS(158),
    [anon_sym_Chorus] = ACTIONS(158),
    [anon_sym_chorus] = ACTIONS(158),
    [anon_sym_Mixing] = ACTIONS(158),
    [anon_sym_mixing] = ACTIONS(158),
    [anon_sym_Mastering] = ACTIONS(158),
    [anon_sym_mastering] = ACTIONS(158),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(158),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(158),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(158),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(158),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(158),
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
    [anon_sym_u58f0u4e50] = ACTIONS(158),
    [anon_sym_u4e50u5668] = ACTIONS(158),
    [anon_sym_u6df7u97f3] = ACTIONS(158),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(158),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DISC] = ACTIONS(164),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
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
    [anon_sym_GuestVocal] = ACTIONS(164),
    [anon_sym_Guestvocal] = ACTIONS(164),
    [anon_sym_guestvocal] = ACTIONS(164),
    [anon_sym_Chorus] = ACTIONS(164),
    [anon_sym_chorus] = ACTIONS(164),
    [anon_sym_Mixing] = ACTIONS(164),
    [anon_sym_mixing] = ACTIONS(164),
    [anon_sym_Mastering] = ACTIONS(164),
    [anon_sym_mastering] = ACTIONS(164),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(164),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(164),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(164),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(164),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(164),
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
    [anon_sym_u58f0u4e50] = ACTIONS(164),
    [anon_sym_u4e50u5668] = ACTIONS(164),
    [anon_sym_u6df7u97f3] = ACTIONS(164),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(164),
    [sym__sep] = ACTIONS(166),
  },
  [55] = {
    [sym__quotable_creator_name] = STATE(124),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
    [sym_creator_name] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DISC] = ACTIONS(172),
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [anon_sym_Music] = ACTIONS(172),
    [anon_sym_music] = ACTIONS(172),
    [anon_sym_Composition] = ACTIONS(172),
    [anon_sym_composition] = ACTIONS(172),
    [anon_sym_Composer] = ACTIONS(172),
    [anon_sym_composer] = ACTIONS(172),
    [anon_sym_Compose] = ACTIONS(172),
    [anon_sym_compose] = ACTIONS(172),
    [anon_sym_Lyrics] = ACTIONS(172),
    [anon_sym_lyrics] = ACTIONS(172),
    [anon_sym_Lyricist] = ACTIONS(172),
    [anon_sym_lyricist] = ACTIONS(172),
    [anon_sym_Lyric] = ACTIONS(172),
    [anon_sym_lyric] = ACTIONS(172),
    [anon_sym_Arrangement] = ACTIONS(172),
    [anon_sym_arrangement] = ACTIONS(172),
    [anon_sym_Arranger] = ACTIONS(172),
    [anon_sym_arranger] = ACTIONS(172),
    [anon_sym_Arrange] = ACTIONS(172),
    [anon_sym_arrange] = ACTIONS(172),
    [anon_sym_Vocal] = ACTIONS(172),
    [anon_sym_vocal] = ACTIONS(172),
    [anon_sym_Vo] = ACTIONS(172),
    [anon_sym_vo] = ACTIONS(172),
    [anon_sym_Performer] = ACTIONS(172),
    [anon_sym_performer] = ACTIONS(172),
    [anon_sym_Illustration] = ACTIONS(172),
    [anon_sym_illustration] = ACTIONS(172),
    [anon_sym_Illust] = ACTIONS(172),
    [anon_sym_illust] = ACTIONS(172),
    [anon_sym_Label] = ACTIONS(172),
    [anon_sym_label] = ACTIONS(172),
    [anon_sym_Circle] = ACTIONS(172),
    [anon_sym_circle] = ACTIONS(172),
    [anon_sym_Producer] = ACTIONS(172),
    [anon_sym_producer] = ACTIONS(172),
    [anon_sym_Recording] = ACTIONS(172),
    [anon_sym_recording] = ACTIONS(172),
    [anon_sym_GuestVocal] = ACTIONS(172),
    [anon_sym_Guestvocal] = ACTIONS(172),
    [anon_sym_guestvocal] = ACTIONS(172),
    [anon_sym_Chorus] = ACTIONS(172),
    [anon_sym_chorus] = ACTIONS(172),
    [anon_sym_Mixing] = ACTIONS(172),
    [anon_sym_mixing] = ACTIONS(172),
    [anon_sym_Mastering] = ACTIONS(172),
    [anon_sym_mastering] = ACTIONS(172),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(172),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(172),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(172),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(172),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u5382u724c] = ACTIONS(172),
    [anon_sym_u811au672c] = ACTIONS(172),
    [anon_sym_u63d2u56fe] = ACTIONS(172),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(172),
    [anon_sym_u51fau7248u65b9] = ACTIONS(172),
    [anon_sym_u5f55u97f3] = ACTIONS(172),
    [anon_sym_u539fu4f5c] = ACTIONS(172),
    [anon_sym_u58f0u4e50] = ACTIONS(172),
    [anon_sym_u4e50u5668] = ACTIONS(172),
    [anon_sym_u6df7u97f3] = ACTIONS(172),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(172),
    [sym__sep] = ACTIONS(174),
  },
  [57] = {
    [sym__quotable_creator_name] = STATE(124),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym_creator_name] = ACTIONS(76),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [59] = {
    [anon_sym_DISC] = ACTIONS(172),
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [anon_sym_Music] = ACTIONS(172),
    [anon_sym_music] = ACTIONS(172),
    [anon_sym_Composition] = ACTIONS(172),
    [anon_sym_composition] = ACTIONS(172),
    [anon_sym_Composer] = ACTIONS(172),
    [anon_sym_composer] = ACTIONS(172),
    [anon_sym_Compose] = ACTIONS(172),
    [anon_sym_compose] = ACTIONS(172),
    [anon_sym_Lyrics] = ACTIONS(172),
    [anon_sym_lyrics] = ACTIONS(172),
    [anon_sym_Lyricist] = ACTIONS(172),
    [anon_sym_lyricist] = ACTIONS(172),
    [anon_sym_Lyric] = ACTIONS(172),
    [anon_sym_lyric] = ACTIONS(172),
    [anon_sym_Arrangement] = ACTIONS(172),
    [anon_sym_arrangement] = ACTIONS(172),
    [anon_sym_Arranger] = ACTIONS(172),
    [anon_sym_arranger] = ACTIONS(172),
    [anon_sym_Arrange] = ACTIONS(172),
    [anon_sym_arrange] = ACTIONS(172),
    [anon_sym_Vocal] = ACTIONS(172),
    [anon_sym_vocal] = ACTIONS(172),
    [anon_sym_Vo] = ACTIONS(172),
    [anon_sym_vo] = ACTIONS(172),
    [anon_sym_Performer] = ACTIONS(172),
    [anon_sym_performer] = ACTIONS(172),
    [anon_sym_Illustration] = ACTIONS(172),
    [anon_sym_illustration] = ACTIONS(172),
    [anon_sym_Illust] = ACTIONS(172),
    [anon_sym_illust] = ACTIONS(172),
    [anon_sym_Label] = ACTIONS(172),
    [anon_sym_label] = ACTIONS(172),
    [anon_sym_Circle] = ACTIONS(172),
    [anon_sym_circle] = ACTIONS(172),
    [anon_sym_Producer] = ACTIONS(172),
    [anon_sym_producer] = ACTIONS(172),
    [anon_sym_Recording] = ACTIONS(172),
    [anon_sym_recording] = ACTIONS(172),
    [anon_sym_GuestVocal] = ACTIONS(172),
    [anon_sym_Guestvocal] = ACTIONS(172),
    [anon_sym_guestvocal] = ACTIONS(172),
    [anon_sym_Chorus] = ACTIONS(172),
    [anon_sym_chorus] = ACTIONS(172),
    [anon_sym_Mixing] = ACTIONS(172),
    [anon_sym_mixing] = ACTIONS(172),
    [anon_sym_Mastering] = ACTIONS(172),
    [anon_sym_mastering] = ACTIONS(172),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(172),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(172),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(172),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(172),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u5382u724c] = ACTIONS(172),
    [anon_sym_u811au672c] = ACTIONS(172),
    [anon_sym_u63d2u56fe] = ACTIONS(172),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(172),
    [anon_sym_u51fau7248u65b9] = ACTIONS(172),
    [anon_sym_u5f55u97f3] = ACTIONS(172),
    [anon_sym_u539fu4f5c] = ACTIONS(172),
    [anon_sym_u58f0u4e50] = ACTIONS(172),
    [anon_sym_u4e50u5668] = ACTIONS(172),
    [anon_sym_u6df7u97f3] = ACTIONS(172),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(172),
    [sym__sep] = ACTIONS(178),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DISC] = ACTIONS(182),
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [anon_sym_Music] = ACTIONS(182),
    [anon_sym_music] = ACTIONS(182),
    [anon_sym_Composition] = ACTIONS(182),
    [anon_sym_composition] = ACTIONS(182),
    [anon_sym_Composer] = ACTIONS(182),
    [anon_sym_composer] = ACTIONS(182),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(182),
    [anon_sym_lyrics] = ACTIONS(182),
    [anon_sym_Lyricist] = ACTIONS(182),
    [anon_sym_lyricist] = ACTIONS(182),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(182),
    [anon_sym_arrangement] = ACTIONS(182),
    [anon_sym_Arranger] = ACTIONS(182),
    [anon_sym_arranger] = ACTIONS(182),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(182),
    [anon_sym_vocal] = ACTIONS(182),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(182),
    [anon_sym_performer] = ACTIONS(182),
    [anon_sym_Illustration] = ACTIONS(182),
    [anon_sym_illustration] = ACTIONS(182),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(182),
    [anon_sym_label] = ACTIONS(182),
    [anon_sym_Circle] = ACTIONS(182),
    [anon_sym_circle] = ACTIONS(182),
    [anon_sym_Producer] = ACTIONS(182),
    [anon_sym_producer] = ACTIONS(182),
    [anon_sym_Recording] = ACTIONS(182),
    [anon_sym_recording] = ACTIONS(182),
    [anon_sym_GuestVocal] = ACTIONS(182),
    [anon_sym_Guestvocal] = ACTIONS(182),
    [anon_sym_guestvocal] = ACTIONS(182),
    [anon_sym_Chorus] = ACTIONS(182),
    [anon_sym_chorus] = ACTIONS(182),
    [anon_sym_Mixing] = ACTIONS(182),
    [anon_sym_mixing] = ACTIONS(182),
    [anon_sym_Mastering] = ACTIONS(182),
    [anon_sym_mastering] = ACTIONS(182),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(182),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(182),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(182),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(182),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(182),
    [anon_sym_u811au672c] = ACTIONS(182),
    [anon_sym_u63d2u56fe] = ACTIONS(182),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(182),
    [anon_sym_u51fau7248u65b9] = ACTIONS(182),
    [anon_sym_u5f55u97f3] = ACTIONS(182),
    [anon_sym_u539fu4f5c] = ACTIONS(182),
    [anon_sym_u58f0u4e50] = ACTIONS(182),
    [anon_sym_u4e50u5668] = ACTIONS(182),
    [anon_sym_u6df7u97f3] = ACTIONS(182),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(182),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_DISC] = ACTIONS(72),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [62] = {
    [sym_role] = STATE(132),
    [aux_sym_credit_field_repeat1] = STATE(62),
    [anon_sym_u300a] = ACTIONS(184),
    [sym_creator_name] = ACTIONS(184),
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
    [anon_sym_GuestVocal] = ACTIONS(186),
    [anon_sym_Guestvocal] = ACTIONS(186),
    [anon_sym_guestvocal] = ACTIONS(186),
    [anon_sym_Chorus] = ACTIONS(186),
    [anon_sym_chorus] = ACTIONS(186),
    [anon_sym_Mixing] = ACTIONS(186),
    [anon_sym_mixing] = ACTIONS(186),
    [anon_sym_Mastering] = ACTIONS(186),
    [anon_sym_mastering] = ACTIONS(186),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(186),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(186),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(186),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(186),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(186),
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
    [anon_sym_u58f0u4e50] = ACTIONS(186),
    [anon_sym_u4e50u5668] = ACTIONS(186),
    [anon_sym_u6df7u97f3] = ACTIONS(186),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(186),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [anon_sym_Music] = ACTIONS(172),
    [anon_sym_music] = ACTIONS(172),
    [anon_sym_Composition] = ACTIONS(172),
    [anon_sym_composition] = ACTIONS(172),
    [anon_sym_Composer] = ACTIONS(172),
    [anon_sym_composer] = ACTIONS(172),
    [anon_sym_Compose] = ACTIONS(172),
    [anon_sym_compose] = ACTIONS(172),
    [anon_sym_Lyrics] = ACTIONS(172),
    [anon_sym_lyrics] = ACTIONS(172),
    [anon_sym_Lyricist] = ACTIONS(172),
    [anon_sym_lyricist] = ACTIONS(172),
    [anon_sym_Lyric] = ACTIONS(172),
    [anon_sym_lyric] = ACTIONS(172),
    [anon_sym_Arrangement] = ACTIONS(172),
    [anon_sym_arrangement] = ACTIONS(172),
    [anon_sym_Arranger] = ACTIONS(172),
    [anon_sym_arranger] = ACTIONS(172),
    [anon_sym_Arrange] = ACTIONS(172),
    [anon_sym_arrange] = ACTIONS(172),
    [anon_sym_Vocal] = ACTIONS(172),
    [anon_sym_vocal] = ACTIONS(172),
    [anon_sym_Vo] = ACTIONS(172),
    [anon_sym_vo] = ACTIONS(172),
    [anon_sym_Performer] = ACTIONS(172),
    [anon_sym_performer] = ACTIONS(172),
    [anon_sym_Illustration] = ACTIONS(172),
    [anon_sym_illustration] = ACTIONS(172),
    [anon_sym_Illust] = ACTIONS(172),
    [anon_sym_illust] = ACTIONS(172),
    [anon_sym_Label] = ACTIONS(172),
    [anon_sym_label] = ACTIONS(172),
    [anon_sym_Circle] = ACTIONS(172),
    [anon_sym_circle] = ACTIONS(172),
    [anon_sym_Producer] = ACTIONS(172),
    [anon_sym_producer] = ACTIONS(172),
    [anon_sym_Recording] = ACTIONS(172),
    [anon_sym_recording] = ACTIONS(172),
    [anon_sym_GuestVocal] = ACTIONS(172),
    [anon_sym_Guestvocal] = ACTIONS(172),
    [anon_sym_guestvocal] = ACTIONS(172),
    [anon_sym_Chorus] = ACTIONS(172),
    [anon_sym_chorus] = ACTIONS(172),
    [anon_sym_Mixing] = ACTIONS(172),
    [anon_sym_mixing] = ACTIONS(172),
    [anon_sym_Mastering] = ACTIONS(172),
    [anon_sym_mastering] = ACTIONS(172),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(172),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(172),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(172),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(172),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u5382u724c] = ACTIONS(172),
    [anon_sym_u811au672c] = ACTIONS(172),
    [anon_sym_u63d2u56fe] = ACTIONS(172),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(172),
    [anon_sym_u51fau7248u65b9] = ACTIONS(172),
    [anon_sym_u5f55u97f3] = ACTIONS(172),
    [anon_sym_u539fu4f5c] = ACTIONS(172),
    [anon_sym_u58f0u4e50] = ACTIONS(172),
    [anon_sym_u4e50u5668] = ACTIONS(172),
    [anon_sym_u6df7u97f3] = ACTIONS(172),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(172),
    [sym__sep] = ACTIONS(189),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_DISC] = ACTIONS(193),
    [anon_sym_u300a] = ACTIONS(193),
    [aux_sym_song_title_token1] = ACTIONS(193),
    [anon_sym_Music] = ACTIONS(193),
    [anon_sym_music] = ACTIONS(193),
    [anon_sym_Composition] = ACTIONS(193),
    [anon_sym_composition] = ACTIONS(193),
    [anon_sym_Composer] = ACTIONS(193),
    [anon_sym_composer] = ACTIONS(193),
    [anon_sym_Compose] = ACTIONS(193),
    [anon_sym_compose] = ACTIONS(193),
    [anon_sym_Lyrics] = ACTIONS(193),
    [anon_sym_lyrics] = ACTIONS(193),
    [anon_sym_Lyricist] = ACTIONS(193),
    [anon_sym_lyricist] = ACTIONS(193),
    [anon_sym_Lyric] = ACTIONS(193),
    [anon_sym_lyric] = ACTIONS(193),
    [anon_sym_Arrangement] = ACTIONS(193),
    [anon_sym_arrangement] = ACTIONS(193),
    [anon_sym_Arranger] = ACTIONS(193),
    [anon_sym_arranger] = ACTIONS(193),
    [anon_sym_Arrange] = ACTIONS(193),
    [anon_sym_arrange] = ACTIONS(193),
    [anon_sym_Vocal] = ACTIONS(193),
    [anon_sym_vocal] = ACTIONS(193),
    [anon_sym_Vo] = ACTIONS(193),
    [anon_sym_vo] = ACTIONS(193),
    [anon_sym_Performer] = ACTIONS(193),
    [anon_sym_performer] = ACTIONS(193),
    [anon_sym_Illustration] = ACTIONS(193),
    [anon_sym_illustration] = ACTIONS(193),
    [anon_sym_Illust] = ACTIONS(193),
    [anon_sym_illust] = ACTIONS(193),
    [anon_sym_Label] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(193),
    [anon_sym_Circle] = ACTIONS(193),
    [anon_sym_circle] = ACTIONS(193),
    [anon_sym_Producer] = ACTIONS(193),
    [anon_sym_producer] = ACTIONS(193),
    [anon_sym_Recording] = ACTIONS(193),
    [anon_sym_recording] = ACTIONS(193),
    [anon_sym_GuestVocal] = ACTIONS(193),
    [anon_sym_Guestvocal] = ACTIONS(193),
    [anon_sym_guestvocal] = ACTIONS(193),
    [anon_sym_Chorus] = ACTIONS(193),
    [anon_sym_chorus] = ACTIONS(193),
    [anon_sym_Mixing] = ACTIONS(193),
    [anon_sym_mixing] = ACTIONS(193),
    [anon_sym_Mastering] = ACTIONS(193),
    [anon_sym_mastering] = ACTIONS(193),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(193),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(193),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(193),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(193),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(193),
    [anon_sym_u6b4cu5531] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu66f2] = ACTIONS(193),
    [anon_sym_u7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5e] = ACTIONS(193),
    [anon_sym_u5382u724c] = ACTIONS(193),
    [anon_sym_u811au672c] = ACTIONS(193),
    [anon_sym_u63d2u56fe] = ACTIONS(193),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(193),
    [anon_sym_u51fau7248u65b9] = ACTIONS(193),
    [anon_sym_u5f55u97f3] = ACTIONS(193),
    [anon_sym_u539fu4f5c] = ACTIONS(193),
    [anon_sym_u58f0u4e50] = ACTIONS(193),
    [anon_sym_u4e50u5668] = ACTIONS(193),
    [anon_sym_u6df7u97f3] = ACTIONS(193),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(193),
  },
  [65] = {
    [anon_sym_DISC] = ACTIONS(164),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
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
    [anon_sym_GuestVocal] = ACTIONS(164),
    [anon_sym_Guestvocal] = ACTIONS(164),
    [anon_sym_guestvocal] = ACTIONS(164),
    [anon_sym_Chorus] = ACTIONS(164),
    [anon_sym_chorus] = ACTIONS(164),
    [anon_sym_Mixing] = ACTIONS(164),
    [anon_sym_mixing] = ACTIONS(164),
    [anon_sym_Mastering] = ACTIONS(164),
    [anon_sym_mastering] = ACTIONS(164),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(164),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(164),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(164),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(164),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(164),
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
    [anon_sym_u58f0u4e50] = ACTIONS(164),
    [anon_sym_u4e50u5668] = ACTIONS(164),
    [anon_sym_u6df7u97f3] = ACTIONS(164),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(164),
    [sym__sep] = ACTIONS(195),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
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
    [anon_sym_GuestVocal] = ACTIONS(164),
    [anon_sym_Guestvocal] = ACTIONS(164),
    [anon_sym_guestvocal] = ACTIONS(164),
    [anon_sym_Chorus] = ACTIONS(164),
    [anon_sym_chorus] = ACTIONS(164),
    [anon_sym_Mixing] = ACTIONS(164),
    [anon_sym_mixing] = ACTIONS(164),
    [anon_sym_Mastering] = ACTIONS(164),
    [anon_sym_mastering] = ACTIONS(164),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(164),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(164),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(164),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(164),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(164),
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
    [anon_sym_u58f0u4e50] = ACTIONS(164),
    [anon_sym_u4e50u5668] = ACTIONS(164),
    [anon_sym_u6df7u97f3] = ACTIONS(164),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(164),
    [sym__sep] = ACTIONS(197),
  },
  [67] = {
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [anon_sym_Music] = ACTIONS(172),
    [anon_sym_music] = ACTIONS(172),
    [anon_sym_Composition] = ACTIONS(172),
    [anon_sym_composition] = ACTIONS(172),
    [anon_sym_Composer] = ACTIONS(172),
    [anon_sym_composer] = ACTIONS(172),
    [anon_sym_Compose] = ACTIONS(172),
    [anon_sym_compose] = ACTIONS(172),
    [anon_sym_Lyrics] = ACTIONS(172),
    [anon_sym_lyrics] = ACTIONS(172),
    [anon_sym_Lyricist] = ACTIONS(172),
    [anon_sym_lyricist] = ACTIONS(172),
    [anon_sym_Lyric] = ACTIONS(172),
    [anon_sym_lyric] = ACTIONS(172),
    [anon_sym_Arrangement] = ACTIONS(172),
    [anon_sym_arrangement] = ACTIONS(172),
    [anon_sym_Arranger] = ACTIONS(172),
    [anon_sym_arranger] = ACTIONS(172),
    [anon_sym_Arrange] = ACTIONS(172),
    [anon_sym_arrange] = ACTIONS(172),
    [anon_sym_Vocal] = ACTIONS(172),
    [anon_sym_vocal] = ACTIONS(172),
    [anon_sym_Vo] = ACTIONS(172),
    [anon_sym_vo] = ACTIONS(172),
    [anon_sym_Performer] = ACTIONS(172),
    [anon_sym_performer] = ACTIONS(172),
    [anon_sym_Illustration] = ACTIONS(172),
    [anon_sym_illustration] = ACTIONS(172),
    [anon_sym_Illust] = ACTIONS(172),
    [anon_sym_illust] = ACTIONS(172),
    [anon_sym_Label] = ACTIONS(172),
    [anon_sym_label] = ACTIONS(172),
    [anon_sym_Circle] = ACTIONS(172),
    [anon_sym_circle] = ACTIONS(172),
    [anon_sym_Producer] = ACTIONS(172),
    [anon_sym_producer] = ACTIONS(172),
    [anon_sym_Recording] = ACTIONS(172),
    [anon_sym_recording] = ACTIONS(172),
    [anon_sym_GuestVocal] = ACTIONS(172),
    [anon_sym_Guestvocal] = ACTIONS(172),
    [anon_sym_guestvocal] = ACTIONS(172),
    [anon_sym_Chorus] = ACTIONS(172),
    [anon_sym_chorus] = ACTIONS(172),
    [anon_sym_Mixing] = ACTIONS(172),
    [anon_sym_mixing] = ACTIONS(172),
    [anon_sym_Mastering] = ACTIONS(172),
    [anon_sym_mastering] = ACTIONS(172),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(172),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(172),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(172),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(172),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u5382u724c] = ACTIONS(172),
    [anon_sym_u811au672c] = ACTIONS(172),
    [anon_sym_u63d2u56fe] = ACTIONS(172),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(172),
    [anon_sym_u51fau7248u65b9] = ACTIONS(172),
    [anon_sym_u5f55u97f3] = ACTIONS(172),
    [anon_sym_u539fu4f5c] = ACTIONS(172),
    [anon_sym_u58f0u4e50] = ACTIONS(172),
    [anon_sym_u4e50u5668] = ACTIONS(172),
    [anon_sym_u6df7u97f3] = ACTIONS(172),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(172),
    [sym__sep] = ACTIONS(199),
  },
  [68] = {
    [anon_sym_DISC] = ACTIONS(182),
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [anon_sym_Music] = ACTIONS(182),
    [anon_sym_music] = ACTIONS(182),
    [anon_sym_Composition] = ACTIONS(182),
    [anon_sym_composition] = ACTIONS(182),
    [anon_sym_Composer] = ACTIONS(182),
    [anon_sym_composer] = ACTIONS(182),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(182),
    [anon_sym_lyrics] = ACTIONS(182),
    [anon_sym_Lyricist] = ACTIONS(182),
    [anon_sym_lyricist] = ACTIONS(182),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(182),
    [anon_sym_arrangement] = ACTIONS(182),
    [anon_sym_Arranger] = ACTIONS(182),
    [anon_sym_arranger] = ACTIONS(182),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(182),
    [anon_sym_vocal] = ACTIONS(182),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(182),
    [anon_sym_performer] = ACTIONS(182),
    [anon_sym_Illustration] = ACTIONS(182),
    [anon_sym_illustration] = ACTIONS(182),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(182),
    [anon_sym_label] = ACTIONS(182),
    [anon_sym_Circle] = ACTIONS(182),
    [anon_sym_circle] = ACTIONS(182),
    [anon_sym_Producer] = ACTIONS(182),
    [anon_sym_producer] = ACTIONS(182),
    [anon_sym_Recording] = ACTIONS(182),
    [anon_sym_recording] = ACTIONS(182),
    [anon_sym_GuestVocal] = ACTIONS(182),
    [anon_sym_Guestvocal] = ACTIONS(182),
    [anon_sym_guestvocal] = ACTIONS(182),
    [anon_sym_Chorus] = ACTIONS(182),
    [anon_sym_chorus] = ACTIONS(182),
    [anon_sym_Mixing] = ACTIONS(182),
    [anon_sym_mixing] = ACTIONS(182),
    [anon_sym_Mastering] = ACTIONS(182),
    [anon_sym_mastering] = ACTIONS(182),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(182),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(182),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(182),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(182),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(182),
    [anon_sym_u811au672c] = ACTIONS(182),
    [anon_sym_u63d2u56fe] = ACTIONS(182),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(182),
    [anon_sym_u51fau7248u65b9] = ACTIONS(182),
    [anon_sym_u5f55u97f3] = ACTIONS(182),
    [anon_sym_u539fu4f5c] = ACTIONS(182),
    [anon_sym_u58f0u4e50] = ACTIONS(182),
    [anon_sym_u4e50u5668] = ACTIONS(182),
    [anon_sym_u6df7u97f3] = ACTIONS(182),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(182),
  },
  [69] = {
    [anon_sym_DISC] = ACTIONS(193),
    [anon_sym_u300a] = ACTIONS(193),
    [aux_sym_song_title_token1] = ACTIONS(193),
    [anon_sym_Music] = ACTIONS(193),
    [anon_sym_music] = ACTIONS(193),
    [anon_sym_Composition] = ACTIONS(193),
    [anon_sym_composition] = ACTIONS(193),
    [anon_sym_Composer] = ACTIONS(193),
    [anon_sym_composer] = ACTIONS(193),
    [anon_sym_Compose] = ACTIONS(193),
    [anon_sym_compose] = ACTIONS(193),
    [anon_sym_Lyrics] = ACTIONS(193),
    [anon_sym_lyrics] = ACTIONS(193),
    [anon_sym_Lyricist] = ACTIONS(193),
    [anon_sym_lyricist] = ACTIONS(193),
    [anon_sym_Lyric] = ACTIONS(193),
    [anon_sym_lyric] = ACTIONS(193),
    [anon_sym_Arrangement] = ACTIONS(193),
    [anon_sym_arrangement] = ACTIONS(193),
    [anon_sym_Arranger] = ACTIONS(193),
    [anon_sym_arranger] = ACTIONS(193),
    [anon_sym_Arrange] = ACTIONS(193),
    [anon_sym_arrange] = ACTIONS(193),
    [anon_sym_Vocal] = ACTIONS(193),
    [anon_sym_vocal] = ACTIONS(193),
    [anon_sym_Vo] = ACTIONS(193),
    [anon_sym_vo] = ACTIONS(193),
    [anon_sym_Performer] = ACTIONS(193),
    [anon_sym_performer] = ACTIONS(193),
    [anon_sym_Illustration] = ACTIONS(193),
    [anon_sym_illustration] = ACTIONS(193),
    [anon_sym_Illust] = ACTIONS(193),
    [anon_sym_illust] = ACTIONS(193),
    [anon_sym_Label] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(193),
    [anon_sym_Circle] = ACTIONS(193),
    [anon_sym_circle] = ACTIONS(193),
    [anon_sym_Producer] = ACTIONS(193),
    [anon_sym_producer] = ACTIONS(193),
    [anon_sym_Recording] = ACTIONS(193),
    [anon_sym_recording] = ACTIONS(193),
    [anon_sym_GuestVocal] = ACTIONS(193),
    [anon_sym_Guestvocal] = ACTIONS(193),
    [anon_sym_guestvocal] = ACTIONS(193),
    [anon_sym_Chorus] = ACTIONS(193),
    [anon_sym_chorus] = ACTIONS(193),
    [anon_sym_Mixing] = ACTIONS(193),
    [anon_sym_mixing] = ACTIONS(193),
    [anon_sym_Mastering] = ACTIONS(193),
    [anon_sym_mastering] = ACTIONS(193),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(193),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(193),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(193),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(193),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(193),
    [anon_sym_u6b4cu5531] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu66f2] = ACTIONS(193),
    [anon_sym_u7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5e] = ACTIONS(193),
    [anon_sym_u5382u724c] = ACTIONS(193),
    [anon_sym_u811au672c] = ACTIONS(193),
    [anon_sym_u63d2u56fe] = ACTIONS(193),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(193),
    [anon_sym_u51fau7248u65b9] = ACTIONS(193),
    [anon_sym_u5f55u97f3] = ACTIONS(193),
    [anon_sym_u539fu4f5c] = ACTIONS(193),
    [anon_sym_u58f0u4e50] = ACTIONS(193),
    [anon_sym_u4e50u5668] = ACTIONS(193),
    [anon_sym_u6df7u97f3] = ACTIONS(193),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(193),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_DISC] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_Music] = ACTIONS(201),
    [anon_sym_music] = ACTIONS(201),
    [anon_sym_Composition] = ACTIONS(201),
    [anon_sym_composition] = ACTIONS(201),
    [anon_sym_Composer] = ACTIONS(201),
    [anon_sym_composer] = ACTIONS(201),
    [anon_sym_Compose] = ACTIONS(203),
    [anon_sym_compose] = ACTIONS(203),
    [anon_sym_Lyrics] = ACTIONS(201),
    [anon_sym_lyrics] = ACTIONS(201),
    [anon_sym_Lyricist] = ACTIONS(201),
    [anon_sym_lyricist] = ACTIONS(201),
    [anon_sym_Lyric] = ACTIONS(203),
    [anon_sym_lyric] = ACTIONS(203),
    [anon_sym_Arrangement] = ACTIONS(201),
    [anon_sym_arrangement] = ACTIONS(201),
    [anon_sym_Arranger] = ACTIONS(201),
    [anon_sym_arranger] = ACTIONS(201),
    [anon_sym_Arrange] = ACTIONS(203),
    [anon_sym_arrange] = ACTIONS(203),
    [anon_sym_Vocal] = ACTIONS(201),
    [anon_sym_vocal] = ACTIONS(201),
    [anon_sym_Vo] = ACTIONS(203),
    [anon_sym_vo] = ACTIONS(203),
    [anon_sym_Performer] = ACTIONS(201),
    [anon_sym_performer] = ACTIONS(201),
    [anon_sym_Illustration] = ACTIONS(201),
    [anon_sym_illustration] = ACTIONS(201),
    [anon_sym_Illust] = ACTIONS(203),
    [anon_sym_illust] = ACTIONS(203),
    [anon_sym_Label] = ACTIONS(201),
    [anon_sym_label] = ACTIONS(201),
    [anon_sym_Circle] = ACTIONS(201),
    [anon_sym_circle] = ACTIONS(201),
    [anon_sym_Producer] = ACTIONS(201),
    [anon_sym_producer] = ACTIONS(201),
    [anon_sym_Recording] = ACTIONS(201),
    [anon_sym_recording] = ACTIONS(201),
    [anon_sym_GuestVocal] = ACTIONS(201),
    [anon_sym_Guestvocal] = ACTIONS(201),
    [anon_sym_guestvocal] = ACTIONS(201),
    [anon_sym_Chorus] = ACTIONS(201),
    [anon_sym_chorus] = ACTIONS(201),
    [anon_sym_Mixing] = ACTIONS(201),
    [anon_sym_mixing] = ACTIONS(201),
    [anon_sym_Mastering] = ACTIONS(201),
    [anon_sym_mastering] = ACTIONS(201),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(201),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(201),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(201),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(201),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(201),
    [anon_sym_u6b4cu5531] = ACTIONS(201),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(201),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(201),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(201),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(201),
    [anon_sym_u4f5cu66f2] = ACTIONS(201),
    [anon_sym_u7de8u66f2] = ACTIONS(201),
    [anon_sym_u4f5cu8a5e] = ACTIONS(203),
    [anon_sym_u5382u724c] = ACTIONS(201),
    [anon_sym_u811au672c] = ACTIONS(201),
    [anon_sym_u63d2u56fe] = ACTIONS(201),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(201),
    [anon_sym_u51fau7248u65b9] = ACTIONS(201),
    [anon_sym_u5f55u97f3] = ACTIONS(201),
    [anon_sym_u539fu4f5c] = ACTIONS(201),
    [anon_sym_u58f0u4e50] = ACTIONS(201),
    [anon_sym_u4e50u5668] = ACTIONS(201),
    [anon_sym_u6df7u97f3] = ACTIONS(201),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(201),
  },
  [71] = {
    [anon_sym_DISC] = ACTIONS(72),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [72] = {
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_u300a] = ACTIONS(193),
    [aux_sym_song_title_token1] = ACTIONS(193),
    [anon_sym_Music] = ACTIONS(193),
    [anon_sym_music] = ACTIONS(193),
    [anon_sym_Composition] = ACTIONS(193),
    [anon_sym_composition] = ACTIONS(193),
    [anon_sym_Composer] = ACTIONS(193),
    [anon_sym_composer] = ACTIONS(193),
    [anon_sym_Compose] = ACTIONS(193),
    [anon_sym_compose] = ACTIONS(193),
    [anon_sym_Lyrics] = ACTIONS(193),
    [anon_sym_lyrics] = ACTIONS(193),
    [anon_sym_Lyricist] = ACTIONS(193),
    [anon_sym_lyricist] = ACTIONS(193),
    [anon_sym_Lyric] = ACTIONS(193),
    [anon_sym_lyric] = ACTIONS(193),
    [anon_sym_Arrangement] = ACTIONS(193),
    [anon_sym_arrangement] = ACTIONS(193),
    [anon_sym_Arranger] = ACTIONS(193),
    [anon_sym_arranger] = ACTIONS(193),
    [anon_sym_Arrange] = ACTIONS(193),
    [anon_sym_arrange] = ACTIONS(193),
    [anon_sym_Vocal] = ACTIONS(193),
    [anon_sym_vocal] = ACTIONS(193),
    [anon_sym_Vo] = ACTIONS(193),
    [anon_sym_vo] = ACTIONS(193),
    [anon_sym_Performer] = ACTIONS(193),
    [anon_sym_performer] = ACTIONS(193),
    [anon_sym_Illustration] = ACTIONS(193),
    [anon_sym_illustration] = ACTIONS(193),
    [anon_sym_Illust] = ACTIONS(193),
    [anon_sym_illust] = ACTIONS(193),
    [anon_sym_Label] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(193),
    [anon_sym_Circle] = ACTIONS(193),
    [anon_sym_circle] = ACTIONS(193),
    [anon_sym_Producer] = ACTIONS(193),
    [anon_sym_producer] = ACTIONS(193),
    [anon_sym_Recording] = ACTIONS(193),
    [anon_sym_recording] = ACTIONS(193),
    [anon_sym_GuestVocal] = ACTIONS(193),
    [anon_sym_Guestvocal] = ACTIONS(193),
    [anon_sym_guestvocal] = ACTIONS(193),
    [anon_sym_Chorus] = ACTIONS(193),
    [anon_sym_chorus] = ACTIONS(193),
    [anon_sym_Mixing] = ACTIONS(193),
    [anon_sym_mixing] = ACTIONS(193),
    [anon_sym_Mastering] = ACTIONS(193),
    [anon_sym_mastering] = ACTIONS(193),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(193),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(193),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(193),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(193),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(193),
    [anon_sym_u6b4cu5531] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu66f2] = ACTIONS(193),
    [anon_sym_u7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5e] = ACTIONS(193),
    [anon_sym_u5382u724c] = ACTIONS(193),
    [anon_sym_u811au672c] = ACTIONS(193),
    [anon_sym_u63d2u56fe] = ACTIONS(193),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(193),
    [anon_sym_u51fau7248u65b9] = ACTIONS(193),
    [anon_sym_u5f55u97f3] = ACTIONS(193),
    [anon_sym_u539fu4f5c] = ACTIONS(193),
    [anon_sym_u58f0u4e50] = ACTIONS(193),
    [anon_sym_u4e50u5668] = ACTIONS(193),
    [anon_sym_u6df7u97f3] = ACTIONS(193),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(193),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_DISC] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_Music] = ACTIONS(205),
    [anon_sym_music] = ACTIONS(205),
    [anon_sym_Composition] = ACTIONS(205),
    [anon_sym_composition] = ACTIONS(205),
    [anon_sym_Composer] = ACTIONS(205),
    [anon_sym_composer] = ACTIONS(205),
    [anon_sym_Compose] = ACTIONS(207),
    [anon_sym_compose] = ACTIONS(207),
    [anon_sym_Lyrics] = ACTIONS(205),
    [anon_sym_lyrics] = ACTIONS(205),
    [anon_sym_Lyricist] = ACTIONS(205),
    [anon_sym_lyricist] = ACTIONS(205),
    [anon_sym_Lyric] = ACTIONS(207),
    [anon_sym_lyric] = ACTIONS(207),
    [anon_sym_Arrangement] = ACTIONS(205),
    [anon_sym_arrangement] = ACTIONS(205),
    [anon_sym_Arranger] = ACTIONS(205),
    [anon_sym_arranger] = ACTIONS(205),
    [anon_sym_Arrange] = ACTIONS(207),
    [anon_sym_arrange] = ACTIONS(207),
    [anon_sym_Vocal] = ACTIONS(205),
    [anon_sym_vocal] = ACTIONS(205),
    [anon_sym_Vo] = ACTIONS(207),
    [anon_sym_vo] = ACTIONS(207),
    [anon_sym_Performer] = ACTIONS(205),
    [anon_sym_performer] = ACTIONS(205),
    [anon_sym_Illustration] = ACTIONS(205),
    [anon_sym_illustration] = ACTIONS(205),
    [anon_sym_Illust] = ACTIONS(207),
    [anon_sym_illust] = ACTIONS(207),
    [anon_sym_Label] = ACTIONS(205),
    [anon_sym_label] = ACTIONS(205),
    [anon_sym_Circle] = ACTIONS(205),
    [anon_sym_circle] = ACTIONS(205),
    [anon_sym_Producer] = ACTIONS(205),
    [anon_sym_producer] = ACTIONS(205),
    [anon_sym_Recording] = ACTIONS(205),
    [anon_sym_recording] = ACTIONS(205),
    [anon_sym_GuestVocal] = ACTIONS(205),
    [anon_sym_Guestvocal] = ACTIONS(205),
    [anon_sym_guestvocal] = ACTIONS(205),
    [anon_sym_Chorus] = ACTIONS(205),
    [anon_sym_chorus] = ACTIONS(205),
    [anon_sym_Mixing] = ACTIONS(205),
    [anon_sym_mixing] = ACTIONS(205),
    [anon_sym_Mastering] = ACTIONS(205),
    [anon_sym_mastering] = ACTIONS(205),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(205),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(205),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(205),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(205),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(205),
    [anon_sym_u6b4cu5531] = ACTIONS(205),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(205),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(205),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(205),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(205),
    [anon_sym_u4f5cu66f2] = ACTIONS(205),
    [anon_sym_u7de8u66f2] = ACTIONS(205),
    [anon_sym_u4f5cu8a5e] = ACTIONS(207),
    [anon_sym_u5382u724c] = ACTIONS(205),
    [anon_sym_u811au672c] = ACTIONS(205),
    [anon_sym_u63d2u56fe] = ACTIONS(205),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(205),
    [anon_sym_u51fau7248u65b9] = ACTIONS(205),
    [anon_sym_u5f55u97f3] = ACTIONS(205),
    [anon_sym_u539fu4f5c] = ACTIONS(205),
    [anon_sym_u58f0u4e50] = ACTIONS(205),
    [anon_sym_u4e50u5668] = ACTIONS(205),
    [anon_sym_u6df7u97f3] = ACTIONS(205),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(205),
  },
  [75] = {
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
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
    [anon_sym_GuestVocal] = ACTIONS(164),
    [anon_sym_Guestvocal] = ACTIONS(164),
    [anon_sym_guestvocal] = ACTIONS(164),
    [anon_sym_Chorus] = ACTIONS(164),
    [anon_sym_chorus] = ACTIONS(164),
    [anon_sym_Mixing] = ACTIONS(164),
    [anon_sym_mixing] = ACTIONS(164),
    [anon_sym_Mastering] = ACTIONS(164),
    [anon_sym_mastering] = ACTIONS(164),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(164),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(164),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(164),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(164),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(164),
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
    [anon_sym_u58f0u4e50] = ACTIONS(164),
    [anon_sym_u4e50u5668] = ACTIONS(164),
    [anon_sym_u6df7u97f3] = ACTIONS(164),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(164),
    [sym__sep] = ACTIONS(209),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [anon_sym_Music] = ACTIONS(182),
    [anon_sym_music] = ACTIONS(182),
    [anon_sym_Composition] = ACTIONS(182),
    [anon_sym_composition] = ACTIONS(182),
    [anon_sym_Composer] = ACTIONS(182),
    [anon_sym_composer] = ACTIONS(182),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(182),
    [anon_sym_lyrics] = ACTIONS(182),
    [anon_sym_Lyricist] = ACTIONS(182),
    [anon_sym_lyricist] = ACTIONS(182),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(182),
    [anon_sym_arrangement] = ACTIONS(182),
    [anon_sym_Arranger] = ACTIONS(182),
    [anon_sym_arranger] = ACTIONS(182),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(182),
    [anon_sym_vocal] = ACTIONS(182),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(182),
    [anon_sym_performer] = ACTIONS(182),
    [anon_sym_Illustration] = ACTIONS(182),
    [anon_sym_illustration] = ACTIONS(182),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(182),
    [anon_sym_label] = ACTIONS(182),
    [anon_sym_Circle] = ACTIONS(182),
    [anon_sym_circle] = ACTIONS(182),
    [anon_sym_Producer] = ACTIONS(182),
    [anon_sym_producer] = ACTIONS(182),
    [anon_sym_Recording] = ACTIONS(182),
    [anon_sym_recording] = ACTIONS(182),
    [anon_sym_GuestVocal] = ACTIONS(182),
    [anon_sym_Guestvocal] = ACTIONS(182),
    [anon_sym_guestvocal] = ACTIONS(182),
    [anon_sym_Chorus] = ACTIONS(182),
    [anon_sym_chorus] = ACTIONS(182),
    [anon_sym_Mixing] = ACTIONS(182),
    [anon_sym_mixing] = ACTIONS(182),
    [anon_sym_Mastering] = ACTIONS(182),
    [anon_sym_mastering] = ACTIONS(182),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(182),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(182),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(182),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(182),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(182),
    [anon_sym_u811au672c] = ACTIONS(182),
    [anon_sym_u63d2u56fe] = ACTIONS(182),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(182),
    [anon_sym_u51fau7248u65b9] = ACTIONS(182),
    [anon_sym_u5f55u97f3] = ACTIONS(182),
    [anon_sym_u539fu4f5c] = ACTIONS(182),
    [anon_sym_u58f0u4e50] = ACTIONS(182),
    [anon_sym_u4e50u5668] = ACTIONS(182),
    [anon_sym_u6df7u97f3] = ACTIONS(182),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(182),
  },
  [79] = {
    [anon_sym_u300a] = ACTIONS(184),
    [sym_creator_name] = ACTIONS(184),
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
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(184),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu66f2] = ACTIONS(184),
    [anon_sym_u7de8u66f2] = ACTIONS(184),
    [anon_sym_u4f5cu8a5e] = ACTIONS(184),
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
  [80] = {
    [anon_sym_u300a] = ACTIONS(80),
    [aux_sym_song_title_token1] = ACTIONS(80),
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
    [anon_sym_GuestVocal] = ACTIONS(80),
    [anon_sym_Guestvocal] = ACTIONS(80),
    [anon_sym_guestvocal] = ACTIONS(80),
    [anon_sym_Chorus] = ACTIONS(80),
    [anon_sym_chorus] = ACTIONS(80),
    [anon_sym_Mixing] = ACTIONS(80),
    [anon_sym_mixing] = ACTIONS(80),
    [anon_sym_Mastering] = ACTIONS(80),
    [anon_sym_mastering] = ACTIONS(80),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(80),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(80),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(80),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(80),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(80),
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
    [anon_sym_u58f0u4e50] = ACTIONS(80),
    [anon_sym_u4e50u5668] = ACTIONS(80),
    [anon_sym_u6df7u97f3] = ACTIONS(80),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(80),
  },
  [81] = {
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [anon_sym_Music] = ACTIONS(182),
    [anon_sym_music] = ACTIONS(182),
    [anon_sym_Composition] = ACTIONS(182),
    [anon_sym_composition] = ACTIONS(182),
    [anon_sym_Composer] = ACTIONS(182),
    [anon_sym_composer] = ACTIONS(182),
    [anon_sym_Compose] = ACTIONS(182),
    [anon_sym_compose] = ACTIONS(182),
    [anon_sym_Lyrics] = ACTIONS(182),
    [anon_sym_lyrics] = ACTIONS(182),
    [anon_sym_Lyricist] = ACTIONS(182),
    [anon_sym_lyricist] = ACTIONS(182),
    [anon_sym_Lyric] = ACTIONS(182),
    [anon_sym_lyric] = ACTIONS(182),
    [anon_sym_Arrangement] = ACTIONS(182),
    [anon_sym_arrangement] = ACTIONS(182),
    [anon_sym_Arranger] = ACTIONS(182),
    [anon_sym_arranger] = ACTIONS(182),
    [anon_sym_Arrange] = ACTIONS(182),
    [anon_sym_arrange] = ACTIONS(182),
    [anon_sym_Vocal] = ACTIONS(182),
    [anon_sym_vocal] = ACTIONS(182),
    [anon_sym_Vo] = ACTIONS(182),
    [anon_sym_vo] = ACTIONS(182),
    [anon_sym_Performer] = ACTIONS(182),
    [anon_sym_performer] = ACTIONS(182),
    [anon_sym_Illustration] = ACTIONS(182),
    [anon_sym_illustration] = ACTIONS(182),
    [anon_sym_Illust] = ACTIONS(182),
    [anon_sym_illust] = ACTIONS(182),
    [anon_sym_Label] = ACTIONS(182),
    [anon_sym_label] = ACTIONS(182),
    [anon_sym_Circle] = ACTIONS(182),
    [anon_sym_circle] = ACTIONS(182),
    [anon_sym_Producer] = ACTIONS(182),
    [anon_sym_producer] = ACTIONS(182),
    [anon_sym_Recording] = ACTIONS(182),
    [anon_sym_recording] = ACTIONS(182),
    [anon_sym_GuestVocal] = ACTIONS(182),
    [anon_sym_Guestvocal] = ACTIONS(182),
    [anon_sym_guestvocal] = ACTIONS(182),
    [anon_sym_Chorus] = ACTIONS(182),
    [anon_sym_chorus] = ACTIONS(182),
    [anon_sym_Mixing] = ACTIONS(182),
    [anon_sym_mixing] = ACTIONS(182),
    [anon_sym_Mastering] = ACTIONS(182),
    [anon_sym_mastering] = ACTIONS(182),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(182),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(182),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(182),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(182),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u5382u724c] = ACTIONS(182),
    [anon_sym_u811au672c] = ACTIONS(182),
    [anon_sym_u63d2u56fe] = ACTIONS(182),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(182),
    [anon_sym_u51fau7248u65b9] = ACTIONS(182),
    [anon_sym_u5f55u97f3] = ACTIONS(182),
    [anon_sym_u539fu4f5c] = ACTIONS(182),
    [anon_sym_u58f0u4e50] = ACTIONS(182),
    [anon_sym_u4e50u5668] = ACTIONS(182),
    [anon_sym_u6df7u97f3] = ACTIONS(182),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(182),
  },
  [82] = {
    [anon_sym_u300a] = ACTIONS(193),
    [aux_sym_song_title_token1] = ACTIONS(193),
    [anon_sym_Music] = ACTIONS(193),
    [anon_sym_music] = ACTIONS(193),
    [anon_sym_Composition] = ACTIONS(193),
    [anon_sym_composition] = ACTIONS(193),
    [anon_sym_Composer] = ACTIONS(193),
    [anon_sym_composer] = ACTIONS(193),
    [anon_sym_Compose] = ACTIONS(193),
    [anon_sym_compose] = ACTIONS(193),
    [anon_sym_Lyrics] = ACTIONS(193),
    [anon_sym_lyrics] = ACTIONS(193),
    [anon_sym_Lyricist] = ACTIONS(193),
    [anon_sym_lyricist] = ACTIONS(193),
    [anon_sym_Lyric] = ACTIONS(193),
    [anon_sym_lyric] = ACTIONS(193),
    [anon_sym_Arrangement] = ACTIONS(193),
    [anon_sym_arrangement] = ACTIONS(193),
    [anon_sym_Arranger] = ACTIONS(193),
    [anon_sym_arranger] = ACTIONS(193),
    [anon_sym_Arrange] = ACTIONS(193),
    [anon_sym_arrange] = ACTIONS(193),
    [anon_sym_Vocal] = ACTIONS(193),
    [anon_sym_vocal] = ACTIONS(193),
    [anon_sym_Vo] = ACTIONS(193),
    [anon_sym_vo] = ACTIONS(193),
    [anon_sym_Performer] = ACTIONS(193),
    [anon_sym_performer] = ACTIONS(193),
    [anon_sym_Illustration] = ACTIONS(193),
    [anon_sym_illustration] = ACTIONS(193),
    [anon_sym_Illust] = ACTIONS(193),
    [anon_sym_illust] = ACTIONS(193),
    [anon_sym_Label] = ACTIONS(193),
    [anon_sym_label] = ACTIONS(193),
    [anon_sym_Circle] = ACTIONS(193),
    [anon_sym_circle] = ACTIONS(193),
    [anon_sym_Producer] = ACTIONS(193),
    [anon_sym_producer] = ACTIONS(193),
    [anon_sym_Recording] = ACTIONS(193),
    [anon_sym_recording] = ACTIONS(193),
    [anon_sym_GuestVocal] = ACTIONS(193),
    [anon_sym_Guestvocal] = ACTIONS(193),
    [anon_sym_guestvocal] = ACTIONS(193),
    [anon_sym_Chorus] = ACTIONS(193),
    [anon_sym_chorus] = ACTIONS(193),
    [anon_sym_Mixing] = ACTIONS(193),
    [anon_sym_mixing] = ACTIONS(193),
    [anon_sym_Mastering] = ACTIONS(193),
    [anon_sym_mastering] = ACTIONS(193),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(193),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(193),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(193),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(193),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(193),
    [anon_sym_u6b4cu5531] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(193),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu66f2] = ACTIONS(193),
    [anon_sym_u7de8u66f2] = ACTIONS(193),
    [anon_sym_u4f5cu8a5e] = ACTIONS(193),
    [anon_sym_u5382u724c] = ACTIONS(193),
    [anon_sym_u811au672c] = ACTIONS(193),
    [anon_sym_u63d2u56fe] = ACTIONS(193),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(193),
    [anon_sym_u51fau7248u65b9] = ACTIONS(193),
    [anon_sym_u5f55u97f3] = ACTIONS(193),
    [anon_sym_u539fu4f5c] = ACTIONS(193),
    [anon_sym_u58f0u4e50] = ACTIONS(193),
    [anon_sym_u4e50u5668] = ACTIONS(193),
    [anon_sym_u6df7u97f3] = ACTIONS(193),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(193),
  },
  [83] = {
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [anon_sym_Music] = ACTIONS(72),
    [anon_sym_music] = ACTIONS(72),
    [anon_sym_Composition] = ACTIONS(72),
    [anon_sym_composition] = ACTIONS(72),
    [anon_sym_Composer] = ACTIONS(72),
    [anon_sym_composer] = ACTIONS(72),
    [anon_sym_Compose] = ACTIONS(72),
    [anon_sym_compose] = ACTIONS(72),
    [anon_sym_Lyrics] = ACTIONS(72),
    [anon_sym_lyrics] = ACTIONS(72),
    [anon_sym_Lyricist] = ACTIONS(72),
    [anon_sym_lyricist] = ACTIONS(72),
    [anon_sym_Lyric] = ACTIONS(72),
    [anon_sym_lyric] = ACTIONS(72),
    [anon_sym_Arrangement] = ACTIONS(72),
    [anon_sym_arrangement] = ACTIONS(72),
    [anon_sym_Arranger] = ACTIONS(72),
    [anon_sym_arranger] = ACTIONS(72),
    [anon_sym_Arrange] = ACTIONS(72),
    [anon_sym_arrange] = ACTIONS(72),
    [anon_sym_Vocal] = ACTIONS(72),
    [anon_sym_vocal] = ACTIONS(72),
    [anon_sym_Vo] = ACTIONS(72),
    [anon_sym_vo] = ACTIONS(72),
    [anon_sym_Performer] = ACTIONS(72),
    [anon_sym_performer] = ACTIONS(72),
    [anon_sym_Illustration] = ACTIONS(72),
    [anon_sym_illustration] = ACTIONS(72),
    [anon_sym_Illust] = ACTIONS(72),
    [anon_sym_illust] = ACTIONS(72),
    [anon_sym_Label] = ACTIONS(72),
    [anon_sym_label] = ACTIONS(72),
    [anon_sym_Circle] = ACTIONS(72),
    [anon_sym_circle] = ACTIONS(72),
    [anon_sym_Producer] = ACTIONS(72),
    [anon_sym_producer] = ACTIONS(72),
    [anon_sym_Recording] = ACTIONS(72),
    [anon_sym_recording] = ACTIONS(72),
    [anon_sym_GuestVocal] = ACTIONS(72),
    [anon_sym_Guestvocal] = ACTIONS(72),
    [anon_sym_guestvocal] = ACTIONS(72),
    [anon_sym_Chorus] = ACTIONS(72),
    [anon_sym_chorus] = ACTIONS(72),
    [anon_sym_Mixing] = ACTIONS(72),
    [anon_sym_mixing] = ACTIONS(72),
    [anon_sym_Mastering] = ACTIONS(72),
    [anon_sym_mastering] = ACTIONS(72),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(72),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(72),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(72),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(72),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u5382u724c] = ACTIONS(72),
    [anon_sym_u811au672c] = ACTIONS(72),
    [anon_sym_u63d2u56fe] = ACTIONS(72),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(72),
    [anon_sym_u51fau7248u65b9] = ACTIONS(72),
    [anon_sym_u5f55u97f3] = ACTIONS(72),
    [anon_sym_u539fu4f5c] = ACTIONS(72),
    [anon_sym_u58f0u4e50] = ACTIONS(72),
    [anon_sym_u4e50u5668] = ACTIONS(72),
    [anon_sym_u6df7u97f3] = ACTIONS(72),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(72),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_DISC,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    STATE(11), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(34), 1,
      sym_song_title,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(53), 1,
      sym__song_title_maybefeat,
    STATE(86), 1,
      aux_sym__disc_repeat1,
    STATE(102), 1,
      sym_song,
    STATE(129), 1,
      sym__disc,
    STATE(90), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [38] = 10,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(211), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(6), 1,
      aux_sym_song_title_repeat1,
    STATE(14), 1,
      sym_song_title,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(53), 1,
      sym__song_title_maybefeat,
    STATE(88), 1,
      aux_sym__disc_repeat1,
    STATE(99), 1,
      sym_song,
    STATE(127), 1,
      sym__disc,
  [69] = 9,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(28), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(34), 1,
      sym_song_title,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(53), 1,
      sym__song_title_maybefeat,
    STATE(87), 1,
      aux_sym__disc_repeat1,
    STATE(113), 1,
      sym_song,
  [97] = 8,
    ACTIONS(213), 1,
      anon_sym_u300a,
    ACTIONS(216), 1,
      aux_sym_song_title_token1,
    STATE(29), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(42), 1,
      aux_sym_song_title_repeat1,
    STATE(51), 1,
      sym_song_title,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(53), 1,
      sym__song_title_maybefeat,
    STATE(87), 2,
      sym_song,
      aux_sym__disc_repeat1,
  [123] = 9,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(211), 1,
      aux_sym_song_title_token1,
    STATE(3), 1,
      sym__quotable_song_title_maybefeat_maybecomment,
    STATE(6), 1,
      aux_sym_song_title_repeat1,
    STATE(14), 1,
      sym_song_title,
    STATE(52), 1,
      sym__quotable_song_title_maybefeat,
    STATE(53), 1,
      sym__song_title_maybefeat,
    STATE(87), 1,
      aux_sym__disc_repeat1,
    STATE(92), 1,
      sym_song,
  [151] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [160] = 3,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      anon_sym_DISC,
    STATE(100), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [171] = 4,
    ACTIONS(52), 1,
      anon_sym_u300b,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(24), 1,
      sym__quotable_creator_name,
  [184] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_DISC,
    ACTIONS(233), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [195] = 4,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(60), 1,
      anon_sym_u300b,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(24), 1,
      sym__quotable_creator_name,
  [208] = 3,
    ACTIONS(235), 1,
      aux_sym_song_title_token1,
    STATE(94), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(21), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [219] = 4,
    ACTIONS(238), 1,
      aux_sym_song_title_token1,
    STATE(98), 1,
      aux_sym_song_title_repeat1,
    STATE(105), 1,
      sym_song_title,
    STATE(130), 1,
      sym__song_title_maybefeat,
  [232] = 3,
    ACTIONS(225), 1,
      anon_sym_DISC,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [243] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [252] = 3,
    ACTIONS(242), 1,
      aux_sym_song_title_token1,
    STATE(94), 1,
      aux_sym_song_title_repeat1,
    ACTIONS(35), 2,
      anon_sym_u300b,
      aux_sym_feat_field_token1,
  [263] = 3,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_DISC,
    ACTIONS(233), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [274] = 3,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      anon_sym_DISC,
    STATE(100), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [285] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [293] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [301] = 3,
    ACTIONS(140), 1,
      anon_sym_u300a,
    ACTIONS(253), 1,
      sym_creator_name,
    STATE(124), 1,
      sym__quotable_creator_name,
  [311] = 3,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      sym__sep,
    STATE(104), 1,
      aux_sym_credit_field_repeat2,
  [321] = 3,
    ACTIONS(64), 1,
      anon_sym_u300b,
    ACTIONS(260), 1,
      aux_sym_feat_field_token1,
    STATE(32), 1,
      sym_feat_field,
  [331] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(44), 1,
      sym__quotable_creator_name,
  [341] = 3,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 1,
      sym__sep,
    STATE(104), 1,
      aux_sym_credit_field_repeat2,
  [351] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(20), 1,
      sym__quotable_creator_name,
  [361] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(119), 1,
      sym__quotable_creator_name,
  [371] = 3,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      sym__sep,
    STATE(107), 1,
      aux_sym_credit_field_repeat2,
  [381] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(24), 1,
      sym__quotable_creator_name,
  [391] = 3,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 1,
      sym__sep,
    STATE(120), 1,
      aux_sym_credit_field_repeat2,
  [401] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [409] = 3,
    ACTIONS(54), 1,
      anon_sym_u300a,
    ACTIONS(227), 1,
      sym_creator_name,
    STATE(30), 1,
      sym__quotable_creator_name,
  [419] = 3,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 1,
      sym__sep,
    STATE(104), 1,
      aux_sym_credit_field_repeat2,
  [429] = 3,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 1,
      sym__sep,
    STATE(115), 1,
      aux_sym_credit_field_repeat2,
  [439] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [447] = 3,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      sym__sep,
    STATE(121), 1,
      aux_sym_credit_field_repeat2,
  [457] = 3,
    ACTIONS(92), 1,
      anon_sym_u300b,
    ACTIONS(286), 1,
      sym__ssep,
    STATE(122), 1,
      aux_sym_feat_field_repeat1,
  [467] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      sym__sep,
    STATE(104), 1,
      aux_sym_credit_field_repeat2,
  [477] = 3,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      sym__sep,
    STATE(104), 1,
      aux_sym_credit_field_repeat2,
  [487] = 3,
    ACTIONS(102), 1,
      anon_sym_u300b,
    ACTIONS(296), 1,
      sym__ssep,
    STATE(8), 1,
      aux_sym_feat_field_repeat1,
  [497] = 2,
    ACTIONS(96), 1,
      sym__sep,
    ACTIONS(98), 1,
      anon_sym_LF,
  [504] = 2,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      sym__sep,
  [511] = 1,
    ACTIONS(221), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [516] = 1,
    ACTIONS(221), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [521] = 1,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_DISC,
  [526] = 2,
    ACTIONS(86), 1,
      sym__sep,
    ACTIONS(88), 1,
      anon_sym_LF,
  [533] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(304), 1,
      anon_sym_u300b,
  [541] = 1,
    ACTIONS(306), 1,
      anon_sym_u300b,
  [545] = 1,
    ACTIONS(308), 1,
      sym__sep,
  [549] = 1,
    ACTIONS(310), 1,
      aux_sym__quotable_song_title_maybefeat_maybecomment_token1,
  [553] = 1,
    ACTIONS(312), 1,
      aux_sym__quotable_creator_name_token1,
  [557] = 1,
    ACTIONS(314), 1,
      aux_sym__quotable_creator_name_token1,
  [561] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [565] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [569] = 1,
    ACTIONS(318), 1,
      anon_sym_u300b,
  [573] = 1,
    ACTIONS(320), 1,
      sym__sep,
  [577] = 1,
    ACTIONS(322), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(84)] = 0,
  [SMALL_STATE(85)] = 38,
  [SMALL_STATE(86)] = 69,
  [SMALL_STATE(87)] = 97,
  [SMALL_STATE(88)] = 123,
  [SMALL_STATE(89)] = 151,
  [SMALL_STATE(90)] = 160,
  [SMALL_STATE(91)] = 171,
  [SMALL_STATE(92)] = 184,
  [SMALL_STATE(93)] = 195,
  [SMALL_STATE(94)] = 208,
  [SMALL_STATE(95)] = 219,
  [SMALL_STATE(96)] = 232,
  [SMALL_STATE(97)] = 243,
  [SMALL_STATE(98)] = 252,
  [SMALL_STATE(99)] = 263,
  [SMALL_STATE(100)] = 274,
  [SMALL_STATE(101)] = 285,
  [SMALL_STATE(102)] = 293,
  [SMALL_STATE(103)] = 301,
  [SMALL_STATE(104)] = 311,
  [SMALL_STATE(105)] = 321,
  [SMALL_STATE(106)] = 331,
  [SMALL_STATE(107)] = 341,
  [SMALL_STATE(108)] = 351,
  [SMALL_STATE(109)] = 361,
  [SMALL_STATE(110)] = 371,
  [SMALL_STATE(111)] = 381,
  [SMALL_STATE(112)] = 391,
  [SMALL_STATE(113)] = 401,
  [SMALL_STATE(114)] = 409,
  [SMALL_STATE(115)] = 419,
  [SMALL_STATE(116)] = 429,
  [SMALL_STATE(117)] = 439,
  [SMALL_STATE(118)] = 447,
  [SMALL_STATE(119)] = 457,
  [SMALL_STATE(120)] = 467,
  [SMALL_STATE(121)] = 477,
  [SMALL_STATE(122)] = 487,
  [SMALL_STATE(123)] = 497,
  [SMALL_STATE(124)] = 504,
  [SMALL_STATE(125)] = 511,
  [SMALL_STATE(126)] = 516,
  [SMALL_STATE(127)] = 521,
  [SMALL_STATE(128)] = 526,
  [SMALL_STATE(129)] = 533,
  [SMALL_STATE(130)] = 537,
  [SMALL_STATE(131)] = 541,
  [SMALL_STATE(132)] = 545,
  [SMALL_STATE(133)] = 549,
  [SMALL_STATE(134)] = 553,
  [SMALL_STATE(135)] = 557,
  [SMALL_STATE(136)] = 561,
  [SMALL_STATE(137)] = 565,
  [SMALL_STATE(138)] = 569,
  [SMALL_STATE(139)] = 573,
  [SMALL_STATE(140)] = 577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 1, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 2, 0, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 12),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 12),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 12), SHIFT_REPEAT(111),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 8),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 8),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 4, 0, 9),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 4, 0, 9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 2, 0, 8),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 2, 0, 8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feat_field, 3, 0, 9),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feat_field, 3, 0, 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 11),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feat_field_repeat1, 2, 0, 11),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__song_title_maybefeat, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 3, 0, 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 1, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat, 1, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 8),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 8),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 3, 0, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybefeat_maybecomment, 2, 0, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__disc, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc_repeat1, 1, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disc, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__disc, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 12), SHIFT_REPEAT(103),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
