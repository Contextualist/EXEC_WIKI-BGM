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
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 1
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_DISC = 1,
  anon_sym_LF = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__quotable_song_title_maybecomment_token1 = 4,
  aux_sym__quotable_song_title_maybecomment_token2 = 5,
  anon_sym_u300a = 6,
  anon_sym_u300b = 7,
  aux_sym_song_title_token1 = 8,
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
  anon_sym_GuestVocal = 49,
  anon_sym_Guestvocal = 50,
  anon_sym_guestvocal = 51,
  anon_sym_Chorus = 52,
  anon_sym_chorus = 53,
  anon_sym_Mixing = 54,
  anon_sym_mixing = 55,
  anon_sym_Mastering = 56,
  anon_sym_mastering = 57,
  anon_sym_u30dcu30fcu30abu30eb = 58,
  anon_sym_u30a2u30ecu30f3u30b8 = 59,
  anon_sym_u30a4u30e9u30b9u30c8 = 60,
  anon_sym_u30ecu30fcu30d9u30eb = 61,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 62,
  anon_sym_u6b4cu5531 = 63,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 64,
  anon_sym_u4f5cu8bcdu4f5cu7f16u66f2 = 65,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 66,
  anon_sym_u4f5cu8bcdu4f5cu66f2 = 67,
  anon_sym_u4f5cu8a5eu66f2 = 68,
  anon_sym_u4f5cu8bcdu66f2 = 69,
  anon_sym_u4f5cu7de8u66f2 = 70,
  anon_sym_u4f5cu7f16u66f2 = 71,
  anon_sym_u4f5cu66f2 = 72,
  anon_sym_u7de8u66f2 = 73,
  anon_sym_u7f16u66f2 = 74,
  anon_sym_u4f5cu8a5e = 75,
  anon_sym_u4f5cu8bcd = 76,
  anon_sym_u5382u724c = 77,
  anon_sym_u811au672c = 78,
  anon_sym_u63d2u56fe = 79,
  anon_sym_u5236u4f5cu4eba = 80,
  anon_sym_u51fau7248u65b9 = 81,
  anon_sym_u5f55u97f3 = 82,
  anon_sym_u539fu4f5c = 83,
  anon_sym_u58f0u4e50 = 84,
  anon_sym_u4e50u5668 = 85,
  anon_sym_u6df7u97f3 = 86,
  anon_sym_u6bcdu5e26u5236u4f5c = 87,
  sym__sep = 88,
  sym_source_file = 89,
  sym_disc = 90,
  aux_sym__disc = 91,
  sym_song = 92,
  sym_credit_block = 93,
  sym_credit_field = 94,
  sym__quotable_song_title_maybecomment = 95,
  sym__quotable_song_title = 96,
  sym_song_title = 97,
  sym__quotable_creator_name = 98,
  sym_role = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_credit_block_repeat1 = 101,
  aux_sym_credit_field_repeat1 = 102,
  aux_sym_credit_field_repeat2 = 103,
  aux_sym_song_title_repeat1 = 104,
  alias_sym_creator_sep = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DISC] = "DISC",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__quotable_song_title_maybecomment_token1] = "comment",
  [aux_sym__quotable_song_title_maybecomment_token2] = "comment",
  [anon_sym_u300a] = "\u300a",
  [anon_sym_u300b] = "\u300b",
  [aux_sym_song_title_token1] = "song_title_token1",
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
  [sym_source_file] = "source_file",
  [sym_disc] = "disc",
  [aux_sym__disc] = "_disc",
  [sym_song] = "song",
  [sym_credit_block] = "credit_block",
  [sym_credit_field] = "credit_field",
  [sym__quotable_song_title_maybecomment] = "_quotable_song_title_maybecomment",
  [sym__quotable_song_title] = "_quotable_song_title",
  [sym_song_title] = "song_title",
  [sym__quotable_creator_name] = "_quotable_creator_name",
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
  [anon_sym_DISC] = anon_sym_DISC,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__quotable_song_title_maybecomment_token1] = aux_sym__quotable_song_title_maybecomment_token1,
  [aux_sym__quotable_song_title_maybecomment_token2] = aux_sym__quotable_song_title_maybecomment_token1,
  [anon_sym_u300a] = anon_sym_u300a,
  [anon_sym_u300b] = anon_sym_u300b,
  [aux_sym_song_title_token1] = aux_sym_song_title_token1,
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
  [sym_source_file] = sym_source_file,
  [sym_disc] = sym_disc,
  [aux_sym__disc] = aux_sym__disc,
  [sym_song] = sym_song,
  [sym_credit_block] = sym_credit_block,
  [sym_credit_field] = sym_credit_field,
  [sym__quotable_song_title_maybecomment] = sym__quotable_song_title_maybecomment,
  [sym__quotable_song_title] = sym__quotable_song_title,
  [sym_song_title] = sym_song_title,
  [sym__quotable_creator_name] = sym__quotable_creator_name,
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
  [aux_sym__quotable_song_title_maybecomment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quotable_song_title_maybecomment_token2] = {
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
  [sym__quotable_song_title_maybecomment] = {
    .visible = false,
    .named = true,
  },
  [sym__quotable_song_title] = {
    .visible = false,
    .named = true,
  },
  [sym_song_title] = {
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
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 3},
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
    {field_creator, 1},
  [7] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [9] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [12] =
    {field_creator, 0, .inherited = true},
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0, .inherited = true},
    {field_creatorSeparator, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 7,
  [13] = 13,
  [14] = 5,
  [15] = 7,
  [16] = 6,
  [17] = 6,
  [18] = 8,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 10,
  [24] = 19,
  [25] = 11,
  [26] = 13,
  [27] = 11,
  [28] = 21,
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 37,
  [42] = 35,
  [43] = 43,
  [44] = 33,
  [45] = 36,
  [46] = 36,
  [47] = 30,
  [48] = 30,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 49,
  [54] = 43,
  [55] = 43,
  [56] = 50,
  [57] = 51,
  [58] = 50,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 8,
  [77] = 77,
  [78] = 75,
  [79] = 68,
  [80] = 80,
  [81] = 80,
  [82] = 70,
  [83] = 73,
  [84] = 80,
  [85] = 5,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 92,
  [99] = 99,
  [100] = 100,
  [101] = 93,
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
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 'G') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'V') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == 0x300b) ADVANCE(279);
      if (lookahead == 0x30a2) ADVANCE(313);
      if (lookahead == 0x30a4) ADVANCE(312);
      if (lookahead == 0x30dc) ADVANCE(314);
      if (lookahead == 0x30de) ADVANCE(311);
      if (lookahead == 0x30ec) ADVANCE(315);
      if (lookahead == 0x4e50) ADVANCE(321);
      if (lookahead == 0x4f5c) ADVANCE(324);
      if (lookahead == 0x51fa) ADVANCE(328);
      if (lookahead == 0x5236) ADVANCE(317);
      if (lookahead == 0x5382) ADVANCE(329);
      if (lookahead == 0x539f) ADVANCE(319);
      if (lookahead == 0x58f0) ADVANCE(316);
      if (lookahead == 0x5f55) ADVANCE(330);
      if (lookahead == 0x63d2) ADVANCE(322);
      if (lookahead == 0x6b4c) ADVANCE(320);
      if (lookahead == 0x6bcd) ADVANCE(323);
      if (lookahead == 0x6df7) ADVANCE(331);
      if (lookahead == 0x7de8) ADVANCE(325);
      if (lookahead == 0x7f16) ADVANCE(326);
      if (lookahead == 0x811a) ADVANCE(327);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(718);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 0x300b) ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(334);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 469,
        'C', 400,
        'G', 512,
        'I', 421,
        'L', 342,
        'M', 343,
        'P', 377,
        'R', 368,
        'V', 444,
        'a', 482,
        'c', 401,
        'g', 518,
        'i', 425,
        'l', 349,
        'm', 351,
        'p', 387,
        'r', 389,
        'v', 445,
        0x300a, 278,
        0x30a2, 534,
        0x30a4, 530,
        0x30dc, 537,
        0x30de, 525,
        0x30ec, 538,
        0x4e50, 546,
        0x4f5c, 550,
        0x51fa, 560,
        0x5236, 541,
        0x5382, 561,
        0x539f, 542,
        0x58f0, 539,
        0x5f55, 562,
        0x63d2, 547,
        0x6b4c, 545,
        0x6bcd, 548,
        0x6df7, 563,
        0x7de8, 551,
        0x7f16, 552,
        0x811a, 559,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'A', 147,
        'C', 79,
        'G', 197,
        'I', 95,
        'L', 15,
        'M', 16,
        'P', 56,
        'R', 47,
        'V', 126,
        'a', 168,
        'c', 80,
        'g', 203,
        'i', 107,
        'l', 25,
        'm', 27,
        'p', 66,
        'r', 68,
        'v', 127,
        0x300a, 278,
        0x30a2, 222,
        0x30a4, 218,
        0x30dc, 225,
        0x30de, 213,
        0x30ec, 226,
        0x4e50, 234,
        0x4f5c, 238,
        0x51fa, 248,
        0x5236, 229,
        0x5382, 249,
        0x539f, 230,
        0x58f0, 227,
        0x5f55, 250,
        0x63d2, 235,
        0x6b4c, 233,
        0x6bcd, 236,
        0x6df7, 251,
        0x7de8, 239,
        0x7f16, 240,
        0x811a, 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(267);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(590);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(649);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(651);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(638);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(655);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(640);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(119);
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
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(73);
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
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 205:
      if (lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 206:
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 207:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 208:
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(209);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(564);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 209:
      if (lookahead == 0x300a) ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(209);
      END_STATE();
    case 210:
      if (lookahead == 0x30ab) ADVANCE(220);
      END_STATE();
    case 211:
      if (lookahead == 0x30b0) ADVANCE(665);
      END_STATE();
    case 212:
      if (lookahead == 0x30b8) ADVANCE(659);
      END_STATE();
    case 213:
      if (lookahead == 0x30b9) ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 0x30b9) ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 0x30bf) ADVANCE(219);
      END_STATE();
    case 216:
      if (lookahead == 0x30c8) ADVANCE(661);
      END_STATE();
    case 217:
      if (lookahead == 0x30d9) ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == 0x30e9) ADVANCE(214);
      END_STATE();
    case 219:
      if (lookahead == 0x30ea) ADVANCE(224);
      END_STATE();
    case 220:
      if (lookahead == 0x30eb) ADVANCE(657);
      END_STATE();
    case 221:
      if (lookahead == 0x30eb) ADVANCE(663);
      END_STATE();
    case 222:
      if (lookahead == 0x30ec) ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 0x30f3) ADVANCE(212);
      END_STATE();
    case 224:
      if (lookahead == 0x30f3) ADVANCE(211);
      END_STATE();
    case 225:
      if (lookahead == 0x30fc) ADVANCE(210);
      END_STATE();
    case 226:
      if (lookahead == 0x30fc) ADVANCE(217);
      END_STATE();
    case 227:
      if (lookahead == 0x4e50) ADVANCE(709);
      END_STATE();
    case 228:
      if (lookahead == 0x4eba) ADVANCE(701);
      END_STATE();
    case 229:
      if (lookahead == 0x4f5c) ADVANCE(228);
      END_STATE();
    case 230:
      if (lookahead == 0x4f5c) ADVANCE(707);
      END_STATE();
    case 231:
      if (lookahead == 0x4f5c) ADVANCE(715);
      END_STATE();
    case 232:
      if (lookahead == 0x5236) ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == 0x5531) ADVANCE(667);
      END_STATE();
    case 234:
      if (lookahead == 0x5668) ADVANCE(711);
      END_STATE();
    case 235:
      if (lookahead == 0x56fe) ADVANCE(699);
      END_STATE();
    case 236:
      if (lookahead == 0x5e26) ADVANCE(232);
      END_STATE();
    case 237:
      if (lookahead == 0x65b9) ADVANCE(703);
      END_STATE();
    case 238:
      if (lookahead == 0x66f2) ADVANCE(685);
      if (lookahead == 0x7de8) ADVANCE(241);
      if (lookahead == 0x7f16) ADVANCE(242);
      if (lookahead == 0x8a5e) ADVANCE(691);
      if (lookahead == 0x8bcd) ADVANCE(693);
      END_STATE();
    case 239:
      if (lookahead == 0x66f2) ADVANCE(687);
      END_STATE();
    case 240:
      if (lookahead == 0x66f2) ADVANCE(689);
      END_STATE();
    case 241:
      if (lookahead == 0x66f2) ADVANCE(681);
      END_STATE();
    case 242:
      if (lookahead == 0x66f2) ADVANCE(683);
      END_STATE();
    case 243:
      if (lookahead == 0x66f2) ADVANCE(673);
      if (lookahead == 0x7de8) ADVANCE(245);
      END_STATE();
    case 244:
      if (lookahead == 0x66f2) ADVANCE(675);
      if (lookahead == 0x7f16) ADVANCE(246);
      END_STATE();
    case 245:
      if (lookahead == 0x66f2) ADVANCE(669);
      END_STATE();
    case 246:
      if (lookahead == 0x66f2) ADVANCE(671);
      END_STATE();
    case 247:
      if (lookahead == 0x672c) ADVANCE(697);
      END_STATE();
    case 248:
      if (lookahead == 0x7248) ADVANCE(237);
      END_STATE();
    case 249:
      if (lookahead == 0x724c) ADVANCE(695);
      END_STATE();
    case 250:
      if (lookahead == 0x97f3) ADVANCE(705);
      END_STATE();
    case 251:
      if (lookahead == 0x97f3) ADVANCE(713);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 253:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(254);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 'G') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'V') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == 0x30a2) ADVANCE(313);
      if (lookahead == 0x30a4) ADVANCE(312);
      if (lookahead == 0x30dc) ADVANCE(314);
      if (lookahead == 0x30de) ADVANCE(311);
      if (lookahead == 0x30ec) ADVANCE(315);
      if (lookahead == 0x4e50) ADVANCE(321);
      if (lookahead == 0x4f5c) ADVANCE(324);
      if (lookahead == 0x51fa) ADVANCE(328);
      if (lookahead == 0x5236) ADVANCE(317);
      if (lookahead == 0x5382) ADVANCE(329);
      if (lookahead == 0x539f) ADVANCE(318);
      if (lookahead == 0x58f0) ADVANCE(316);
      if (lookahead == 0x5f55) ADVANCE(330);
      if (lookahead == 0x63d2) ADVANCE(322);
      if (lookahead == 0x6b4c) ADVANCE(320);
      if (lookahead == 0x6bcd) ADVANCE(323);
      if (lookahead == 0x6df7) ADVANCE(331);
      if (lookahead == 0x7de8) ADVANCE(325);
      if (lookahead == 0x7f16) ADVANCE(326);
      if (lookahead == 0x811a) ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(287);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(718);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 254:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(254);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 'G') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'V') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == 0x30a2) ADVANCE(313);
      if (lookahead == 0x30a4) ADVANCE(312);
      if (lookahead == 0x30dc) ADVANCE(314);
      if (lookahead == 0x30de) ADVANCE(311);
      if (lookahead == 0x30ec) ADVANCE(315);
      if (lookahead == 0x4e50) ADVANCE(321);
      if (lookahead == 0x4f5c) ADVANCE(324);
      if (lookahead == 0x51fa) ADVANCE(328);
      if (lookahead == 0x5236) ADVANCE(317);
      if (lookahead == 0x5382) ADVANCE(329);
      if (lookahead == 0x539f) ADVANCE(318);
      if (lookahead == 0x58f0) ADVANCE(316);
      if (lookahead == 0x5f55) ADVANCE(330);
      if (lookahead == 0x63d2) ADVANCE(322);
      if (lookahead == 0x6b4c) ADVANCE(320);
      if (lookahead == 0x6bcd) ADVANCE(323);
      if (lookahead == 0x6df7) ADVANCE(331);
      if (lookahead == 0x7de8) ADVANCE(325);
      if (lookahead == 0x7f16) ADVANCE(326);
      if (lookahead == 0x811a) ADVANCE(327);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 255:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 269,
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 256:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 269,
        'A', 469,
        'C', 400,
        'D', 340,
        'G', 512,
        'I', 421,
        'L', 342,
        'M', 343,
        'P', 377,
        'R', 368,
        'V', 444,
        'a', 482,
        'c', 401,
        'g', 518,
        'i', 425,
        'l', 349,
        'm', 351,
        'p', 387,
        'r', 389,
        'v', 445,
        0x300a, 278,
        0x30a2, 534,
        0x30a4, 530,
        0x30dc, 537,
        0x30de, 525,
        0x30ec, 538,
        0x4e50, 546,
        0x4f5c, 550,
        0x51fa, 560,
        0x5236, 541,
        0x5382, 561,
        0x539f, 542,
        0x58f0, 539,
        0x5f55, 562,
        0x63d2, 547,
        0x6b4c, 545,
        0x6bcd, 548,
        0x6df7, 563,
        0x7de8, 551,
        0x7f16, 552,
        0x811a, 559,
        '\t', 281,
        ' ', 281,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(280);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 257:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(258);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'G') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'V') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == 0x30a2) ADVANCE(313);
      if (lookahead == 0x30a4) ADVANCE(312);
      if (lookahead == 0x30dc) ADVANCE(314);
      if (lookahead == 0x30de) ADVANCE(311);
      if (lookahead == 0x30ec) ADVANCE(315);
      if (lookahead == 0x4e50) ADVANCE(321);
      if (lookahead == 0x4f5c) ADVANCE(324);
      if (lookahead == 0x51fa) ADVANCE(328);
      if (lookahead == 0x5236) ADVANCE(317);
      if (lookahead == 0x5382) ADVANCE(329);
      if (lookahead == 0x539f) ADVANCE(318);
      if (lookahead == 0x58f0) ADVANCE(316);
      if (lookahead == 0x5f55) ADVANCE(330);
      if (lookahead == 0x63d2) ADVANCE(322);
      if (lookahead == 0x6b4c) ADVANCE(320);
      if (lookahead == 0x6bcd) ADVANCE(323);
      if (lookahead == 0x6df7) ADVANCE(331);
      if (lookahead == 0x7de8) ADVANCE(325);
      if (lookahead == 0x7f16) ADVANCE(326);
      if (lookahead == 0x811a) ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(288);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(718);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 258:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(258);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'G') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'V') ADVANCE(303);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == 0x30a2) ADVANCE(313);
      if (lookahead == 0x30a4) ADVANCE(312);
      if (lookahead == 0x30dc) ADVANCE(314);
      if (lookahead == 0x30de) ADVANCE(311);
      if (lookahead == 0x30ec) ADVANCE(315);
      if (lookahead == 0x4e50) ADVANCE(321);
      if (lookahead == 0x4f5c) ADVANCE(324);
      if (lookahead == 0x51fa) ADVANCE(328);
      if (lookahead == 0x5236) ADVANCE(317);
      if (lookahead == 0x5382) ADVANCE(329);
      if (lookahead == 0x539f) ADVANCE(318);
      if (lookahead == 0x58f0) ADVANCE(316);
      if (lookahead == 0x5f55) ADVANCE(330);
      if (lookahead == 0x63d2) ADVANCE(322);
      if (lookahead == 0x6b4c) ADVANCE(320);
      if (lookahead == 0x6bcd) ADVANCE(323);
      if (lookahead == 0x6df7) ADVANCE(331);
      if (lookahead == 0x7de8) ADVANCE(325);
      if (lookahead == 0x7f16) ADVANCE(326);
      if (lookahead == 0x811a) ADVANCE(327);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 259:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(259);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 0x300a) ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 260:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') SKIP(260);
      if (lookahead == 0x300a) ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 261:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 271,
        'A', 305,
        'C', 299,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 262:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 271,
        'A', 469,
        'C', 400,
        'G', 512,
        'I', 421,
        'L', 342,
        'M', 343,
        'P', 377,
        'R', 368,
        'V', 444,
        'a', 482,
        'c', 401,
        'g', 518,
        'i', 425,
        'l', 349,
        'm', 351,
        'p', 387,
        'r', 389,
        'v', 445,
        0x300a, 278,
        0x30a2, 534,
        0x30a4, 530,
        0x30dc, 537,
        0x30de, 525,
        0x30ec, 538,
        0x4e50, 546,
        0x4f5c, 550,
        0x51fa, 560,
        0x5236, 541,
        0x5382, 561,
        0x539f, 542,
        0x58f0, 539,
        0x5f55, 562,
        0x63d2, 547,
        0x6b4c, 545,
        0x6bcd, 548,
        0x6df7, 563,
        0x7de8, 551,
        0x7f16, 552,
        0x811a, 559,
        '\t', 282,
        ' ', 282,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(280);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 263:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 272,
        '/', 286,
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 319,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 264:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 273,
        '/', 286,
        'A', 305,
        'C', 299,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 319,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 265:
      if (eof) ADVANCE(266);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 0x300b) ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DISC);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(273);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 269,
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 271,
        'A', 305,
        'C', 299,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 272,
        '/', 286,
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 319,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 273,
        '/', 286,
        'A', 305,
        'C', 299,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 319,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 286,
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x300b, 279,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 319,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(274);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 305,
        'C', 299,
        'D', 290,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 305,
        'C', 299,
        'G', 307,
        'I', 301,
        'L', 291,
        'M', 292,
        'P', 296,
        'R', 295,
        'V', 303,
        'a', 306,
        'c', 300,
        'g', 308,
        'i', 302,
        'l', 293,
        'm', 294,
        'p', 297,
        'r', 298,
        'v', 304,
        0x300a, 278,
        0x30a2, 313,
        0x30a4, 312,
        0x30dc, 314,
        0x30de, 311,
        0x30ec, 315,
        0x4e50, 321,
        0x4f5c, 324,
        0x51fa, 328,
        0x5236, 317,
        0x5382, 329,
        0x539f, 318,
        0x58f0, 316,
        0x5f55, 330,
        0x63d2, 322,
        0x6b4c, 320,
        0x6bcd, 323,
        0x6df7, 331,
        0x7de8, 325,
        0x7f16, 326,
        0x811a, 327,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(278);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300b) ADVANCE(279);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(215);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(214);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(223);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(210);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(217);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(709);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(228);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(707);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(707);
      if (lookahead == 0x66f2) ADVANCE(252);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(667);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(711);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(699);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(232);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(685);
      if (lookahead == 0x7de8) ADVANCE(241);
      if (lookahead == 0x7f16) ADVANCE(242);
      if (lookahead == 0x8a5e) ADVANCE(691);
      if (lookahead == 0x8bcd) ADVANCE(693);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(687);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(689);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(697);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(237);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(695);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(705);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(713);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(280);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(14);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(205);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 469,
        'C', 400,
        'D', 340,
        'G', 512,
        'I', 421,
        'L', 342,
        'M', 343,
        'P', 377,
        'R', 368,
        'V', 444,
        'a', 482,
        'c', 401,
        'g', 518,
        'i', 425,
        'l', 349,
        'm', 351,
        'p', 387,
        'r', 389,
        'v', 445,
        0x30a2, 534,
        0x30a4, 530,
        0x30dc, 537,
        0x30de, 525,
        0x30ec, 538,
        0x4e50, 546,
        0x4f5c, 550,
        0x51fa, 560,
        0x5236, 541,
        0x5382, 561,
        0x539f, 542,
        0x58f0, 539,
        0x5f55, 562,
        0x63d2, 547,
        0x6b4c, 545,
        0x6bcd, 548,
        0x6df7, 563,
        0x7de8, 551,
        0x7f16, 552,
        0x811a, 559,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(337);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 469,
        'C', 400,
        'G', 512,
        'I', 421,
        'L', 342,
        'M', 343,
        'P', 377,
        'R', 368,
        'V', 444,
        'a', 482,
        'c', 401,
        'g', 518,
        'i', 425,
        'l', 349,
        'm', 351,
        'p', 387,
        'r', 389,
        'v', 445,
        0x30a2, 534,
        0x30a4, 530,
        0x30dc, 537,
        0x30de, 525,
        0x30ec, 538,
        0x4e50, 546,
        0x4f5c, 550,
        0x51fa, 560,
        0x5236, 541,
        0x5382, 561,
        0x539f, 542,
        0x58f0, 539,
        0x5f55, 562,
        0x63d2, 547,
        0x6b4c, 545,
        0x6bcd, 548,
        0x6df7, 563,
        0x7de8, 551,
        0x7f16, 552,
        0x811a, 559,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'C') ADVANCE(268);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'I') ADVANCE(341);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'S') ADVANCE(339);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'y') ADVANCE(463);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(495);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(417);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(509);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'y') ADVANCE(475);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(443);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(496);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(591);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(567);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(593);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(569);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(423);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(454);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(380);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(515);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(413);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(415);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(519);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(631);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(633);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(603);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(506);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(605);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(441);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(465);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(466);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(467);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(468);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(459);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(479);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(363);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(457);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(650);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(652);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(654);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(639);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(656);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(641);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(427);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(447);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(435);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(436);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(437);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(439);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(627);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(607);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(629);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(609);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(517);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(461);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(571);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(573);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(619);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(621);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(395);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(396);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(397);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(503);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(399);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(611);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(613);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(431);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(433);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(489);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(476);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(344);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(402);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(635);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(637);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(615);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(617);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(462);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(513);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(429);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(359);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(412);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(350);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(507);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(646);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(648);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(505);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(499);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(501);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(511);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(335);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(623);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(625);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(587);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(589);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(595);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(597);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(336);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(406);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(407);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(408);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(485);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(487);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(361);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(491);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(362);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(410);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(411);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(532);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b0) ADVANCE(666);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(660);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(527);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(528);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30bf) ADVANCE(531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(662);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(533);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ea) ADVANCE(536);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(658);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(664);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(535);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(524);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(523);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(529);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4e50) ADVANCE(710);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(702);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(540);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(708);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(716);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5236) ADVANCE(543);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5668) ADVANCE(712);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(700);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5e26) ADVANCE(544);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(704);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(686);
      if (lookahead == 0x7de8) ADVANCE(553);
      if (lookahead == 0x7f16) ADVANCE(554);
      if (lookahead == 0x8a5e) ADVANCE(692);
      if (lookahead == 0x8bcd) ADVANCE(694);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(688);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(690);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(682);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(684);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(674);
      if (lookahead == 0x7de8) ADVANCE(557);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(676);
      if (lookahead == 0x7f16) ADVANCE(558);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(670);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(672);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(698);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(549);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(696);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(706);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(714);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(564);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(575);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(577);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 's') ADVANCE(583);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 's') ADVANCE(585);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(599);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(601);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_Vo);
      if (lookahead == 'c') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_vo);
      if (lookahead == 'c') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_Chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_Mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_Mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(243);
      if (lookahead == 0x66f2) ADVANCE(677);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(555);
      if (lookahead == 0x66f2) ADVANCE(678);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(244);
      if (lookahead == 0x66f2) ADVANCE(679);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(556);
      if (lookahead == 0x66f2) ADVANCE(680);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(565);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 717,
        ' ', 717,
        '&', 718,
        ',', 718,
        '/', 718,
        ':', 718,
        0x3000, 718,
        0x3001, 718,
        0x30fb, 718,
        0xff06, 718,
        0xff1a, 718,
        0xff1b, 718,
      );
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 718,
        ' ', 718,
        '&', 718,
        ',', 718,
        '/', 718,
        ':', 718,
        0x3000, 718,
        0x3001, 718,
        0x30fb, 718,
        0xff06, 718,
        0xff1a, 718,
        0xff1b, 718,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 254},
  [2] = {.lex_state = 255},
  [3] = {.lex_state = 261},
  [4] = {.lex_state = 254},
  [5] = {.lex_state = 263},
  [6] = {.lex_state = 254},
  [7] = {.lex_state = 254},
  [8] = {.lex_state = 263},
  [9] = {.lex_state = 258},
  [10] = {.lex_state = 263},
  [11] = {.lex_state = 256},
  [12] = {.lex_state = 258},
  [13] = {.lex_state = 263},
  [14] = {.lex_state = 264},
  [15] = {.lex_state = 254},
  [16] = {.lex_state = 254},
  [17] = {.lex_state = 258},
  [18] = {.lex_state = 264},
  [19] = {.lex_state = 256},
  [20] = {.lex_state = 263},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 262},
  [23] = {.lex_state = 264},
  [24] = {.lex_state = 256},
  [25] = {.lex_state = 262},
  [26] = {.lex_state = 264},
  [27] = {.lex_state = 256},
  [28] = {.lex_state = 264},
  [29] = {.lex_state = 264},
  [30] = {.lex_state = 253},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 255},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 255},
  [36] = {.lex_state = 253},
  [37] = {.lex_state = 255},
  [38] = {.lex_state = 255},
  [39] = {.lex_state = 261},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 261},
  [42] = {.lex_state = 261},
  [43] = {.lex_state = 254},
  [44] = {.lex_state = 261},
  [45] = {.lex_state = 257},
  [46] = {.lex_state = 253},
  [47] = {.lex_state = 253},
  [48] = {.lex_state = 257},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 254},
  [51] = {.lex_state = 254},
  [52] = {.lex_state = 254},
  [53] = {.lex_state = 254},
  [54] = {.lex_state = 254},
  [55] = {.lex_state = 258},
  [56] = {.lex_state = 254},
  [57] = {.lex_state = 258},
  [58] = {.lex_state = 258},
  [59] = {.lex_state = 258},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 259},
  [62] = {.lex_state = 259},
  [63] = {.lex_state = 259},
  [64] = {.lex_state = 260},
  [65] = {.lex_state = 260},
  [66] = {.lex_state = 260},
  [67] = {.lex_state = 260},
  [68] = {.lex_state = 259},
  [69] = {.lex_state = 265},
  [70] = {.lex_state = 259},
  [71] = {.lex_state = 265},
  [72] = {.lex_state = 265},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 260},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 260},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 208},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 265},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 265},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 265},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(1),
    [anon_sym_u300a] = ACTIONS(1),
    [anon_sym_u300b] = ACTIONS(1),
    [aux_sym_song_title_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(91),
    [sym_disc] = STATE(69),
    [aux_sym__disc] = STATE(64),
    [sym_song] = STATE(64),
    [sym_credit_block] = STATE(61),
    [sym_credit_field] = STATE(16),
    [sym__quotable_song_title_maybecomment] = STATE(3),
    [sym__quotable_song_title] = STATE(29),
    [sym_song_title] = STATE(28),
    [sym_role] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(69),
    [aux_sym_credit_block_repeat1] = STATE(16),
    [aux_sym_credit_field_repeat1] = STATE(32),
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
    [sym_credit_block] = STATE(68),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(31),
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
    [sym_credit_block] = STATE(79),
    [sym_credit_field] = STATE(17),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(17),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(17),
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
  [4] = {
    [sym_credit_block] = STATE(70),
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_DISC] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(21),
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
  [5] = {
    [aux_sym_song_title_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_DISC] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(25),
    [aux_sym_song_title_token1] = ACTIONS(27),
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
    [anon_sym_GuestVocal] = ACTIONS(25),
    [anon_sym_Guestvocal] = ACTIONS(25),
    [anon_sym_guestvocal] = ACTIONS(25),
    [anon_sym_Chorus] = ACTIONS(25),
    [anon_sym_chorus] = ACTIONS(25),
    [anon_sym_Mixing] = ACTIONS(25),
    [anon_sym_mixing] = ACTIONS(25),
    [anon_sym_Mastering] = ACTIONS(25),
    [anon_sym_mastering] = ACTIONS(25),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(25),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(25),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(25),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(25),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu66f2] = ACTIONS(25),
    [anon_sym_u7de8u66f2] = ACTIONS(25),
    [anon_sym_u7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5e] = ACTIONS(25),
    [anon_sym_u4f5cu8bcd] = ACTIONS(25),
    [anon_sym_u5382u724c] = ACTIONS(25),
    [anon_sym_u811au672c] = ACTIONS(25),
    [anon_sym_u63d2u56fe] = ACTIONS(25),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(25),
    [anon_sym_u51fau7248u65b9] = ACTIONS(25),
    [anon_sym_u5f55u97f3] = ACTIONS(25),
    [anon_sym_u539fu4f5c] = ACTIONS(25),
    [anon_sym_u58f0u4e50] = ACTIONS(25),
    [anon_sym_u4e50u5668] = ACTIONS(25),
    [anon_sym_u6df7u97f3] = ACTIONS(25),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(25),
  },
  [6] = {
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_DISC] = ACTIONS(32),
    [anon_sym_u300a] = ACTIONS(32),
    [aux_sym_song_title_token1] = ACTIONS(32),
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
    [sym_credit_field] = STATE(7),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(7),
    [aux_sym_credit_field_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_DISC] = ACTIONS(36),
    [anon_sym_u300a] = ACTIONS(36),
    [aux_sym_song_title_token1] = ACTIONS(36),
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
    [anon_sym_GuestVocal] = ACTIONS(38),
    [anon_sym_Guestvocal] = ACTIONS(38),
    [anon_sym_guestvocal] = ACTIONS(38),
    [anon_sym_Chorus] = ACTIONS(38),
    [anon_sym_chorus] = ACTIONS(38),
    [anon_sym_Mixing] = ACTIONS(38),
    [anon_sym_mixing] = ACTIONS(38),
    [anon_sym_Mastering] = ACTIONS(38),
    [anon_sym_mastering] = ACTIONS(38),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(38),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(38),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(38),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(38),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(38),
    [anon_sym_u6b4cu5531] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu66f2] = ACTIONS(38),
    [anon_sym_u7de8u66f2] = ACTIONS(38),
    [anon_sym_u7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5e] = ACTIONS(38),
    [anon_sym_u4f5cu8bcd] = ACTIONS(38),
    [anon_sym_u5382u724c] = ACTIONS(38),
    [anon_sym_u811au672c] = ACTIONS(38),
    [anon_sym_u63d2u56fe] = ACTIONS(38),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(38),
    [anon_sym_u51fau7248u65b9] = ACTIONS(38),
    [anon_sym_u5f55u97f3] = ACTIONS(38),
    [anon_sym_u539fu4f5c] = ACTIONS(38),
    [anon_sym_u58f0u4e50] = ACTIONS(38),
    [anon_sym_u4e50u5668] = ACTIONS(38),
    [anon_sym_u6df7u97f3] = ACTIONS(38),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(38),
  },
  [8] = {
    [aux_sym_song_title_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_DISC] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(43),
    [anon_sym_u300a] = ACTIONS(43),
    [aux_sym_song_title_token1] = ACTIONS(45),
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
    [anon_sym_GuestVocal] = ACTIONS(43),
    [anon_sym_Guestvocal] = ACTIONS(43),
    [anon_sym_guestvocal] = ACTIONS(43),
    [anon_sym_Chorus] = ACTIONS(43),
    [anon_sym_chorus] = ACTIONS(43),
    [anon_sym_Mixing] = ACTIONS(43),
    [anon_sym_mixing] = ACTIONS(43),
    [anon_sym_Mastering] = ACTIONS(43),
    [anon_sym_mastering] = ACTIONS(43),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(43),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(43),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(43),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(43),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(43),
    [anon_sym_u6b4cu5531] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu66f2] = ACTIONS(43),
    [anon_sym_u7de8u66f2] = ACTIONS(43),
    [anon_sym_u7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5e] = ACTIONS(43),
    [anon_sym_u4f5cu8bcd] = ACTIONS(43),
    [anon_sym_u5382u724c] = ACTIONS(43),
    [anon_sym_u811au672c] = ACTIONS(43),
    [anon_sym_u63d2u56fe] = ACTIONS(43),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(43),
    [anon_sym_u51fau7248u65b9] = ACTIONS(43),
    [anon_sym_u5f55u97f3] = ACTIONS(43),
    [anon_sym_u539fu4f5c] = ACTIONS(43),
    [anon_sym_u58f0u4e50] = ACTIONS(43),
    [anon_sym_u4e50u5668] = ACTIONS(43),
    [anon_sym_u6df7u97f3] = ACTIONS(43),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(43),
  },
  [9] = {
    [sym_credit_block] = STATE(82),
    [sym_credit_field] = STATE(17),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(17),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(21),
    [aux_sym_song_title_token1] = ACTIONS(21),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DISC] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
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
    [anon_sym_GuestVocal] = ACTIONS(49),
    [anon_sym_Guestvocal] = ACTIONS(49),
    [anon_sym_guestvocal] = ACTIONS(49),
    [anon_sym_Chorus] = ACTIONS(49),
    [anon_sym_chorus] = ACTIONS(49),
    [anon_sym_Mixing] = ACTIONS(49),
    [anon_sym_mixing] = ACTIONS(49),
    [anon_sym_Mastering] = ACTIONS(49),
    [anon_sym_mastering] = ACTIONS(49),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(49),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(49),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(49),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(49),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu66f2] = ACTIONS(49),
    [anon_sym_u7de8u66f2] = ACTIONS(49),
    [anon_sym_u7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5e] = ACTIONS(49),
    [anon_sym_u4f5cu8bcd] = ACTIONS(49),
    [anon_sym_u5382u724c] = ACTIONS(49),
    [anon_sym_u811au672c] = ACTIONS(49),
    [anon_sym_u63d2u56fe] = ACTIONS(49),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(49),
    [anon_sym_u51fau7248u65b9] = ACTIONS(49),
    [anon_sym_u5f55u97f3] = ACTIONS(49),
    [anon_sym_u539fu4f5c] = ACTIONS(49),
    [anon_sym_u58f0u4e50] = ACTIONS(49),
    [anon_sym_u4e50u5668] = ACTIONS(49),
    [anon_sym_u6df7u97f3] = ACTIONS(49),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(49),
  },
  [11] = {
    [sym__quotable_creator_name] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_DISC] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [sym_creator_name] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [12] = {
    [sym_credit_field] = STATE(12),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_u300a] = ACTIONS(36),
    [aux_sym_song_title_token1] = ACTIONS(36),
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
    [anon_sym_GuestVocal] = ACTIONS(38),
    [anon_sym_Guestvocal] = ACTIONS(38),
    [anon_sym_guestvocal] = ACTIONS(38),
    [anon_sym_Chorus] = ACTIONS(38),
    [anon_sym_chorus] = ACTIONS(38),
    [anon_sym_Mixing] = ACTIONS(38),
    [anon_sym_mixing] = ACTIONS(38),
    [anon_sym_Mastering] = ACTIONS(38),
    [anon_sym_mastering] = ACTIONS(38),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(38),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(38),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(38),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(38),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(38),
    [anon_sym_u6b4cu5531] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu66f2] = ACTIONS(38),
    [anon_sym_u7de8u66f2] = ACTIONS(38),
    [anon_sym_u7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5e] = ACTIONS(38),
    [anon_sym_u4f5cu8bcd] = ACTIONS(38),
    [anon_sym_u5382u724c] = ACTIONS(38),
    [anon_sym_u811au672c] = ACTIONS(38),
    [anon_sym_u63d2u56fe] = ACTIONS(38),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(38),
    [anon_sym_u51fau7248u65b9] = ACTIONS(38),
    [anon_sym_u5f55u97f3] = ACTIONS(38),
    [anon_sym_u539fu4f5c] = ACTIONS(38),
    [anon_sym_u58f0u4e50] = ACTIONS(38),
    [anon_sym_u4e50u5668] = ACTIONS(38),
    [anon_sym_u6df7u97f3] = ACTIONS(38),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(38),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_DISC] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(65),
    [anon_sym_u300a] = ACTIONS(65),
    [aux_sym_song_title_token1] = ACTIONS(65),
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
  [14] = {
    [aux_sym_song_title_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(25),
    [aux_sym_song_title_token1] = ACTIONS(67),
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
    [anon_sym_GuestVocal] = ACTIONS(25),
    [anon_sym_Guestvocal] = ACTIONS(25),
    [anon_sym_guestvocal] = ACTIONS(25),
    [anon_sym_Chorus] = ACTIONS(25),
    [anon_sym_chorus] = ACTIONS(25),
    [anon_sym_Mixing] = ACTIONS(25),
    [anon_sym_mixing] = ACTIONS(25),
    [anon_sym_Mastering] = ACTIONS(25),
    [anon_sym_mastering] = ACTIONS(25),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(25),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(25),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(25),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(25),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu66f2] = ACTIONS(25),
    [anon_sym_u7de8u66f2] = ACTIONS(25),
    [anon_sym_u7f16u66f2] = ACTIONS(25),
    [anon_sym_u4f5cu8a5e] = ACTIONS(25),
    [anon_sym_u4f5cu8bcd] = ACTIONS(25),
    [anon_sym_u5382u724c] = ACTIONS(25),
    [anon_sym_u811au672c] = ACTIONS(25),
    [anon_sym_u63d2u56fe] = ACTIONS(25),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(25),
    [anon_sym_u51fau7248u65b9] = ACTIONS(25),
    [anon_sym_u5f55u97f3] = ACTIONS(25),
    [anon_sym_u539fu4f5c] = ACTIONS(25),
    [anon_sym_u58f0u4e50] = ACTIONS(25),
    [anon_sym_u4e50u5668] = ACTIONS(25),
    [anon_sym_u6df7u97f3] = ACTIONS(25),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(25),
  },
  [15] = {
    [sym_credit_field] = STATE(15),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(15),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [anon_sym_DISC] = ACTIONS(36),
    [anon_sym_u300a] = ACTIONS(36),
    [aux_sym_song_title_token1] = ACTIONS(36),
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
    [anon_sym_GuestVocal] = ACTIONS(38),
    [anon_sym_Guestvocal] = ACTIONS(38),
    [anon_sym_guestvocal] = ACTIONS(38),
    [anon_sym_Chorus] = ACTIONS(38),
    [anon_sym_chorus] = ACTIONS(38),
    [anon_sym_Mixing] = ACTIONS(38),
    [anon_sym_mixing] = ACTIONS(38),
    [anon_sym_Mastering] = ACTIONS(38),
    [anon_sym_mastering] = ACTIONS(38),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(38),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(38),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(38),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(38),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(38),
    [anon_sym_u6b4cu5531] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu66f2] = ACTIONS(38),
    [anon_sym_u7de8u66f2] = ACTIONS(38),
    [anon_sym_u7f16u66f2] = ACTIONS(38),
    [anon_sym_u4f5cu8a5e] = ACTIONS(38),
    [anon_sym_u4f5cu8bcd] = ACTIONS(38),
    [anon_sym_u5382u724c] = ACTIONS(38),
    [anon_sym_u811au672c] = ACTIONS(38),
    [anon_sym_u63d2u56fe] = ACTIONS(38),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(38),
    [anon_sym_u51fau7248u65b9] = ACTIONS(38),
    [anon_sym_u5f55u97f3] = ACTIONS(38),
    [anon_sym_u539fu4f5c] = ACTIONS(38),
    [anon_sym_u58f0u4e50] = ACTIONS(38),
    [anon_sym_u4e50u5668] = ACTIONS(38),
    [anon_sym_u6df7u97f3] = ACTIONS(38),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(38),
  },
  [16] = {
    [sym_credit_field] = STATE(15),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(15),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [anon_sym_DISC] = ACTIONS(32),
    [anon_sym_u300a] = ACTIONS(32),
    [aux_sym_song_title_token1] = ACTIONS(32),
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
  [17] = {
    [sym_credit_field] = STATE(12),
    [sym_role] = STATE(90),
    [aux_sym_credit_block_repeat1] = STATE(12),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_u300a] = ACTIONS(32),
    [aux_sym_song_title_token1] = ACTIONS(32),
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
  [18] = {
    [aux_sym_song_title_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(43),
    [anon_sym_u300a] = ACTIONS(43),
    [aux_sym_song_title_token1] = ACTIONS(70),
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
    [anon_sym_GuestVocal] = ACTIONS(43),
    [anon_sym_Guestvocal] = ACTIONS(43),
    [anon_sym_guestvocal] = ACTIONS(43),
    [anon_sym_Chorus] = ACTIONS(43),
    [anon_sym_chorus] = ACTIONS(43),
    [anon_sym_Mixing] = ACTIONS(43),
    [anon_sym_mixing] = ACTIONS(43),
    [anon_sym_Mastering] = ACTIONS(43),
    [anon_sym_mastering] = ACTIONS(43),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(43),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(43),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(43),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(43),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(43),
    [anon_sym_u6b4cu5531] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu66f2] = ACTIONS(43),
    [anon_sym_u7de8u66f2] = ACTIONS(43),
    [anon_sym_u7f16u66f2] = ACTIONS(43),
    [anon_sym_u4f5cu8a5e] = ACTIONS(43),
    [anon_sym_u4f5cu8bcd] = ACTIONS(43),
    [anon_sym_u5382u724c] = ACTIONS(43),
    [anon_sym_u811au672c] = ACTIONS(43),
    [anon_sym_u63d2u56fe] = ACTIONS(43),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(43),
    [anon_sym_u51fau7248u65b9] = ACTIONS(43),
    [anon_sym_u5f55u97f3] = ACTIONS(43),
    [anon_sym_u539fu4f5c] = ACTIONS(43),
    [anon_sym_u58f0u4e50] = ACTIONS(43),
    [anon_sym_u4e50u5668] = ACTIONS(43),
    [anon_sym_u6df7u97f3] = ACTIONS(43),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(43),
  },
  [19] = {
    [sym__quotable_creator_name] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_DISC] = ACTIONS(74),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
    [sym_creator_name] = ACTIONS(61),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_DISC] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(84),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(86),
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
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu66f2] = ACTIONS(80),
    [anon_sym_u7de8u66f2] = ACTIONS(80),
    [anon_sym_u7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5e] = ACTIONS(80),
    [anon_sym_u4f5cu8bcd] = ACTIONS(80),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_DISC] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(90),
    [anon_sym_u300a] = ACTIONS(90),
    [aux_sym_song_title_token1] = ACTIONS(90),
    [anon_sym_Music] = ACTIONS(90),
    [anon_sym_music] = ACTIONS(90),
    [anon_sym_Composition] = ACTIONS(90),
    [anon_sym_composition] = ACTIONS(90),
    [anon_sym_Composer] = ACTIONS(90),
    [anon_sym_composer] = ACTIONS(90),
    [anon_sym_Compose] = ACTIONS(90),
    [anon_sym_compose] = ACTIONS(90),
    [anon_sym_Lyrics] = ACTIONS(90),
    [anon_sym_lyrics] = ACTIONS(90),
    [anon_sym_Lyricist] = ACTIONS(90),
    [anon_sym_lyricist] = ACTIONS(90),
    [anon_sym_Lyric] = ACTIONS(90),
    [anon_sym_lyric] = ACTIONS(90),
    [anon_sym_Arrangement] = ACTIONS(90),
    [anon_sym_arrangement] = ACTIONS(90),
    [anon_sym_Arranger] = ACTIONS(90),
    [anon_sym_arranger] = ACTIONS(90),
    [anon_sym_Arrange] = ACTIONS(90),
    [anon_sym_arrange] = ACTIONS(90),
    [anon_sym_Vocal] = ACTIONS(90),
    [anon_sym_vocal] = ACTIONS(90),
    [anon_sym_Vo] = ACTIONS(90),
    [anon_sym_vo] = ACTIONS(90),
    [anon_sym_Performer] = ACTIONS(90),
    [anon_sym_performer] = ACTIONS(90),
    [anon_sym_Illustration] = ACTIONS(90),
    [anon_sym_illustration] = ACTIONS(90),
    [anon_sym_Illust] = ACTIONS(90),
    [anon_sym_illust] = ACTIONS(90),
    [anon_sym_Label] = ACTIONS(90),
    [anon_sym_label] = ACTIONS(90),
    [anon_sym_Circle] = ACTIONS(90),
    [anon_sym_circle] = ACTIONS(90),
    [anon_sym_Producer] = ACTIONS(90),
    [anon_sym_producer] = ACTIONS(90),
    [anon_sym_Recording] = ACTIONS(90),
    [anon_sym_recording] = ACTIONS(90),
    [anon_sym_GuestVocal] = ACTIONS(90),
    [anon_sym_Guestvocal] = ACTIONS(90),
    [anon_sym_guestvocal] = ACTIONS(90),
    [anon_sym_Chorus] = ACTIONS(90),
    [anon_sym_chorus] = ACTIONS(90),
    [anon_sym_Mixing] = ACTIONS(90),
    [anon_sym_mixing] = ACTIONS(90),
    [anon_sym_Mastering] = ACTIONS(90),
    [anon_sym_mastering] = ACTIONS(90),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(90),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(90),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(90),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(90),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(90),
    [anon_sym_u6b4cu5531] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu66f2] = ACTIONS(90),
    [anon_sym_u7de8u66f2] = ACTIONS(90),
    [anon_sym_u7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5e] = ACTIONS(90),
    [anon_sym_u4f5cu8bcd] = ACTIONS(90),
    [anon_sym_u5382u724c] = ACTIONS(90),
    [anon_sym_u811au672c] = ACTIONS(90),
    [anon_sym_u63d2u56fe] = ACTIONS(90),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(90),
    [anon_sym_u51fau7248u65b9] = ACTIONS(90),
    [anon_sym_u5f55u97f3] = ACTIONS(90),
    [anon_sym_u539fu4f5c] = ACTIONS(90),
    [anon_sym_u58f0u4e50] = ACTIONS(90),
    [anon_sym_u4e50u5668] = ACTIONS(90),
    [anon_sym_u6df7u97f3] = ACTIONS(90),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(90),
  },
  [22] = {
    [sym__quotable_creator_name] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
    [sym_creator_name] = ACTIONS(61),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(96),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
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
    [anon_sym_GuestVocal] = ACTIONS(49),
    [anon_sym_Guestvocal] = ACTIONS(49),
    [anon_sym_guestvocal] = ACTIONS(49),
    [anon_sym_Chorus] = ACTIONS(49),
    [anon_sym_chorus] = ACTIONS(49),
    [anon_sym_Mixing] = ACTIONS(49),
    [anon_sym_mixing] = ACTIONS(49),
    [anon_sym_Mastering] = ACTIONS(49),
    [anon_sym_mastering] = ACTIONS(49),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(49),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(49),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(49),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(49),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu66f2] = ACTIONS(49),
    [anon_sym_u7de8u66f2] = ACTIONS(49),
    [anon_sym_u7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5e] = ACTIONS(49),
    [anon_sym_u4f5cu8bcd] = ACTIONS(49),
    [anon_sym_u5382u724c] = ACTIONS(49),
    [anon_sym_u811au672c] = ACTIONS(49),
    [anon_sym_u63d2u56fe] = ACTIONS(49),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(49),
    [anon_sym_u51fau7248u65b9] = ACTIONS(49),
    [anon_sym_u5f55u97f3] = ACTIONS(49),
    [anon_sym_u539fu4f5c] = ACTIONS(49),
    [anon_sym_u58f0u4e50] = ACTIONS(49),
    [anon_sym_u4e50u5668] = ACTIONS(49),
    [anon_sym_u6df7u97f3] = ACTIONS(49),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(49),
  },
  [24] = {
    [sym__quotable_creator_name] = STATE(88),
    [anon_sym_DISC] = ACTIONS(74),
    [anon_sym_LF] = ACTIONS(98),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
    [sym_creator_name] = ACTIONS(61),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [25] = {
    [sym__quotable_creator_name] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [sym_creator_name] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(65),
    [anon_sym_u300a] = ACTIONS(65),
    [aux_sym_song_title_token1] = ACTIONS(65),
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
  [27] = {
    [sym__quotable_creator_name] = STATE(88),
    [anon_sym_DISC] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(102),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [sym_creator_name] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(90),
    [anon_sym_u300a] = ACTIONS(90),
    [aux_sym_song_title_token1] = ACTIONS(90),
    [anon_sym_Music] = ACTIONS(90),
    [anon_sym_music] = ACTIONS(90),
    [anon_sym_Composition] = ACTIONS(90),
    [anon_sym_composition] = ACTIONS(90),
    [anon_sym_Composer] = ACTIONS(90),
    [anon_sym_composer] = ACTIONS(90),
    [anon_sym_Compose] = ACTIONS(90),
    [anon_sym_compose] = ACTIONS(90),
    [anon_sym_Lyrics] = ACTIONS(90),
    [anon_sym_lyrics] = ACTIONS(90),
    [anon_sym_Lyricist] = ACTIONS(90),
    [anon_sym_lyricist] = ACTIONS(90),
    [anon_sym_Lyric] = ACTIONS(90),
    [anon_sym_lyric] = ACTIONS(90),
    [anon_sym_Arrangement] = ACTIONS(90),
    [anon_sym_arrangement] = ACTIONS(90),
    [anon_sym_Arranger] = ACTIONS(90),
    [anon_sym_arranger] = ACTIONS(90),
    [anon_sym_Arrange] = ACTIONS(90),
    [anon_sym_arrange] = ACTIONS(90),
    [anon_sym_Vocal] = ACTIONS(90),
    [anon_sym_vocal] = ACTIONS(90),
    [anon_sym_Vo] = ACTIONS(90),
    [anon_sym_vo] = ACTIONS(90),
    [anon_sym_Performer] = ACTIONS(90),
    [anon_sym_performer] = ACTIONS(90),
    [anon_sym_Illustration] = ACTIONS(90),
    [anon_sym_illustration] = ACTIONS(90),
    [anon_sym_Illust] = ACTIONS(90),
    [anon_sym_illust] = ACTIONS(90),
    [anon_sym_Label] = ACTIONS(90),
    [anon_sym_label] = ACTIONS(90),
    [anon_sym_Circle] = ACTIONS(90),
    [anon_sym_circle] = ACTIONS(90),
    [anon_sym_Producer] = ACTIONS(90),
    [anon_sym_producer] = ACTIONS(90),
    [anon_sym_Recording] = ACTIONS(90),
    [anon_sym_recording] = ACTIONS(90),
    [anon_sym_GuestVocal] = ACTIONS(90),
    [anon_sym_Guestvocal] = ACTIONS(90),
    [anon_sym_guestvocal] = ACTIONS(90),
    [anon_sym_Chorus] = ACTIONS(90),
    [anon_sym_chorus] = ACTIONS(90),
    [anon_sym_Mixing] = ACTIONS(90),
    [anon_sym_mixing] = ACTIONS(90),
    [anon_sym_Mastering] = ACTIONS(90),
    [anon_sym_mastering] = ACTIONS(90),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(90),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(90),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(90),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(90),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(90),
    [anon_sym_u6b4cu5531] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(90),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu66f2] = ACTIONS(90),
    [anon_sym_u7de8u66f2] = ACTIONS(90),
    [anon_sym_u7f16u66f2] = ACTIONS(90),
    [anon_sym_u4f5cu8a5e] = ACTIONS(90),
    [anon_sym_u4f5cu8bcd] = ACTIONS(90),
    [anon_sym_u5382u724c] = ACTIONS(90),
    [anon_sym_u811au672c] = ACTIONS(90),
    [anon_sym_u63d2u56fe] = ACTIONS(90),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(90),
    [anon_sym_u51fau7248u65b9] = ACTIONS(90),
    [anon_sym_u5f55u97f3] = ACTIONS(90),
    [anon_sym_u539fu4f5c] = ACTIONS(90),
    [anon_sym_u58f0u4e50] = ACTIONS(90),
    [anon_sym_u4e50u5668] = ACTIONS(90),
    [anon_sym_u6df7u97f3] = ACTIONS(90),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(90),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(108),
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
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(80),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu66f2] = ACTIONS(80),
    [anon_sym_u7de8u66f2] = ACTIONS(80),
    [anon_sym_u7f16u66f2] = ACTIONS(80),
    [anon_sym_u4f5cu8a5e] = ACTIONS(80),
    [anon_sym_u4f5cu8bcd] = ACTIONS(80),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_DISC] = ACTIONS(112),
    [anon_sym_u300a] = ACTIONS(112),
    [aux_sym_song_title_token1] = ACTIONS(112),
    [anon_sym_Music] = ACTIONS(112),
    [anon_sym_music] = ACTIONS(112),
    [anon_sym_Composition] = ACTIONS(112),
    [anon_sym_composition] = ACTIONS(112),
    [anon_sym_Composer] = ACTIONS(112),
    [anon_sym_composer] = ACTIONS(112),
    [anon_sym_Compose] = ACTIONS(112),
    [anon_sym_compose] = ACTIONS(112),
    [anon_sym_Lyrics] = ACTIONS(112),
    [anon_sym_lyrics] = ACTIONS(112),
    [anon_sym_Lyricist] = ACTIONS(112),
    [anon_sym_lyricist] = ACTIONS(112),
    [anon_sym_Lyric] = ACTIONS(112),
    [anon_sym_lyric] = ACTIONS(112),
    [anon_sym_Arrangement] = ACTIONS(112),
    [anon_sym_arrangement] = ACTIONS(112),
    [anon_sym_Arranger] = ACTIONS(112),
    [anon_sym_arranger] = ACTIONS(112),
    [anon_sym_Arrange] = ACTIONS(112),
    [anon_sym_arrange] = ACTIONS(112),
    [anon_sym_Vocal] = ACTIONS(112),
    [anon_sym_vocal] = ACTIONS(112),
    [anon_sym_Vo] = ACTIONS(112),
    [anon_sym_vo] = ACTIONS(112),
    [anon_sym_Performer] = ACTIONS(112),
    [anon_sym_performer] = ACTIONS(112),
    [anon_sym_Illustration] = ACTIONS(112),
    [anon_sym_illustration] = ACTIONS(112),
    [anon_sym_Illust] = ACTIONS(112),
    [anon_sym_illust] = ACTIONS(112),
    [anon_sym_Label] = ACTIONS(112),
    [anon_sym_label] = ACTIONS(112),
    [anon_sym_Circle] = ACTIONS(112),
    [anon_sym_circle] = ACTIONS(112),
    [anon_sym_Producer] = ACTIONS(112),
    [anon_sym_producer] = ACTIONS(112),
    [anon_sym_Recording] = ACTIONS(112),
    [anon_sym_recording] = ACTIONS(112),
    [anon_sym_GuestVocal] = ACTIONS(112),
    [anon_sym_Guestvocal] = ACTIONS(112),
    [anon_sym_guestvocal] = ACTIONS(112),
    [anon_sym_Chorus] = ACTIONS(112),
    [anon_sym_chorus] = ACTIONS(112),
    [anon_sym_Mixing] = ACTIONS(112),
    [anon_sym_mixing] = ACTIONS(112),
    [anon_sym_Mastering] = ACTIONS(112),
    [anon_sym_mastering] = ACTIONS(112),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(112),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(112),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(112),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(112),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(112),
    [anon_sym_u6b4cu5531] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu66f2] = ACTIONS(112),
    [anon_sym_u7de8u66f2] = ACTIONS(112),
    [anon_sym_u7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5e] = ACTIONS(112),
    [anon_sym_u4f5cu8bcd] = ACTIONS(112),
    [anon_sym_u5382u724c] = ACTIONS(112),
    [anon_sym_u811au672c] = ACTIONS(112),
    [anon_sym_u63d2u56fe] = ACTIONS(112),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(112),
    [anon_sym_u51fau7248u65b9] = ACTIONS(112),
    [anon_sym_u5f55u97f3] = ACTIONS(112),
    [anon_sym_u539fu4f5c] = ACTIONS(112),
    [anon_sym_u58f0u4e50] = ACTIONS(112),
    [anon_sym_u4e50u5668] = ACTIONS(112),
    [anon_sym_u6df7u97f3] = ACTIONS(112),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(112),
    [sym__sep] = ACTIONS(114),
  },
  [31] = {
    [sym__quotable_creator_name] = STATE(83),
    [sym_role] = STATE(90),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(116),
    [sym_creator_name] = ACTIONS(61),
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
  [32] = {
    [sym__quotable_creator_name] = STATE(73),
    [sym_role] = STATE(90),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(116),
    [sym_creator_name] = ACTIONS(61),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_DISC] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(120),
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
  [34] = {
    [sym__quotable_creator_name] = STATE(74),
    [sym_role] = STATE(90),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(116),
    [sym_creator_name] = ACTIONS(61),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_DISC] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(124),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_DISC] = ACTIONS(128),
    [anon_sym_u300a] = ACTIONS(128),
    [aux_sym_song_title_token1] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(128),
    [anon_sym_music] = ACTIONS(128),
    [anon_sym_Composition] = ACTIONS(128),
    [anon_sym_composition] = ACTIONS(128),
    [anon_sym_Composer] = ACTIONS(128),
    [anon_sym_composer] = ACTIONS(128),
    [anon_sym_Compose] = ACTIONS(128),
    [anon_sym_compose] = ACTIONS(128),
    [anon_sym_Lyrics] = ACTIONS(128),
    [anon_sym_lyrics] = ACTIONS(128),
    [anon_sym_Lyricist] = ACTIONS(128),
    [anon_sym_lyricist] = ACTIONS(128),
    [anon_sym_Lyric] = ACTIONS(128),
    [anon_sym_lyric] = ACTIONS(128),
    [anon_sym_Arrangement] = ACTIONS(128),
    [anon_sym_arrangement] = ACTIONS(128),
    [anon_sym_Arranger] = ACTIONS(128),
    [anon_sym_arranger] = ACTIONS(128),
    [anon_sym_Arrange] = ACTIONS(128),
    [anon_sym_arrange] = ACTIONS(128),
    [anon_sym_Vocal] = ACTIONS(128),
    [anon_sym_vocal] = ACTIONS(128),
    [anon_sym_Vo] = ACTIONS(128),
    [anon_sym_vo] = ACTIONS(128),
    [anon_sym_Performer] = ACTIONS(128),
    [anon_sym_performer] = ACTIONS(128),
    [anon_sym_Illustration] = ACTIONS(128),
    [anon_sym_illustration] = ACTIONS(128),
    [anon_sym_Illust] = ACTIONS(128),
    [anon_sym_illust] = ACTIONS(128),
    [anon_sym_Label] = ACTIONS(128),
    [anon_sym_label] = ACTIONS(128),
    [anon_sym_Circle] = ACTIONS(128),
    [anon_sym_circle] = ACTIONS(128),
    [anon_sym_Producer] = ACTIONS(128),
    [anon_sym_producer] = ACTIONS(128),
    [anon_sym_Recording] = ACTIONS(128),
    [anon_sym_recording] = ACTIONS(128),
    [anon_sym_GuestVocal] = ACTIONS(128),
    [anon_sym_Guestvocal] = ACTIONS(128),
    [anon_sym_guestvocal] = ACTIONS(128),
    [anon_sym_Chorus] = ACTIONS(128),
    [anon_sym_chorus] = ACTIONS(128),
    [anon_sym_Mixing] = ACTIONS(128),
    [anon_sym_mixing] = ACTIONS(128),
    [anon_sym_Mastering] = ACTIONS(128),
    [anon_sym_mastering] = ACTIONS(128),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(128),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(128),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(128),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(128),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(128),
    [anon_sym_u6b4cu5531] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu66f2] = ACTIONS(128),
    [anon_sym_u7de8u66f2] = ACTIONS(128),
    [anon_sym_u7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5e] = ACTIONS(128),
    [anon_sym_u4f5cu8bcd] = ACTIONS(128),
    [anon_sym_u5382u724c] = ACTIONS(128),
    [anon_sym_u811au672c] = ACTIONS(128),
    [anon_sym_u63d2u56fe] = ACTIONS(128),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(128),
    [anon_sym_u51fau7248u65b9] = ACTIONS(128),
    [anon_sym_u5f55u97f3] = ACTIONS(128),
    [anon_sym_u539fu4f5c] = ACTIONS(128),
    [anon_sym_u58f0u4e50] = ACTIONS(128),
    [anon_sym_u4e50u5668] = ACTIONS(128),
    [anon_sym_u6df7u97f3] = ACTIONS(128),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(128),
    [sym__sep] = ACTIONS(130),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_DISC] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(124),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DISC] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
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
    [anon_sym_GuestVocal] = ACTIONS(49),
    [anon_sym_Guestvocal] = ACTIONS(49),
    [anon_sym_guestvocal] = ACTIONS(49),
    [anon_sym_Chorus] = ACTIONS(49),
    [anon_sym_chorus] = ACTIONS(49),
    [anon_sym_Mixing] = ACTIONS(49),
    [anon_sym_mixing] = ACTIONS(49),
    [anon_sym_Mastering] = ACTIONS(49),
    [anon_sym_mastering] = ACTIONS(49),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(49),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(49),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(49),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(49),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu66f2] = ACTIONS(49),
    [anon_sym_u7de8u66f2] = ACTIONS(49),
    [anon_sym_u7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5e] = ACTIONS(49),
    [anon_sym_u4f5cu8bcd] = ACTIONS(49),
    [anon_sym_u5382u724c] = ACTIONS(49),
    [anon_sym_u811au672c] = ACTIONS(49),
    [anon_sym_u63d2u56fe] = ACTIONS(49),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(49),
    [anon_sym_u51fau7248u65b9] = ACTIONS(49),
    [anon_sym_u5f55u97f3] = ACTIONS(49),
    [anon_sym_u539fu4f5c] = ACTIONS(49),
    [anon_sym_u58f0u4e50] = ACTIONS(49),
    [anon_sym_u4e50u5668] = ACTIONS(49),
    [anon_sym_u6df7u97f3] = ACTIONS(49),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(49),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
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
    [anon_sym_GuestVocal] = ACTIONS(49),
    [anon_sym_Guestvocal] = ACTIONS(49),
    [anon_sym_guestvocal] = ACTIONS(49),
    [anon_sym_Chorus] = ACTIONS(49),
    [anon_sym_chorus] = ACTIONS(49),
    [anon_sym_Mixing] = ACTIONS(49),
    [anon_sym_mixing] = ACTIONS(49),
    [anon_sym_Mastering] = ACTIONS(49),
    [anon_sym_mastering] = ACTIONS(49),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(49),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(49),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(49),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(49),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu66f2] = ACTIONS(49),
    [anon_sym_u7de8u66f2] = ACTIONS(49),
    [anon_sym_u7f16u66f2] = ACTIONS(49),
    [anon_sym_u4f5cu8a5e] = ACTIONS(49),
    [anon_sym_u4f5cu8bcd] = ACTIONS(49),
    [anon_sym_u5382u724c] = ACTIONS(49),
    [anon_sym_u811au672c] = ACTIONS(49),
    [anon_sym_u63d2u56fe] = ACTIONS(49),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(49),
    [anon_sym_u51fau7248u65b9] = ACTIONS(49),
    [anon_sym_u5f55u97f3] = ACTIONS(49),
    [anon_sym_u539fu4f5c] = ACTIONS(49),
    [anon_sym_u58f0u4e50] = ACTIONS(49),
    [anon_sym_u4e50u5668] = ACTIONS(49),
    [anon_sym_u6df7u97f3] = ACTIONS(49),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(49),
  },
  [40] = {
    [sym_role] = STATE(90),
    [aux_sym_credit_field_repeat1] = STATE(40),
    [anon_sym_u300a] = ACTIONS(132),
    [sym_creator_name] = ACTIONS(132),
    [anon_sym_Music] = ACTIONS(134),
    [anon_sym_music] = ACTIONS(134),
    [anon_sym_Composition] = ACTIONS(134),
    [anon_sym_composition] = ACTIONS(134),
    [anon_sym_Composer] = ACTIONS(134),
    [anon_sym_composer] = ACTIONS(134),
    [anon_sym_Compose] = ACTIONS(134),
    [anon_sym_compose] = ACTIONS(134),
    [anon_sym_Lyrics] = ACTIONS(134),
    [anon_sym_lyrics] = ACTIONS(134),
    [anon_sym_Lyricist] = ACTIONS(134),
    [anon_sym_lyricist] = ACTIONS(134),
    [anon_sym_Lyric] = ACTIONS(134),
    [anon_sym_lyric] = ACTIONS(134),
    [anon_sym_Arrangement] = ACTIONS(134),
    [anon_sym_arrangement] = ACTIONS(134),
    [anon_sym_Arranger] = ACTIONS(134),
    [anon_sym_arranger] = ACTIONS(134),
    [anon_sym_Arrange] = ACTIONS(134),
    [anon_sym_arrange] = ACTIONS(134),
    [anon_sym_Vocal] = ACTIONS(134),
    [anon_sym_vocal] = ACTIONS(134),
    [anon_sym_Vo] = ACTIONS(134),
    [anon_sym_vo] = ACTIONS(134),
    [anon_sym_Performer] = ACTIONS(134),
    [anon_sym_performer] = ACTIONS(134),
    [anon_sym_Illustration] = ACTIONS(134),
    [anon_sym_illustration] = ACTIONS(134),
    [anon_sym_Illust] = ACTIONS(134),
    [anon_sym_illust] = ACTIONS(134),
    [anon_sym_Label] = ACTIONS(134),
    [anon_sym_label] = ACTIONS(134),
    [anon_sym_Circle] = ACTIONS(134),
    [anon_sym_circle] = ACTIONS(134),
    [anon_sym_Producer] = ACTIONS(134),
    [anon_sym_producer] = ACTIONS(134),
    [anon_sym_Recording] = ACTIONS(134),
    [anon_sym_recording] = ACTIONS(134),
    [anon_sym_GuestVocal] = ACTIONS(134),
    [anon_sym_Guestvocal] = ACTIONS(134),
    [anon_sym_guestvocal] = ACTIONS(134),
    [anon_sym_Chorus] = ACTIONS(134),
    [anon_sym_chorus] = ACTIONS(134),
    [anon_sym_Mixing] = ACTIONS(134),
    [anon_sym_mixing] = ACTIONS(134),
    [anon_sym_Mastering] = ACTIONS(134),
    [anon_sym_mastering] = ACTIONS(134),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(134),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(134),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(134),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(134),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(134),
    [anon_sym_u6b4cu5531] = ACTIONS(134),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(134),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(134),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(134),
    [anon_sym_u4f5cu66f2] = ACTIONS(134),
    [anon_sym_u7de8u66f2] = ACTIONS(134),
    [anon_sym_u7f16u66f2] = ACTIONS(134),
    [anon_sym_u4f5cu8a5e] = ACTIONS(134),
    [anon_sym_u4f5cu8bcd] = ACTIONS(134),
    [anon_sym_u5382u724c] = ACTIONS(134),
    [anon_sym_u811au672c] = ACTIONS(134),
    [anon_sym_u63d2u56fe] = ACTIONS(134),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(134),
    [anon_sym_u51fau7248u65b9] = ACTIONS(134),
    [anon_sym_u5f55u97f3] = ACTIONS(134),
    [anon_sym_u539fu4f5c] = ACTIONS(134),
    [anon_sym_u58f0u4e50] = ACTIONS(134),
    [anon_sym_u4e50u5668] = ACTIONS(134),
    [anon_sym_u6df7u97f3] = ACTIONS(134),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(134),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(124),
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
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(124),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_DISC] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [aux_sym_song_title_token1] = ACTIONS(139),
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
    [anon_sym_GuestVocal] = ACTIONS(139),
    [anon_sym_Guestvocal] = ACTIONS(139),
    [anon_sym_guestvocal] = ACTIONS(139),
    [anon_sym_Chorus] = ACTIONS(139),
    [anon_sym_chorus] = ACTIONS(139),
    [anon_sym_Mixing] = ACTIONS(139),
    [anon_sym_mixing] = ACTIONS(139),
    [anon_sym_Mastering] = ACTIONS(139),
    [anon_sym_mastering] = ACTIONS(139),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(139),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(139),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(139),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(139),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu66f2] = ACTIONS(139),
    [anon_sym_u7de8u66f2] = ACTIONS(139),
    [anon_sym_u7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5e] = ACTIONS(139),
    [anon_sym_u4f5cu8bcd] = ACTIONS(139),
    [anon_sym_u5382u724c] = ACTIONS(139),
    [anon_sym_u811au672c] = ACTIONS(139),
    [anon_sym_u63d2u56fe] = ACTIONS(139),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(139),
    [anon_sym_u51fau7248u65b9] = ACTIONS(139),
    [anon_sym_u5f55u97f3] = ACTIONS(139),
    [anon_sym_u539fu4f5c] = ACTIONS(139),
    [anon_sym_u58f0u4e50] = ACTIONS(139),
    [anon_sym_u4e50u5668] = ACTIONS(139),
    [anon_sym_u6df7u97f3] = ACTIONS(139),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(139),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(120),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_u300a] = ACTIONS(128),
    [aux_sym_song_title_token1] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(128),
    [anon_sym_music] = ACTIONS(128),
    [anon_sym_Composition] = ACTIONS(128),
    [anon_sym_composition] = ACTIONS(128),
    [anon_sym_Composer] = ACTIONS(128),
    [anon_sym_composer] = ACTIONS(128),
    [anon_sym_Compose] = ACTIONS(128),
    [anon_sym_compose] = ACTIONS(128),
    [anon_sym_Lyrics] = ACTIONS(128),
    [anon_sym_lyrics] = ACTIONS(128),
    [anon_sym_Lyricist] = ACTIONS(128),
    [anon_sym_lyricist] = ACTIONS(128),
    [anon_sym_Lyric] = ACTIONS(128),
    [anon_sym_lyric] = ACTIONS(128),
    [anon_sym_Arrangement] = ACTIONS(128),
    [anon_sym_arrangement] = ACTIONS(128),
    [anon_sym_Arranger] = ACTIONS(128),
    [anon_sym_arranger] = ACTIONS(128),
    [anon_sym_Arrange] = ACTIONS(128),
    [anon_sym_arrange] = ACTIONS(128),
    [anon_sym_Vocal] = ACTIONS(128),
    [anon_sym_vocal] = ACTIONS(128),
    [anon_sym_Vo] = ACTIONS(128),
    [anon_sym_vo] = ACTIONS(128),
    [anon_sym_Performer] = ACTIONS(128),
    [anon_sym_performer] = ACTIONS(128),
    [anon_sym_Illustration] = ACTIONS(128),
    [anon_sym_illustration] = ACTIONS(128),
    [anon_sym_Illust] = ACTIONS(128),
    [anon_sym_illust] = ACTIONS(128),
    [anon_sym_Label] = ACTIONS(128),
    [anon_sym_label] = ACTIONS(128),
    [anon_sym_Circle] = ACTIONS(128),
    [anon_sym_circle] = ACTIONS(128),
    [anon_sym_Producer] = ACTIONS(128),
    [anon_sym_producer] = ACTIONS(128),
    [anon_sym_Recording] = ACTIONS(128),
    [anon_sym_recording] = ACTIONS(128),
    [anon_sym_GuestVocal] = ACTIONS(128),
    [anon_sym_Guestvocal] = ACTIONS(128),
    [anon_sym_guestvocal] = ACTIONS(128),
    [anon_sym_Chorus] = ACTIONS(128),
    [anon_sym_chorus] = ACTIONS(128),
    [anon_sym_Mixing] = ACTIONS(128),
    [anon_sym_mixing] = ACTIONS(128),
    [anon_sym_Mastering] = ACTIONS(128),
    [anon_sym_mastering] = ACTIONS(128),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(128),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(128),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(128),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(128),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(128),
    [anon_sym_u6b4cu5531] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu66f2] = ACTIONS(128),
    [anon_sym_u7de8u66f2] = ACTIONS(128),
    [anon_sym_u7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5e] = ACTIONS(128),
    [anon_sym_u4f5cu8bcd] = ACTIONS(128),
    [anon_sym_u5382u724c] = ACTIONS(128),
    [anon_sym_u811au672c] = ACTIONS(128),
    [anon_sym_u63d2u56fe] = ACTIONS(128),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(128),
    [anon_sym_u51fau7248u65b9] = ACTIONS(128),
    [anon_sym_u5f55u97f3] = ACTIONS(128),
    [anon_sym_u539fu4f5c] = ACTIONS(128),
    [anon_sym_u58f0u4e50] = ACTIONS(128),
    [anon_sym_u4e50u5668] = ACTIONS(128),
    [anon_sym_u6df7u97f3] = ACTIONS(128),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(128),
    [sym__sep] = ACTIONS(141),
  },
  [46] = {
    [anon_sym_DISC] = ACTIONS(128),
    [anon_sym_u300a] = ACTIONS(128),
    [aux_sym_song_title_token1] = ACTIONS(128),
    [anon_sym_Music] = ACTIONS(128),
    [anon_sym_music] = ACTIONS(128),
    [anon_sym_Composition] = ACTIONS(128),
    [anon_sym_composition] = ACTIONS(128),
    [anon_sym_Composer] = ACTIONS(128),
    [anon_sym_composer] = ACTIONS(128),
    [anon_sym_Compose] = ACTIONS(128),
    [anon_sym_compose] = ACTIONS(128),
    [anon_sym_Lyrics] = ACTIONS(128),
    [anon_sym_lyrics] = ACTIONS(128),
    [anon_sym_Lyricist] = ACTIONS(128),
    [anon_sym_lyricist] = ACTIONS(128),
    [anon_sym_Lyric] = ACTIONS(128),
    [anon_sym_lyric] = ACTIONS(128),
    [anon_sym_Arrangement] = ACTIONS(128),
    [anon_sym_arrangement] = ACTIONS(128),
    [anon_sym_Arranger] = ACTIONS(128),
    [anon_sym_arranger] = ACTIONS(128),
    [anon_sym_Arrange] = ACTIONS(128),
    [anon_sym_arrange] = ACTIONS(128),
    [anon_sym_Vocal] = ACTIONS(128),
    [anon_sym_vocal] = ACTIONS(128),
    [anon_sym_Vo] = ACTIONS(128),
    [anon_sym_vo] = ACTIONS(128),
    [anon_sym_Performer] = ACTIONS(128),
    [anon_sym_performer] = ACTIONS(128),
    [anon_sym_Illustration] = ACTIONS(128),
    [anon_sym_illustration] = ACTIONS(128),
    [anon_sym_Illust] = ACTIONS(128),
    [anon_sym_illust] = ACTIONS(128),
    [anon_sym_Label] = ACTIONS(128),
    [anon_sym_label] = ACTIONS(128),
    [anon_sym_Circle] = ACTIONS(128),
    [anon_sym_circle] = ACTIONS(128),
    [anon_sym_Producer] = ACTIONS(128),
    [anon_sym_producer] = ACTIONS(128),
    [anon_sym_Recording] = ACTIONS(128),
    [anon_sym_recording] = ACTIONS(128),
    [anon_sym_GuestVocal] = ACTIONS(128),
    [anon_sym_Guestvocal] = ACTIONS(128),
    [anon_sym_guestvocal] = ACTIONS(128),
    [anon_sym_Chorus] = ACTIONS(128),
    [anon_sym_chorus] = ACTIONS(128),
    [anon_sym_Mixing] = ACTIONS(128),
    [anon_sym_mixing] = ACTIONS(128),
    [anon_sym_Mastering] = ACTIONS(128),
    [anon_sym_mastering] = ACTIONS(128),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(128),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(128),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(128),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(128),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(128),
    [anon_sym_u6b4cu5531] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu66f2] = ACTIONS(128),
    [anon_sym_u7de8u66f2] = ACTIONS(128),
    [anon_sym_u7f16u66f2] = ACTIONS(128),
    [anon_sym_u4f5cu8a5e] = ACTIONS(128),
    [anon_sym_u4f5cu8bcd] = ACTIONS(128),
    [anon_sym_u5382u724c] = ACTIONS(128),
    [anon_sym_u811au672c] = ACTIONS(128),
    [anon_sym_u63d2u56fe] = ACTIONS(128),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(128),
    [anon_sym_u51fau7248u65b9] = ACTIONS(128),
    [anon_sym_u5f55u97f3] = ACTIONS(128),
    [anon_sym_u539fu4f5c] = ACTIONS(128),
    [anon_sym_u58f0u4e50] = ACTIONS(128),
    [anon_sym_u4e50u5668] = ACTIONS(128),
    [anon_sym_u6df7u97f3] = ACTIONS(128),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(128),
    [sym__sep] = ACTIONS(143),
  },
  [47] = {
    [anon_sym_DISC] = ACTIONS(112),
    [anon_sym_u300a] = ACTIONS(112),
    [aux_sym_song_title_token1] = ACTIONS(112),
    [anon_sym_Music] = ACTIONS(112),
    [anon_sym_music] = ACTIONS(112),
    [anon_sym_Composition] = ACTIONS(112),
    [anon_sym_composition] = ACTIONS(112),
    [anon_sym_Composer] = ACTIONS(112),
    [anon_sym_composer] = ACTIONS(112),
    [anon_sym_Compose] = ACTIONS(112),
    [anon_sym_compose] = ACTIONS(112),
    [anon_sym_Lyrics] = ACTIONS(112),
    [anon_sym_lyrics] = ACTIONS(112),
    [anon_sym_Lyricist] = ACTIONS(112),
    [anon_sym_lyricist] = ACTIONS(112),
    [anon_sym_Lyric] = ACTIONS(112),
    [anon_sym_lyric] = ACTIONS(112),
    [anon_sym_Arrangement] = ACTIONS(112),
    [anon_sym_arrangement] = ACTIONS(112),
    [anon_sym_Arranger] = ACTIONS(112),
    [anon_sym_arranger] = ACTIONS(112),
    [anon_sym_Arrange] = ACTIONS(112),
    [anon_sym_arrange] = ACTIONS(112),
    [anon_sym_Vocal] = ACTIONS(112),
    [anon_sym_vocal] = ACTIONS(112),
    [anon_sym_Vo] = ACTIONS(112),
    [anon_sym_vo] = ACTIONS(112),
    [anon_sym_Performer] = ACTIONS(112),
    [anon_sym_performer] = ACTIONS(112),
    [anon_sym_Illustration] = ACTIONS(112),
    [anon_sym_illustration] = ACTIONS(112),
    [anon_sym_Illust] = ACTIONS(112),
    [anon_sym_illust] = ACTIONS(112),
    [anon_sym_Label] = ACTIONS(112),
    [anon_sym_label] = ACTIONS(112),
    [anon_sym_Circle] = ACTIONS(112),
    [anon_sym_circle] = ACTIONS(112),
    [anon_sym_Producer] = ACTIONS(112),
    [anon_sym_producer] = ACTIONS(112),
    [anon_sym_Recording] = ACTIONS(112),
    [anon_sym_recording] = ACTIONS(112),
    [anon_sym_GuestVocal] = ACTIONS(112),
    [anon_sym_Guestvocal] = ACTIONS(112),
    [anon_sym_guestvocal] = ACTIONS(112),
    [anon_sym_Chorus] = ACTIONS(112),
    [anon_sym_chorus] = ACTIONS(112),
    [anon_sym_Mixing] = ACTIONS(112),
    [anon_sym_mixing] = ACTIONS(112),
    [anon_sym_Mastering] = ACTIONS(112),
    [anon_sym_mastering] = ACTIONS(112),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(112),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(112),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(112),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(112),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(112),
    [anon_sym_u6b4cu5531] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu66f2] = ACTIONS(112),
    [anon_sym_u7de8u66f2] = ACTIONS(112),
    [anon_sym_u7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5e] = ACTIONS(112),
    [anon_sym_u4f5cu8bcd] = ACTIONS(112),
    [anon_sym_u5382u724c] = ACTIONS(112),
    [anon_sym_u811au672c] = ACTIONS(112),
    [anon_sym_u63d2u56fe] = ACTIONS(112),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(112),
    [anon_sym_u51fau7248u65b9] = ACTIONS(112),
    [anon_sym_u5f55u97f3] = ACTIONS(112),
    [anon_sym_u539fu4f5c] = ACTIONS(112),
    [anon_sym_u58f0u4e50] = ACTIONS(112),
    [anon_sym_u4e50u5668] = ACTIONS(112),
    [anon_sym_u6df7u97f3] = ACTIONS(112),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(112),
    [sym__sep] = ACTIONS(145),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_u300a] = ACTIONS(112),
    [aux_sym_song_title_token1] = ACTIONS(112),
    [anon_sym_Music] = ACTIONS(112),
    [anon_sym_music] = ACTIONS(112),
    [anon_sym_Composition] = ACTIONS(112),
    [anon_sym_composition] = ACTIONS(112),
    [anon_sym_Composer] = ACTIONS(112),
    [anon_sym_composer] = ACTIONS(112),
    [anon_sym_Compose] = ACTIONS(112),
    [anon_sym_compose] = ACTIONS(112),
    [anon_sym_Lyrics] = ACTIONS(112),
    [anon_sym_lyrics] = ACTIONS(112),
    [anon_sym_Lyricist] = ACTIONS(112),
    [anon_sym_lyricist] = ACTIONS(112),
    [anon_sym_Lyric] = ACTIONS(112),
    [anon_sym_lyric] = ACTIONS(112),
    [anon_sym_Arrangement] = ACTIONS(112),
    [anon_sym_arrangement] = ACTIONS(112),
    [anon_sym_Arranger] = ACTIONS(112),
    [anon_sym_arranger] = ACTIONS(112),
    [anon_sym_Arrange] = ACTIONS(112),
    [anon_sym_arrange] = ACTIONS(112),
    [anon_sym_Vocal] = ACTIONS(112),
    [anon_sym_vocal] = ACTIONS(112),
    [anon_sym_Vo] = ACTIONS(112),
    [anon_sym_vo] = ACTIONS(112),
    [anon_sym_Performer] = ACTIONS(112),
    [anon_sym_performer] = ACTIONS(112),
    [anon_sym_Illustration] = ACTIONS(112),
    [anon_sym_illustration] = ACTIONS(112),
    [anon_sym_Illust] = ACTIONS(112),
    [anon_sym_illust] = ACTIONS(112),
    [anon_sym_Label] = ACTIONS(112),
    [anon_sym_label] = ACTIONS(112),
    [anon_sym_Circle] = ACTIONS(112),
    [anon_sym_circle] = ACTIONS(112),
    [anon_sym_Producer] = ACTIONS(112),
    [anon_sym_producer] = ACTIONS(112),
    [anon_sym_Recording] = ACTIONS(112),
    [anon_sym_recording] = ACTIONS(112),
    [anon_sym_GuestVocal] = ACTIONS(112),
    [anon_sym_Guestvocal] = ACTIONS(112),
    [anon_sym_guestvocal] = ACTIONS(112),
    [anon_sym_Chorus] = ACTIONS(112),
    [anon_sym_chorus] = ACTIONS(112),
    [anon_sym_Mixing] = ACTIONS(112),
    [anon_sym_mixing] = ACTIONS(112),
    [anon_sym_Mastering] = ACTIONS(112),
    [anon_sym_mastering] = ACTIONS(112),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(112),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(112),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(112),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(112),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(112),
    [anon_sym_u6b4cu5531] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu66f2] = ACTIONS(112),
    [anon_sym_u7de8u66f2] = ACTIONS(112),
    [anon_sym_u7f16u66f2] = ACTIONS(112),
    [anon_sym_u4f5cu8a5e] = ACTIONS(112),
    [anon_sym_u4f5cu8bcd] = ACTIONS(112),
    [anon_sym_u5382u724c] = ACTIONS(112),
    [anon_sym_u811au672c] = ACTIONS(112),
    [anon_sym_u63d2u56fe] = ACTIONS(112),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(112),
    [anon_sym_u51fau7248u65b9] = ACTIONS(112),
    [anon_sym_u5f55u97f3] = ACTIONS(112),
    [anon_sym_u539fu4f5c] = ACTIONS(112),
    [anon_sym_u58f0u4e50] = ACTIONS(112),
    [anon_sym_u4e50u5668] = ACTIONS(112),
    [anon_sym_u6df7u97f3] = ACTIONS(112),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(112),
    [sym__sep] = ACTIONS(147),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_DISC] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_DISC] = ACTIONS(57),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_DISC] = ACTIONS(151),
    [anon_sym_u300a] = ACTIONS(151),
    [aux_sym_song_title_token1] = ACTIONS(151),
    [anon_sym_Music] = ACTIONS(151),
    [anon_sym_music] = ACTIONS(151),
    [anon_sym_Composition] = ACTIONS(151),
    [anon_sym_composition] = ACTIONS(151),
    [anon_sym_Composer] = ACTIONS(151),
    [anon_sym_composer] = ACTIONS(151),
    [anon_sym_Compose] = ACTIONS(151),
    [anon_sym_compose] = ACTIONS(151),
    [anon_sym_Lyrics] = ACTIONS(151),
    [anon_sym_lyrics] = ACTIONS(151),
    [anon_sym_Lyricist] = ACTIONS(151),
    [anon_sym_lyricist] = ACTIONS(151),
    [anon_sym_Lyric] = ACTIONS(151),
    [anon_sym_lyric] = ACTIONS(151),
    [anon_sym_Arrangement] = ACTIONS(151),
    [anon_sym_arrangement] = ACTIONS(151),
    [anon_sym_Arranger] = ACTIONS(151),
    [anon_sym_arranger] = ACTIONS(151),
    [anon_sym_Arrange] = ACTIONS(151),
    [anon_sym_arrange] = ACTIONS(151),
    [anon_sym_Vocal] = ACTIONS(151),
    [anon_sym_vocal] = ACTIONS(151),
    [anon_sym_Vo] = ACTIONS(151),
    [anon_sym_vo] = ACTIONS(151),
    [anon_sym_Performer] = ACTIONS(151),
    [anon_sym_performer] = ACTIONS(151),
    [anon_sym_Illustration] = ACTIONS(151),
    [anon_sym_illustration] = ACTIONS(151),
    [anon_sym_Illust] = ACTIONS(151),
    [anon_sym_illust] = ACTIONS(151),
    [anon_sym_Label] = ACTIONS(151),
    [anon_sym_label] = ACTIONS(151),
    [anon_sym_Circle] = ACTIONS(151),
    [anon_sym_circle] = ACTIONS(151),
    [anon_sym_Producer] = ACTIONS(151),
    [anon_sym_producer] = ACTIONS(151),
    [anon_sym_Recording] = ACTIONS(151),
    [anon_sym_recording] = ACTIONS(151),
    [anon_sym_GuestVocal] = ACTIONS(151),
    [anon_sym_Guestvocal] = ACTIONS(151),
    [anon_sym_guestvocal] = ACTIONS(151),
    [anon_sym_Chorus] = ACTIONS(151),
    [anon_sym_chorus] = ACTIONS(151),
    [anon_sym_Mixing] = ACTIONS(151),
    [anon_sym_mixing] = ACTIONS(151),
    [anon_sym_Mastering] = ACTIONS(151),
    [anon_sym_mastering] = ACTIONS(151),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(151),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(151),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(151),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(151),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(151),
    [anon_sym_u6b4cu5531] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu66f2] = ACTIONS(151),
    [anon_sym_u7de8u66f2] = ACTIONS(151),
    [anon_sym_u7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5e] = ACTIONS(151),
    [anon_sym_u4f5cu8bcd] = ACTIONS(151),
    [anon_sym_u5382u724c] = ACTIONS(151),
    [anon_sym_u811au672c] = ACTIONS(151),
    [anon_sym_u63d2u56fe] = ACTIONS(151),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(151),
    [anon_sym_u51fau7248u65b9] = ACTIONS(151),
    [anon_sym_u5f55u97f3] = ACTIONS(151),
    [anon_sym_u539fu4f5c] = ACTIONS(151),
    [anon_sym_u58f0u4e50] = ACTIONS(151),
    [anon_sym_u4e50u5668] = ACTIONS(151),
    [anon_sym_u6df7u97f3] = ACTIONS(151),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(151),
  },
  [52] = {
    [anon_sym_DISC] = ACTIONS(151),
    [anon_sym_u300a] = ACTIONS(151),
    [aux_sym_song_title_token1] = ACTIONS(151),
    [anon_sym_Music] = ACTIONS(151),
    [anon_sym_music] = ACTIONS(151),
    [anon_sym_Composition] = ACTIONS(151),
    [anon_sym_composition] = ACTIONS(151),
    [anon_sym_Composer] = ACTIONS(151),
    [anon_sym_composer] = ACTIONS(151),
    [anon_sym_Compose] = ACTIONS(151),
    [anon_sym_compose] = ACTIONS(151),
    [anon_sym_Lyrics] = ACTIONS(151),
    [anon_sym_lyrics] = ACTIONS(151),
    [anon_sym_Lyricist] = ACTIONS(151),
    [anon_sym_lyricist] = ACTIONS(151),
    [anon_sym_Lyric] = ACTIONS(151),
    [anon_sym_lyric] = ACTIONS(151),
    [anon_sym_Arrangement] = ACTIONS(151),
    [anon_sym_arrangement] = ACTIONS(151),
    [anon_sym_Arranger] = ACTIONS(151),
    [anon_sym_arranger] = ACTIONS(151),
    [anon_sym_Arrange] = ACTIONS(151),
    [anon_sym_arrange] = ACTIONS(151),
    [anon_sym_Vocal] = ACTIONS(151),
    [anon_sym_vocal] = ACTIONS(151),
    [anon_sym_Vo] = ACTIONS(151),
    [anon_sym_vo] = ACTIONS(151),
    [anon_sym_Performer] = ACTIONS(151),
    [anon_sym_performer] = ACTIONS(151),
    [anon_sym_Illustration] = ACTIONS(151),
    [anon_sym_illustration] = ACTIONS(151),
    [anon_sym_Illust] = ACTIONS(151),
    [anon_sym_illust] = ACTIONS(151),
    [anon_sym_Label] = ACTIONS(151),
    [anon_sym_label] = ACTIONS(151),
    [anon_sym_Circle] = ACTIONS(151),
    [anon_sym_circle] = ACTIONS(151),
    [anon_sym_Producer] = ACTIONS(151),
    [anon_sym_producer] = ACTIONS(151),
    [anon_sym_Recording] = ACTIONS(151),
    [anon_sym_recording] = ACTIONS(151),
    [anon_sym_GuestVocal] = ACTIONS(151),
    [anon_sym_Guestvocal] = ACTIONS(151),
    [anon_sym_guestvocal] = ACTIONS(151),
    [anon_sym_Chorus] = ACTIONS(151),
    [anon_sym_chorus] = ACTIONS(151),
    [anon_sym_Mixing] = ACTIONS(151),
    [anon_sym_mixing] = ACTIONS(151),
    [anon_sym_Mastering] = ACTIONS(151),
    [anon_sym_mastering] = ACTIONS(151),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(151),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(151),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(151),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(151),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(151),
    [anon_sym_u6b4cu5531] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu66f2] = ACTIONS(151),
    [anon_sym_u7de8u66f2] = ACTIONS(151),
    [anon_sym_u7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5e] = ACTIONS(151),
    [anon_sym_u4f5cu8bcd] = ACTIONS(151),
    [anon_sym_u5382u724c] = ACTIONS(151),
    [anon_sym_u811au672c] = ACTIONS(151),
    [anon_sym_u63d2u56fe] = ACTIONS(151),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(151),
    [anon_sym_u51fau7248u65b9] = ACTIONS(151),
    [anon_sym_u5f55u97f3] = ACTIONS(151),
    [anon_sym_u539fu4f5c] = ACTIONS(151),
    [anon_sym_u58f0u4e50] = ACTIONS(151),
    [anon_sym_u4e50u5668] = ACTIONS(151),
    [anon_sym_u6df7u97f3] = ACTIONS(151),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(151),
  },
  [53] = {
    [anon_sym_DISC] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [54] = {
    [anon_sym_DISC] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [aux_sym_song_title_token1] = ACTIONS(139),
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
    [anon_sym_GuestVocal] = ACTIONS(139),
    [anon_sym_Guestvocal] = ACTIONS(139),
    [anon_sym_guestvocal] = ACTIONS(139),
    [anon_sym_Chorus] = ACTIONS(139),
    [anon_sym_chorus] = ACTIONS(139),
    [anon_sym_Mixing] = ACTIONS(139),
    [anon_sym_mixing] = ACTIONS(139),
    [anon_sym_Mastering] = ACTIONS(139),
    [anon_sym_mastering] = ACTIONS(139),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(139),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(139),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(139),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(139),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu66f2] = ACTIONS(139),
    [anon_sym_u7de8u66f2] = ACTIONS(139),
    [anon_sym_u7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5e] = ACTIONS(139),
    [anon_sym_u4f5cu8bcd] = ACTIONS(139),
    [anon_sym_u5382u724c] = ACTIONS(139),
    [anon_sym_u811au672c] = ACTIONS(139),
    [anon_sym_u63d2u56fe] = ACTIONS(139),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(139),
    [anon_sym_u51fau7248u65b9] = ACTIONS(139),
    [anon_sym_u5f55u97f3] = ACTIONS(139),
    [anon_sym_u539fu4f5c] = ACTIONS(139),
    [anon_sym_u58f0u4e50] = ACTIONS(139),
    [anon_sym_u4e50u5668] = ACTIONS(139),
    [anon_sym_u6df7u97f3] = ACTIONS(139),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(139),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_u300a] = ACTIONS(139),
    [aux_sym_song_title_token1] = ACTIONS(139),
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
    [anon_sym_GuestVocal] = ACTIONS(139),
    [anon_sym_Guestvocal] = ACTIONS(139),
    [anon_sym_guestvocal] = ACTIONS(139),
    [anon_sym_Chorus] = ACTIONS(139),
    [anon_sym_chorus] = ACTIONS(139),
    [anon_sym_Mixing] = ACTIONS(139),
    [anon_sym_mixing] = ACTIONS(139),
    [anon_sym_Mastering] = ACTIONS(139),
    [anon_sym_mastering] = ACTIONS(139),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(139),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(139),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(139),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(139),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu66f2] = ACTIONS(139),
    [anon_sym_u7de8u66f2] = ACTIONS(139),
    [anon_sym_u7f16u66f2] = ACTIONS(139),
    [anon_sym_u4f5cu8a5e] = ACTIONS(139),
    [anon_sym_u4f5cu8bcd] = ACTIONS(139),
    [anon_sym_u5382u724c] = ACTIONS(139),
    [anon_sym_u811au672c] = ACTIONS(139),
    [anon_sym_u63d2u56fe] = ACTIONS(139),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(139),
    [anon_sym_u51fau7248u65b9] = ACTIONS(139),
    [anon_sym_u5f55u97f3] = ACTIONS(139),
    [anon_sym_u539fu4f5c] = ACTIONS(139),
    [anon_sym_u58f0u4e50] = ACTIONS(139),
    [anon_sym_u4e50u5668] = ACTIONS(139),
    [anon_sym_u6df7u97f3] = ACTIONS(139),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(139),
  },
  [56] = {
    [anon_sym_DISC] = ACTIONS(57),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_u300a] = ACTIONS(151),
    [aux_sym_song_title_token1] = ACTIONS(151),
    [anon_sym_Music] = ACTIONS(151),
    [anon_sym_music] = ACTIONS(151),
    [anon_sym_Composition] = ACTIONS(151),
    [anon_sym_composition] = ACTIONS(151),
    [anon_sym_Composer] = ACTIONS(151),
    [anon_sym_composer] = ACTIONS(151),
    [anon_sym_Compose] = ACTIONS(151),
    [anon_sym_compose] = ACTIONS(151),
    [anon_sym_Lyrics] = ACTIONS(151),
    [anon_sym_lyrics] = ACTIONS(151),
    [anon_sym_Lyricist] = ACTIONS(151),
    [anon_sym_lyricist] = ACTIONS(151),
    [anon_sym_Lyric] = ACTIONS(151),
    [anon_sym_lyric] = ACTIONS(151),
    [anon_sym_Arrangement] = ACTIONS(151),
    [anon_sym_arrangement] = ACTIONS(151),
    [anon_sym_Arranger] = ACTIONS(151),
    [anon_sym_arranger] = ACTIONS(151),
    [anon_sym_Arrange] = ACTIONS(151),
    [anon_sym_arrange] = ACTIONS(151),
    [anon_sym_Vocal] = ACTIONS(151),
    [anon_sym_vocal] = ACTIONS(151),
    [anon_sym_Vo] = ACTIONS(151),
    [anon_sym_vo] = ACTIONS(151),
    [anon_sym_Performer] = ACTIONS(151),
    [anon_sym_performer] = ACTIONS(151),
    [anon_sym_Illustration] = ACTIONS(151),
    [anon_sym_illustration] = ACTIONS(151),
    [anon_sym_Illust] = ACTIONS(151),
    [anon_sym_illust] = ACTIONS(151),
    [anon_sym_Label] = ACTIONS(151),
    [anon_sym_label] = ACTIONS(151),
    [anon_sym_Circle] = ACTIONS(151),
    [anon_sym_circle] = ACTIONS(151),
    [anon_sym_Producer] = ACTIONS(151),
    [anon_sym_producer] = ACTIONS(151),
    [anon_sym_Recording] = ACTIONS(151),
    [anon_sym_recording] = ACTIONS(151),
    [anon_sym_GuestVocal] = ACTIONS(151),
    [anon_sym_Guestvocal] = ACTIONS(151),
    [anon_sym_guestvocal] = ACTIONS(151),
    [anon_sym_Chorus] = ACTIONS(151),
    [anon_sym_chorus] = ACTIONS(151),
    [anon_sym_Mixing] = ACTIONS(151),
    [anon_sym_mixing] = ACTIONS(151),
    [anon_sym_Mastering] = ACTIONS(151),
    [anon_sym_mastering] = ACTIONS(151),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(151),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(151),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(151),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(151),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(151),
    [anon_sym_u6b4cu5531] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu66f2] = ACTIONS(151),
    [anon_sym_u7de8u66f2] = ACTIONS(151),
    [anon_sym_u7f16u66f2] = ACTIONS(151),
    [anon_sym_u4f5cu8a5e] = ACTIONS(151),
    [anon_sym_u4f5cu8bcd] = ACTIONS(151),
    [anon_sym_u5382u724c] = ACTIONS(151),
    [anon_sym_u811au672c] = ACTIONS(151),
    [anon_sym_u63d2u56fe] = ACTIONS(151),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(151),
    [anon_sym_u51fau7248u65b9] = ACTIONS(151),
    [anon_sym_u5f55u97f3] = ACTIONS(151),
    [anon_sym_u539fu4f5c] = ACTIONS(151),
    [anon_sym_u58f0u4e50] = ACTIONS(151),
    [anon_sym_u4e50u5668] = ACTIONS(151),
    [anon_sym_u6df7u97f3] = ACTIONS(151),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(151),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_u300a] = ACTIONS(57),
    [aux_sym_song_title_token1] = ACTIONS(57),
    [anon_sym_Music] = ACTIONS(57),
    [anon_sym_music] = ACTIONS(57),
    [anon_sym_Composition] = ACTIONS(57),
    [anon_sym_composition] = ACTIONS(57),
    [anon_sym_Composer] = ACTIONS(57),
    [anon_sym_composer] = ACTIONS(57),
    [anon_sym_Compose] = ACTIONS(57),
    [anon_sym_compose] = ACTIONS(57),
    [anon_sym_Lyrics] = ACTIONS(57),
    [anon_sym_lyrics] = ACTIONS(57),
    [anon_sym_Lyricist] = ACTIONS(57),
    [anon_sym_lyricist] = ACTIONS(57),
    [anon_sym_Lyric] = ACTIONS(57),
    [anon_sym_lyric] = ACTIONS(57),
    [anon_sym_Arrangement] = ACTIONS(57),
    [anon_sym_arrangement] = ACTIONS(57),
    [anon_sym_Arranger] = ACTIONS(57),
    [anon_sym_arranger] = ACTIONS(57),
    [anon_sym_Arrange] = ACTIONS(57),
    [anon_sym_arrange] = ACTIONS(57),
    [anon_sym_Vocal] = ACTIONS(57),
    [anon_sym_vocal] = ACTIONS(57),
    [anon_sym_Vo] = ACTIONS(57),
    [anon_sym_vo] = ACTIONS(57),
    [anon_sym_Performer] = ACTIONS(57),
    [anon_sym_performer] = ACTIONS(57),
    [anon_sym_Illustration] = ACTIONS(57),
    [anon_sym_illustration] = ACTIONS(57),
    [anon_sym_Illust] = ACTIONS(57),
    [anon_sym_illust] = ACTIONS(57),
    [anon_sym_Label] = ACTIONS(57),
    [anon_sym_label] = ACTIONS(57),
    [anon_sym_Circle] = ACTIONS(57),
    [anon_sym_circle] = ACTIONS(57),
    [anon_sym_Producer] = ACTIONS(57),
    [anon_sym_producer] = ACTIONS(57),
    [anon_sym_Recording] = ACTIONS(57),
    [anon_sym_recording] = ACTIONS(57),
    [anon_sym_GuestVocal] = ACTIONS(57),
    [anon_sym_Guestvocal] = ACTIONS(57),
    [anon_sym_guestvocal] = ACTIONS(57),
    [anon_sym_Chorus] = ACTIONS(57),
    [anon_sym_chorus] = ACTIONS(57),
    [anon_sym_Mixing] = ACTIONS(57),
    [anon_sym_mixing] = ACTIONS(57),
    [anon_sym_Mastering] = ACTIONS(57),
    [anon_sym_mastering] = ACTIONS(57),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(57),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(57),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(57),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(57),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(57),
    [anon_sym_u6b4cu5531] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu66f2] = ACTIONS(57),
    [anon_sym_u7de8u66f2] = ACTIONS(57),
    [anon_sym_u7f16u66f2] = ACTIONS(57),
    [anon_sym_u4f5cu8a5e] = ACTIONS(57),
    [anon_sym_u4f5cu8bcd] = ACTIONS(57),
    [anon_sym_u5382u724c] = ACTIONS(57),
    [anon_sym_u811au672c] = ACTIONS(57),
    [anon_sym_u63d2u56fe] = ACTIONS(57),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(57),
    [anon_sym_u51fau7248u65b9] = ACTIONS(57),
    [anon_sym_u5f55u97f3] = ACTIONS(57),
    [anon_sym_u539fu4f5c] = ACTIONS(57),
    [anon_sym_u58f0u4e50] = ACTIONS(57),
    [anon_sym_u4e50u5668] = ACTIONS(57),
    [anon_sym_u6df7u97f3] = ACTIONS(57),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(57),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_u300a] = ACTIONS(74),
    [aux_sym_song_title_token1] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(74),
    [anon_sym_Guestvocal] = ACTIONS(74),
    [anon_sym_guestvocal] = ACTIONS(74),
    [anon_sym_Chorus] = ACTIONS(74),
    [anon_sym_chorus] = ACTIONS(74),
    [anon_sym_Mixing] = ACTIONS(74),
    [anon_sym_mixing] = ACTIONS(74),
    [anon_sym_Mastering] = ACTIONS(74),
    [anon_sym_mastering] = ACTIONS(74),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(74),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(74),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(74),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(74),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(74),
    [anon_sym_u6b4cu5531] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu66f2] = ACTIONS(74),
    [anon_sym_u7de8u66f2] = ACTIONS(74),
    [anon_sym_u7f16u66f2] = ACTIONS(74),
    [anon_sym_u4f5cu8a5e] = ACTIONS(74),
    [anon_sym_u4f5cu8bcd] = ACTIONS(74),
    [anon_sym_u5382u724c] = ACTIONS(74),
    [anon_sym_u811au672c] = ACTIONS(74),
    [anon_sym_u63d2u56fe] = ACTIONS(74),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(74),
    [anon_sym_u51fau7248u65b9] = ACTIONS(74),
    [anon_sym_u5f55u97f3] = ACTIONS(74),
    [anon_sym_u539fu4f5c] = ACTIONS(74),
    [anon_sym_u58f0u4e50] = ACTIONS(74),
    [anon_sym_u4e50u5668] = ACTIONS(74),
    [anon_sym_u6df7u97f3] = ACTIONS(74),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(74),
  },
  [60] = {
    [anon_sym_u300a] = ACTIONS(132),
    [sym_creator_name] = ACTIONS(132),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_DISC,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(28), 1,
      sym_song_title,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(66), 2,
      aux_sym__disc,
      sym_song,
    STATE(71), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_DISC,
    ACTIONS(157), 1,
      anon_sym_u300a,
    ACTIONS(160), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(8), 1,
      aux_sym_song_title_repeat1,
    STATE(20), 1,
      sym__quotable_song_title,
    STATE(21), 1,
      sym_song_title,
    STATE(62), 2,
      aux_sym__disc,
      sym_song,
  [59] = 9,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_DISC,
    ACTIONS(167), 1,
      anon_sym_u300a,
    ACTIONS(169), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(8), 1,
      aux_sym_song_title_repeat1,
    STATE(20), 1,
      sym__quotable_song_title,
    STATE(21), 1,
      sym_song_title,
    STATE(62), 2,
      aux_sym__disc,
      sym_song,
  [88] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(28), 1,
      sym_song_title,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [114] = 8,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      anon_sym_u300a,
    ACTIONS(176), 1,
      aux_sym_song_title_token1,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(28), 1,
      sym_song_title,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [140] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(18), 1,
      aux_sym_song_title_repeat1,
    STATE(28), 1,
      sym_song_title,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [166] = 7,
    ACTIONS(167), 1,
      anon_sym_u300a,
    ACTIONS(169), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(8), 1,
      aux_sym_song_title_repeat1,
    STATE(20), 1,
      sym__quotable_song_title,
    STATE(21), 1,
      sym_song_title,
    STATE(63), 2,
      aux_sym__disc,
      sym_song,
  [189] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [198] = 3,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [209] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [218] = 3,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [229] = 3,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [240] = 3,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      sym__sep,
    STATE(80), 1,
      aux_sym_credit_field_repeat2,
  [250] = 3,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 1,
      sym__sep,
    STATE(84), 1,
      aux_sym_credit_field_repeat2,
  [260] = 3,
    ACTIONS(200), 1,
      aux_sym_song_title_token1,
    STATE(76), 1,
      aux_sym_song_title_repeat1,
    STATE(98), 1,
      sym_song_title,
  [270] = 3,
    ACTIONS(43), 1,
      anon_sym_u300b,
    ACTIONS(202), 1,
      aux_sym_song_title_token1,
    STATE(85), 1,
      aux_sym_song_title_repeat1,
  [280] = 3,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      sym__sep,
    STATE(77), 1,
      aux_sym_credit_field_repeat2,
  [290] = 3,
    ACTIONS(200), 1,
      aux_sym_song_title_token1,
    STATE(76), 1,
      aux_sym_song_title_repeat1,
    STATE(92), 1,
      sym_song_title,
  [300] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [308] = 3,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      sym__sep,
    STATE(77), 1,
      aux_sym_credit_field_repeat2,
  [318] = 3,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(215), 1,
      sym__sep,
    STATE(77), 1,
      aux_sym_credit_field_repeat2,
  [328] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [336] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 1,
      sym__sep,
    STATE(81), 1,
      aux_sym_credit_field_repeat2,
  [346] = 3,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      sym__sep,
    STATE(77), 1,
      aux_sym_credit_field_repeat2,
  [356] = 3,
    ACTIONS(25), 1,
      anon_sym_u300b,
    ACTIONS(225), 1,
      aux_sym_song_title_token1,
    STATE(85), 1,
      aux_sym_song_title_repeat1,
  [366] = 3,
    ACTIONS(116), 1,
      anon_sym_u300a,
    ACTIONS(228), 1,
      sym_creator_name,
    STATE(88), 1,
      sym__quotable_creator_name,
  [376] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      sym__sep,
  [383] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      sym__sep,
  [390] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      sym__sep,
  [397] = 1,
    ACTIONS(242), 1,
      sym__sep,
  [401] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [405] = 1,
    ACTIONS(246), 1,
      anon_sym_u300b,
  [409] = 1,
    ACTIONS(248), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [413] = 1,
    ACTIONS(250), 1,
      anon_sym_u300b,
  [417] = 1,
    ACTIONS(252), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [421] = 1,
    ACTIONS(254), 1,
      aux_sym__quotable_creator_name_token1,
  [425] = 1,
    ACTIONS(256), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [429] = 1,
    ACTIONS(258), 1,
      anon_sym_u300b,
  [433] = 1,
    ACTIONS(260), 1,
      anon_sym_LF,
  [437] = 1,
    ACTIONS(262), 1,
      sym__sep,
  [441] = 1,
    ACTIONS(264), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 30,
  [SMALL_STATE(63)] = 59,
  [SMALL_STATE(64)] = 88,
  [SMALL_STATE(65)] = 114,
  [SMALL_STATE(66)] = 140,
  [SMALL_STATE(67)] = 166,
  [SMALL_STATE(68)] = 189,
  [SMALL_STATE(69)] = 198,
  [SMALL_STATE(70)] = 209,
  [SMALL_STATE(71)] = 218,
  [SMALL_STATE(72)] = 229,
  [SMALL_STATE(73)] = 240,
  [SMALL_STATE(74)] = 250,
  [SMALL_STATE(75)] = 260,
  [SMALL_STATE(76)] = 270,
  [SMALL_STATE(77)] = 280,
  [SMALL_STATE(78)] = 290,
  [SMALL_STATE(79)] = 300,
  [SMALL_STATE(80)] = 308,
  [SMALL_STATE(81)] = 318,
  [SMALL_STATE(82)] = 328,
  [SMALL_STATE(83)] = 336,
  [SMALL_STATE(84)] = 346,
  [SMALL_STATE(85)] = 356,
  [SMALL_STATE(86)] = 366,
  [SMALL_STATE(87)] = 376,
  [SMALL_STATE(88)] = 383,
  [SMALL_STATE(89)] = 390,
  [SMALL_STATE(90)] = 397,
  [SMALL_STATE(91)] = 401,
  [SMALL_STATE(92)] = 405,
  [SMALL_STATE(93)] = 409,
  [SMALL_STATE(94)] = 413,
  [SMALL_STATE(95)] = 417,
  [SMALL_STATE(96)] = 421,
  [SMALL_STATE(97)] = 425,
  [SMALL_STATE(98)] = 429,
  [SMALL_STATE(99)] = 433,
  [SMALL_STATE(100)] = 437,
  [SMALL_STATE(101)] = 441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 3, 0, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 3, 0, 5),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 6),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 6),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 9),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(78),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(75),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 3, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 3, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 10), SHIFT_REPEAT(86),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 8),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
