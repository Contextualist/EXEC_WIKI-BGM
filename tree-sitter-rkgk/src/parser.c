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
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

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
  sym__role_instrument = 11,
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
  anon_sym_GuestVocal = 48,
  anon_sym_Guestvocal = 49,
  anon_sym_guestvocal = 50,
  anon_sym_Chorus = 51,
  anon_sym_chorus = 52,
  anon_sym_Mixing = 53,
  anon_sym_mixing = 54,
  anon_sym_Mastering = 55,
  anon_sym_mastering = 56,
  anon_sym_u30dcu30fcu30abu30eb = 57,
  anon_sym_u30a2u30ecu30f3u30b8 = 58,
  anon_sym_u30a4u30e9u30b9u30c8 = 59,
  anon_sym_u30ecu30fcu30d9u30eb = 60,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 61,
  anon_sym_u827au672fu5bb6 = 62,
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
  sym__role = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_credit_block_repeat1 = 102,
  aux_sym_credit_field_repeat1 = 103,
  aux_sym_credit_field_repeat2 = 104,
  aux_sym_song_title_repeat1 = 105,
  alias_sym_creator_sep = 106,
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
  [sym__role_instrument] = "_role_instrument",
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
  [anon_sym_u827au672fu5bb6] = "\u827a\u672f\u5bb6",
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
  [sym__role] = "_role",
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
  [sym__role_instrument] = sym__role_instrument,
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
  [anon_sym_u827au672fu5bb6] = anon_sym_u827au672fu5bb6,
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
  [sym__role] = sym__role,
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
  [sym__role_instrument] = {
    .visible = false,
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
  [anon_sym_u827au672fu5bb6] = {
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
  [sym__role] = {
    .visible = false,
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
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role, 0},
  [1] =
    {field_title, 0, .inherited = true},
  [2] =
    {field_title, 0},
  [3] =
    {field_role, 0, .inherited = true},
  [4] =
    {field_creator, 0},
  [5] =
    {field_title, 1},
  [6] =
    {field_creator, 1, .inherited = true},
  [7] =
    {field_creator, 1},
  [8] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [10] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [13] =
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 6,
  [9] = 5,
  [10] = 5,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 12,
  [22] = 22,
  [23] = 22,
  [24] = 15,
  [25] = 17,
  [26] = 20,
  [27] = 18,
  [28] = 18,
  [29] = 16,
  [30] = 14,
  [31] = 15,
  [32] = 22,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 33,
  [42] = 36,
  [43] = 35,
  [44] = 38,
  [45] = 39,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 38,
  [50] = 50,
  [51] = 39,
  [52] = 50,
  [53] = 40,
  [54] = 48,
  [55] = 46,
  [56] = 40,
  [57] = 50,
  [58] = 48,
  [59] = 46,
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
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 73,
  [78] = 12,
  [79] = 69,
  [80] = 71,
  [81] = 81,
  [82] = 81,
  [83] = 13,
  [84] = 74,
  [85] = 85,
  [86] = 73,
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
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 95,
  [101] = 101,
  [102] = 102,
  [103] = 97,
};

static TSCharacterRange sym_creator_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x3009},
  {0x300c, 0x30fa}, {0x30fc, 0xff05}, {0xff07, 0xff19}, {0xff1c, 0x10ffff},
};

static TSCharacterRange sym__role_instrument_character_set_1[] = {
  {0, 0x08}, {'\n', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x30fa}, {0x30fc, 0xff05},
  {0xff07, 0xff19}, {0xff1c, 0x10ffff},
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
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(258);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x300b) ADVANCE(287);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(329);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(327);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(735);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(736);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == 0x300b) ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(344);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 481,
        'C', 412,
        'G', 524,
        'I', 433,
        'L', 352,
        'M', 353,
        'P', 389,
        'R', 380,
        'V', 457,
        'a', 494,
        'c', 413,
        'g', 530,
        'i', 437,
        'l', 359,
        'm', 361,
        'p', 399,
        'r', 401,
        'v', 468,
        0x300a, 286,
        0x30a2, 546,
        0x30a4, 542,
        0x30dc, 549,
        0x30de, 537,
        0x30ec, 550,
        0x4e50, 558,
        0x4f5c, 564,
        0x51fa, 575,
        0x5236, 553,
        0x5382, 576,
        0x539f, 554,
        0x58f0, 551,
        0x5f55, 577,
        0x63d2, 560,
        0x6b4c, 557,
        0x6bcd, 562,
        0x6df7, 578,
        0x7de8, 565,
        0x7f16, 566,
        0x811a, 573,
        0x827a, 574,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'A', 149,
        'C', 81,
        'G', 199,
        'I', 97,
        'L', 15,
        'M', 16,
        'P', 58,
        'R', 49,
        'V', 129,
        'a', 170,
        'c', 82,
        'g', 205,
        'i', 109,
        'l', 25,
        'm', 27,
        'p', 68,
        'r', 70,
        'v', 140,
        0x300a, 286,
        0x30a2, 224,
        0x30a4, 220,
        0x30dc, 227,
        0x30de, 215,
        0x30ec, 228,
        0x4e50, 236,
        0x4f5c, 241,
        0x51fa, 252,
        0x5236, 231,
        0x5382, 253,
        0x539f, 232,
        0x58f0, 229,
        0x5f55, 254,
        0x63d2, 237,
        0x6b4c, 235,
        0x6bcd, 239,
        0x6df7, 255,
        0x7de8, 242,
        0x7f16, 243,
        0x811a, 250,
        0x827a, 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(275);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'V') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(584);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(586);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(663);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(665);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(667);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(652);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(669);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(654);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(137);
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
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(634);
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
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(661);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 208:
      if (lookahead == 'x') ADVANCE(91);
      END_STATE();
    case 209:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 210:
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(211);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(579);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 211:
      if (lookahead == 0x300a) ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == 0x30ab) ADVANCE(222);
      END_STATE();
    case 213:
      if (lookahead == 0x30b0) ADVANCE(679);
      END_STATE();
    case 214:
      if (lookahead == 0x30b8) ADVANCE(673);
      END_STATE();
    case 215:
      if (lookahead == 0x30b9) ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 0x30b9) ADVANCE(218);
      END_STATE();
    case 217:
      if (lookahead == 0x30bf) ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == 0x30c8) ADVANCE(675);
      END_STATE();
    case 219:
      if (lookahead == 0x30d9) ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 0x30e9) ADVANCE(216);
      END_STATE();
    case 221:
      if (lookahead == 0x30ea) ADVANCE(226);
      END_STATE();
    case 222:
      if (lookahead == 0x30eb) ADVANCE(671);
      END_STATE();
    case 223:
      if (lookahead == 0x30eb) ADVANCE(677);
      END_STATE();
    case 224:
      if (lookahead == 0x30ec) ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 0x30f3) ADVANCE(214);
      END_STATE();
    case 226:
      if (lookahead == 0x30f3) ADVANCE(213);
      END_STATE();
    case 227:
      if (lookahead == 0x30fc) ADVANCE(212);
      END_STATE();
    case 228:
      if (lookahead == 0x30fc) ADVANCE(219);
      END_STATE();
    case 229:
      if (lookahead == 0x4e50) ADVANCE(725);
      END_STATE();
    case 230:
      if (lookahead == 0x4eba) ADVANCE(717);
      END_STATE();
    case 231:
      if (lookahead == 0x4f5c) ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == 0x4f5c) ADVANCE(723);
      END_STATE();
    case 233:
      if (lookahead == 0x4f5c) ADVANCE(733);
      END_STATE();
    case 234:
      if (lookahead == 0x5236) ADVANCE(233);
      END_STATE();
    case 235:
      if (lookahead == 0x5531) ADVANCE(683);
      END_STATE();
    case 236:
      if (lookahead == 0x5668) ADVANCE(727);
      END_STATE();
    case 237:
      if (lookahead == 0x56fe) ADVANCE(715);
      END_STATE();
    case 238:
      if (lookahead == 0x5bb6) ADVANCE(681);
      END_STATE();
    case 239:
      if (lookahead == 0x5e26) ADVANCE(234);
      END_STATE();
    case 240:
      if (lookahead == 0x65b9) ADVANCE(719);
      END_STATE();
    case 241:
      if (lookahead == 0x66f2) ADVANCE(701);
      if (lookahead == 0x7de8) ADVANCE(244);
      if (lookahead == 0x7f16) ADVANCE(245);
      if (lookahead == 0x8a5e) ADVANCE(707);
      if (lookahead == 0x8bcd) ADVANCE(709);
      END_STATE();
    case 242:
      if (lookahead == 0x66f2) ADVANCE(703);
      END_STATE();
    case 243:
      if (lookahead == 0x66f2) ADVANCE(705);
      END_STATE();
    case 244:
      if (lookahead == 0x66f2) ADVANCE(697);
      END_STATE();
    case 245:
      if (lookahead == 0x66f2) ADVANCE(699);
      END_STATE();
    case 246:
      if (lookahead == 0x66f2) ADVANCE(689);
      if (lookahead == 0x7de8) ADVANCE(248);
      END_STATE();
    case 247:
      if (lookahead == 0x66f2) ADVANCE(691);
      if (lookahead == 0x7f16) ADVANCE(249);
      END_STATE();
    case 248:
      if (lookahead == 0x66f2) ADVANCE(685);
      END_STATE();
    case 249:
      if (lookahead == 0x66f2) ADVANCE(687);
      END_STATE();
    case 250:
      if (lookahead == 0x672c) ADVANCE(713);
      END_STATE();
    case 251:
      if (lookahead == 0x672f) ADVANCE(238);
      END_STATE();
    case 252:
      if (lookahead == 0x7248) ADVANCE(240);
      END_STATE();
    case 253:
      if (lookahead == 0x724c) ADVANCE(711);
      END_STATE();
    case 254:
      if (lookahead == 0x97f3) ADVANCE(721);
      END_STATE();
    case 255:
      if (lookahead == 0x97f3) ADVANCE(731);
      END_STATE();
    case 256:
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 10, lookahead))) ADVANCE(583);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 258:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(258);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x300b) ADVANCE(287);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(330);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(327);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 259:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 277,
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 329,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 260:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 277,
        'A', 481,
        'C', 412,
        'D', 350,
        'G', 524,
        'I', 433,
        'L', 352,
        'M', 353,
        'P', 389,
        'R', 380,
        'V', 457,
        'a', 494,
        'c', 413,
        'g', 530,
        'i', 437,
        'l', 359,
        'm', 361,
        'p', 399,
        'r', 401,
        'v', 468,
        0x300a, 286,
        0x30a2, 546,
        0x30a4, 542,
        0x30dc, 549,
        0x30de, 537,
        0x30ec, 550,
        0x4e50, 558,
        0x4f5c, 564,
        0x51fa, 575,
        0x5236, 553,
        0x5382, 576,
        0x539f, 554,
        0x58f0, 551,
        0x5f55, 577,
        0x63d2, 560,
        0x6b4c, 557,
        0x6bcd, 562,
        0x6df7, 578,
        0x7de8, 565,
        0x7f16, 566,
        0x811a, 573,
        0x827a, 574,
        '\t', 289,
        ' ', 289,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(288);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 261:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(261);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 0x300a) ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 262:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(262);
      if (lookahead == 0x300a) ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 263:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(265);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(329);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(735);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(295);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(736);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 264:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(265);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(329);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 265:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(265);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(330);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 266:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 279,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 329,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 267:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 279,
        'A', 481,
        'C', 412,
        'G', 524,
        'I', 433,
        'L', 352,
        'M', 353,
        'P', 389,
        'R', 380,
        'V', 457,
        'a', 494,
        'c', 413,
        'g', 530,
        'i', 437,
        'l', 359,
        'm', 361,
        'p', 399,
        'r', 401,
        'v', 468,
        0x300a, 286,
        0x30a2, 546,
        0x30a4, 542,
        0x30dc, 549,
        0x30de, 537,
        0x30ec, 550,
        0x4e50, 558,
        0x4f5c, 564,
        0x51fa, 575,
        0x5236, 553,
        0x5382, 576,
        0x539f, 554,
        0x58f0, 551,
        0x5f55, 577,
        0x63d2, 560,
        0x6b4c, 557,
        0x6bcd, 562,
        0x6df7, 578,
        0x7de8, 565,
        0x7f16, 566,
        0x811a, 573,
        0x827a, 574,
        '\t', 290,
        ' ', 290,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (set_contains(sym__sep_character_set_1, 10, lookahead) ||
          lookahead == 0x300b) ADVANCE(288);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 268:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(270);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(329);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(735);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(296);
      if (set_contains(sym__sep_character_set_1, 10, lookahead)) ADVANCE(736);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 269:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(270);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(329);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 270:
      if (eof) ADVANCE(274);
      if (lookahead == '\n') SKIP(270);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == 'V') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == 0x30a2) ADVANCE(321);
      if (lookahead == 0x30a4) ADVANCE(320);
      if (lookahead == 0x30dc) ADVANCE(322);
      if (lookahead == 0x30de) ADVANCE(319);
      if (lookahead == 0x30ec) ADVANCE(323);
      if (lookahead == 0x4e50) ADVANCE(330);
      if (lookahead == 0x4f5c) ADVANCE(333);
      if (lookahead == 0x51fa) ADVANCE(338);
      if (lookahead == 0x5236) ADVANCE(325);
      if (lookahead == 0x5382) ADVANCE(339);
      if (lookahead == 0x539f) ADVANCE(326);
      if (lookahead == 0x58f0) ADVANCE(324);
      if (lookahead == 0x5f55) ADVANCE(340);
      if (lookahead == 0x63d2) ADVANCE(331);
      if (lookahead == 0x6b4c) ADVANCE(328);
      if (lookahead == 0x6bcd) ADVANCE(332);
      if (lookahead == 0x6df7) ADVANCE(341);
      if (lookahead == 0x7de8) ADVANCE(334);
      if (lookahead == 0x7f16) ADVANCE(335);
      if (lookahead == 0x811a) ADVANCE(336);
      if (lookahead == 0x827a) ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 271:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 280,
        '/', 294,
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 329,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 327,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 272:
      if (eof) ADVANCE(274);
      ADVANCE_MAP(
        '\n', 281,
        '/', 294,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 329,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 327,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 273:
      if (eof) ADVANCE(274);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 0x300b) ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DISC);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(277);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 277,
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 279,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 280,
        '/', 294,
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 327,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 281,
        '/', 294,
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 327,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '/', 294,
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x300b, 287,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 327,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(282);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 313,
        'C', 307,
        'D', 298,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        'A', 313,
        'C', 307,
        'G', 315,
        'I', 309,
        'L', 299,
        'M', 300,
        'P', 304,
        'R', 303,
        'V', 311,
        'a', 314,
        'c', 308,
        'g', 316,
        'i', 310,
        'l', 301,
        'm', 302,
        'p', 305,
        'r', 306,
        'v', 312,
        0x300a, 286,
        0x30a2, 321,
        0x30a4, 320,
        0x30dc, 322,
        0x30de, 319,
        0x30ec, 323,
        0x4e50, 330,
        0x4f5c, 333,
        0x51fa, 338,
        0x5236, 325,
        0x5382, 339,
        0x539f, 326,
        0x58f0, 324,
        0x5f55, 340,
        0x63d2, 331,
        0x6b4c, 328,
        0x6bcd, 332,
        0x6df7, 341,
        0x7de8, 334,
        0x7f16, 335,
        0x811a, 336,
        0x827a, 337,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300a) ADVANCE(286);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x300b) ADVANCE(287);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(217);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(216);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(225);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(212);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(219);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(725);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(230);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(723);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(723);
      if (lookahead == 0x66f2) ADVANCE(257);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(683);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(728);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(727);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(715);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(234);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(701);
      if (lookahead == 0x7de8) ADVANCE(244);
      if (lookahead == 0x7f16) ADVANCE(245);
      if (lookahead == 0x8a5e) ADVANCE(707);
      if (lookahead == 0x8bcd) ADVANCE(709);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(703);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(705);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(713);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672f) ADVANCE(238);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(240);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(711);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(721);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(731);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(14);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == ' ') ADVANCE(207);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 481,
        'C', 412,
        'D', 350,
        'G', 524,
        'I', 433,
        'L', 352,
        'M', 353,
        'P', 389,
        'R', 380,
        'V', 457,
        'a', 494,
        'c', 413,
        'g', 530,
        'i', 437,
        'l', 359,
        'm', 361,
        'p', 399,
        'r', 401,
        'v', 468,
        0x30a2, 546,
        0x30a4, 542,
        0x30dc, 549,
        0x30de, 537,
        0x30ec, 550,
        0x4e50, 559,
        0x4f5c, 564,
        0x51fa, 575,
        0x5236, 553,
        0x5382, 576,
        0x539f, 554,
        0x58f0, 551,
        0x5f55, 577,
        0x63d2, 560,
        0x6b4c, 557,
        0x6bcd, 562,
        0x6df7, 578,
        0x7de8, 565,
        0x7f16, 566,
        0x811a, 573,
        0x827a, 574,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(347);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_creator_name);
      ADVANCE_MAP(
        'A', 481,
        'C', 412,
        'G', 524,
        'I', 433,
        'L', 352,
        'M', 353,
        'P', 389,
        'R', 380,
        'V', 457,
        'a', 494,
        'c', 413,
        'g', 530,
        'i', 437,
        'l', 359,
        'm', 361,
        'p', 399,
        'r', 401,
        'v', 468,
        0x30a2, 546,
        0x30a4, 542,
        0x30dc, 549,
        0x30de, 537,
        0x30ec, 550,
        0x4e50, 559,
        0x4f5c, 564,
        0x51fa, 575,
        0x5236, 553,
        0x5382, 576,
        0x539f, 554,
        0x58f0, 551,
        0x5f55, 577,
        0x63d2, 560,
        0x6b4c, 557,
        0x6bcd, 562,
        0x6df7, 578,
        0x7de8, 565,
        0x7f16, 566,
        0x811a, 573,
        0x827a, 574,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'C') ADVANCE(276);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'I') ADVANCE(351);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'S') ADVANCE(349);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'y') ADVANCE(475);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(507);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(442);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(429);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(431);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(521);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(522);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'y') ADVANCE(488);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(455);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(508);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(388);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'b') ADVANCE(390);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(609);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(585);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(611);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(587);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(355);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(434);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(465);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(356);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(435);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(392);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(393);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'c') ADVANCE(470);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(527);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(425);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(427);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'd') ADVANCE(531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(370);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(645);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(647);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(621);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(518);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(623);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == 'i') ADVANCE(520);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(453);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(428);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(456);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(430);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(490);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(477);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(478);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(479);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(480);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(500);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(454);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(502);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(471);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(491);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'e') ADVANCE(375);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(466);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'f') ADVANCE(469);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(664);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(666);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(653);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(670);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(655);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(383);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'g') ADVANCE(385);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(438);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(441);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(364);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(458);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(365);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(460);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(366);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(461);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(367);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(464);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(447);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(448);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(449);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(450);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(451);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'i') ADVANCE(452);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(641);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(625);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(643);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(627);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(528);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(432);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(381);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(382);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(529);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'l') ADVANCE(436);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(472);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(394);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(395);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'm') ADVANCE(473);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(410);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(589);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(591);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(633);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(635);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(404);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(405);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(406);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(407);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(408);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(409);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(515);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(516);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'n') ADVANCE(411);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(376);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(368);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(443);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(498);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(444);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(445);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(484);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(501);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(446);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(483);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(482);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(486);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(371);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(489);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(495);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'o') ADVANCE(379);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(459);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'p') ADVANCE(463);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(354);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(414);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(402);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(649);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(651);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(629);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(631);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(474);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(439);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(377);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(525);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(369);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(526);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(372);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(418);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(440);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(424);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(426);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(360);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(403);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(492);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'r') ADVANCE(378);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(519);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(660);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(384);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(662);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(510);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(386);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(517);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(511);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(512);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(513);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(514);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(416);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(420);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 's') ADVANCE(523);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(345);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(637);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(639);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(605);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(607);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(613);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(615);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(346);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(415);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(391);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(417);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(419);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(421);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 't') ADVANCE(400);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(396);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(497);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(499);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(373);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(503);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(504);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(398);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'u') ADVANCE(374);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(422);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 'x') ADVANCE(423);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ab) ADVANCE(544);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b0) ADVANCE(680);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b8) ADVANCE(674);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(539);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30b9) ADVANCE(540);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30bf) ADVANCE(543);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30c8) ADVANCE(676);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30d9) ADVANCE(545);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30e9) ADVANCE(538);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ea) ADVANCE(548);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(672);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30eb) ADVANCE(678);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30ec) ADVANCE(547);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(536);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30f3) ADVANCE(535);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(534);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x30fc) ADVANCE(541);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4e50) ADVANCE(726);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4eba) ADVANCE(718);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(552);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(724);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x4f5c) ADVANCE(734);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5236) ADVANCE(555);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5531) ADVANCE(684);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5668) ADVANCE(729);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5668) ADVANCE(730);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x56fe) ADVANCE(716);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5bb6) ADVANCE(682);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x5e26) ADVANCE(556);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x65b9) ADVANCE(720);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(702);
      if (lookahead == 0x7de8) ADVANCE(567);
      if (lookahead == 0x7f16) ADVANCE(568);
      if (lookahead == 0x8a5e) ADVANCE(708);
      if (lookahead == 0x8bcd) ADVANCE(710);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(704);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(706);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(698);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(700);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(690);
      if (lookahead == 0x7de8) ADVANCE(571);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(692);
      if (lookahead == 0x7f16) ADVANCE(572);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(686);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x66f2) ADVANCE(688);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672c) ADVANCE(714);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x672f) ADVANCE(561);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x7248) ADVANCE(563);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x724c) ADVANCE(712);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(722);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == 0x97f3) ADVANCE(732);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_creator_name);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(579);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_creator_name);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x300a ||
          lookahead == 0x300b) ADVANCE(583);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 10, lookahead))) ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_creator_name);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__role_instrument);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x300a ||
          lookahead == 0x300b) ADVANCE(583);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 10, lookahead))) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__role_instrument);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 10, lookahead))) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_Music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_music);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_Composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_composition);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_Composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_composer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(593);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(595);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_lyrics);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_lyricist);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == 's') ADVANCE(601);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 's') ADVANCE(603);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_arrangement);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_Arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_arranger);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(617);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(619);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_vocal);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_Performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_performer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_Illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_illustration);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(357);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(358);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_Label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_label);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_Circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_circle);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_Producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_producer);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_recording);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_Chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_chorus);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_Mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_mixing);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_Mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_mastering);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_u827au672fu5bb6);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_u827au672fu5bb6);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(246);
      if (lookahead == 0x66f2) ADVANCE(693);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(569);
      if (lookahead == 0x66f2) ADVANCE(694);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(247);
      if (lookahead == 0x66f2) ADVANCE(695);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(570);
      if (lookahead == 0x66f2) ADVANCE(696);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if (lookahead == '-') ADVANCE(580);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      if ((!eof && set_contains(sym_creator_name_character_set_1, 12, lookahead))) ADVANCE(581);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 735,
        ' ', 735,
        '&', 736,
        ',', 736,
        '/', 736,
        ':', 736,
        0x3000, 736,
        0x3001, 736,
        0x30fb, 736,
        0xff06, 736,
        0xff1a, 736,
        0xff1b, 736,
      );
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 736,
        ' ', 736,
        '&', 736,
        ',', 736,
        '/', 736,
        ':', 736,
        0x3000, 736,
        0x3001, 736,
        0x30fb, 736,
        0xff06, 736,
        0xff1a, 736,
        0xff1b, 736,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
  [2] = {.lex_state = 259},
  [3] = {.lex_state = 266},
  [4] = {.lex_state = 264},
  [5] = {.lex_state = 264},
  [6] = {.lex_state = 264},
  [7] = {.lex_state = 269},
  [8] = {.lex_state = 264},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 264},
  [11] = {.lex_state = 269},
  [12] = {.lex_state = 271},
  [13] = {.lex_state = 271},
  [14] = {.lex_state = 271},
  [15] = {.lex_state = 260},
  [16] = {.lex_state = 271},
  [17] = {.lex_state = 271},
  [18] = {.lex_state = 260},
  [19] = {.lex_state = 272},
  [20] = {.lex_state = 271},
  [21] = {.lex_state = 272},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 267},
  [25] = {.lex_state = 272},
  [26] = {.lex_state = 272},
  [27] = {.lex_state = 260},
  [28] = {.lex_state = 267},
  [29] = {.lex_state = 272},
  [30] = {.lex_state = 272},
  [31] = {.lex_state = 260},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 259},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 259},
  [36] = {.lex_state = 259},
  [37] = {.lex_state = 259},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 263},
  [40] = {.lex_state = 264},
  [41] = {.lex_state = 266},
  [42] = {.lex_state = 266},
  [43] = {.lex_state = 266},
  [44] = {.lex_state = 268},
  [45] = {.lex_state = 268},
  [46] = {.lex_state = 264},
  [47] = {.lex_state = 266},
  [48] = {.lex_state = 264},
  [49] = {.lex_state = 263},
  [50] = {.lex_state = 264},
  [51] = {.lex_state = 263},
  [52] = {.lex_state = 264},
  [53] = {.lex_state = 264},
  [54] = {.lex_state = 264},
  [55] = {.lex_state = 264},
  [56] = {.lex_state = 269},
  [57] = {.lex_state = 269},
  [58] = {.lex_state = 269},
  [59] = {.lex_state = 269},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 261},
  [62] = {.lex_state = 261},
  [63] = {.lex_state = 261},
  [64] = {.lex_state = 262},
  [65] = {.lex_state = 262},
  [66] = {.lex_state = 262},
  [67] = {.lex_state = 262},
  [68] = {.lex_state = 273},
  [69] = {.lex_state = 261},
  [70] = {.lex_state = 273},
  [71] = {.lex_state = 261},
  [72] = {.lex_state = 273},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 262},
  [80] = {.lex_state = 262},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 210},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 273},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 273},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 273},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 6},
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
    [sym__role_instrument] = ACTIONS(1),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(1),
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
    [sym_source_file] = STATE(92),
    [sym_disc] = STATE(68),
    [aux_sym__disc] = STATE(64),
    [sym_song] = STATE(64),
    [sym_credit_block] = STATE(61),
    [sym_credit_field] = STATE(10),
    [sym__quotable_song_title_maybecomment] = STATE(3),
    [sym__quotable_song_title] = STATE(30),
    [sym_song_title] = STATE(29),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_source_file_repeat1] = STATE(68),
    [aux_sym_credit_block_repeat1] = STATE(10),
    [aux_sym_credit_field_repeat1] = STATE(22),
    [aux_sym_song_title_repeat1] = STATE(19),
    [anon_sym_DISC] = ACTIONS(3),
    [anon_sym_u300a] = ACTIONS(5),
    [aux_sym_song_title_token1] = ACTIONS(7),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [2] = {
    [sym_credit_block] = STATE(69),
    [sym_credit_field] = STATE(5),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(5),
    [aux_sym_credit_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_DISC] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_u300a] = ACTIONS(15),
    [aux_sym_song_title_token1] = ACTIONS(15),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [3] = {
    [sym_credit_block] = STATE(79),
    [sym_credit_field] = STATE(9),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(9),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(15),
    [aux_sym_song_title_token1] = ACTIONS(15),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [4] = {
    [sym_credit_block] = STATE(71),
    [sym_credit_field] = STATE(5),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(5),
    [aux_sym_credit_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_DISC] = ACTIONS(23),
    [anon_sym_u300a] = ACTIONS(23),
    [aux_sym_song_title_token1] = ACTIONS(23),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [5] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_DISC] = ACTIONS(27),
    [anon_sym_u300a] = ACTIONS(27),
    [aux_sym_song_title_token1] = ACTIONS(27),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [6] = {
    [sym_credit_field] = STATE(6),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(6),
    [aux_sym_credit_field_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DISC] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [aux_sym_song_title_token1] = ACTIONS(31),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_GuestVocal] = ACTIONS(36),
    [anon_sym_Guestvocal] = ACTIONS(36),
    [anon_sym_guestvocal] = ACTIONS(36),
    [anon_sym_Chorus] = ACTIONS(36),
    [anon_sym_chorus] = ACTIONS(36),
    [anon_sym_Mixing] = ACTIONS(36),
    [anon_sym_mixing] = ACTIONS(36),
    [anon_sym_Mastering] = ACTIONS(36),
    [anon_sym_mastering] = ACTIONS(36),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(36),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(36),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(36),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(36),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(36),
    [anon_sym_u827au672fu5bb6] = ACTIONS(36),
    [anon_sym_u6b4cu5531] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu66f2] = ACTIONS(36),
    [anon_sym_u7de8u66f2] = ACTIONS(36),
    [anon_sym_u7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5e] = ACTIONS(36),
    [anon_sym_u4f5cu8bcd] = ACTIONS(36),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
    [anon_sym_u58f0u4e50] = ACTIONS(36),
    [anon_sym_u4e50u5668] = ACTIONS(36),
    [anon_sym_u6df7u97f3] = ACTIONS(36),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(36),
  },
  [7] = {
    [sym_credit_block] = STATE(80),
    [sym_credit_field] = STATE(9),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(9),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(23),
    [aux_sym_song_title_token1] = ACTIONS(23),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [8] = {
    [sym_credit_field] = STATE(8),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(8),
    [aux_sym_credit_field_repeat1] = STATE(22),
    [anon_sym_DISC] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [aux_sym_song_title_token1] = ACTIONS(31),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_GuestVocal] = ACTIONS(36),
    [anon_sym_Guestvocal] = ACTIONS(36),
    [anon_sym_guestvocal] = ACTIONS(36),
    [anon_sym_Chorus] = ACTIONS(36),
    [anon_sym_chorus] = ACTIONS(36),
    [anon_sym_Mixing] = ACTIONS(36),
    [anon_sym_mixing] = ACTIONS(36),
    [anon_sym_Mastering] = ACTIONS(36),
    [anon_sym_mastering] = ACTIONS(36),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(36),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(36),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(36),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(36),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(36),
    [anon_sym_u827au672fu5bb6] = ACTIONS(36),
    [anon_sym_u6b4cu5531] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu66f2] = ACTIONS(36),
    [anon_sym_u7de8u66f2] = ACTIONS(36),
    [anon_sym_u7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5e] = ACTIONS(36),
    [anon_sym_u4f5cu8bcd] = ACTIONS(36),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
    [anon_sym_u58f0u4e50] = ACTIONS(36),
    [anon_sym_u4e50u5668] = ACTIONS(36),
    [anon_sym_u6df7u97f3] = ACTIONS(36),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(36),
  },
  [9] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(27),
    [aux_sym_song_title_token1] = ACTIONS(27),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [10] = {
    [sym_credit_field] = STATE(8),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(8),
    [aux_sym_credit_field_repeat1] = STATE(22),
    [anon_sym_DISC] = ACTIONS(27),
    [anon_sym_u300a] = ACTIONS(27),
    [aux_sym_song_title_token1] = ACTIONS(27),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [11] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [aux_sym_credit_field_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_u300a] = ACTIONS(31),
    [aux_sym_song_title_token1] = ACTIONS(31),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_GuestVocal] = ACTIONS(36),
    [anon_sym_Guestvocal] = ACTIONS(36),
    [anon_sym_guestvocal] = ACTIONS(36),
    [anon_sym_Chorus] = ACTIONS(36),
    [anon_sym_chorus] = ACTIONS(36),
    [anon_sym_Mixing] = ACTIONS(36),
    [anon_sym_mixing] = ACTIONS(36),
    [anon_sym_Mastering] = ACTIONS(36),
    [anon_sym_mastering] = ACTIONS(36),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(36),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(36),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(36),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(36),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(36),
    [anon_sym_u827au672fu5bb6] = ACTIONS(36),
    [anon_sym_u6b4cu5531] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu66f2] = ACTIONS(36),
    [anon_sym_u7de8u66f2] = ACTIONS(36),
    [anon_sym_u7f16u66f2] = ACTIONS(36),
    [anon_sym_u4f5cu8a5e] = ACTIONS(36),
    [anon_sym_u4f5cu8bcd] = ACTIONS(36),
    [anon_sym_u5382u724c] = ACTIONS(36),
    [anon_sym_u811au672c] = ACTIONS(36),
    [anon_sym_u63d2u56fe] = ACTIONS(36),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(36),
    [anon_sym_u51fau7248u65b9] = ACTIONS(36),
    [anon_sym_u5f55u97f3] = ACTIONS(36),
    [anon_sym_u539fu4f5c] = ACTIONS(36),
    [anon_sym_u58f0u4e50] = ACTIONS(36),
    [anon_sym_u4e50u5668] = ACTIONS(36),
    [anon_sym_u6df7u97f3] = ACTIONS(36),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(36),
  },
  [12] = {
    [aux_sym_song_title_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_DISC] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(41),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(43),
    [sym__role_instrument] = ACTIONS(39),
    [anon_sym_Music] = ACTIONS(41),
    [anon_sym_music] = ACTIONS(41),
    [anon_sym_Composition] = ACTIONS(41),
    [anon_sym_composition] = ACTIONS(41),
    [anon_sym_Composer] = ACTIONS(41),
    [anon_sym_composer] = ACTIONS(41),
    [anon_sym_Compose] = ACTIONS(41),
    [anon_sym_compose] = ACTIONS(41),
    [anon_sym_Lyrics] = ACTIONS(41),
    [anon_sym_lyrics] = ACTIONS(41),
    [anon_sym_Lyricist] = ACTIONS(41),
    [anon_sym_lyricist] = ACTIONS(41),
    [anon_sym_Lyric] = ACTIONS(41),
    [anon_sym_lyric] = ACTIONS(41),
    [anon_sym_Arrangement] = ACTIONS(41),
    [anon_sym_arrangement] = ACTIONS(41),
    [anon_sym_Arranger] = ACTIONS(41),
    [anon_sym_arranger] = ACTIONS(41),
    [anon_sym_Arrange] = ACTIONS(41),
    [anon_sym_arrange] = ACTIONS(41),
    [anon_sym_Vocal] = ACTIONS(41),
    [anon_sym_vocal] = ACTIONS(41),
    [anon_sym_Performer] = ACTIONS(41),
    [anon_sym_performer] = ACTIONS(41),
    [anon_sym_Illustration] = ACTIONS(41),
    [anon_sym_illustration] = ACTIONS(41),
    [anon_sym_Illust] = ACTIONS(41),
    [anon_sym_illust] = ACTIONS(41),
    [anon_sym_Label] = ACTIONS(41),
    [anon_sym_label] = ACTIONS(41),
    [anon_sym_Circle] = ACTIONS(41),
    [anon_sym_circle] = ACTIONS(41),
    [anon_sym_Producer] = ACTIONS(41),
    [anon_sym_producer] = ACTIONS(41),
    [anon_sym_Recording] = ACTIONS(41),
    [anon_sym_recording] = ACTIONS(41),
    [anon_sym_GuestVocal] = ACTIONS(41),
    [anon_sym_Guestvocal] = ACTIONS(41),
    [anon_sym_guestvocal] = ACTIONS(41),
    [anon_sym_Chorus] = ACTIONS(41),
    [anon_sym_chorus] = ACTIONS(41),
    [anon_sym_Mixing] = ACTIONS(41),
    [anon_sym_mixing] = ACTIONS(41),
    [anon_sym_Mastering] = ACTIONS(41),
    [anon_sym_mastering] = ACTIONS(41),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(41),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(41),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(41),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(41),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(41),
    [anon_sym_u827au672fu5bb6] = ACTIONS(41),
    [anon_sym_u6b4cu5531] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu66f2] = ACTIONS(41),
    [anon_sym_u7de8u66f2] = ACTIONS(41),
    [anon_sym_u7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5e] = ACTIONS(41),
    [anon_sym_u4f5cu8bcd] = ACTIONS(41),
    [anon_sym_u5382u724c] = ACTIONS(41),
    [anon_sym_u811au672c] = ACTIONS(41),
    [anon_sym_u63d2u56fe] = ACTIONS(41),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(41),
    [anon_sym_u51fau7248u65b9] = ACTIONS(41),
    [anon_sym_u5f55u97f3] = ACTIONS(41),
    [anon_sym_u539fu4f5c] = ACTIONS(41),
    [anon_sym_u58f0u4e50] = ACTIONS(41),
    [anon_sym_u4e50u5668] = ACTIONS(41),
    [anon_sym_u6df7u97f3] = ACTIONS(41),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(41),
  },
  [13] = {
    [aux_sym_song_title_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_DISC] = ACTIONS(48),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_SLASH_SLASH] = ACTIONS(48),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(48),
    [anon_sym_u300a] = ACTIONS(48),
    [aux_sym_song_title_token1] = ACTIONS(50),
    [sym__role_instrument] = ACTIONS(46),
    [anon_sym_Music] = ACTIONS(48),
    [anon_sym_music] = ACTIONS(48),
    [anon_sym_Composition] = ACTIONS(48),
    [anon_sym_composition] = ACTIONS(48),
    [anon_sym_Composer] = ACTIONS(48),
    [anon_sym_composer] = ACTIONS(48),
    [anon_sym_Compose] = ACTIONS(48),
    [anon_sym_compose] = ACTIONS(48),
    [anon_sym_Lyrics] = ACTIONS(48),
    [anon_sym_lyrics] = ACTIONS(48),
    [anon_sym_Lyricist] = ACTIONS(48),
    [anon_sym_lyricist] = ACTIONS(48),
    [anon_sym_Lyric] = ACTIONS(48),
    [anon_sym_lyric] = ACTIONS(48),
    [anon_sym_Arrangement] = ACTIONS(48),
    [anon_sym_arrangement] = ACTIONS(48),
    [anon_sym_Arranger] = ACTIONS(48),
    [anon_sym_arranger] = ACTIONS(48),
    [anon_sym_Arrange] = ACTIONS(48),
    [anon_sym_arrange] = ACTIONS(48),
    [anon_sym_Vocal] = ACTIONS(48),
    [anon_sym_vocal] = ACTIONS(48),
    [anon_sym_Performer] = ACTIONS(48),
    [anon_sym_performer] = ACTIONS(48),
    [anon_sym_Illustration] = ACTIONS(48),
    [anon_sym_illustration] = ACTIONS(48),
    [anon_sym_Illust] = ACTIONS(48),
    [anon_sym_illust] = ACTIONS(48),
    [anon_sym_Label] = ACTIONS(48),
    [anon_sym_label] = ACTIONS(48),
    [anon_sym_Circle] = ACTIONS(48),
    [anon_sym_circle] = ACTIONS(48),
    [anon_sym_Producer] = ACTIONS(48),
    [anon_sym_producer] = ACTIONS(48),
    [anon_sym_Recording] = ACTIONS(48),
    [anon_sym_recording] = ACTIONS(48),
    [anon_sym_GuestVocal] = ACTIONS(48),
    [anon_sym_Guestvocal] = ACTIONS(48),
    [anon_sym_guestvocal] = ACTIONS(48),
    [anon_sym_Chorus] = ACTIONS(48),
    [anon_sym_chorus] = ACTIONS(48),
    [anon_sym_Mixing] = ACTIONS(48),
    [anon_sym_mixing] = ACTIONS(48),
    [anon_sym_Mastering] = ACTIONS(48),
    [anon_sym_mastering] = ACTIONS(48),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(48),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(48),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(48),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(48),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(48),
    [anon_sym_u827au672fu5bb6] = ACTIONS(48),
    [anon_sym_u6b4cu5531] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu66f2] = ACTIONS(48),
    [anon_sym_u7de8u66f2] = ACTIONS(48),
    [anon_sym_u7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5e] = ACTIONS(48),
    [anon_sym_u4f5cu8bcd] = ACTIONS(48),
    [anon_sym_u5382u724c] = ACTIONS(48),
    [anon_sym_u811au672c] = ACTIONS(48),
    [anon_sym_u63d2u56fe] = ACTIONS(48),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(48),
    [anon_sym_u51fau7248u65b9] = ACTIONS(48),
    [anon_sym_u5f55u97f3] = ACTIONS(48),
    [anon_sym_u539fu4f5c] = ACTIONS(48),
    [anon_sym_u58f0u4e50] = ACTIONS(48),
    [anon_sym_u4e50u5668] = ACTIONS(48),
    [anon_sym_u6df7u97f3] = ACTIONS(48),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(48),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_DISC] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(56),
    [anon_sym_SLASH_SLASH] = ACTIONS(58),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(60),
    [anon_sym_u300a] = ACTIONS(54),
    [aux_sym_song_title_token1] = ACTIONS(54),
    [sym__role_instrument] = ACTIONS(52),
    [anon_sym_Music] = ACTIONS(54),
    [anon_sym_music] = ACTIONS(54),
    [anon_sym_Composition] = ACTIONS(54),
    [anon_sym_composition] = ACTIONS(54),
    [anon_sym_Composer] = ACTIONS(54),
    [anon_sym_composer] = ACTIONS(54),
    [anon_sym_Compose] = ACTIONS(54),
    [anon_sym_compose] = ACTIONS(54),
    [anon_sym_Lyrics] = ACTIONS(54),
    [anon_sym_lyrics] = ACTIONS(54),
    [anon_sym_Lyricist] = ACTIONS(54),
    [anon_sym_lyricist] = ACTIONS(54),
    [anon_sym_Lyric] = ACTIONS(54),
    [anon_sym_lyric] = ACTIONS(54),
    [anon_sym_Arrangement] = ACTIONS(54),
    [anon_sym_arrangement] = ACTIONS(54),
    [anon_sym_Arranger] = ACTIONS(54),
    [anon_sym_arranger] = ACTIONS(54),
    [anon_sym_Arrange] = ACTIONS(54),
    [anon_sym_arrange] = ACTIONS(54),
    [anon_sym_Vocal] = ACTIONS(54),
    [anon_sym_vocal] = ACTIONS(54),
    [anon_sym_Performer] = ACTIONS(54),
    [anon_sym_performer] = ACTIONS(54),
    [anon_sym_Illustration] = ACTIONS(54),
    [anon_sym_illustration] = ACTIONS(54),
    [anon_sym_Illust] = ACTIONS(54),
    [anon_sym_illust] = ACTIONS(54),
    [anon_sym_Label] = ACTIONS(54),
    [anon_sym_label] = ACTIONS(54),
    [anon_sym_Circle] = ACTIONS(54),
    [anon_sym_circle] = ACTIONS(54),
    [anon_sym_Producer] = ACTIONS(54),
    [anon_sym_producer] = ACTIONS(54),
    [anon_sym_Recording] = ACTIONS(54),
    [anon_sym_recording] = ACTIONS(54),
    [anon_sym_GuestVocal] = ACTIONS(54),
    [anon_sym_Guestvocal] = ACTIONS(54),
    [anon_sym_guestvocal] = ACTIONS(54),
    [anon_sym_Chorus] = ACTIONS(54),
    [anon_sym_chorus] = ACTIONS(54),
    [anon_sym_Mixing] = ACTIONS(54),
    [anon_sym_mixing] = ACTIONS(54),
    [anon_sym_Mastering] = ACTIONS(54),
    [anon_sym_mastering] = ACTIONS(54),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(54),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(54),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(54),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(54),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(54),
    [anon_sym_u827au672fu5bb6] = ACTIONS(54),
    [anon_sym_u6b4cu5531] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu66f2] = ACTIONS(54),
    [anon_sym_u7de8u66f2] = ACTIONS(54),
    [anon_sym_u7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5e] = ACTIONS(54),
    [anon_sym_u4f5cu8bcd] = ACTIONS(54),
    [anon_sym_u5382u724c] = ACTIONS(54),
    [anon_sym_u811au672c] = ACTIONS(54),
    [anon_sym_u63d2u56fe] = ACTIONS(54),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(54),
    [anon_sym_u51fau7248u65b9] = ACTIONS(54),
    [anon_sym_u5f55u97f3] = ACTIONS(54),
    [anon_sym_u539fu4f5c] = ACTIONS(54),
    [anon_sym_u58f0u4e50] = ACTIONS(54),
    [anon_sym_u4e50u5668] = ACTIONS(54),
    [anon_sym_u6df7u97f3] = ACTIONS(54),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(54),
  },
  [15] = {
    [sym__quotable_creator_name] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_DISC] = ACTIONS(72),
    [anon_sym_LF] = ACTIONS(72),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(72),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym__role_instrument] = ACTIONS(70),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u4f5cu8bcd] = ACTIONS(72),
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
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DISC] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(80),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
    [sym__role_instrument] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(76),
    [anon_sym_Guestvocal] = ACTIONS(76),
    [anon_sym_guestvocal] = ACTIONS(76),
    [anon_sym_Chorus] = ACTIONS(76),
    [anon_sym_chorus] = ACTIONS(76),
    [anon_sym_Mixing] = ACTIONS(76),
    [anon_sym_mixing] = ACTIONS(76),
    [anon_sym_Mastering] = ACTIONS(76),
    [anon_sym_mastering] = ACTIONS(76),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(76),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(76),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(76),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(76),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(76),
    [anon_sym_u827au672fu5bb6] = ACTIONS(76),
    [anon_sym_u6b4cu5531] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu66f2] = ACTIONS(76),
    [anon_sym_u7de8u66f2] = ACTIONS(76),
    [anon_sym_u7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u4f5cu8bcd] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(76),
    [anon_sym_u811au672c] = ACTIONS(76),
    [anon_sym_u63d2u56fe] = ACTIONS(76),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(76),
    [anon_sym_u51fau7248u65b9] = ACTIONS(76),
    [anon_sym_u5f55u97f3] = ACTIONS(76),
    [anon_sym_u539fu4f5c] = ACTIONS(76),
    [anon_sym_u58f0u4e50] = ACTIONS(76),
    [anon_sym_u4e50u5668] = ACTIONS(76),
    [anon_sym_u6df7u97f3] = ACTIONS(76),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(76),
  },
  [18] = {
    [sym__quotable_creator_name] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_DISC] = ACTIONS(84),
    [anon_sym_LF] = ACTIONS(86),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [19] = {
    [aux_sym_song_title_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_SLASH_SLASH] = ACTIONS(48),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(48),
    [anon_sym_u300a] = ACTIONS(48),
    [aux_sym_song_title_token1] = ACTIONS(88),
    [sym__role_instrument] = ACTIONS(46),
    [anon_sym_Music] = ACTIONS(48),
    [anon_sym_music] = ACTIONS(48),
    [anon_sym_Composition] = ACTIONS(48),
    [anon_sym_composition] = ACTIONS(48),
    [anon_sym_Composer] = ACTIONS(48),
    [anon_sym_composer] = ACTIONS(48),
    [anon_sym_Compose] = ACTIONS(48),
    [anon_sym_compose] = ACTIONS(48),
    [anon_sym_Lyrics] = ACTIONS(48),
    [anon_sym_lyrics] = ACTIONS(48),
    [anon_sym_Lyricist] = ACTIONS(48),
    [anon_sym_lyricist] = ACTIONS(48),
    [anon_sym_Lyric] = ACTIONS(48),
    [anon_sym_lyric] = ACTIONS(48),
    [anon_sym_Arrangement] = ACTIONS(48),
    [anon_sym_arrangement] = ACTIONS(48),
    [anon_sym_Arranger] = ACTIONS(48),
    [anon_sym_arranger] = ACTIONS(48),
    [anon_sym_Arrange] = ACTIONS(48),
    [anon_sym_arrange] = ACTIONS(48),
    [anon_sym_Vocal] = ACTIONS(48),
    [anon_sym_vocal] = ACTIONS(48),
    [anon_sym_Performer] = ACTIONS(48),
    [anon_sym_performer] = ACTIONS(48),
    [anon_sym_Illustration] = ACTIONS(48),
    [anon_sym_illustration] = ACTIONS(48),
    [anon_sym_Illust] = ACTIONS(48),
    [anon_sym_illust] = ACTIONS(48),
    [anon_sym_Label] = ACTIONS(48),
    [anon_sym_label] = ACTIONS(48),
    [anon_sym_Circle] = ACTIONS(48),
    [anon_sym_circle] = ACTIONS(48),
    [anon_sym_Producer] = ACTIONS(48),
    [anon_sym_producer] = ACTIONS(48),
    [anon_sym_Recording] = ACTIONS(48),
    [anon_sym_recording] = ACTIONS(48),
    [anon_sym_GuestVocal] = ACTIONS(48),
    [anon_sym_Guestvocal] = ACTIONS(48),
    [anon_sym_guestvocal] = ACTIONS(48),
    [anon_sym_Chorus] = ACTIONS(48),
    [anon_sym_chorus] = ACTIONS(48),
    [anon_sym_Mixing] = ACTIONS(48),
    [anon_sym_mixing] = ACTIONS(48),
    [anon_sym_Mastering] = ACTIONS(48),
    [anon_sym_mastering] = ACTIONS(48),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(48),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(48),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(48),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(48),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(48),
    [anon_sym_u827au672fu5bb6] = ACTIONS(48),
    [anon_sym_u6b4cu5531] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(48),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu66f2] = ACTIONS(48),
    [anon_sym_u7de8u66f2] = ACTIONS(48),
    [anon_sym_u7f16u66f2] = ACTIONS(48),
    [anon_sym_u4f5cu8a5e] = ACTIONS(48),
    [anon_sym_u4f5cu8bcd] = ACTIONS(48),
    [anon_sym_u5382u724c] = ACTIONS(48),
    [anon_sym_u811au672c] = ACTIONS(48),
    [anon_sym_u63d2u56fe] = ACTIONS(48),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(48),
    [anon_sym_u51fau7248u65b9] = ACTIONS(48),
    [anon_sym_u5f55u97f3] = ACTIONS(48),
    [anon_sym_u539fu4f5c] = ACTIONS(48),
    [anon_sym_u58f0u4e50] = ACTIONS(48),
    [anon_sym_u4e50u5668] = ACTIONS(48),
    [anon_sym_u6df7u97f3] = ACTIONS(48),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(48),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DISC] = ACTIONS(92),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(92),
    [anon_sym_u300a] = ACTIONS(92),
    [aux_sym_song_title_token1] = ACTIONS(92),
    [sym__role_instrument] = ACTIONS(90),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(92),
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
  },
  [21] = {
    [aux_sym_song_title_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(41),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_song_title_token1] = ACTIONS(94),
    [sym__role_instrument] = ACTIONS(39),
    [anon_sym_Music] = ACTIONS(41),
    [anon_sym_music] = ACTIONS(41),
    [anon_sym_Composition] = ACTIONS(41),
    [anon_sym_composition] = ACTIONS(41),
    [anon_sym_Composer] = ACTIONS(41),
    [anon_sym_composer] = ACTIONS(41),
    [anon_sym_Compose] = ACTIONS(41),
    [anon_sym_compose] = ACTIONS(41),
    [anon_sym_Lyrics] = ACTIONS(41),
    [anon_sym_lyrics] = ACTIONS(41),
    [anon_sym_Lyricist] = ACTIONS(41),
    [anon_sym_lyricist] = ACTIONS(41),
    [anon_sym_Lyric] = ACTIONS(41),
    [anon_sym_lyric] = ACTIONS(41),
    [anon_sym_Arrangement] = ACTIONS(41),
    [anon_sym_arrangement] = ACTIONS(41),
    [anon_sym_Arranger] = ACTIONS(41),
    [anon_sym_arranger] = ACTIONS(41),
    [anon_sym_Arrange] = ACTIONS(41),
    [anon_sym_arrange] = ACTIONS(41),
    [anon_sym_Vocal] = ACTIONS(41),
    [anon_sym_vocal] = ACTIONS(41),
    [anon_sym_Performer] = ACTIONS(41),
    [anon_sym_performer] = ACTIONS(41),
    [anon_sym_Illustration] = ACTIONS(41),
    [anon_sym_illustration] = ACTIONS(41),
    [anon_sym_Illust] = ACTIONS(41),
    [anon_sym_illust] = ACTIONS(41),
    [anon_sym_Label] = ACTIONS(41),
    [anon_sym_label] = ACTIONS(41),
    [anon_sym_Circle] = ACTIONS(41),
    [anon_sym_circle] = ACTIONS(41),
    [anon_sym_Producer] = ACTIONS(41),
    [anon_sym_producer] = ACTIONS(41),
    [anon_sym_Recording] = ACTIONS(41),
    [anon_sym_recording] = ACTIONS(41),
    [anon_sym_GuestVocal] = ACTIONS(41),
    [anon_sym_Guestvocal] = ACTIONS(41),
    [anon_sym_guestvocal] = ACTIONS(41),
    [anon_sym_Chorus] = ACTIONS(41),
    [anon_sym_chorus] = ACTIONS(41),
    [anon_sym_Mixing] = ACTIONS(41),
    [anon_sym_mixing] = ACTIONS(41),
    [anon_sym_Mastering] = ACTIONS(41),
    [anon_sym_mastering] = ACTIONS(41),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(41),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(41),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(41),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(41),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(41),
    [anon_sym_u827au672fu5bb6] = ACTIONS(41),
    [anon_sym_u6b4cu5531] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(41),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu66f2] = ACTIONS(41),
    [anon_sym_u7de8u66f2] = ACTIONS(41),
    [anon_sym_u7f16u66f2] = ACTIONS(41),
    [anon_sym_u4f5cu8a5e] = ACTIONS(41),
    [anon_sym_u4f5cu8bcd] = ACTIONS(41),
    [anon_sym_u5382u724c] = ACTIONS(41),
    [anon_sym_u811au672c] = ACTIONS(41),
    [anon_sym_u63d2u56fe] = ACTIONS(41),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(41),
    [anon_sym_u51fau7248u65b9] = ACTIONS(41),
    [anon_sym_u5f55u97f3] = ACTIONS(41),
    [anon_sym_u539fu4f5c] = ACTIONS(41),
    [anon_sym_u58f0u4e50] = ACTIONS(41),
    [anon_sym_u4e50u5668] = ACTIONS(41),
    [anon_sym_u6df7u97f3] = ACTIONS(41),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(41),
  },
  [22] = {
    [sym__quotable_creator_name] = STATE(73),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [anon_sym_u300a] = ACTIONS(97),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [23] = {
    [sym__quotable_creator_name] = STATE(77),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [anon_sym_u300a] = ACTIONS(97),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [24] = {
    [sym__quotable_creator_name] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_SLASH_SLASH] = ACTIONS(101),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(103),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
    [sym__role_instrument] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(76),
    [anon_sym_Guestvocal] = ACTIONS(76),
    [anon_sym_guestvocal] = ACTIONS(76),
    [anon_sym_Chorus] = ACTIONS(76),
    [anon_sym_chorus] = ACTIONS(76),
    [anon_sym_Mixing] = ACTIONS(76),
    [anon_sym_mixing] = ACTIONS(76),
    [anon_sym_Mastering] = ACTIONS(76),
    [anon_sym_mastering] = ACTIONS(76),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(76),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(76),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(76),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(76),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(76),
    [anon_sym_u827au672fu5bb6] = ACTIONS(76),
    [anon_sym_u6b4cu5531] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu66f2] = ACTIONS(76),
    [anon_sym_u7de8u66f2] = ACTIONS(76),
    [anon_sym_u7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u4f5cu8bcd] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(76),
    [anon_sym_u811au672c] = ACTIONS(76),
    [anon_sym_u63d2u56fe] = ACTIONS(76),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(76),
    [anon_sym_u51fau7248u65b9] = ACTIONS(76),
    [anon_sym_u5f55u97f3] = ACTIONS(76),
    [anon_sym_u539fu4f5c] = ACTIONS(76),
    [anon_sym_u58f0u4e50] = ACTIONS(76),
    [anon_sym_u4e50u5668] = ACTIONS(76),
    [anon_sym_u6df7u97f3] = ACTIONS(76),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(76),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(92),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(92),
    [anon_sym_u300a] = ACTIONS(92),
    [aux_sym_song_title_token1] = ACTIONS(92),
    [sym__role_instrument] = ACTIONS(90),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(92),
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
  },
  [27] = {
    [sym__quotable_creator_name] = STATE(89),
    [anon_sym_DISC] = ACTIONS(84),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [28] = {
    [sym__quotable_creator_name] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LF] = ACTIONS(72),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(72),
    [anon_sym_u300a] = ACTIONS(72),
    [aux_sym_song_title_token1] = ACTIONS(72),
    [sym__role_instrument] = ACTIONS(70),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(72),
    [anon_sym_u6b4cu5531] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu66f2] = ACTIONS(72),
    [anon_sym_u7de8u66f2] = ACTIONS(72),
    [anon_sym_u7f16u66f2] = ACTIONS(72),
    [anon_sym_u4f5cu8a5e] = ACTIONS(72),
    [anon_sym_u4f5cu8bcd] = ACTIONS(72),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_SLASH_SLASH] = ACTIONS(111),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(54),
    [aux_sym_song_title_token1] = ACTIONS(54),
    [sym__role_instrument] = ACTIONS(52),
    [anon_sym_Music] = ACTIONS(54),
    [anon_sym_music] = ACTIONS(54),
    [anon_sym_Composition] = ACTIONS(54),
    [anon_sym_composition] = ACTIONS(54),
    [anon_sym_Composer] = ACTIONS(54),
    [anon_sym_composer] = ACTIONS(54),
    [anon_sym_Compose] = ACTIONS(54),
    [anon_sym_compose] = ACTIONS(54),
    [anon_sym_Lyrics] = ACTIONS(54),
    [anon_sym_lyrics] = ACTIONS(54),
    [anon_sym_Lyricist] = ACTIONS(54),
    [anon_sym_lyricist] = ACTIONS(54),
    [anon_sym_Lyric] = ACTIONS(54),
    [anon_sym_lyric] = ACTIONS(54),
    [anon_sym_Arrangement] = ACTIONS(54),
    [anon_sym_arrangement] = ACTIONS(54),
    [anon_sym_Arranger] = ACTIONS(54),
    [anon_sym_arranger] = ACTIONS(54),
    [anon_sym_Arrange] = ACTIONS(54),
    [anon_sym_arrange] = ACTIONS(54),
    [anon_sym_Vocal] = ACTIONS(54),
    [anon_sym_vocal] = ACTIONS(54),
    [anon_sym_Performer] = ACTIONS(54),
    [anon_sym_performer] = ACTIONS(54),
    [anon_sym_Illustration] = ACTIONS(54),
    [anon_sym_illustration] = ACTIONS(54),
    [anon_sym_Illust] = ACTIONS(54),
    [anon_sym_illust] = ACTIONS(54),
    [anon_sym_Label] = ACTIONS(54),
    [anon_sym_label] = ACTIONS(54),
    [anon_sym_Circle] = ACTIONS(54),
    [anon_sym_circle] = ACTIONS(54),
    [anon_sym_Producer] = ACTIONS(54),
    [anon_sym_producer] = ACTIONS(54),
    [anon_sym_Recording] = ACTIONS(54),
    [anon_sym_recording] = ACTIONS(54),
    [anon_sym_GuestVocal] = ACTIONS(54),
    [anon_sym_Guestvocal] = ACTIONS(54),
    [anon_sym_guestvocal] = ACTIONS(54),
    [anon_sym_Chorus] = ACTIONS(54),
    [anon_sym_chorus] = ACTIONS(54),
    [anon_sym_Mixing] = ACTIONS(54),
    [anon_sym_mixing] = ACTIONS(54),
    [anon_sym_Mastering] = ACTIONS(54),
    [anon_sym_mastering] = ACTIONS(54),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(54),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(54),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(54),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(54),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(54),
    [anon_sym_u827au672fu5bb6] = ACTIONS(54),
    [anon_sym_u6b4cu5531] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(54),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu66f2] = ACTIONS(54),
    [anon_sym_u7de8u66f2] = ACTIONS(54),
    [anon_sym_u7f16u66f2] = ACTIONS(54),
    [anon_sym_u4f5cu8a5e] = ACTIONS(54),
    [anon_sym_u4f5cu8bcd] = ACTIONS(54),
    [anon_sym_u5382u724c] = ACTIONS(54),
    [anon_sym_u811au672c] = ACTIONS(54),
    [anon_sym_u63d2u56fe] = ACTIONS(54),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(54),
    [anon_sym_u51fau7248u65b9] = ACTIONS(54),
    [anon_sym_u5f55u97f3] = ACTIONS(54),
    [anon_sym_u539fu4f5c] = ACTIONS(54),
    [anon_sym_u58f0u4e50] = ACTIONS(54),
    [anon_sym_u4e50u5668] = ACTIONS(54),
    [anon_sym_u6df7u97f3] = ACTIONS(54),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(54),
  },
  [31] = {
    [sym__quotable_creator_name] = STATE(89),
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [32] = {
    [sym__quotable_creator_name] = STATE(86),
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [anon_sym_u300a] = ACTIONS(97),
    [sym_creator_name] = ACTIONS(68),
    [sym__role_instrument] = ACTIONS(9),
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
    [anon_sym_GuestVocal] = ACTIONS(11),
    [anon_sym_Guestvocal] = ACTIONS(11),
    [anon_sym_guestvocal] = ACTIONS(11),
    [anon_sym_Chorus] = ACTIONS(11),
    [anon_sym_chorus] = ACTIONS(11),
    [anon_sym_Mixing] = ACTIONS(11),
    [anon_sym_mixing] = ACTIONS(11),
    [anon_sym_Mastering] = ACTIONS(11),
    [anon_sym_mastering] = ACTIONS(11),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(11),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(11),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(11),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(11),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(11),
    [anon_sym_u827au672fu5bb6] = ACTIONS(11),
    [anon_sym_u6b4cu5531] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu66f2] = ACTIONS(11),
    [anon_sym_u7de8u66f2] = ACTIONS(11),
    [anon_sym_u7f16u66f2] = ACTIONS(11),
    [anon_sym_u4f5cu8a5e] = ACTIONS(11),
    [anon_sym_u4f5cu8bcd] = ACTIONS(11),
    [anon_sym_u5382u724c] = ACTIONS(11),
    [anon_sym_u811au672c] = ACTIONS(11),
    [anon_sym_u63d2u56fe] = ACTIONS(11),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(11),
    [anon_sym_u51fau7248u65b9] = ACTIONS(11),
    [anon_sym_u5f55u97f3] = ACTIONS(11),
    [anon_sym_u539fu4f5c] = ACTIONS(11),
    [anon_sym_u58f0u4e50] = ACTIONS(11),
    [anon_sym_u4e50u5668] = ACTIONS(11),
    [anon_sym_u6df7u97f3] = ACTIONS(11),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(11),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DISC] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
    [sym__role_instrument] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(76),
    [anon_sym_Guestvocal] = ACTIONS(76),
    [anon_sym_guestvocal] = ACTIONS(76),
    [anon_sym_Chorus] = ACTIONS(76),
    [anon_sym_chorus] = ACTIONS(76),
    [anon_sym_Mixing] = ACTIONS(76),
    [anon_sym_mixing] = ACTIONS(76),
    [anon_sym_Mastering] = ACTIONS(76),
    [anon_sym_mastering] = ACTIONS(76),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(76),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(76),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(76),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(76),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(76),
    [anon_sym_u827au672fu5bb6] = ACTIONS(76),
    [anon_sym_u6b4cu5531] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu66f2] = ACTIONS(76),
    [anon_sym_u7de8u66f2] = ACTIONS(76),
    [anon_sym_u7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u4f5cu8bcd] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(76),
    [anon_sym_u811au672c] = ACTIONS(76),
    [anon_sym_u63d2u56fe] = ACTIONS(76),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(76),
    [anon_sym_u51fau7248u65b9] = ACTIONS(76),
    [anon_sym_u5f55u97f3] = ACTIONS(76),
    [anon_sym_u539fu4f5c] = ACTIONS(76),
    [anon_sym_u58f0u4e50] = ACTIONS(76),
    [anon_sym_u4e50u5668] = ACTIONS(76),
    [anon_sym_u6df7u97f3] = ACTIONS(76),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(76),
  },
  [34] = {
    [sym_role] = STATE(96),
    [sym__role] = STATE(91),
    [aux_sym_credit_field_repeat1] = STATE(34),
    [anon_sym_u300a] = ACTIONS(117),
    [sym_creator_name] = ACTIONS(117),
    [sym__role_instrument] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(122),
    [anon_sym_music] = ACTIONS(122),
    [anon_sym_Composition] = ACTIONS(122),
    [anon_sym_composition] = ACTIONS(122),
    [anon_sym_Composer] = ACTIONS(122),
    [anon_sym_composer] = ACTIONS(122),
    [anon_sym_Compose] = ACTIONS(122),
    [anon_sym_compose] = ACTIONS(122),
    [anon_sym_Lyrics] = ACTIONS(122),
    [anon_sym_lyrics] = ACTIONS(122),
    [anon_sym_Lyricist] = ACTIONS(122),
    [anon_sym_lyricist] = ACTIONS(122),
    [anon_sym_Lyric] = ACTIONS(122),
    [anon_sym_lyric] = ACTIONS(122),
    [anon_sym_Arrangement] = ACTIONS(122),
    [anon_sym_arrangement] = ACTIONS(122),
    [anon_sym_Arranger] = ACTIONS(122),
    [anon_sym_arranger] = ACTIONS(122),
    [anon_sym_Arrange] = ACTIONS(122),
    [anon_sym_arrange] = ACTIONS(122),
    [anon_sym_Vocal] = ACTIONS(122),
    [anon_sym_vocal] = ACTIONS(122),
    [anon_sym_Performer] = ACTIONS(122),
    [anon_sym_performer] = ACTIONS(122),
    [anon_sym_Illustration] = ACTIONS(122),
    [anon_sym_illustration] = ACTIONS(122),
    [anon_sym_Illust] = ACTIONS(122),
    [anon_sym_illust] = ACTIONS(122),
    [anon_sym_Label] = ACTIONS(122),
    [anon_sym_label] = ACTIONS(122),
    [anon_sym_Circle] = ACTIONS(122),
    [anon_sym_circle] = ACTIONS(122),
    [anon_sym_Producer] = ACTIONS(122),
    [anon_sym_producer] = ACTIONS(122),
    [anon_sym_Recording] = ACTIONS(122),
    [anon_sym_recording] = ACTIONS(122),
    [anon_sym_GuestVocal] = ACTIONS(122),
    [anon_sym_Guestvocal] = ACTIONS(122),
    [anon_sym_guestvocal] = ACTIONS(122),
    [anon_sym_Chorus] = ACTIONS(122),
    [anon_sym_chorus] = ACTIONS(122),
    [anon_sym_Mixing] = ACTIONS(122),
    [anon_sym_mixing] = ACTIONS(122),
    [anon_sym_Mastering] = ACTIONS(122),
    [anon_sym_mastering] = ACTIONS(122),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(122),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(122),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(122),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(122),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(122),
    [anon_sym_u827au672fu5bb6] = ACTIONS(122),
    [anon_sym_u6b4cu5531] = ACTIONS(122),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(122),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(122),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(122),
    [anon_sym_u4f5cu66f2] = ACTIONS(122),
    [anon_sym_u7de8u66f2] = ACTIONS(122),
    [anon_sym_u7f16u66f2] = ACTIONS(122),
    [anon_sym_u4f5cu8a5e] = ACTIONS(122),
    [anon_sym_u4f5cu8bcd] = ACTIONS(122),
    [anon_sym_u5382u724c] = ACTIONS(122),
    [anon_sym_u811au672c] = ACTIONS(122),
    [anon_sym_u63d2u56fe] = ACTIONS(122),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(122),
    [anon_sym_u51fau7248u65b9] = ACTIONS(122),
    [anon_sym_u5f55u97f3] = ACTIONS(122),
    [anon_sym_u539fu4f5c] = ACTIONS(122),
    [anon_sym_u58f0u4e50] = ACTIONS(122),
    [anon_sym_u4e50u5668] = ACTIONS(122),
    [anon_sym_u6df7u97f3] = ACTIONS(122),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(122),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_DISC] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_u300a] = ACTIONS(127),
    [aux_sym_song_title_token1] = ACTIONS(127),
    [sym__role_instrument] = ACTIONS(125),
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
    [anon_sym_GuestVocal] = ACTIONS(127),
    [anon_sym_Guestvocal] = ACTIONS(127),
    [anon_sym_guestvocal] = ACTIONS(127),
    [anon_sym_Chorus] = ACTIONS(127),
    [anon_sym_chorus] = ACTIONS(127),
    [anon_sym_Mixing] = ACTIONS(127),
    [anon_sym_mixing] = ACTIONS(127),
    [anon_sym_Mastering] = ACTIONS(127),
    [anon_sym_mastering] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(127),
    [anon_sym_u827au672fu5bb6] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u4f5cu8bcd] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
    [anon_sym_u58f0u4e50] = ACTIONS(127),
    [anon_sym_u4e50u5668] = ACTIONS(127),
    [anon_sym_u6df7u97f3] = ACTIONS(127),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(127),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_DISC] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_u300a] = ACTIONS(127),
    [aux_sym_song_title_token1] = ACTIONS(127),
    [sym__role_instrument] = ACTIONS(125),
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
    [anon_sym_GuestVocal] = ACTIONS(127),
    [anon_sym_Guestvocal] = ACTIONS(127),
    [anon_sym_guestvocal] = ACTIONS(127),
    [anon_sym_Chorus] = ACTIONS(127),
    [anon_sym_chorus] = ACTIONS(127),
    [anon_sym_Mixing] = ACTIONS(127),
    [anon_sym_mixing] = ACTIONS(127),
    [anon_sym_Mastering] = ACTIONS(127),
    [anon_sym_mastering] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(127),
    [anon_sym_u827au672fu5bb6] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u4f5cu8bcd] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
    [anon_sym_u58f0u4e50] = ACTIONS(127),
    [anon_sym_u4e50u5668] = ACTIONS(127),
    [anon_sym_u6df7u97f3] = ACTIONS(127),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(127),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_DISC] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_u300a] = ACTIONS(131),
    [aux_sym_song_title_token1] = ACTIONS(131),
    [sym__role_instrument] = ACTIONS(129),
    [anon_sym_Music] = ACTIONS(131),
    [anon_sym_music] = ACTIONS(131),
    [anon_sym_Composition] = ACTIONS(131),
    [anon_sym_composition] = ACTIONS(131),
    [anon_sym_Composer] = ACTIONS(131),
    [anon_sym_composer] = ACTIONS(131),
    [anon_sym_Compose] = ACTIONS(131),
    [anon_sym_compose] = ACTIONS(131),
    [anon_sym_Lyrics] = ACTIONS(131),
    [anon_sym_lyrics] = ACTIONS(131),
    [anon_sym_Lyricist] = ACTIONS(131),
    [anon_sym_lyricist] = ACTIONS(131),
    [anon_sym_Lyric] = ACTIONS(131),
    [anon_sym_lyric] = ACTIONS(131),
    [anon_sym_Arrangement] = ACTIONS(131),
    [anon_sym_arrangement] = ACTIONS(131),
    [anon_sym_Arranger] = ACTIONS(131),
    [anon_sym_arranger] = ACTIONS(131),
    [anon_sym_Arrange] = ACTIONS(131),
    [anon_sym_arrange] = ACTIONS(131),
    [anon_sym_Vocal] = ACTIONS(131),
    [anon_sym_vocal] = ACTIONS(131),
    [anon_sym_Performer] = ACTIONS(131),
    [anon_sym_performer] = ACTIONS(131),
    [anon_sym_Illustration] = ACTIONS(131),
    [anon_sym_illustration] = ACTIONS(131),
    [anon_sym_Illust] = ACTIONS(131),
    [anon_sym_illust] = ACTIONS(131),
    [anon_sym_Label] = ACTIONS(131),
    [anon_sym_label] = ACTIONS(131),
    [anon_sym_Circle] = ACTIONS(131),
    [anon_sym_circle] = ACTIONS(131),
    [anon_sym_Producer] = ACTIONS(131),
    [anon_sym_producer] = ACTIONS(131),
    [anon_sym_Recording] = ACTIONS(131),
    [anon_sym_recording] = ACTIONS(131),
    [anon_sym_GuestVocal] = ACTIONS(131),
    [anon_sym_Guestvocal] = ACTIONS(131),
    [anon_sym_guestvocal] = ACTIONS(131),
    [anon_sym_Chorus] = ACTIONS(131),
    [anon_sym_chorus] = ACTIONS(131),
    [anon_sym_Mixing] = ACTIONS(131),
    [anon_sym_mixing] = ACTIONS(131),
    [anon_sym_Mastering] = ACTIONS(131),
    [anon_sym_mastering] = ACTIONS(131),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(131),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(131),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(131),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(131),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(131),
    [anon_sym_u827au672fu5bb6] = ACTIONS(131),
    [anon_sym_u6b4cu5531] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu66f2] = ACTIONS(131),
    [anon_sym_u7de8u66f2] = ACTIONS(131),
    [anon_sym_u7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5e] = ACTIONS(131),
    [anon_sym_u4f5cu8bcd] = ACTIONS(131),
    [anon_sym_u5382u724c] = ACTIONS(131),
    [anon_sym_u811au672c] = ACTIONS(131),
    [anon_sym_u63d2u56fe] = ACTIONS(131),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(131),
    [anon_sym_u51fau7248u65b9] = ACTIONS(131),
    [anon_sym_u5f55u97f3] = ACTIONS(131),
    [anon_sym_u539fu4f5c] = ACTIONS(131),
    [anon_sym_u58f0u4e50] = ACTIONS(131),
    [anon_sym_u4e50u5668] = ACTIONS(131),
    [anon_sym_u6df7u97f3] = ACTIONS(131),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(131),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DISC] = ACTIONS(135),
    [anon_sym_u300a] = ACTIONS(135),
    [aux_sym_song_title_token1] = ACTIONS(135),
    [sym__role_instrument] = ACTIONS(133),
    [anon_sym_Music] = ACTIONS(135),
    [anon_sym_music] = ACTIONS(135),
    [anon_sym_Composition] = ACTIONS(135),
    [anon_sym_composition] = ACTIONS(135),
    [anon_sym_Composer] = ACTIONS(135),
    [anon_sym_composer] = ACTIONS(135),
    [anon_sym_Compose] = ACTIONS(135),
    [anon_sym_compose] = ACTIONS(135),
    [anon_sym_Lyrics] = ACTIONS(135),
    [anon_sym_lyrics] = ACTIONS(135),
    [anon_sym_Lyricist] = ACTIONS(135),
    [anon_sym_lyricist] = ACTIONS(135),
    [anon_sym_Lyric] = ACTIONS(135),
    [anon_sym_lyric] = ACTIONS(135),
    [anon_sym_Arrangement] = ACTIONS(135),
    [anon_sym_arrangement] = ACTIONS(135),
    [anon_sym_Arranger] = ACTIONS(135),
    [anon_sym_arranger] = ACTIONS(135),
    [anon_sym_Arrange] = ACTIONS(135),
    [anon_sym_arrange] = ACTIONS(135),
    [anon_sym_Vocal] = ACTIONS(135),
    [anon_sym_vocal] = ACTIONS(135),
    [anon_sym_Performer] = ACTIONS(135),
    [anon_sym_performer] = ACTIONS(135),
    [anon_sym_Illustration] = ACTIONS(135),
    [anon_sym_illustration] = ACTIONS(135),
    [anon_sym_Illust] = ACTIONS(135),
    [anon_sym_illust] = ACTIONS(135),
    [anon_sym_Label] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(135),
    [anon_sym_Circle] = ACTIONS(135),
    [anon_sym_circle] = ACTIONS(135),
    [anon_sym_Producer] = ACTIONS(135),
    [anon_sym_producer] = ACTIONS(135),
    [anon_sym_Recording] = ACTIONS(135),
    [anon_sym_recording] = ACTIONS(135),
    [anon_sym_GuestVocal] = ACTIONS(135),
    [anon_sym_Guestvocal] = ACTIONS(135),
    [anon_sym_guestvocal] = ACTIONS(135),
    [anon_sym_Chorus] = ACTIONS(135),
    [anon_sym_chorus] = ACTIONS(135),
    [anon_sym_Mixing] = ACTIONS(135),
    [anon_sym_mixing] = ACTIONS(135),
    [anon_sym_Mastering] = ACTIONS(135),
    [anon_sym_mastering] = ACTIONS(135),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(135),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(135),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(135),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(135),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(135),
    [anon_sym_u827au672fu5bb6] = ACTIONS(135),
    [anon_sym_u6b4cu5531] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu66f2] = ACTIONS(135),
    [anon_sym_u7de8u66f2] = ACTIONS(135),
    [anon_sym_u7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5e] = ACTIONS(135),
    [anon_sym_u4f5cu8bcd] = ACTIONS(135),
    [anon_sym_u5382u724c] = ACTIONS(135),
    [anon_sym_u811au672c] = ACTIONS(135),
    [anon_sym_u63d2u56fe] = ACTIONS(135),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(135),
    [anon_sym_u51fau7248u65b9] = ACTIONS(135),
    [anon_sym_u5f55u97f3] = ACTIONS(135),
    [anon_sym_u539fu4f5c] = ACTIONS(135),
    [anon_sym_u58f0u4e50] = ACTIONS(135),
    [anon_sym_u4e50u5668] = ACTIONS(135),
    [anon_sym_u6df7u97f3] = ACTIONS(135),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(135),
    [sym__sep] = ACTIONS(137),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_DISC] = ACTIONS(141),
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_song_title_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(141),
    [anon_sym_music] = ACTIONS(141),
    [anon_sym_Composition] = ACTIONS(141),
    [anon_sym_composition] = ACTIONS(141),
    [anon_sym_Composer] = ACTIONS(141),
    [anon_sym_composer] = ACTIONS(141),
    [anon_sym_Compose] = ACTIONS(141),
    [anon_sym_compose] = ACTIONS(141),
    [anon_sym_Lyrics] = ACTIONS(141),
    [anon_sym_lyrics] = ACTIONS(141),
    [anon_sym_Lyricist] = ACTIONS(141),
    [anon_sym_lyricist] = ACTIONS(141),
    [anon_sym_Lyric] = ACTIONS(141),
    [anon_sym_lyric] = ACTIONS(141),
    [anon_sym_Arrangement] = ACTIONS(141),
    [anon_sym_arrangement] = ACTIONS(141),
    [anon_sym_Arranger] = ACTIONS(141),
    [anon_sym_arranger] = ACTIONS(141),
    [anon_sym_Arrange] = ACTIONS(141),
    [anon_sym_arrange] = ACTIONS(141),
    [anon_sym_Vocal] = ACTIONS(141),
    [anon_sym_vocal] = ACTIONS(141),
    [anon_sym_Performer] = ACTIONS(141),
    [anon_sym_performer] = ACTIONS(141),
    [anon_sym_Illustration] = ACTIONS(141),
    [anon_sym_illustration] = ACTIONS(141),
    [anon_sym_Illust] = ACTIONS(141),
    [anon_sym_illust] = ACTIONS(141),
    [anon_sym_Label] = ACTIONS(141),
    [anon_sym_label] = ACTIONS(141),
    [anon_sym_Circle] = ACTIONS(141),
    [anon_sym_circle] = ACTIONS(141),
    [anon_sym_Producer] = ACTIONS(141),
    [anon_sym_producer] = ACTIONS(141),
    [anon_sym_Recording] = ACTIONS(141),
    [anon_sym_recording] = ACTIONS(141),
    [anon_sym_GuestVocal] = ACTIONS(141),
    [anon_sym_Guestvocal] = ACTIONS(141),
    [anon_sym_guestvocal] = ACTIONS(141),
    [anon_sym_Chorus] = ACTIONS(141),
    [anon_sym_chorus] = ACTIONS(141),
    [anon_sym_Mixing] = ACTIONS(141),
    [anon_sym_mixing] = ACTIONS(141),
    [anon_sym_Mastering] = ACTIONS(141),
    [anon_sym_mastering] = ACTIONS(141),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(141),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(141),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(141),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(141),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(141),
    [anon_sym_u827au672fu5bb6] = ACTIONS(141),
    [anon_sym_u6b4cu5531] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu66f2] = ACTIONS(141),
    [anon_sym_u7de8u66f2] = ACTIONS(141),
    [anon_sym_u7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5e] = ACTIONS(141),
    [anon_sym_u4f5cu8bcd] = ACTIONS(141),
    [anon_sym_u5382u724c] = ACTIONS(141),
    [anon_sym_u811au672c] = ACTIONS(141),
    [anon_sym_u63d2u56fe] = ACTIONS(141),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(141),
    [anon_sym_u51fau7248u65b9] = ACTIONS(141),
    [anon_sym_u5f55u97f3] = ACTIONS(141),
    [anon_sym_u539fu4f5c] = ACTIONS(141),
    [anon_sym_u58f0u4e50] = ACTIONS(141),
    [anon_sym_u4e50u5668] = ACTIONS(141),
    [anon_sym_u6df7u97f3] = ACTIONS(141),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(141),
    [sym__sep] = ACTIONS(143),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_DISC] = ACTIONS(147),
    [anon_sym_u300a] = ACTIONS(147),
    [aux_sym_song_title_token1] = ACTIONS(147),
    [sym__role_instrument] = ACTIONS(145),
    [anon_sym_Music] = ACTIONS(147),
    [anon_sym_music] = ACTIONS(147),
    [anon_sym_Composition] = ACTIONS(147),
    [anon_sym_composition] = ACTIONS(147),
    [anon_sym_Composer] = ACTIONS(147),
    [anon_sym_composer] = ACTIONS(147),
    [anon_sym_Compose] = ACTIONS(147),
    [anon_sym_compose] = ACTIONS(147),
    [anon_sym_Lyrics] = ACTIONS(147),
    [anon_sym_lyrics] = ACTIONS(147),
    [anon_sym_Lyricist] = ACTIONS(147),
    [anon_sym_lyricist] = ACTIONS(147),
    [anon_sym_Lyric] = ACTIONS(147),
    [anon_sym_lyric] = ACTIONS(147),
    [anon_sym_Arrangement] = ACTIONS(147),
    [anon_sym_arrangement] = ACTIONS(147),
    [anon_sym_Arranger] = ACTIONS(147),
    [anon_sym_arranger] = ACTIONS(147),
    [anon_sym_Arrange] = ACTIONS(147),
    [anon_sym_arrange] = ACTIONS(147),
    [anon_sym_Vocal] = ACTIONS(147),
    [anon_sym_vocal] = ACTIONS(147),
    [anon_sym_Performer] = ACTIONS(147),
    [anon_sym_performer] = ACTIONS(147),
    [anon_sym_Illustration] = ACTIONS(147),
    [anon_sym_illustration] = ACTIONS(147),
    [anon_sym_Illust] = ACTIONS(147),
    [anon_sym_illust] = ACTIONS(147),
    [anon_sym_Label] = ACTIONS(147),
    [anon_sym_label] = ACTIONS(147),
    [anon_sym_Circle] = ACTIONS(147),
    [anon_sym_circle] = ACTIONS(147),
    [anon_sym_Producer] = ACTIONS(147),
    [anon_sym_producer] = ACTIONS(147),
    [anon_sym_Recording] = ACTIONS(147),
    [anon_sym_recording] = ACTIONS(147),
    [anon_sym_GuestVocal] = ACTIONS(147),
    [anon_sym_Guestvocal] = ACTIONS(147),
    [anon_sym_guestvocal] = ACTIONS(147),
    [anon_sym_Chorus] = ACTIONS(147),
    [anon_sym_chorus] = ACTIONS(147),
    [anon_sym_Mixing] = ACTIONS(147),
    [anon_sym_mixing] = ACTIONS(147),
    [anon_sym_Mastering] = ACTIONS(147),
    [anon_sym_mastering] = ACTIONS(147),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(147),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(147),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(147),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(147),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(147),
    [anon_sym_u827au672fu5bb6] = ACTIONS(147),
    [anon_sym_u6b4cu5531] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu66f2] = ACTIONS(147),
    [anon_sym_u7de8u66f2] = ACTIONS(147),
    [anon_sym_u7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5e] = ACTIONS(147),
    [anon_sym_u4f5cu8bcd] = ACTIONS(147),
    [anon_sym_u5382u724c] = ACTIONS(147),
    [anon_sym_u811au672c] = ACTIONS(147),
    [anon_sym_u63d2u56fe] = ACTIONS(147),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(147),
    [anon_sym_u51fau7248u65b9] = ACTIONS(147),
    [anon_sym_u5f55u97f3] = ACTIONS(147),
    [anon_sym_u539fu4f5c] = ACTIONS(147),
    [anon_sym_u58f0u4e50] = ACTIONS(147),
    [anon_sym_u4e50u5668] = ACTIONS(147),
    [anon_sym_u6df7u97f3] = ACTIONS(147),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(147),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
    [sym__role_instrument] = ACTIONS(74),
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
    [anon_sym_GuestVocal] = ACTIONS(76),
    [anon_sym_Guestvocal] = ACTIONS(76),
    [anon_sym_guestvocal] = ACTIONS(76),
    [anon_sym_Chorus] = ACTIONS(76),
    [anon_sym_chorus] = ACTIONS(76),
    [anon_sym_Mixing] = ACTIONS(76),
    [anon_sym_mixing] = ACTIONS(76),
    [anon_sym_Mastering] = ACTIONS(76),
    [anon_sym_mastering] = ACTIONS(76),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(76),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(76),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(76),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(76),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(76),
    [anon_sym_u827au672fu5bb6] = ACTIONS(76),
    [anon_sym_u6b4cu5531] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu66f2] = ACTIONS(76),
    [anon_sym_u7de8u66f2] = ACTIONS(76),
    [anon_sym_u7f16u66f2] = ACTIONS(76),
    [anon_sym_u4f5cu8a5e] = ACTIONS(76),
    [anon_sym_u4f5cu8bcd] = ACTIONS(76),
    [anon_sym_u5382u724c] = ACTIONS(76),
    [anon_sym_u811au672c] = ACTIONS(76),
    [anon_sym_u63d2u56fe] = ACTIONS(76),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(76),
    [anon_sym_u51fau7248u65b9] = ACTIONS(76),
    [anon_sym_u5f55u97f3] = ACTIONS(76),
    [anon_sym_u539fu4f5c] = ACTIONS(76),
    [anon_sym_u58f0u4e50] = ACTIONS(76),
    [anon_sym_u4e50u5668] = ACTIONS(76),
    [anon_sym_u6df7u97f3] = ACTIONS(76),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(76),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_u300a] = ACTIONS(127),
    [aux_sym_song_title_token1] = ACTIONS(127),
    [sym__role_instrument] = ACTIONS(125),
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
    [anon_sym_GuestVocal] = ACTIONS(127),
    [anon_sym_Guestvocal] = ACTIONS(127),
    [anon_sym_guestvocal] = ACTIONS(127),
    [anon_sym_Chorus] = ACTIONS(127),
    [anon_sym_chorus] = ACTIONS(127),
    [anon_sym_Mixing] = ACTIONS(127),
    [anon_sym_mixing] = ACTIONS(127),
    [anon_sym_Mastering] = ACTIONS(127),
    [anon_sym_mastering] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(127),
    [anon_sym_u827au672fu5bb6] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u4f5cu8bcd] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
    [anon_sym_u58f0u4e50] = ACTIONS(127),
    [anon_sym_u4e50u5668] = ACTIONS(127),
    [anon_sym_u6df7u97f3] = ACTIONS(127),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(127),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_u300a] = ACTIONS(127),
    [aux_sym_song_title_token1] = ACTIONS(127),
    [sym__role_instrument] = ACTIONS(125),
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
    [anon_sym_GuestVocal] = ACTIONS(127),
    [anon_sym_Guestvocal] = ACTIONS(127),
    [anon_sym_guestvocal] = ACTIONS(127),
    [anon_sym_Chorus] = ACTIONS(127),
    [anon_sym_chorus] = ACTIONS(127),
    [anon_sym_Mixing] = ACTIONS(127),
    [anon_sym_mixing] = ACTIONS(127),
    [anon_sym_Mastering] = ACTIONS(127),
    [anon_sym_mastering] = ACTIONS(127),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(127),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(127),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(127),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(127),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(127),
    [anon_sym_u827au672fu5bb6] = ACTIONS(127),
    [anon_sym_u6b4cu5531] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu66f2] = ACTIONS(127),
    [anon_sym_u7de8u66f2] = ACTIONS(127),
    [anon_sym_u7f16u66f2] = ACTIONS(127),
    [anon_sym_u4f5cu8a5e] = ACTIONS(127),
    [anon_sym_u4f5cu8bcd] = ACTIONS(127),
    [anon_sym_u5382u724c] = ACTIONS(127),
    [anon_sym_u811au672c] = ACTIONS(127),
    [anon_sym_u63d2u56fe] = ACTIONS(127),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(127),
    [anon_sym_u51fau7248u65b9] = ACTIONS(127),
    [anon_sym_u5f55u97f3] = ACTIONS(127),
    [anon_sym_u539fu4f5c] = ACTIONS(127),
    [anon_sym_u58f0u4e50] = ACTIONS(127),
    [anon_sym_u4e50u5668] = ACTIONS(127),
    [anon_sym_u6df7u97f3] = ACTIONS(127),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(127),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_u300a] = ACTIONS(135),
    [aux_sym_song_title_token1] = ACTIONS(135),
    [sym__role_instrument] = ACTIONS(133),
    [anon_sym_Music] = ACTIONS(135),
    [anon_sym_music] = ACTIONS(135),
    [anon_sym_Composition] = ACTIONS(135),
    [anon_sym_composition] = ACTIONS(135),
    [anon_sym_Composer] = ACTIONS(135),
    [anon_sym_composer] = ACTIONS(135),
    [anon_sym_Compose] = ACTIONS(135),
    [anon_sym_compose] = ACTIONS(135),
    [anon_sym_Lyrics] = ACTIONS(135),
    [anon_sym_lyrics] = ACTIONS(135),
    [anon_sym_Lyricist] = ACTIONS(135),
    [anon_sym_lyricist] = ACTIONS(135),
    [anon_sym_Lyric] = ACTIONS(135),
    [anon_sym_lyric] = ACTIONS(135),
    [anon_sym_Arrangement] = ACTIONS(135),
    [anon_sym_arrangement] = ACTIONS(135),
    [anon_sym_Arranger] = ACTIONS(135),
    [anon_sym_arranger] = ACTIONS(135),
    [anon_sym_Arrange] = ACTIONS(135),
    [anon_sym_arrange] = ACTIONS(135),
    [anon_sym_Vocal] = ACTIONS(135),
    [anon_sym_vocal] = ACTIONS(135),
    [anon_sym_Performer] = ACTIONS(135),
    [anon_sym_performer] = ACTIONS(135),
    [anon_sym_Illustration] = ACTIONS(135),
    [anon_sym_illustration] = ACTIONS(135),
    [anon_sym_Illust] = ACTIONS(135),
    [anon_sym_illust] = ACTIONS(135),
    [anon_sym_Label] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(135),
    [anon_sym_Circle] = ACTIONS(135),
    [anon_sym_circle] = ACTIONS(135),
    [anon_sym_Producer] = ACTIONS(135),
    [anon_sym_producer] = ACTIONS(135),
    [anon_sym_Recording] = ACTIONS(135),
    [anon_sym_recording] = ACTIONS(135),
    [anon_sym_GuestVocal] = ACTIONS(135),
    [anon_sym_Guestvocal] = ACTIONS(135),
    [anon_sym_guestvocal] = ACTIONS(135),
    [anon_sym_Chorus] = ACTIONS(135),
    [anon_sym_chorus] = ACTIONS(135),
    [anon_sym_Mixing] = ACTIONS(135),
    [anon_sym_mixing] = ACTIONS(135),
    [anon_sym_Mastering] = ACTIONS(135),
    [anon_sym_mastering] = ACTIONS(135),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(135),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(135),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(135),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(135),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(135),
    [anon_sym_u827au672fu5bb6] = ACTIONS(135),
    [anon_sym_u6b4cu5531] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu66f2] = ACTIONS(135),
    [anon_sym_u7de8u66f2] = ACTIONS(135),
    [anon_sym_u7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5e] = ACTIONS(135),
    [anon_sym_u4f5cu8bcd] = ACTIONS(135),
    [anon_sym_u5382u724c] = ACTIONS(135),
    [anon_sym_u811au672c] = ACTIONS(135),
    [anon_sym_u63d2u56fe] = ACTIONS(135),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(135),
    [anon_sym_u51fau7248u65b9] = ACTIONS(135),
    [anon_sym_u5f55u97f3] = ACTIONS(135),
    [anon_sym_u539fu4f5c] = ACTIONS(135),
    [anon_sym_u58f0u4e50] = ACTIONS(135),
    [anon_sym_u4e50u5668] = ACTIONS(135),
    [anon_sym_u6df7u97f3] = ACTIONS(135),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(135),
    [sym__sep] = ACTIONS(149),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_song_title_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(141),
    [anon_sym_music] = ACTIONS(141),
    [anon_sym_Composition] = ACTIONS(141),
    [anon_sym_composition] = ACTIONS(141),
    [anon_sym_Composer] = ACTIONS(141),
    [anon_sym_composer] = ACTIONS(141),
    [anon_sym_Compose] = ACTIONS(141),
    [anon_sym_compose] = ACTIONS(141),
    [anon_sym_Lyrics] = ACTIONS(141),
    [anon_sym_lyrics] = ACTIONS(141),
    [anon_sym_Lyricist] = ACTIONS(141),
    [anon_sym_lyricist] = ACTIONS(141),
    [anon_sym_Lyric] = ACTIONS(141),
    [anon_sym_lyric] = ACTIONS(141),
    [anon_sym_Arrangement] = ACTIONS(141),
    [anon_sym_arrangement] = ACTIONS(141),
    [anon_sym_Arranger] = ACTIONS(141),
    [anon_sym_arranger] = ACTIONS(141),
    [anon_sym_Arrange] = ACTIONS(141),
    [anon_sym_arrange] = ACTIONS(141),
    [anon_sym_Vocal] = ACTIONS(141),
    [anon_sym_vocal] = ACTIONS(141),
    [anon_sym_Performer] = ACTIONS(141),
    [anon_sym_performer] = ACTIONS(141),
    [anon_sym_Illustration] = ACTIONS(141),
    [anon_sym_illustration] = ACTIONS(141),
    [anon_sym_Illust] = ACTIONS(141),
    [anon_sym_illust] = ACTIONS(141),
    [anon_sym_Label] = ACTIONS(141),
    [anon_sym_label] = ACTIONS(141),
    [anon_sym_Circle] = ACTIONS(141),
    [anon_sym_circle] = ACTIONS(141),
    [anon_sym_Producer] = ACTIONS(141),
    [anon_sym_producer] = ACTIONS(141),
    [anon_sym_Recording] = ACTIONS(141),
    [anon_sym_recording] = ACTIONS(141),
    [anon_sym_GuestVocal] = ACTIONS(141),
    [anon_sym_Guestvocal] = ACTIONS(141),
    [anon_sym_guestvocal] = ACTIONS(141),
    [anon_sym_Chorus] = ACTIONS(141),
    [anon_sym_chorus] = ACTIONS(141),
    [anon_sym_Mixing] = ACTIONS(141),
    [anon_sym_mixing] = ACTIONS(141),
    [anon_sym_Mastering] = ACTIONS(141),
    [anon_sym_mastering] = ACTIONS(141),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(141),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(141),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(141),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(141),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(141),
    [anon_sym_u827au672fu5bb6] = ACTIONS(141),
    [anon_sym_u6b4cu5531] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu66f2] = ACTIONS(141),
    [anon_sym_u7de8u66f2] = ACTIONS(141),
    [anon_sym_u7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5e] = ACTIONS(141),
    [anon_sym_u4f5cu8bcd] = ACTIONS(141),
    [anon_sym_u5382u724c] = ACTIONS(141),
    [anon_sym_u811au672c] = ACTIONS(141),
    [anon_sym_u63d2u56fe] = ACTIONS(141),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(141),
    [anon_sym_u51fau7248u65b9] = ACTIONS(141),
    [anon_sym_u5f55u97f3] = ACTIONS(141),
    [anon_sym_u539fu4f5c] = ACTIONS(141),
    [anon_sym_u58f0u4e50] = ACTIONS(141),
    [anon_sym_u4e50u5668] = ACTIONS(141),
    [anon_sym_u6df7u97f3] = ACTIONS(141),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(141),
    [sym__sep] = ACTIONS(151),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_DISC] = ACTIONS(84),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_u300a] = ACTIONS(131),
    [aux_sym_song_title_token1] = ACTIONS(131),
    [sym__role_instrument] = ACTIONS(129),
    [anon_sym_Music] = ACTIONS(131),
    [anon_sym_music] = ACTIONS(131),
    [anon_sym_Composition] = ACTIONS(131),
    [anon_sym_composition] = ACTIONS(131),
    [anon_sym_Composer] = ACTIONS(131),
    [anon_sym_composer] = ACTIONS(131),
    [anon_sym_Compose] = ACTIONS(131),
    [anon_sym_compose] = ACTIONS(131),
    [anon_sym_Lyrics] = ACTIONS(131),
    [anon_sym_lyrics] = ACTIONS(131),
    [anon_sym_Lyricist] = ACTIONS(131),
    [anon_sym_lyricist] = ACTIONS(131),
    [anon_sym_Lyric] = ACTIONS(131),
    [anon_sym_lyric] = ACTIONS(131),
    [anon_sym_Arrangement] = ACTIONS(131),
    [anon_sym_arrangement] = ACTIONS(131),
    [anon_sym_Arranger] = ACTIONS(131),
    [anon_sym_arranger] = ACTIONS(131),
    [anon_sym_Arrange] = ACTIONS(131),
    [anon_sym_arrange] = ACTIONS(131),
    [anon_sym_Vocal] = ACTIONS(131),
    [anon_sym_vocal] = ACTIONS(131),
    [anon_sym_Performer] = ACTIONS(131),
    [anon_sym_performer] = ACTIONS(131),
    [anon_sym_Illustration] = ACTIONS(131),
    [anon_sym_illustration] = ACTIONS(131),
    [anon_sym_Illust] = ACTIONS(131),
    [anon_sym_illust] = ACTIONS(131),
    [anon_sym_Label] = ACTIONS(131),
    [anon_sym_label] = ACTIONS(131),
    [anon_sym_Circle] = ACTIONS(131),
    [anon_sym_circle] = ACTIONS(131),
    [anon_sym_Producer] = ACTIONS(131),
    [anon_sym_producer] = ACTIONS(131),
    [anon_sym_Recording] = ACTIONS(131),
    [anon_sym_recording] = ACTIONS(131),
    [anon_sym_GuestVocal] = ACTIONS(131),
    [anon_sym_Guestvocal] = ACTIONS(131),
    [anon_sym_guestvocal] = ACTIONS(131),
    [anon_sym_Chorus] = ACTIONS(131),
    [anon_sym_chorus] = ACTIONS(131),
    [anon_sym_Mixing] = ACTIONS(131),
    [anon_sym_mixing] = ACTIONS(131),
    [anon_sym_Mastering] = ACTIONS(131),
    [anon_sym_mastering] = ACTIONS(131),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(131),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(131),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(131),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(131),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(131),
    [anon_sym_u827au672fu5bb6] = ACTIONS(131),
    [anon_sym_u6b4cu5531] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(131),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu66f2] = ACTIONS(131),
    [anon_sym_u7de8u66f2] = ACTIONS(131),
    [anon_sym_u7f16u66f2] = ACTIONS(131),
    [anon_sym_u4f5cu8a5e] = ACTIONS(131),
    [anon_sym_u4f5cu8bcd] = ACTIONS(131),
    [anon_sym_u5382u724c] = ACTIONS(131),
    [anon_sym_u811au672c] = ACTIONS(131),
    [anon_sym_u63d2u56fe] = ACTIONS(131),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(131),
    [anon_sym_u51fau7248u65b9] = ACTIONS(131),
    [anon_sym_u5f55u97f3] = ACTIONS(131),
    [anon_sym_u539fu4f5c] = ACTIONS(131),
    [anon_sym_u58f0u4e50] = ACTIONS(131),
    [anon_sym_u4e50u5668] = ACTIONS(131),
    [anon_sym_u6df7u97f3] = ACTIONS(131),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(131),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [49] = {
    [anon_sym_DISC] = ACTIONS(135),
    [anon_sym_u300a] = ACTIONS(135),
    [aux_sym_song_title_token1] = ACTIONS(135),
    [sym__role_instrument] = ACTIONS(133),
    [anon_sym_Music] = ACTIONS(135),
    [anon_sym_music] = ACTIONS(135),
    [anon_sym_Composition] = ACTIONS(135),
    [anon_sym_composition] = ACTIONS(135),
    [anon_sym_Composer] = ACTIONS(135),
    [anon_sym_composer] = ACTIONS(135),
    [anon_sym_Compose] = ACTIONS(135),
    [anon_sym_compose] = ACTIONS(135),
    [anon_sym_Lyrics] = ACTIONS(135),
    [anon_sym_lyrics] = ACTIONS(135),
    [anon_sym_Lyricist] = ACTIONS(135),
    [anon_sym_lyricist] = ACTIONS(135),
    [anon_sym_Lyric] = ACTIONS(135),
    [anon_sym_lyric] = ACTIONS(135),
    [anon_sym_Arrangement] = ACTIONS(135),
    [anon_sym_arrangement] = ACTIONS(135),
    [anon_sym_Arranger] = ACTIONS(135),
    [anon_sym_arranger] = ACTIONS(135),
    [anon_sym_Arrange] = ACTIONS(135),
    [anon_sym_arrange] = ACTIONS(135),
    [anon_sym_Vocal] = ACTIONS(135),
    [anon_sym_vocal] = ACTIONS(135),
    [anon_sym_Performer] = ACTIONS(135),
    [anon_sym_performer] = ACTIONS(135),
    [anon_sym_Illustration] = ACTIONS(135),
    [anon_sym_illustration] = ACTIONS(135),
    [anon_sym_Illust] = ACTIONS(135),
    [anon_sym_illust] = ACTIONS(135),
    [anon_sym_Label] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(135),
    [anon_sym_Circle] = ACTIONS(135),
    [anon_sym_circle] = ACTIONS(135),
    [anon_sym_Producer] = ACTIONS(135),
    [anon_sym_producer] = ACTIONS(135),
    [anon_sym_Recording] = ACTIONS(135),
    [anon_sym_recording] = ACTIONS(135),
    [anon_sym_GuestVocal] = ACTIONS(135),
    [anon_sym_Guestvocal] = ACTIONS(135),
    [anon_sym_guestvocal] = ACTIONS(135),
    [anon_sym_Chorus] = ACTIONS(135),
    [anon_sym_chorus] = ACTIONS(135),
    [anon_sym_Mixing] = ACTIONS(135),
    [anon_sym_mixing] = ACTIONS(135),
    [anon_sym_Mastering] = ACTIONS(135),
    [anon_sym_mastering] = ACTIONS(135),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(135),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(135),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(135),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(135),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(135),
    [anon_sym_u827au672fu5bb6] = ACTIONS(135),
    [anon_sym_u6b4cu5531] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu66f2] = ACTIONS(135),
    [anon_sym_u7de8u66f2] = ACTIONS(135),
    [anon_sym_u7f16u66f2] = ACTIONS(135),
    [anon_sym_u4f5cu8a5e] = ACTIONS(135),
    [anon_sym_u4f5cu8bcd] = ACTIONS(135),
    [anon_sym_u5382u724c] = ACTIONS(135),
    [anon_sym_u811au672c] = ACTIONS(135),
    [anon_sym_u63d2u56fe] = ACTIONS(135),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(135),
    [anon_sym_u51fau7248u65b9] = ACTIONS(135),
    [anon_sym_u5f55u97f3] = ACTIONS(135),
    [anon_sym_u539fu4f5c] = ACTIONS(135),
    [anon_sym_u58f0u4e50] = ACTIONS(135),
    [anon_sym_u4e50u5668] = ACTIONS(135),
    [anon_sym_u6df7u97f3] = ACTIONS(135),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(135),
    [sym__sep] = ACTIONS(153),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DISC] = ACTIONS(157),
    [anon_sym_u300a] = ACTIONS(157),
    [aux_sym_song_title_token1] = ACTIONS(157),
    [sym__role_instrument] = ACTIONS(155),
    [anon_sym_Music] = ACTIONS(157),
    [anon_sym_music] = ACTIONS(157),
    [anon_sym_Composition] = ACTIONS(157),
    [anon_sym_composition] = ACTIONS(157),
    [anon_sym_Composer] = ACTIONS(157),
    [anon_sym_composer] = ACTIONS(157),
    [anon_sym_Compose] = ACTIONS(157),
    [anon_sym_compose] = ACTIONS(157),
    [anon_sym_Lyrics] = ACTIONS(157),
    [anon_sym_lyrics] = ACTIONS(157),
    [anon_sym_Lyricist] = ACTIONS(157),
    [anon_sym_lyricist] = ACTIONS(157),
    [anon_sym_Lyric] = ACTIONS(157),
    [anon_sym_lyric] = ACTIONS(157),
    [anon_sym_Arrangement] = ACTIONS(157),
    [anon_sym_arrangement] = ACTIONS(157),
    [anon_sym_Arranger] = ACTIONS(157),
    [anon_sym_arranger] = ACTIONS(157),
    [anon_sym_Arrange] = ACTIONS(157),
    [anon_sym_arrange] = ACTIONS(157),
    [anon_sym_Vocal] = ACTIONS(157),
    [anon_sym_vocal] = ACTIONS(157),
    [anon_sym_Performer] = ACTIONS(157),
    [anon_sym_performer] = ACTIONS(157),
    [anon_sym_Illustration] = ACTIONS(157),
    [anon_sym_illustration] = ACTIONS(157),
    [anon_sym_Illust] = ACTIONS(157),
    [anon_sym_illust] = ACTIONS(157),
    [anon_sym_Label] = ACTIONS(157),
    [anon_sym_label] = ACTIONS(157),
    [anon_sym_Circle] = ACTIONS(157),
    [anon_sym_circle] = ACTIONS(157),
    [anon_sym_Producer] = ACTIONS(157),
    [anon_sym_producer] = ACTIONS(157),
    [anon_sym_Recording] = ACTIONS(157),
    [anon_sym_recording] = ACTIONS(157),
    [anon_sym_GuestVocal] = ACTIONS(157),
    [anon_sym_Guestvocal] = ACTIONS(157),
    [anon_sym_guestvocal] = ACTIONS(157),
    [anon_sym_Chorus] = ACTIONS(157),
    [anon_sym_chorus] = ACTIONS(157),
    [anon_sym_Mixing] = ACTIONS(157),
    [anon_sym_mixing] = ACTIONS(157),
    [anon_sym_Mastering] = ACTIONS(157),
    [anon_sym_mastering] = ACTIONS(157),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(157),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(157),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(157),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(157),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(157),
    [anon_sym_u827au672fu5bb6] = ACTIONS(157),
    [anon_sym_u6b4cu5531] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu66f2] = ACTIONS(157),
    [anon_sym_u7de8u66f2] = ACTIONS(157),
    [anon_sym_u7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5e] = ACTIONS(157),
    [anon_sym_u4f5cu8bcd] = ACTIONS(157),
    [anon_sym_u5382u724c] = ACTIONS(157),
    [anon_sym_u811au672c] = ACTIONS(157),
    [anon_sym_u63d2u56fe] = ACTIONS(157),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(157),
    [anon_sym_u51fau7248u65b9] = ACTIONS(157),
    [anon_sym_u5f55u97f3] = ACTIONS(157),
    [anon_sym_u539fu4f5c] = ACTIONS(157),
    [anon_sym_u58f0u4e50] = ACTIONS(157),
    [anon_sym_u4e50u5668] = ACTIONS(157),
    [anon_sym_u6df7u97f3] = ACTIONS(157),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(157),
  },
  [51] = {
    [anon_sym_DISC] = ACTIONS(141),
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_song_title_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(139),
    [anon_sym_Music] = ACTIONS(141),
    [anon_sym_music] = ACTIONS(141),
    [anon_sym_Composition] = ACTIONS(141),
    [anon_sym_composition] = ACTIONS(141),
    [anon_sym_Composer] = ACTIONS(141),
    [anon_sym_composer] = ACTIONS(141),
    [anon_sym_Compose] = ACTIONS(141),
    [anon_sym_compose] = ACTIONS(141),
    [anon_sym_Lyrics] = ACTIONS(141),
    [anon_sym_lyrics] = ACTIONS(141),
    [anon_sym_Lyricist] = ACTIONS(141),
    [anon_sym_lyricist] = ACTIONS(141),
    [anon_sym_Lyric] = ACTIONS(141),
    [anon_sym_lyric] = ACTIONS(141),
    [anon_sym_Arrangement] = ACTIONS(141),
    [anon_sym_arrangement] = ACTIONS(141),
    [anon_sym_Arranger] = ACTIONS(141),
    [anon_sym_arranger] = ACTIONS(141),
    [anon_sym_Arrange] = ACTIONS(141),
    [anon_sym_arrange] = ACTIONS(141),
    [anon_sym_Vocal] = ACTIONS(141),
    [anon_sym_vocal] = ACTIONS(141),
    [anon_sym_Performer] = ACTIONS(141),
    [anon_sym_performer] = ACTIONS(141),
    [anon_sym_Illustration] = ACTIONS(141),
    [anon_sym_illustration] = ACTIONS(141),
    [anon_sym_Illust] = ACTIONS(141),
    [anon_sym_illust] = ACTIONS(141),
    [anon_sym_Label] = ACTIONS(141),
    [anon_sym_label] = ACTIONS(141),
    [anon_sym_Circle] = ACTIONS(141),
    [anon_sym_circle] = ACTIONS(141),
    [anon_sym_Producer] = ACTIONS(141),
    [anon_sym_producer] = ACTIONS(141),
    [anon_sym_Recording] = ACTIONS(141),
    [anon_sym_recording] = ACTIONS(141),
    [anon_sym_GuestVocal] = ACTIONS(141),
    [anon_sym_Guestvocal] = ACTIONS(141),
    [anon_sym_guestvocal] = ACTIONS(141),
    [anon_sym_Chorus] = ACTIONS(141),
    [anon_sym_chorus] = ACTIONS(141),
    [anon_sym_Mixing] = ACTIONS(141),
    [anon_sym_mixing] = ACTIONS(141),
    [anon_sym_Mastering] = ACTIONS(141),
    [anon_sym_mastering] = ACTIONS(141),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(141),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(141),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(141),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(141),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(141),
    [anon_sym_u827au672fu5bb6] = ACTIONS(141),
    [anon_sym_u6b4cu5531] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu66f2] = ACTIONS(141),
    [anon_sym_u7de8u66f2] = ACTIONS(141),
    [anon_sym_u7f16u66f2] = ACTIONS(141),
    [anon_sym_u4f5cu8a5e] = ACTIONS(141),
    [anon_sym_u4f5cu8bcd] = ACTIONS(141),
    [anon_sym_u5382u724c] = ACTIONS(141),
    [anon_sym_u811au672c] = ACTIONS(141),
    [anon_sym_u63d2u56fe] = ACTIONS(141),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(141),
    [anon_sym_u51fau7248u65b9] = ACTIONS(141),
    [anon_sym_u5f55u97f3] = ACTIONS(141),
    [anon_sym_u539fu4f5c] = ACTIONS(141),
    [anon_sym_u58f0u4e50] = ACTIONS(141),
    [anon_sym_u4e50u5668] = ACTIONS(141),
    [anon_sym_u6df7u97f3] = ACTIONS(141),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(141),
    [sym__sep] = ACTIONS(159),
  },
  [52] = {
    [anon_sym_DISC] = ACTIONS(157),
    [anon_sym_u300a] = ACTIONS(157),
    [aux_sym_song_title_token1] = ACTIONS(157),
    [sym__role_instrument] = ACTIONS(155),
    [anon_sym_Music] = ACTIONS(157),
    [anon_sym_music] = ACTIONS(157),
    [anon_sym_Composition] = ACTIONS(157),
    [anon_sym_composition] = ACTIONS(157),
    [anon_sym_Composer] = ACTIONS(157),
    [anon_sym_composer] = ACTIONS(157),
    [anon_sym_Compose] = ACTIONS(157),
    [anon_sym_compose] = ACTIONS(157),
    [anon_sym_Lyrics] = ACTIONS(157),
    [anon_sym_lyrics] = ACTIONS(157),
    [anon_sym_Lyricist] = ACTIONS(157),
    [anon_sym_lyricist] = ACTIONS(157),
    [anon_sym_Lyric] = ACTIONS(157),
    [anon_sym_lyric] = ACTIONS(157),
    [anon_sym_Arrangement] = ACTIONS(157),
    [anon_sym_arrangement] = ACTIONS(157),
    [anon_sym_Arranger] = ACTIONS(157),
    [anon_sym_arranger] = ACTIONS(157),
    [anon_sym_Arrange] = ACTIONS(157),
    [anon_sym_arrange] = ACTIONS(157),
    [anon_sym_Vocal] = ACTIONS(157),
    [anon_sym_vocal] = ACTIONS(157),
    [anon_sym_Performer] = ACTIONS(157),
    [anon_sym_performer] = ACTIONS(157),
    [anon_sym_Illustration] = ACTIONS(157),
    [anon_sym_illustration] = ACTIONS(157),
    [anon_sym_Illust] = ACTIONS(157),
    [anon_sym_illust] = ACTIONS(157),
    [anon_sym_Label] = ACTIONS(157),
    [anon_sym_label] = ACTIONS(157),
    [anon_sym_Circle] = ACTIONS(157),
    [anon_sym_circle] = ACTIONS(157),
    [anon_sym_Producer] = ACTIONS(157),
    [anon_sym_producer] = ACTIONS(157),
    [anon_sym_Recording] = ACTIONS(157),
    [anon_sym_recording] = ACTIONS(157),
    [anon_sym_GuestVocal] = ACTIONS(157),
    [anon_sym_Guestvocal] = ACTIONS(157),
    [anon_sym_guestvocal] = ACTIONS(157),
    [anon_sym_Chorus] = ACTIONS(157),
    [anon_sym_chorus] = ACTIONS(157),
    [anon_sym_Mixing] = ACTIONS(157),
    [anon_sym_mixing] = ACTIONS(157),
    [anon_sym_Mastering] = ACTIONS(157),
    [anon_sym_mastering] = ACTIONS(157),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(157),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(157),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(157),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(157),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(157),
    [anon_sym_u827au672fu5bb6] = ACTIONS(157),
    [anon_sym_u6b4cu5531] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu66f2] = ACTIONS(157),
    [anon_sym_u7de8u66f2] = ACTIONS(157),
    [anon_sym_u7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5e] = ACTIONS(157),
    [anon_sym_u4f5cu8bcd] = ACTIONS(157),
    [anon_sym_u5382u724c] = ACTIONS(157),
    [anon_sym_u811au672c] = ACTIONS(157),
    [anon_sym_u63d2u56fe] = ACTIONS(157),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(157),
    [anon_sym_u51fau7248u65b9] = ACTIONS(157),
    [anon_sym_u5f55u97f3] = ACTIONS(157),
    [anon_sym_u539fu4f5c] = ACTIONS(157),
    [anon_sym_u58f0u4e50] = ACTIONS(157),
    [anon_sym_u4e50u5668] = ACTIONS(157),
    [anon_sym_u6df7u97f3] = ACTIONS(157),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(157),
  },
  [53] = {
    [anon_sym_DISC] = ACTIONS(147),
    [anon_sym_u300a] = ACTIONS(147),
    [aux_sym_song_title_token1] = ACTIONS(147),
    [sym__role_instrument] = ACTIONS(145),
    [anon_sym_Music] = ACTIONS(147),
    [anon_sym_music] = ACTIONS(147),
    [anon_sym_Composition] = ACTIONS(147),
    [anon_sym_composition] = ACTIONS(147),
    [anon_sym_Composer] = ACTIONS(147),
    [anon_sym_composer] = ACTIONS(147),
    [anon_sym_Compose] = ACTIONS(147),
    [anon_sym_compose] = ACTIONS(147),
    [anon_sym_Lyrics] = ACTIONS(147),
    [anon_sym_lyrics] = ACTIONS(147),
    [anon_sym_Lyricist] = ACTIONS(147),
    [anon_sym_lyricist] = ACTIONS(147),
    [anon_sym_Lyric] = ACTIONS(147),
    [anon_sym_lyric] = ACTIONS(147),
    [anon_sym_Arrangement] = ACTIONS(147),
    [anon_sym_arrangement] = ACTIONS(147),
    [anon_sym_Arranger] = ACTIONS(147),
    [anon_sym_arranger] = ACTIONS(147),
    [anon_sym_Arrange] = ACTIONS(147),
    [anon_sym_arrange] = ACTIONS(147),
    [anon_sym_Vocal] = ACTIONS(147),
    [anon_sym_vocal] = ACTIONS(147),
    [anon_sym_Performer] = ACTIONS(147),
    [anon_sym_performer] = ACTIONS(147),
    [anon_sym_Illustration] = ACTIONS(147),
    [anon_sym_illustration] = ACTIONS(147),
    [anon_sym_Illust] = ACTIONS(147),
    [anon_sym_illust] = ACTIONS(147),
    [anon_sym_Label] = ACTIONS(147),
    [anon_sym_label] = ACTIONS(147),
    [anon_sym_Circle] = ACTIONS(147),
    [anon_sym_circle] = ACTIONS(147),
    [anon_sym_Producer] = ACTIONS(147),
    [anon_sym_producer] = ACTIONS(147),
    [anon_sym_Recording] = ACTIONS(147),
    [anon_sym_recording] = ACTIONS(147),
    [anon_sym_GuestVocal] = ACTIONS(147),
    [anon_sym_Guestvocal] = ACTIONS(147),
    [anon_sym_guestvocal] = ACTIONS(147),
    [anon_sym_Chorus] = ACTIONS(147),
    [anon_sym_chorus] = ACTIONS(147),
    [anon_sym_Mixing] = ACTIONS(147),
    [anon_sym_mixing] = ACTIONS(147),
    [anon_sym_Mastering] = ACTIONS(147),
    [anon_sym_mastering] = ACTIONS(147),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(147),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(147),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(147),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(147),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(147),
    [anon_sym_u827au672fu5bb6] = ACTIONS(147),
    [anon_sym_u6b4cu5531] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu66f2] = ACTIONS(147),
    [anon_sym_u7de8u66f2] = ACTIONS(147),
    [anon_sym_u7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5e] = ACTIONS(147),
    [anon_sym_u4f5cu8bcd] = ACTIONS(147),
    [anon_sym_u5382u724c] = ACTIONS(147),
    [anon_sym_u811au672c] = ACTIONS(147),
    [anon_sym_u63d2u56fe] = ACTIONS(147),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(147),
    [anon_sym_u51fau7248u65b9] = ACTIONS(147),
    [anon_sym_u5f55u97f3] = ACTIONS(147),
    [anon_sym_u539fu4f5c] = ACTIONS(147),
    [anon_sym_u58f0u4e50] = ACTIONS(147),
    [anon_sym_u4e50u5668] = ACTIONS(147),
    [anon_sym_u6df7u97f3] = ACTIONS(147),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(147),
  },
  [54] = {
    [anon_sym_DISC] = ACTIONS(64),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [55] = {
    [anon_sym_DISC] = ACTIONS(84),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_u300a] = ACTIONS(147),
    [aux_sym_song_title_token1] = ACTIONS(147),
    [sym__role_instrument] = ACTIONS(145),
    [anon_sym_Music] = ACTIONS(147),
    [anon_sym_music] = ACTIONS(147),
    [anon_sym_Composition] = ACTIONS(147),
    [anon_sym_composition] = ACTIONS(147),
    [anon_sym_Composer] = ACTIONS(147),
    [anon_sym_composer] = ACTIONS(147),
    [anon_sym_Compose] = ACTIONS(147),
    [anon_sym_compose] = ACTIONS(147),
    [anon_sym_Lyrics] = ACTIONS(147),
    [anon_sym_lyrics] = ACTIONS(147),
    [anon_sym_Lyricist] = ACTIONS(147),
    [anon_sym_lyricist] = ACTIONS(147),
    [anon_sym_Lyric] = ACTIONS(147),
    [anon_sym_lyric] = ACTIONS(147),
    [anon_sym_Arrangement] = ACTIONS(147),
    [anon_sym_arrangement] = ACTIONS(147),
    [anon_sym_Arranger] = ACTIONS(147),
    [anon_sym_arranger] = ACTIONS(147),
    [anon_sym_Arrange] = ACTIONS(147),
    [anon_sym_arrange] = ACTIONS(147),
    [anon_sym_Vocal] = ACTIONS(147),
    [anon_sym_vocal] = ACTIONS(147),
    [anon_sym_Performer] = ACTIONS(147),
    [anon_sym_performer] = ACTIONS(147),
    [anon_sym_Illustration] = ACTIONS(147),
    [anon_sym_illustration] = ACTIONS(147),
    [anon_sym_Illust] = ACTIONS(147),
    [anon_sym_illust] = ACTIONS(147),
    [anon_sym_Label] = ACTIONS(147),
    [anon_sym_label] = ACTIONS(147),
    [anon_sym_Circle] = ACTIONS(147),
    [anon_sym_circle] = ACTIONS(147),
    [anon_sym_Producer] = ACTIONS(147),
    [anon_sym_producer] = ACTIONS(147),
    [anon_sym_Recording] = ACTIONS(147),
    [anon_sym_recording] = ACTIONS(147),
    [anon_sym_GuestVocal] = ACTIONS(147),
    [anon_sym_Guestvocal] = ACTIONS(147),
    [anon_sym_guestvocal] = ACTIONS(147),
    [anon_sym_Chorus] = ACTIONS(147),
    [anon_sym_chorus] = ACTIONS(147),
    [anon_sym_Mixing] = ACTIONS(147),
    [anon_sym_mixing] = ACTIONS(147),
    [anon_sym_Mastering] = ACTIONS(147),
    [anon_sym_mastering] = ACTIONS(147),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(147),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(147),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(147),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(147),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(147),
    [anon_sym_u827au672fu5bb6] = ACTIONS(147),
    [anon_sym_u6b4cu5531] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu66f2] = ACTIONS(147),
    [anon_sym_u7de8u66f2] = ACTIONS(147),
    [anon_sym_u7f16u66f2] = ACTIONS(147),
    [anon_sym_u4f5cu8a5e] = ACTIONS(147),
    [anon_sym_u4f5cu8bcd] = ACTIONS(147),
    [anon_sym_u5382u724c] = ACTIONS(147),
    [anon_sym_u811au672c] = ACTIONS(147),
    [anon_sym_u63d2u56fe] = ACTIONS(147),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(147),
    [anon_sym_u51fau7248u65b9] = ACTIONS(147),
    [anon_sym_u5f55u97f3] = ACTIONS(147),
    [anon_sym_u539fu4f5c] = ACTIONS(147),
    [anon_sym_u58f0u4e50] = ACTIONS(147),
    [anon_sym_u4e50u5668] = ACTIONS(147),
    [anon_sym_u6df7u97f3] = ACTIONS(147),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(147),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_u300a] = ACTIONS(157),
    [aux_sym_song_title_token1] = ACTIONS(157),
    [sym__role_instrument] = ACTIONS(155),
    [anon_sym_Music] = ACTIONS(157),
    [anon_sym_music] = ACTIONS(157),
    [anon_sym_Composition] = ACTIONS(157),
    [anon_sym_composition] = ACTIONS(157),
    [anon_sym_Composer] = ACTIONS(157),
    [anon_sym_composer] = ACTIONS(157),
    [anon_sym_Compose] = ACTIONS(157),
    [anon_sym_compose] = ACTIONS(157),
    [anon_sym_Lyrics] = ACTIONS(157),
    [anon_sym_lyrics] = ACTIONS(157),
    [anon_sym_Lyricist] = ACTIONS(157),
    [anon_sym_lyricist] = ACTIONS(157),
    [anon_sym_Lyric] = ACTIONS(157),
    [anon_sym_lyric] = ACTIONS(157),
    [anon_sym_Arrangement] = ACTIONS(157),
    [anon_sym_arrangement] = ACTIONS(157),
    [anon_sym_Arranger] = ACTIONS(157),
    [anon_sym_arranger] = ACTIONS(157),
    [anon_sym_Arrange] = ACTIONS(157),
    [anon_sym_arrange] = ACTIONS(157),
    [anon_sym_Vocal] = ACTIONS(157),
    [anon_sym_vocal] = ACTIONS(157),
    [anon_sym_Performer] = ACTIONS(157),
    [anon_sym_performer] = ACTIONS(157),
    [anon_sym_Illustration] = ACTIONS(157),
    [anon_sym_illustration] = ACTIONS(157),
    [anon_sym_Illust] = ACTIONS(157),
    [anon_sym_illust] = ACTIONS(157),
    [anon_sym_Label] = ACTIONS(157),
    [anon_sym_label] = ACTIONS(157),
    [anon_sym_Circle] = ACTIONS(157),
    [anon_sym_circle] = ACTIONS(157),
    [anon_sym_Producer] = ACTIONS(157),
    [anon_sym_producer] = ACTIONS(157),
    [anon_sym_Recording] = ACTIONS(157),
    [anon_sym_recording] = ACTIONS(157),
    [anon_sym_GuestVocal] = ACTIONS(157),
    [anon_sym_Guestvocal] = ACTIONS(157),
    [anon_sym_guestvocal] = ACTIONS(157),
    [anon_sym_Chorus] = ACTIONS(157),
    [anon_sym_chorus] = ACTIONS(157),
    [anon_sym_Mixing] = ACTIONS(157),
    [anon_sym_mixing] = ACTIONS(157),
    [anon_sym_Mastering] = ACTIONS(157),
    [anon_sym_mastering] = ACTIONS(157),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(157),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(157),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(157),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(157),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(157),
    [anon_sym_u827au672fu5bb6] = ACTIONS(157),
    [anon_sym_u6b4cu5531] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu66f2] = ACTIONS(157),
    [anon_sym_u7de8u66f2] = ACTIONS(157),
    [anon_sym_u7f16u66f2] = ACTIONS(157),
    [anon_sym_u4f5cu8a5e] = ACTIONS(157),
    [anon_sym_u4f5cu8bcd] = ACTIONS(157),
    [anon_sym_u5382u724c] = ACTIONS(157),
    [anon_sym_u811au672c] = ACTIONS(157),
    [anon_sym_u63d2u56fe] = ACTIONS(157),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(157),
    [anon_sym_u51fau7248u65b9] = ACTIONS(157),
    [anon_sym_u5f55u97f3] = ACTIONS(157),
    [anon_sym_u539fu4f5c] = ACTIONS(157),
    [anon_sym_u58f0u4e50] = ACTIONS(157),
    [anon_sym_u4e50u5668] = ACTIONS(157),
    [anon_sym_u6df7u97f3] = ACTIONS(157),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(157),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_u300a] = ACTIONS(64),
    [aux_sym_song_title_token1] = ACTIONS(64),
    [sym__role_instrument] = ACTIONS(62),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(64),
    [anon_sym_u6b4cu5531] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu66f2] = ACTIONS(64),
    [anon_sym_u7de8u66f2] = ACTIONS(64),
    [anon_sym_u7f16u66f2] = ACTIONS(64),
    [anon_sym_u4f5cu8a5e] = ACTIONS(64),
    [anon_sym_u4f5cu8bcd] = ACTIONS(64),
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
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_u300a] = ACTIONS(84),
    [aux_sym_song_title_token1] = ACTIONS(84),
    [sym__role_instrument] = ACTIONS(82),
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
    [anon_sym_GuestVocal] = ACTIONS(84),
    [anon_sym_Guestvocal] = ACTIONS(84),
    [anon_sym_guestvocal] = ACTIONS(84),
    [anon_sym_Chorus] = ACTIONS(84),
    [anon_sym_chorus] = ACTIONS(84),
    [anon_sym_Mixing] = ACTIONS(84),
    [anon_sym_mixing] = ACTIONS(84),
    [anon_sym_Mastering] = ACTIONS(84),
    [anon_sym_mastering] = ACTIONS(84),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(84),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(84),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(84),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(84),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(84),
    [anon_sym_u827au672fu5bb6] = ACTIONS(84),
    [anon_sym_u6b4cu5531] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu66f2] = ACTIONS(84),
    [anon_sym_u7de8u66f2] = ACTIONS(84),
    [anon_sym_u7f16u66f2] = ACTIONS(84),
    [anon_sym_u4f5cu8a5e] = ACTIONS(84),
    [anon_sym_u4f5cu8bcd] = ACTIONS(84),
    [anon_sym_u5382u724c] = ACTIONS(84),
    [anon_sym_u811au672c] = ACTIONS(84),
    [anon_sym_u63d2u56fe] = ACTIONS(84),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(84),
    [anon_sym_u51fau7248u65b9] = ACTIONS(84),
    [anon_sym_u5f55u97f3] = ACTIONS(84),
    [anon_sym_u539fu4f5c] = ACTIONS(84),
    [anon_sym_u58f0u4e50] = ACTIONS(84),
    [anon_sym_u4e50u5668] = ACTIONS(84),
    [anon_sym_u6df7u97f3] = ACTIONS(84),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(84),
  },
  [60] = {
    [anon_sym_u300a] = ACTIONS(117),
    [sym_creator_name] = ACTIONS(117),
    [sym__role_instrument] = ACTIONS(161),
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
    [anon_sym_GuestVocal] = ACTIONS(117),
    [anon_sym_Guestvocal] = ACTIONS(117),
    [anon_sym_guestvocal] = ACTIONS(117),
    [anon_sym_Chorus] = ACTIONS(117),
    [anon_sym_chorus] = ACTIONS(117),
    [anon_sym_Mixing] = ACTIONS(117),
    [anon_sym_mixing] = ACTIONS(117),
    [anon_sym_Mastering] = ACTIONS(117),
    [anon_sym_mastering] = ACTIONS(117),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(117),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(117),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(117),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(117),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(117),
    [anon_sym_u827au672fu5bb6] = ACTIONS(117),
    [anon_sym_u6b4cu5531] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(117),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu66f2] = ACTIONS(117),
    [anon_sym_u7de8u66f2] = ACTIONS(117),
    [anon_sym_u7f16u66f2] = ACTIONS(117),
    [anon_sym_u4f5cu8a5e] = ACTIONS(117),
    [anon_sym_u4f5cu8bcd] = ACTIONS(117),
    [anon_sym_u5382u724c] = ACTIONS(117),
    [anon_sym_u811au672c] = ACTIONS(117),
    [anon_sym_u63d2u56fe] = ACTIONS(117),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(117),
    [anon_sym_u51fau7248u65b9] = ACTIONS(117),
    [anon_sym_u5f55u97f3] = ACTIONS(117),
    [anon_sym_u539fu4f5c] = ACTIONS(117),
    [anon_sym_u58f0u4e50] = ACTIONS(117),
    [anon_sym_u4e50u5668] = ACTIONS(117),
    [anon_sym_u6df7u97f3] = ACTIONS(117),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(117),
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
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(30), 1,
      sym__quotable_song_title,
    STATE(66), 2,
      aux_sym__disc,
      sym_song,
    STATE(70), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_DISC,
    ACTIONS(167), 1,
      anon_sym_u300a,
    ACTIONS(170), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(14), 1,
      sym__quotable_song_title,
    STATE(16), 1,
      sym_song_title,
    STATE(62), 2,
      aux_sym__disc,
      sym_song,
  [59] = 9,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_DISC,
    ACTIONS(177), 1,
      anon_sym_u300a,
    ACTIONS(179), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(14), 1,
      sym__quotable_song_title,
    STATE(16), 1,
      sym_song_title,
    STATE(62), 2,
      aux_sym__disc,
      sym_song,
  [88] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(30), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [114] = 8,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_u300a,
    ACTIONS(186), 1,
      aux_sym_song_title_token1,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(30), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [140] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym_song_title,
    STATE(30), 1,
      sym__quotable_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [166] = 7,
    ACTIONS(177), 1,
      anon_sym_u300a,
    ACTIONS(179), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(13), 1,
      aux_sym_song_title_repeat1,
    STATE(14), 1,
      sym__quotable_song_title,
    STATE(16), 1,
      sym_song_title,
    STATE(63), 2,
      aux_sym__disc,
      sym_song,
  [189] = 3,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [200] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [209] = 3,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [220] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [229] = 3,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_DISC,
    STATE(72), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [240] = 3,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      sym__sep,
    STATE(84), 1,
      aux_sym_credit_field_repeat2,
  [250] = 3,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_credit_field_repeat2,
  [260] = 3,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_credit_field_repeat2,
  [270] = 3,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_credit_field_repeat2,
  [280] = 3,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 1,
      sym__sep,
    STATE(74), 1,
      aux_sym_credit_field_repeat2,
  [290] = 3,
    ACTIONS(41), 1,
      anon_sym_u300b,
    ACTIONS(223), 1,
      aux_sym_song_title_token1,
    STATE(78), 1,
      aux_sym_song_title_repeat1,
  [300] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [308] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [316] = 3,
    ACTIONS(226), 1,
      aux_sym_song_title_token1,
    STATE(83), 1,
      aux_sym_song_title_repeat1,
    STATE(94), 1,
      sym_song_title,
  [326] = 3,
    ACTIONS(226), 1,
      aux_sym_song_title_token1,
    STATE(83), 1,
      aux_sym_song_title_repeat1,
    STATE(98), 1,
      sym_song_title,
  [336] = 3,
    ACTIONS(48), 1,
      anon_sym_u300b,
    ACTIONS(228), 1,
      aux_sym_song_title_token1,
    STATE(78), 1,
      aux_sym_song_title_repeat1,
  [346] = 3,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_credit_field_repeat2,
  [356] = 3,
    ACTIONS(97), 1,
      anon_sym_u300a,
    ACTIONS(234), 1,
      sym_creator_name,
    STATE(89), 1,
      sym__quotable_creator_name,
  [366] = 3,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 1,
      sym__sep,
    STATE(75), 1,
      aux_sym_credit_field_repeat2,
  [376] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      sym__sep,
  [383] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      sym__sep,
  [390] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      sym__sep,
  [397] = 1,
    ACTIONS(252), 1,
      anon_sym_u300b,
  [401] = 1,
    ACTIONS(254), 1,
      sym__sep,
  [405] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [409] = 1,
    ACTIONS(258), 1,
      sym__sep,
  [413] = 1,
    ACTIONS(260), 1,
      anon_sym_u300b,
  [417] = 1,
    ACTIONS(262), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [421] = 1,
    ACTIONS(264), 1,
      sym__sep,
  [425] = 1,
    ACTIONS(266), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [429] = 1,
    ACTIONS(268), 1,
      anon_sym_u300b,
  [433] = 1,
    ACTIONS(270), 1,
      anon_sym_LF,
  [437] = 1,
    ACTIONS(272), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [441] = 1,
    ACTIONS(274), 1,
      aux_sym__quotable_creator_name_token1,
  [445] = 1,
    ACTIONS(276), 1,
      sym__sep,
  [449] = 1,
    ACTIONS(278), 1,
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
  [SMALL_STATE(69)] = 200,
  [SMALL_STATE(70)] = 209,
  [SMALL_STATE(71)] = 220,
  [SMALL_STATE(72)] = 229,
  [SMALL_STATE(73)] = 240,
  [SMALL_STATE(74)] = 250,
  [SMALL_STATE(75)] = 260,
  [SMALL_STATE(76)] = 270,
  [SMALL_STATE(77)] = 280,
  [SMALL_STATE(78)] = 290,
  [SMALL_STATE(79)] = 300,
  [SMALL_STATE(80)] = 308,
  [SMALL_STATE(81)] = 316,
  [SMALL_STATE(82)] = 326,
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
  [SMALL_STATE(102)] = 445,
  [SMALL_STATE(103)] = 449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 10),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 10),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 7),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 3, 0, 6),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 3, 0, 6),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 7),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 10),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 10),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(81),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(82),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 3, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 3, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 11), SHIFT_REPEAT(85),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 8),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat2, 2, 0, 9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 4),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__role, 1, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
