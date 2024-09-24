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
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 63
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

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
  aux_sym_creator_name_token1 = 10,
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
  sym_parts = 88,
  sym__sep = 89,
  sym_source_file = 90,
  sym_disc = 91,
  aux_sym__disc = 92,
  sym_song = 93,
  sym_credit_block_maybeparts = 94,
  sym_credit_field_maybeparts = 95,
  sym_credit_block = 96,
  sym_credit_field = 97,
  sym__quotable_song_title_maybecomment = 98,
  sym__quotable_song_title = 99,
  sym_song_title = 100,
  sym__quotable_creator_name_maybeparts = 101,
  sym__quotable_creator_name = 102,
  sym_creator_name = 103,
  sym_role = 104,
  sym__role = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_credit_block_maybeparts_repeat1 = 107,
  aux_sym_credit_field_maybeparts_repeat1 = 108,
  aux_sym_credit_field_maybeparts_repeat2 = 109,
  aux_sym_credit_block_repeat1 = 110,
  aux_sym_credit_field_repeat1 = 111,
  aux_sym_song_title_repeat1 = 112,
  aux_sym_creator_name_repeat1 = 113,
  alias_sym_creator_sep = 114,
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
  [aux_sym_creator_name_token1] = "creator_name_token1",
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
  [sym_parts] = "parts",
  [sym__sep] = "_sep",
  [sym_source_file] = "source_file",
  [sym_disc] = "disc",
  [aux_sym__disc] = "_disc",
  [sym_song] = "song",
  [sym_credit_block_maybeparts] = "credit_block",
  [sym_credit_field_maybeparts] = "credit_field",
  [sym_credit_block] = "credit_block",
  [sym_credit_field] = "credit_field",
  [sym__quotable_song_title_maybecomment] = "_quotable_song_title_maybecomment",
  [sym__quotable_song_title] = "_quotable_song_title",
  [sym_song_title] = "song_title",
  [sym__quotable_creator_name_maybeparts] = "_quotable_creator_name_maybeparts",
  [sym__quotable_creator_name] = "_quotable_creator_name",
  [sym_creator_name] = "creator_name",
  [sym_role] = "role",
  [sym__role] = "_role",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_credit_block_maybeparts_repeat1] = "credit_block_maybeparts_repeat1",
  [aux_sym_credit_field_maybeparts_repeat1] = "credit_field_maybeparts_repeat1",
  [aux_sym_credit_field_maybeparts_repeat2] = "credit_field_maybeparts_repeat2",
  [aux_sym_credit_block_repeat1] = "credit_block_repeat1",
  [aux_sym_credit_field_repeat1] = "credit_field_repeat1",
  [aux_sym_song_title_repeat1] = "song_title_repeat1",
  [aux_sym_creator_name_repeat1] = "creator_name_repeat1",
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
  [aux_sym_creator_name_token1] = aux_sym_creator_name_token1,
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
  [sym_parts] = sym_parts,
  [sym__sep] = sym__sep,
  [sym_source_file] = sym_source_file,
  [sym_disc] = sym_disc,
  [aux_sym__disc] = aux_sym__disc,
  [sym_song] = sym_song,
  [sym_credit_block_maybeparts] = sym_credit_block,
  [sym_credit_field_maybeparts] = sym_credit_field,
  [sym_credit_block] = sym_credit_block,
  [sym_credit_field] = sym_credit_field,
  [sym__quotable_song_title_maybecomment] = sym__quotable_song_title_maybecomment,
  [sym__quotable_song_title] = sym__quotable_song_title,
  [sym_song_title] = sym_song_title,
  [sym__quotable_creator_name_maybeparts] = sym__quotable_creator_name_maybeparts,
  [sym__quotable_creator_name] = sym__quotable_creator_name,
  [sym_creator_name] = sym_creator_name,
  [sym_role] = sym_role,
  [sym__role] = sym__role,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_credit_block_maybeparts_repeat1] = aux_sym_credit_block_maybeparts_repeat1,
  [aux_sym_credit_field_maybeparts_repeat1] = aux_sym_credit_field_maybeparts_repeat1,
  [aux_sym_credit_field_maybeparts_repeat2] = aux_sym_credit_field_maybeparts_repeat2,
  [aux_sym_credit_block_repeat1] = aux_sym_credit_block_repeat1,
  [aux_sym_credit_field_repeat1] = aux_sym_credit_field_repeat1,
  [aux_sym_song_title_repeat1] = aux_sym_song_title_repeat1,
  [aux_sym_creator_name_repeat1] = aux_sym_creator_name_repeat1,
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
  [aux_sym_creator_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_parts] = {
    .visible = true,
    .named = true,
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
  [sym_credit_block_maybeparts] = {
    .visible = true,
    .named = true,
  },
  [sym_credit_field_maybeparts] = {
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
  [sym__quotable_creator_name_maybeparts] = {
    .visible = false,
    .named = true,
  },
  [sym__quotable_creator_name] = {
    .visible = false,
    .named = true,
  },
  [sym_creator_name] = {
    .visible = true,
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
  [aux_sym_credit_block_maybeparts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credit_field_maybeparts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credit_field_maybeparts_repeat2] = {
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
  [aux_sym_song_title_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_creator_name_repeat1] = {
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
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 4},
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
    {field_creator, 0, .inherited = true},
  [5] =
    {field_creator, 0},
  [6] =
    {field_title, 1},
  [7] =
    {field_creator, 1, .inherited = true},
  [8] =
    {field_creator, 1},
  [9] =
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0},
  [11] =
    {field_creator, 1, .inherited = true},
    {field_creator, 2, .inherited = true},
    {field_creatorSeparator, 2, .inherited = true},
  [14] =
    {field_creator, 0, .inherited = true},
    {field_creator, 1, .inherited = true},
    {field_creatorSeparator, 0, .inherited = true},
    {field_creatorSeparator, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
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
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 11,
  [19] = 19,
  [20] = 15,
  [21] = 8,
  [22] = 22,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 27,
  [31] = 28,
  [32] = 32,
  [33] = 25,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 40,
  [48] = 37,
  [49] = 38,
  [50] = 50,
  [51] = 35,
  [52] = 39,
  [53] = 50,
  [54] = 42,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 45,
  [59] = 59,
  [60] = 60,
  [61] = 46,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 75,
  [86] = 86,
  [87] = 87,
  [88] = 19,
  [89] = 22,
  [90] = 84,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 77,
  [95] = 95,
  [96] = 92,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 105,
  [111] = 108,
  [112] = 103,
  [113] = 113,
  [114] = 109,
  [115] = 115,
};

static TSCharacterRange aux_sym_creator_name_token1_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x3009},
  {0x300c, 0x30fa}, {0x30fc, 0xff05}, {0xff07, 0xff0e}, {0xff10, 0xff19}, {0xff1c, 0x10ffff},
};

static TSCharacterRange sym__role_instrument_character_set_1[] = {
  {0, 0x08}, {'\n', '%'}, {'\'', '+'}, {'-', '.'}, {'0', '9'}, {';', 0x2fff}, {0x3002, 0x30fa}, {0x30fc, 0xff05},
  {0xff07, 0xff0e}, {0xff10, 0xff19}, {0xff1c, 0x10ffff},
};

static TSCharacterRange sym__sep_character_set_1[] = {
  {'\t', '\t'}, {' ', ' '}, {'&', '&'}, {',', ','}, {'/', '/'}, {':', ':'}, {0x3000, 0x3001}, {0x30fb, 0x30fb},
  {0xff06, 0xff06}, {0xff0f, 0xff0f}, {0xff1a, 0xff1b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(236);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x300b) ADVANCE(269);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(316);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(314);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x300b) ADVANCE(269);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(314);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 255,
        '(', 337,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 369,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 274,
        ' ', 274,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(332);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(331);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(9);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(463);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '(') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x300b) ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(330);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(331);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == ')') ADVANCE(461);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '(', 337,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 369,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '(', 337,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(23);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(461);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 369,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(26);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(26);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(253);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'V') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(425);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(427);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(419);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(193);
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
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 206:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 207:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 208:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 209:
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(209);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(382);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 210:
      if (lookahead == 0x30ab) ADVANCE(218);
      END_STATE();
    case 211:
      if (lookahead == 0x30b0) ADVANCE(433);
      END_STATE();
    case 212:
      if (lookahead == 0x30b8) ADVANCE(430);
      END_STATE();
    case 213:
      if (lookahead == 0x30b9) ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 0x30bf) ADVANCE(217);
      END_STATE();
    case 215:
      if (lookahead == 0x30c8) ADVANCE(431);
      END_STATE();
    case 216:
      if (lookahead == 0x30d9) ADVANCE(219);
      END_STATE();
    case 217:
      if (lookahead == 0x30ea) ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == 0x30eb) ADVANCE(429);
      END_STATE();
    case 219:
      if (lookahead == 0x30eb) ADVANCE(432);
      END_STATE();
    case 220:
      if (lookahead == 0x30f3) ADVANCE(212);
      END_STATE();
    case 221:
      if (lookahead == 0x30f3) ADVANCE(211);
      END_STATE();
    case 222:
      if (lookahead == 0x4eba) ADVANCE(452);
      END_STATE();
    case 223:
      if (lookahead == 0x4f5c) ADVANCE(460);
      END_STATE();
    case 224:
      if (lookahead == 0x5236) ADVANCE(223);
      END_STATE();
    case 225:
      if (lookahead == 0x5bb6) ADVANCE(434);
      END_STATE();
    case 226:
      if (lookahead == 0x65b9) ADVANCE(453);
      END_STATE();
    case 227:
      if (lookahead == 0x66f2) ADVANCE(442);
      END_STATE();
    case 228:
      if (lookahead == 0x66f2) ADVANCE(443);
      END_STATE();
    case 229:
      if (lookahead == 0x66f2) ADVANCE(438);
      if (lookahead == 0x7de8) ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == 0x66f2) ADVANCE(439);
      if (lookahead == 0x7f16) ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 0x66f2) ADVANCE(436);
      END_STATE();
    case 232:
      if (lookahead == 0x66f2) ADVANCE(437);
      END_STATE();
    case 233:
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 234:
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(383);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 236:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(236);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x300b) ADVANCE(269);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(314);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 237:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 254,
        'A', 302,
        'C', 296,
        'D', 287,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 316,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 313,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 238:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(238);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 239:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(239);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 240:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(242);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(316);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(272);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(463);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 241:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(242);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(316);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 242:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(242);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 243:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 258,
        'A', 302,
        'C', 296,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 316,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 313,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 244:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 259,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 369,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 281,
        ' ', 281,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 245:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(247);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(316);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(275);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(463);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 246:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(247);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(316);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 247:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(247);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 248:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 261,
        '/', 286,
        'A', 302,
        'C', 296,
        'D', 287,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 316,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 314,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 249:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 262,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 369,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 283,
        ' ', 283,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 250:
      if (eof) ADVANCE(252);
      ADVANCE_MAP(
        '\n', 263,
        '/', 286,
        'A', 302,
        'C', 296,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 316,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 314,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 251:
      if (eof) ADVANCE(252);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 0x300b) ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(332);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(256);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(333);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(281);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(260);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(335);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(336);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x300b) ADVANCE(269);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(314);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 254,
        'A', 302,
        'C', 296,
        'D', 287,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 317,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 313,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 255,
        '(', 337,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 274,
        ' ', 274,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(332);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'V') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead == 0x300a) ADVANCE(268);
      if (lookahead == 0x30a2) ADVANCE(308);
      if (lookahead == 0x30a4) ADVANCE(307);
      if (lookahead == 0x30dc) ADVANCE(309);
      if (lookahead == 0x30de) ADVANCE(306);
      if (lookahead == 0x30ec) ADVANCE(310);
      if (lookahead == 0x4e50) ADVANCE(317);
      if (lookahead == 0x4f5c) ADVANCE(320);
      if (lookahead == 0x51fa) ADVANCE(325);
      if (lookahead == 0x5236) ADVANCE(312);
      if (lookahead == 0x5382) ADVANCE(326);
      if (lookahead == 0x539f) ADVANCE(313);
      if (lookahead == 0x58f0) ADVANCE(311);
      if (lookahead == 0x5f55) ADVANCE(327);
      if (lookahead == 0x63d2) ADVANCE(318);
      if (lookahead == 0x6b4c) ADVANCE(315);
      if (lookahead == 0x6bcd) ADVANCE(319);
      if (lookahead == 0x6df7) ADVANCE(328);
      if (lookahead == 0x7de8) ADVANCE(321);
      if (lookahead == 0x7f16) ADVANCE(322);
      if (lookahead == 0x811a) ADVANCE(323);
      if (lookahead == 0x827a) ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == 0x300a) ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x300b) ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 258,
        'A', 302,
        'C', 296,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 317,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 313,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 259,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 281,
        ' ', 281,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 261,
        '/', 286,
        'A', 302,
        'C', 296,
        'D', 287,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 317,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 314,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 262,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x300a, 268,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 283,
        ' ', 283,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(270);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 263,
        '/', 286,
        'A', 302,
        'C', 296,
        'G', 304,
        'I', 298,
        'L', 288,
        'M', 289,
        'P', 293,
        'R', 292,
        'V', 300,
        'a', 303,
        'c', 297,
        'g', 305,
        'i', 299,
        'l', 290,
        'm', 291,
        'p', 294,
        'r', 295,
        'v', 301,
        0x300a, 268,
        0x30a2, 308,
        0x30a4, 307,
        0x30dc, 309,
        0x30de, 306,
        0x30ec, 310,
        0x4e50, 317,
        0x4f5c, 320,
        0x51fa, 325,
        0x5236, 312,
        0x5382, 326,
        0x539f, 314,
        0x58f0, 311,
        0x5f55, 327,
        0x63d2, 318,
        0x6b4c, 315,
        0x6bcd, 319,
        0x6df7, 328,
        0x7de8, 321,
        0x7f16, 322,
        0x811a, 323,
        0x827a, 324,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(264);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(214);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(213);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(220);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(210);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(216);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(456);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(222);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(455);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(455);
      if (lookahead == 0x66f2) ADVANCE(235);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5531) ADVANCE(435);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(458);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(457);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(451);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(224);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(444);
      if (lookahead == 0x7de8) ADVANCE(227);
      if (lookahead == 0x7f16) ADVANCE(228);
      if (lookahead == 0x8a5e) ADVANCE(447);
      if (lookahead == 0x8bcd) ADVANCE(448);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(445);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(446);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(450);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672f) ADVANCE(225);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(226);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(449);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(454);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(459);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 255,
        '(', 337,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 274,
        ' ', 274,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(332);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '(') ADVANCE(337);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(333);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 259,
        'A', 356,
        'C', 350,
        'D', 341,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 281,
        ' ', 281,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(334);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '\n') ADVANCE(260);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(335);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 262,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
        '\t', 283,
        ' ', 283,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(336);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '(', 337,
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(338);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '(') ADVANCE(337);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(339);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        'A', 356,
        'C', 350,
        'G', 358,
        'I', 352,
        'L', 342,
        'M', 343,
        'P', 347,
        'R', 346,
        'V', 354,
        'a', 357,
        'c', 351,
        'g', 359,
        'i', 353,
        'l', 344,
        'm', 345,
        'p', 348,
        'r', 349,
        'v', 355,
        0x30a2, 362,
        0x30a4, 361,
        0x30dc, 363,
        0x30de, 360,
        0x30ec, 364,
        0x4e50, 370,
        0x4f5c, 373,
        0x51fa, 378,
        0x5236, 366,
        0x5382, 379,
        0x539f, 367,
        0x58f0, 365,
        0x5f55, 380,
        0x63d2, 371,
        0x6b4c, 368,
        0x6bcd, 372,
        0x6df7, 381,
        0x7de8, 374,
        0x7f16, 375,
        0x811a, 376,
        0x827a, 377,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30b9) ADVANCE(214);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30e9) ADVANCE(213);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30ec) ADVANCE(220);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(210);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(216);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4e50) ADVANCE(456);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(222);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(455);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5531) ADVANCE(435);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(458);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(457);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x56fe) ADVANCE(451);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5e26) ADVANCE(224);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(444);
      if (lookahead == 0x7de8) ADVANCE(227);
      if (lookahead == 0x7f16) ADVANCE(228);
      if (lookahead == 0x8a5e) ADVANCE(447);
      if (lookahead == 0x8bcd) ADVANCE(448);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(445);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(446);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672c) ADVANCE(450);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672f) ADVANCE(225);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x7248) ADVANCE(226);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x724c) ADVANCE(449);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(454);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(459);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(382);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(331);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__role_instrument);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_u827au672fu5bb6);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(229);
      if (lookahead == 0x66f2) ADVANCE(440);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(230);
      if (lookahead == 0x66f2) ADVANCE(441);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_parts);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 462,
        ' ', 462,
        '&', 463,
        ',', 463,
        '/', 463,
        ':', 463,
        0x3000, 463,
        0x3001, 463,
        0x30fb, 463,
        0xff06, 463,
        0xff0f, 463,
        0xff1a, 463,
        0xff1b, 463,
      );
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 463,
        ' ', 463,
        '&', 463,
        ',', 463,
        '/', 463,
        ':', 463,
        0x3000, 463,
        0x3001, 463,
        0x30fb, 463,
        0xff06, 463,
        0xff0f, 463,
        0xff1a, 463,
        0xff1b, 463,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 241},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 241},
  [9] = {.lex_state = 246},
  [10] = {.lex_state = 244},
  [11] = {.lex_state = 241},
  [12] = {.lex_state = 244},
  [13] = {.lex_state = 249},
  [14] = {.lex_state = 241},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 249},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 246},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 248},
  [23] = {.lex_state = 248},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 248},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 248},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 250},
  [30] = {.lex_state = 250},
  [31] = {.lex_state = 250},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 240},
  [35] = {.lex_state = 237},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 237},
  [38] = {.lex_state = 237},
  [39] = {.lex_state = 237},
  [40] = {.lex_state = 240},
  [41] = {.lex_state = 240},
  [42] = {.lex_state = 241},
  [43] = {.lex_state = 245},
  [44] = {.lex_state = 240},
  [45] = {.lex_state = 241},
  [46] = {.lex_state = 241},
  [47] = {.lex_state = 245},
  [48] = {.lex_state = 243},
  [49] = {.lex_state = 243},
  [50] = {.lex_state = 241},
  [51] = {.lex_state = 243},
  [52] = {.lex_state = 243},
  [53] = {.lex_state = 246},
  [54] = {.lex_state = 246},
  [55] = {.lex_state = 241},
  [56] = {.lex_state = 241},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 246},
  [59] = {.lex_state = 241},
  [60] = {.lex_state = 241},
  [61] = {.lex_state = 246},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 238},
  [64] = {.lex_state = 238},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 239},
  [67] = {.lex_state = 239},
  [68] = {.lex_state = 239},
  [69] = {.lex_state = 239},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 209},
  [74] = {.lex_state = 251},
  [75] = {.lex_state = 238},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 238},
  [78] = {.lex_state = 251},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 251},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 239},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 251},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 251},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 251},
  [115] = {.lex_state = 10},
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
    [sym_parts] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym_disc] = STATE(74),
    [aux_sym__disc] = STATE(68),
    [sym_song] = STATE(68),
    [sym_credit_block_maybeparts] = STATE(63),
    [sym_credit_field_maybeparts] = STATE(14),
    [sym__quotable_song_title_maybecomment] = STATE(6),
    [sym__quotable_song_title] = STATE(29),
    [sym_song_title] = STATE(31),
    [sym_role] = STATE(111),
    [sym__role] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(74),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(14),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [aux_sym_song_title_repeat1] = STATE(24),
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
    [sym_credit_block] = STATE(75),
    [sym_credit_field] = STATE(8),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(8),
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
    [sym__quotable_creator_name_maybeparts] = STATE(98),
    [sym__quotable_creator_name] = STATE(87),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(72),
    [anon_sym_DISC] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_u300a] = ACTIONS(19),
    [aux_sym_song_title_token1] = ACTIONS(19),
    [aux_sym_creator_name_token1] = ACTIONS(23),
    [sym__role_instrument] = ACTIONS(25),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(19),
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
    [sym_parts] = ACTIONS(27),
  },
  [4] = {
    [sym_credit_block] = STATE(77),
    [sym_credit_field] = STATE(8),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DISC] = ACTIONS(31),
    [anon_sym_u300a] = ACTIONS(31),
    [aux_sym_song_title_token1] = ACTIONS(31),
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
    [sym__quotable_creator_name_maybeparts] = STATE(98),
    [sym__quotable_creator_name] = STATE(87),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(72),
    [anon_sym_DISC] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(33),
    [aux_sym_creator_name_token1] = ACTIONS(23),
    [sym__role_instrument] = ACTIONS(37),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(33),
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
    [sym_parts] = ACTIONS(27),
  },
  [6] = {
    [sym_credit_block] = STATE(85),
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(39),
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
  [7] = {
    [sym__quotable_creator_name_maybeparts] = STATE(91),
    [sym__quotable_creator_name] = STATE(87),
    [sym_creator_name] = STATE(81),
    [sym_role] = STATE(111),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(32),
    [aux_sym_creator_name_repeat1] = STATE(72),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_creator_name_token1] = ACTIONS(23),
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
    [sym_parts] = ACTIONS(43),
  },
  [8] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_DISC] = ACTIONS(47),
    [anon_sym_u300a] = ACTIONS(47),
    [aux_sym_song_title_token1] = ACTIONS(47),
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
  [9] = {
    [sym_credit_block] = STATE(94),
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_u300a] = ACTIONS(31),
    [aux_sym_song_title_token1] = ACTIONS(31),
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
    [sym__quotable_creator_name] = STATE(99),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DISC] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_u300a] = ACTIONS(51),
    [aux_sym_song_title_token1] = ACTIONS(51),
    [aux_sym_creator_name_token1] = ACTIONS(55),
    [sym__role_instrument] = ACTIONS(49),
    [anon_sym_Music] = ACTIONS(51),
    [anon_sym_music] = ACTIONS(51),
    [anon_sym_Composition] = ACTIONS(51),
    [anon_sym_composition] = ACTIONS(51),
    [anon_sym_Composer] = ACTIONS(51),
    [anon_sym_composer] = ACTIONS(51),
    [anon_sym_Compose] = ACTIONS(51),
    [anon_sym_compose] = ACTIONS(51),
    [anon_sym_Lyrics] = ACTIONS(51),
    [anon_sym_lyrics] = ACTIONS(51),
    [anon_sym_Lyricist] = ACTIONS(51),
    [anon_sym_lyricist] = ACTIONS(51),
    [anon_sym_Lyric] = ACTIONS(51),
    [anon_sym_lyric] = ACTIONS(51),
    [anon_sym_Arrangement] = ACTIONS(51),
    [anon_sym_arrangement] = ACTIONS(51),
    [anon_sym_Arranger] = ACTIONS(51),
    [anon_sym_arranger] = ACTIONS(51),
    [anon_sym_Arrange] = ACTIONS(51),
    [anon_sym_arrange] = ACTIONS(51),
    [anon_sym_Vocal] = ACTIONS(51),
    [anon_sym_vocal] = ACTIONS(51),
    [anon_sym_Performer] = ACTIONS(51),
    [anon_sym_performer] = ACTIONS(51),
    [anon_sym_Illustration] = ACTIONS(51),
    [anon_sym_illustration] = ACTIONS(51),
    [anon_sym_Illust] = ACTIONS(51),
    [anon_sym_illust] = ACTIONS(51),
    [anon_sym_Label] = ACTIONS(51),
    [anon_sym_label] = ACTIONS(51),
    [anon_sym_Circle] = ACTIONS(51),
    [anon_sym_circle] = ACTIONS(51),
    [anon_sym_Producer] = ACTIONS(51),
    [anon_sym_producer] = ACTIONS(51),
    [anon_sym_Recording] = ACTIONS(51),
    [anon_sym_recording] = ACTIONS(51),
    [anon_sym_GuestVocal] = ACTIONS(51),
    [anon_sym_Guestvocal] = ACTIONS(51),
    [anon_sym_guestvocal] = ACTIONS(51),
    [anon_sym_Chorus] = ACTIONS(51),
    [anon_sym_chorus] = ACTIONS(51),
    [anon_sym_Mixing] = ACTIONS(51),
    [anon_sym_mixing] = ACTIONS(51),
    [anon_sym_Mastering] = ACTIONS(51),
    [anon_sym_mastering] = ACTIONS(51),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(51),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(51),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(51),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(51),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(51),
    [anon_sym_u827au672fu5bb6] = ACTIONS(51),
    [anon_sym_u6b4cu5531] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu66f2] = ACTIONS(51),
    [anon_sym_u7de8u66f2] = ACTIONS(51),
    [anon_sym_u7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5e] = ACTIONS(51),
    [anon_sym_u4f5cu8bcd] = ACTIONS(51),
    [anon_sym_u5382u724c] = ACTIONS(51),
    [anon_sym_u811au672c] = ACTIONS(51),
    [anon_sym_u63d2u56fe] = ACTIONS(51),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(51),
    [anon_sym_u51fau7248u65b9] = ACTIONS(51),
    [anon_sym_u5f55u97f3] = ACTIONS(51),
    [anon_sym_u539fu4f5c] = ACTIONS(51),
    [anon_sym_u58f0u4e50] = ACTIONS(51),
    [anon_sym_u4e50u5668] = ACTIONS(51),
    [anon_sym_u6df7u97f3] = ACTIONS(51),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(51),
  },
  [11] = {
    [sym_credit_field] = STATE(11),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DISC] = ACTIONS(59),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
    [sym__role_instrument] = ACTIONS(61),
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
  [12] = {
    [sym__quotable_creator_name] = STATE(99),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DISC] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(55),
    [sym__role_instrument] = ACTIONS(67),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(69),
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
  },
  [13] = {
    [sym__quotable_creator_name] = STATE(99),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_u300a] = ACTIONS(51),
    [aux_sym_song_title_token1] = ACTIONS(51),
    [aux_sym_creator_name_token1] = ACTIONS(55),
    [sym__role_instrument] = ACTIONS(49),
    [anon_sym_Music] = ACTIONS(51),
    [anon_sym_music] = ACTIONS(51),
    [anon_sym_Composition] = ACTIONS(51),
    [anon_sym_composition] = ACTIONS(51),
    [anon_sym_Composer] = ACTIONS(51),
    [anon_sym_composer] = ACTIONS(51),
    [anon_sym_Compose] = ACTIONS(51),
    [anon_sym_compose] = ACTIONS(51),
    [anon_sym_Lyrics] = ACTIONS(51),
    [anon_sym_lyrics] = ACTIONS(51),
    [anon_sym_Lyricist] = ACTIONS(51),
    [anon_sym_lyricist] = ACTIONS(51),
    [anon_sym_Lyric] = ACTIONS(51),
    [anon_sym_lyric] = ACTIONS(51),
    [anon_sym_Arrangement] = ACTIONS(51),
    [anon_sym_arrangement] = ACTIONS(51),
    [anon_sym_Arranger] = ACTIONS(51),
    [anon_sym_arranger] = ACTIONS(51),
    [anon_sym_Arrange] = ACTIONS(51),
    [anon_sym_arrange] = ACTIONS(51),
    [anon_sym_Vocal] = ACTIONS(51),
    [anon_sym_vocal] = ACTIONS(51),
    [anon_sym_Performer] = ACTIONS(51),
    [anon_sym_performer] = ACTIONS(51),
    [anon_sym_Illustration] = ACTIONS(51),
    [anon_sym_illustration] = ACTIONS(51),
    [anon_sym_Illust] = ACTIONS(51),
    [anon_sym_illust] = ACTIONS(51),
    [anon_sym_Label] = ACTIONS(51),
    [anon_sym_label] = ACTIONS(51),
    [anon_sym_Circle] = ACTIONS(51),
    [anon_sym_circle] = ACTIONS(51),
    [anon_sym_Producer] = ACTIONS(51),
    [anon_sym_producer] = ACTIONS(51),
    [anon_sym_Recording] = ACTIONS(51),
    [anon_sym_recording] = ACTIONS(51),
    [anon_sym_GuestVocal] = ACTIONS(51),
    [anon_sym_Guestvocal] = ACTIONS(51),
    [anon_sym_guestvocal] = ACTIONS(51),
    [anon_sym_Chorus] = ACTIONS(51),
    [anon_sym_chorus] = ACTIONS(51),
    [anon_sym_Mixing] = ACTIONS(51),
    [anon_sym_mixing] = ACTIONS(51),
    [anon_sym_Mastering] = ACTIONS(51),
    [anon_sym_mastering] = ACTIONS(51),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(51),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(51),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(51),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(51),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(51),
    [anon_sym_u827au672fu5bb6] = ACTIONS(51),
    [anon_sym_u6b4cu5531] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu66f2] = ACTIONS(51),
    [anon_sym_u7de8u66f2] = ACTIONS(51),
    [anon_sym_u7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5e] = ACTIONS(51),
    [anon_sym_u4f5cu8bcd] = ACTIONS(51),
    [anon_sym_u5382u724c] = ACTIONS(51),
    [anon_sym_u811au672c] = ACTIONS(51),
    [anon_sym_u63d2u56fe] = ACTIONS(51),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(51),
    [anon_sym_u51fau7248u65b9] = ACTIONS(51),
    [anon_sym_u5f55u97f3] = ACTIONS(51),
    [anon_sym_u539fu4f5c] = ACTIONS(51),
    [anon_sym_u58f0u4e50] = ACTIONS(51),
    [anon_sym_u4e50u5668] = ACTIONS(51),
    [anon_sym_u6df7u97f3] = ACTIONS(51),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(51),
  },
  [14] = {
    [sym_credit_field_maybeparts] = STATE(17),
    [sym_role] = STATE(111),
    [sym__role] = STATE(101),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(17),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [anon_sym_DISC] = ACTIONS(75),
    [anon_sym_u300a] = ACTIONS(75),
    [aux_sym_song_title_token1] = ACTIONS(75),
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
  [15] = {
    [sym__quotable_creator_name] = STATE(95),
    [sym_creator_name] = STATE(81),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(36),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_creator_name_token1] = ACTIONS(55),
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
  [16] = {
    [sym__quotable_creator_name] = STATE(99),
    [sym_creator_name] = STATE(81),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(55),
    [sym__role_instrument] = ACTIONS(67),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(69),
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
  },
  [17] = {
    [sym_credit_field_maybeparts] = STATE(17),
    [sym_role] = STATE(111),
    [sym__role] = STATE(101),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(17),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [anon_sym_DISC] = ACTIONS(79),
    [anon_sym_u300a] = ACTIONS(79),
    [aux_sym_song_title_token1] = ACTIONS(79),
    [sym__role_instrument] = ACTIONS(81),
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
  [18] = {
    [sym_credit_field] = STATE(18),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
    [sym__role_instrument] = ACTIONS(61),
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
  [19] = {
    [aux_sym_song_title_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_DISC] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(89),
    [anon_sym_u300a] = ACTIONS(89),
    [aux_sym_song_title_token1] = ACTIONS(91),
    [sym__role_instrument] = ACTIONS(87),
    [anon_sym_Music] = ACTIONS(89),
    [anon_sym_music] = ACTIONS(89),
    [anon_sym_Composition] = ACTIONS(89),
    [anon_sym_composition] = ACTIONS(89),
    [anon_sym_Composer] = ACTIONS(89),
    [anon_sym_composer] = ACTIONS(89),
    [anon_sym_Compose] = ACTIONS(89),
    [anon_sym_compose] = ACTIONS(89),
    [anon_sym_Lyrics] = ACTIONS(89),
    [anon_sym_lyrics] = ACTIONS(89),
    [anon_sym_Lyricist] = ACTIONS(89),
    [anon_sym_lyricist] = ACTIONS(89),
    [anon_sym_Lyric] = ACTIONS(89),
    [anon_sym_lyric] = ACTIONS(89),
    [anon_sym_Arrangement] = ACTIONS(89),
    [anon_sym_arrangement] = ACTIONS(89),
    [anon_sym_Arranger] = ACTIONS(89),
    [anon_sym_arranger] = ACTIONS(89),
    [anon_sym_Arrange] = ACTIONS(89),
    [anon_sym_arrange] = ACTIONS(89),
    [anon_sym_Vocal] = ACTIONS(89),
    [anon_sym_vocal] = ACTIONS(89),
    [anon_sym_Performer] = ACTIONS(89),
    [anon_sym_performer] = ACTIONS(89),
    [anon_sym_Illustration] = ACTIONS(89),
    [anon_sym_illustration] = ACTIONS(89),
    [anon_sym_Illust] = ACTIONS(89),
    [anon_sym_illust] = ACTIONS(89),
    [anon_sym_Label] = ACTIONS(89),
    [anon_sym_label] = ACTIONS(89),
    [anon_sym_Circle] = ACTIONS(89),
    [anon_sym_circle] = ACTIONS(89),
    [anon_sym_Producer] = ACTIONS(89),
    [anon_sym_producer] = ACTIONS(89),
    [anon_sym_Recording] = ACTIONS(89),
    [anon_sym_recording] = ACTIONS(89),
    [anon_sym_GuestVocal] = ACTIONS(89),
    [anon_sym_Guestvocal] = ACTIONS(89),
    [anon_sym_guestvocal] = ACTIONS(89),
    [anon_sym_Chorus] = ACTIONS(89),
    [anon_sym_chorus] = ACTIONS(89),
    [anon_sym_Mixing] = ACTIONS(89),
    [anon_sym_mixing] = ACTIONS(89),
    [anon_sym_Mastering] = ACTIONS(89),
    [anon_sym_mastering] = ACTIONS(89),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(89),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(89),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(89),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(89),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(89),
    [anon_sym_u827au672fu5bb6] = ACTIONS(89),
    [anon_sym_u6b4cu5531] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu66f2] = ACTIONS(89),
    [anon_sym_u7de8u66f2] = ACTIONS(89),
    [anon_sym_u7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5e] = ACTIONS(89),
    [anon_sym_u4f5cu8bcd] = ACTIONS(89),
    [anon_sym_u5382u724c] = ACTIONS(89),
    [anon_sym_u811au672c] = ACTIONS(89),
    [anon_sym_u63d2u56fe] = ACTIONS(89),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(89),
    [anon_sym_u51fau7248u65b9] = ACTIONS(89),
    [anon_sym_u5f55u97f3] = ACTIONS(89),
    [anon_sym_u539fu4f5c] = ACTIONS(89),
    [anon_sym_u58f0u4e50] = ACTIONS(89),
    [anon_sym_u4e50u5668] = ACTIONS(89),
    [anon_sym_u6df7u97f3] = ACTIONS(89),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(89),
  },
  [20] = {
    [sym__quotable_creator_name] = STATE(97),
    [sym_creator_name] = STATE(81),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(36),
    [aux_sym_creator_name_repeat1] = STATE(79),
    [anon_sym_u300a] = ACTIONS(41),
    [aux_sym_creator_name_token1] = ACTIONS(55),
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
  [21] = {
    [sym_credit_field] = STATE(18),
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_u300a] = ACTIONS(47),
    [aux_sym_song_title_token1] = ACTIONS(47),
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
  [22] = {
    [aux_sym_song_title_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_DISC] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_SLASH_SLASH] = ACTIONS(95),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [aux_sym_song_title_token1] = ACTIONS(97),
    [sym__role_instrument] = ACTIONS(93),
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
    [anon_sym_GuestVocal] = ACTIONS(95),
    [anon_sym_Guestvocal] = ACTIONS(95),
    [anon_sym_guestvocal] = ACTIONS(95),
    [anon_sym_Chorus] = ACTIONS(95),
    [anon_sym_chorus] = ACTIONS(95),
    [anon_sym_Mixing] = ACTIONS(95),
    [anon_sym_mixing] = ACTIONS(95),
    [anon_sym_Mastering] = ACTIONS(95),
    [anon_sym_mastering] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(95),
    [anon_sym_u827au672fu5bb6] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u4f5cu8bcd] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
    [anon_sym_u58f0u4e50] = ACTIONS(95),
    [anon_sym_u4e50u5668] = ACTIONS(95),
    [anon_sym_u6df7u97f3] = ACTIONS(95),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(95),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_DISC] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(108),
    [anon_sym_u300a] = ACTIONS(102),
    [aux_sym_song_title_token1] = ACTIONS(102),
    [sym__role_instrument] = ACTIONS(100),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(102),
    [anon_sym_u6b4cu5531] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu66f2] = ACTIONS(102),
    [anon_sym_u7de8u66f2] = ACTIONS(102),
    [anon_sym_u7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5e] = ACTIONS(102),
    [anon_sym_u4f5cu8bcd] = ACTIONS(102),
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
  },
  [24] = {
    [aux_sym_song_title_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(89),
    [anon_sym_u300a] = ACTIONS(89),
    [aux_sym_song_title_token1] = ACTIONS(110),
    [sym__role_instrument] = ACTIONS(87),
    [anon_sym_Music] = ACTIONS(89),
    [anon_sym_music] = ACTIONS(89),
    [anon_sym_Composition] = ACTIONS(89),
    [anon_sym_composition] = ACTIONS(89),
    [anon_sym_Composer] = ACTIONS(89),
    [anon_sym_composer] = ACTIONS(89),
    [anon_sym_Compose] = ACTIONS(89),
    [anon_sym_compose] = ACTIONS(89),
    [anon_sym_Lyrics] = ACTIONS(89),
    [anon_sym_lyrics] = ACTIONS(89),
    [anon_sym_Lyricist] = ACTIONS(89),
    [anon_sym_lyricist] = ACTIONS(89),
    [anon_sym_Lyric] = ACTIONS(89),
    [anon_sym_lyric] = ACTIONS(89),
    [anon_sym_Arrangement] = ACTIONS(89),
    [anon_sym_arrangement] = ACTIONS(89),
    [anon_sym_Arranger] = ACTIONS(89),
    [anon_sym_arranger] = ACTIONS(89),
    [anon_sym_Arrange] = ACTIONS(89),
    [anon_sym_arrange] = ACTIONS(89),
    [anon_sym_Vocal] = ACTIONS(89),
    [anon_sym_vocal] = ACTIONS(89),
    [anon_sym_Performer] = ACTIONS(89),
    [anon_sym_performer] = ACTIONS(89),
    [anon_sym_Illustration] = ACTIONS(89),
    [anon_sym_illustration] = ACTIONS(89),
    [anon_sym_Illust] = ACTIONS(89),
    [anon_sym_illust] = ACTIONS(89),
    [anon_sym_Label] = ACTIONS(89),
    [anon_sym_label] = ACTIONS(89),
    [anon_sym_Circle] = ACTIONS(89),
    [anon_sym_circle] = ACTIONS(89),
    [anon_sym_Producer] = ACTIONS(89),
    [anon_sym_producer] = ACTIONS(89),
    [anon_sym_Recording] = ACTIONS(89),
    [anon_sym_recording] = ACTIONS(89),
    [anon_sym_GuestVocal] = ACTIONS(89),
    [anon_sym_Guestvocal] = ACTIONS(89),
    [anon_sym_guestvocal] = ACTIONS(89),
    [anon_sym_Chorus] = ACTIONS(89),
    [anon_sym_chorus] = ACTIONS(89),
    [anon_sym_Mixing] = ACTIONS(89),
    [anon_sym_mixing] = ACTIONS(89),
    [anon_sym_Mastering] = ACTIONS(89),
    [anon_sym_mastering] = ACTIONS(89),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(89),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(89),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(89),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(89),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(89),
    [anon_sym_u827au672fu5bb6] = ACTIONS(89),
    [anon_sym_u6b4cu5531] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(89),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu66f2] = ACTIONS(89),
    [anon_sym_u7de8u66f2] = ACTIONS(89),
    [anon_sym_u7f16u66f2] = ACTIONS(89),
    [anon_sym_u4f5cu8a5e] = ACTIONS(89),
    [anon_sym_u4f5cu8bcd] = ACTIONS(89),
    [anon_sym_u5382u724c] = ACTIONS(89),
    [anon_sym_u811au672c] = ACTIONS(89),
    [anon_sym_u63d2u56fe] = ACTIONS(89),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(89),
    [anon_sym_u51fau7248u65b9] = ACTIONS(89),
    [anon_sym_u5f55u97f3] = ACTIONS(89),
    [anon_sym_u539fu4f5c] = ACTIONS(89),
    [anon_sym_u58f0u4e50] = ACTIONS(89),
    [anon_sym_u4e50u5668] = ACTIONS(89),
    [anon_sym_u6df7u97f3] = ACTIONS(89),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(89),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_DISC] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(114),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(114),
    [anon_sym_u300a] = ACTIONS(114),
    [aux_sym_song_title_token1] = ACTIONS(114),
    [sym__role_instrument] = ACTIONS(112),
    [anon_sym_Music] = ACTIONS(114),
    [anon_sym_music] = ACTIONS(114),
    [anon_sym_Composition] = ACTIONS(114),
    [anon_sym_composition] = ACTIONS(114),
    [anon_sym_Composer] = ACTIONS(114),
    [anon_sym_composer] = ACTIONS(114),
    [anon_sym_Compose] = ACTIONS(114),
    [anon_sym_compose] = ACTIONS(114),
    [anon_sym_Lyrics] = ACTIONS(114),
    [anon_sym_lyrics] = ACTIONS(114),
    [anon_sym_Lyricist] = ACTIONS(114),
    [anon_sym_lyricist] = ACTIONS(114),
    [anon_sym_Lyric] = ACTIONS(114),
    [anon_sym_lyric] = ACTIONS(114),
    [anon_sym_Arrangement] = ACTIONS(114),
    [anon_sym_arrangement] = ACTIONS(114),
    [anon_sym_Arranger] = ACTIONS(114),
    [anon_sym_arranger] = ACTIONS(114),
    [anon_sym_Arrange] = ACTIONS(114),
    [anon_sym_arrange] = ACTIONS(114),
    [anon_sym_Vocal] = ACTIONS(114),
    [anon_sym_vocal] = ACTIONS(114),
    [anon_sym_Performer] = ACTIONS(114),
    [anon_sym_performer] = ACTIONS(114),
    [anon_sym_Illustration] = ACTIONS(114),
    [anon_sym_illustration] = ACTIONS(114),
    [anon_sym_Illust] = ACTIONS(114),
    [anon_sym_illust] = ACTIONS(114),
    [anon_sym_Label] = ACTIONS(114),
    [anon_sym_label] = ACTIONS(114),
    [anon_sym_Circle] = ACTIONS(114),
    [anon_sym_circle] = ACTIONS(114),
    [anon_sym_Producer] = ACTIONS(114),
    [anon_sym_producer] = ACTIONS(114),
    [anon_sym_Recording] = ACTIONS(114),
    [anon_sym_recording] = ACTIONS(114),
    [anon_sym_GuestVocal] = ACTIONS(114),
    [anon_sym_Guestvocal] = ACTIONS(114),
    [anon_sym_guestvocal] = ACTIONS(114),
    [anon_sym_Chorus] = ACTIONS(114),
    [anon_sym_chorus] = ACTIONS(114),
    [anon_sym_Mixing] = ACTIONS(114),
    [anon_sym_mixing] = ACTIONS(114),
    [anon_sym_Mastering] = ACTIONS(114),
    [anon_sym_mastering] = ACTIONS(114),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(114),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(114),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(114),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(114),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(114),
    [anon_sym_u827au672fu5bb6] = ACTIONS(114),
    [anon_sym_u6b4cu5531] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu66f2] = ACTIONS(114),
    [anon_sym_u7de8u66f2] = ACTIONS(114),
    [anon_sym_u7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5e] = ACTIONS(114),
    [anon_sym_u4f5cu8bcd] = ACTIONS(114),
    [anon_sym_u5382u724c] = ACTIONS(114),
    [anon_sym_u811au672c] = ACTIONS(114),
    [anon_sym_u63d2u56fe] = ACTIONS(114),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(114),
    [anon_sym_u51fau7248u65b9] = ACTIONS(114),
    [anon_sym_u5f55u97f3] = ACTIONS(114),
    [anon_sym_u539fu4f5c] = ACTIONS(114),
    [anon_sym_u58f0u4e50] = ACTIONS(114),
    [anon_sym_u4e50u5668] = ACTIONS(114),
    [anon_sym_u6df7u97f3] = ACTIONS(114),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(114),
  },
  [26] = {
    [aux_sym_song_title_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_SLASH_SLASH] = ACTIONS(95),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [aux_sym_song_title_token1] = ACTIONS(116),
    [sym__role_instrument] = ACTIONS(93),
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
    [anon_sym_GuestVocal] = ACTIONS(95),
    [anon_sym_Guestvocal] = ACTIONS(95),
    [anon_sym_guestvocal] = ACTIONS(95),
    [anon_sym_Chorus] = ACTIONS(95),
    [anon_sym_chorus] = ACTIONS(95),
    [anon_sym_Mixing] = ACTIONS(95),
    [anon_sym_mixing] = ACTIONS(95),
    [anon_sym_Mastering] = ACTIONS(95),
    [anon_sym_mastering] = ACTIONS(95),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(95),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(95),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(95),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(95),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(95),
    [anon_sym_u827au672fu5bb6] = ACTIONS(95),
    [anon_sym_u6b4cu5531] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu66f2] = ACTIONS(95),
    [anon_sym_u7de8u66f2] = ACTIONS(95),
    [anon_sym_u7f16u66f2] = ACTIONS(95),
    [anon_sym_u4f5cu8a5e] = ACTIONS(95),
    [anon_sym_u4f5cu8bcd] = ACTIONS(95),
    [anon_sym_u5382u724c] = ACTIONS(95),
    [anon_sym_u811au672c] = ACTIONS(95),
    [anon_sym_u63d2u56fe] = ACTIONS(95),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(95),
    [anon_sym_u51fau7248u65b9] = ACTIONS(95),
    [anon_sym_u5f55u97f3] = ACTIONS(95),
    [anon_sym_u539fu4f5c] = ACTIONS(95),
    [anon_sym_u58f0u4e50] = ACTIONS(95),
    [anon_sym_u4e50u5668] = ACTIONS(95),
    [anon_sym_u6df7u97f3] = ACTIONS(95),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(95),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_DISC] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(125),
    [anon_sym_u300a] = ACTIONS(121),
    [aux_sym_song_title_token1] = ACTIONS(121),
    [sym__role_instrument] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(121),
    [anon_sym_music] = ACTIONS(121),
    [anon_sym_Composition] = ACTIONS(121),
    [anon_sym_composition] = ACTIONS(121),
    [anon_sym_Composer] = ACTIONS(121),
    [anon_sym_composer] = ACTIONS(121),
    [anon_sym_Compose] = ACTIONS(121),
    [anon_sym_compose] = ACTIONS(121),
    [anon_sym_Lyrics] = ACTIONS(121),
    [anon_sym_lyrics] = ACTIONS(121),
    [anon_sym_Lyricist] = ACTIONS(121),
    [anon_sym_lyricist] = ACTIONS(121),
    [anon_sym_Lyric] = ACTIONS(121),
    [anon_sym_lyric] = ACTIONS(121),
    [anon_sym_Arrangement] = ACTIONS(121),
    [anon_sym_arrangement] = ACTIONS(121),
    [anon_sym_Arranger] = ACTIONS(121),
    [anon_sym_arranger] = ACTIONS(121),
    [anon_sym_Arrange] = ACTIONS(121),
    [anon_sym_arrange] = ACTIONS(121),
    [anon_sym_Vocal] = ACTIONS(121),
    [anon_sym_vocal] = ACTIONS(121),
    [anon_sym_Performer] = ACTIONS(121),
    [anon_sym_performer] = ACTIONS(121),
    [anon_sym_Illustration] = ACTIONS(121),
    [anon_sym_illustration] = ACTIONS(121),
    [anon_sym_Illust] = ACTIONS(121),
    [anon_sym_illust] = ACTIONS(121),
    [anon_sym_Label] = ACTIONS(121),
    [anon_sym_label] = ACTIONS(121),
    [anon_sym_Circle] = ACTIONS(121),
    [anon_sym_circle] = ACTIONS(121),
    [anon_sym_Producer] = ACTIONS(121),
    [anon_sym_producer] = ACTIONS(121),
    [anon_sym_Recording] = ACTIONS(121),
    [anon_sym_recording] = ACTIONS(121),
    [anon_sym_GuestVocal] = ACTIONS(121),
    [anon_sym_Guestvocal] = ACTIONS(121),
    [anon_sym_guestvocal] = ACTIONS(121),
    [anon_sym_Chorus] = ACTIONS(121),
    [anon_sym_chorus] = ACTIONS(121),
    [anon_sym_Mixing] = ACTIONS(121),
    [anon_sym_mixing] = ACTIONS(121),
    [anon_sym_Mastering] = ACTIONS(121),
    [anon_sym_mastering] = ACTIONS(121),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(121),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(121),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(121),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(121),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(121),
    [anon_sym_u827au672fu5bb6] = ACTIONS(121),
    [anon_sym_u6b4cu5531] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu66f2] = ACTIONS(121),
    [anon_sym_u7de8u66f2] = ACTIONS(121),
    [anon_sym_u7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5e] = ACTIONS(121),
    [anon_sym_u4f5cu8bcd] = ACTIONS(121),
    [anon_sym_u5382u724c] = ACTIONS(121),
    [anon_sym_u811au672c] = ACTIONS(121),
    [anon_sym_u63d2u56fe] = ACTIONS(121),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(121),
    [anon_sym_u51fau7248u65b9] = ACTIONS(121),
    [anon_sym_u5f55u97f3] = ACTIONS(121),
    [anon_sym_u539fu4f5c] = ACTIONS(121),
    [anon_sym_u58f0u4e50] = ACTIONS(121),
    [anon_sym_u4e50u5668] = ACTIONS(121),
    [anon_sym_u6df7u97f3] = ACTIONS(121),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(121),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_DISC] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(129),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(129),
    [anon_sym_u300a] = ACTIONS(129),
    [aux_sym_song_title_token1] = ACTIONS(129),
    [sym__role_instrument] = ACTIONS(127),
    [anon_sym_Music] = ACTIONS(129),
    [anon_sym_music] = ACTIONS(129),
    [anon_sym_Composition] = ACTIONS(129),
    [anon_sym_composition] = ACTIONS(129),
    [anon_sym_Composer] = ACTIONS(129),
    [anon_sym_composer] = ACTIONS(129),
    [anon_sym_Compose] = ACTIONS(129),
    [anon_sym_compose] = ACTIONS(129),
    [anon_sym_Lyrics] = ACTIONS(129),
    [anon_sym_lyrics] = ACTIONS(129),
    [anon_sym_Lyricist] = ACTIONS(129),
    [anon_sym_lyricist] = ACTIONS(129),
    [anon_sym_Lyric] = ACTIONS(129),
    [anon_sym_lyric] = ACTIONS(129),
    [anon_sym_Arrangement] = ACTIONS(129),
    [anon_sym_arrangement] = ACTIONS(129),
    [anon_sym_Arranger] = ACTIONS(129),
    [anon_sym_arranger] = ACTIONS(129),
    [anon_sym_Arrange] = ACTIONS(129),
    [anon_sym_arrange] = ACTIONS(129),
    [anon_sym_Vocal] = ACTIONS(129),
    [anon_sym_vocal] = ACTIONS(129),
    [anon_sym_Performer] = ACTIONS(129),
    [anon_sym_performer] = ACTIONS(129),
    [anon_sym_Illustration] = ACTIONS(129),
    [anon_sym_illustration] = ACTIONS(129),
    [anon_sym_Illust] = ACTIONS(129),
    [anon_sym_illust] = ACTIONS(129),
    [anon_sym_Label] = ACTIONS(129),
    [anon_sym_label] = ACTIONS(129),
    [anon_sym_Circle] = ACTIONS(129),
    [anon_sym_circle] = ACTIONS(129),
    [anon_sym_Producer] = ACTIONS(129),
    [anon_sym_producer] = ACTIONS(129),
    [anon_sym_Recording] = ACTIONS(129),
    [anon_sym_recording] = ACTIONS(129),
    [anon_sym_GuestVocal] = ACTIONS(129),
    [anon_sym_Guestvocal] = ACTIONS(129),
    [anon_sym_guestvocal] = ACTIONS(129),
    [anon_sym_Chorus] = ACTIONS(129),
    [anon_sym_chorus] = ACTIONS(129),
    [anon_sym_Mixing] = ACTIONS(129),
    [anon_sym_mixing] = ACTIONS(129),
    [anon_sym_Mastering] = ACTIONS(129),
    [anon_sym_mastering] = ACTIONS(129),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(129),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(129),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(129),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(129),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(129),
    [anon_sym_u827au672fu5bb6] = ACTIONS(129),
    [anon_sym_u6b4cu5531] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu66f2] = ACTIONS(129),
    [anon_sym_u7de8u66f2] = ACTIONS(129),
    [anon_sym_u7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5e] = ACTIONS(129),
    [anon_sym_u4f5cu8bcd] = ACTIONS(129),
    [anon_sym_u5382u724c] = ACTIONS(129),
    [anon_sym_u811au672c] = ACTIONS(129),
    [anon_sym_u63d2u56fe] = ACTIONS(129),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(129),
    [anon_sym_u51fau7248u65b9] = ACTIONS(129),
    [anon_sym_u5f55u97f3] = ACTIONS(129),
    [anon_sym_u539fu4f5c] = ACTIONS(129),
    [anon_sym_u58f0u4e50] = ACTIONS(129),
    [anon_sym_u4e50u5668] = ACTIONS(129),
    [anon_sym_u6df7u97f3] = ACTIONS(129),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(129),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_SLASH_SLASH] = ACTIONS(133),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(135),
    [anon_sym_u300a] = ACTIONS(102),
    [aux_sym_song_title_token1] = ACTIONS(102),
    [sym__role_instrument] = ACTIONS(100),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(102),
    [anon_sym_u6b4cu5531] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu66f2] = ACTIONS(102),
    [anon_sym_u7de8u66f2] = ACTIONS(102),
    [anon_sym_u7f16u66f2] = ACTIONS(102),
    [anon_sym_u4f5cu8a5e] = ACTIONS(102),
    [anon_sym_u4f5cu8bcd] = ACTIONS(102),
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
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(137),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(121),
    [aux_sym_song_title_token1] = ACTIONS(121),
    [sym__role_instrument] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(121),
    [anon_sym_music] = ACTIONS(121),
    [anon_sym_Composition] = ACTIONS(121),
    [anon_sym_composition] = ACTIONS(121),
    [anon_sym_Composer] = ACTIONS(121),
    [anon_sym_composer] = ACTIONS(121),
    [anon_sym_Compose] = ACTIONS(121),
    [anon_sym_compose] = ACTIONS(121),
    [anon_sym_Lyrics] = ACTIONS(121),
    [anon_sym_lyrics] = ACTIONS(121),
    [anon_sym_Lyricist] = ACTIONS(121),
    [anon_sym_lyricist] = ACTIONS(121),
    [anon_sym_Lyric] = ACTIONS(121),
    [anon_sym_lyric] = ACTIONS(121),
    [anon_sym_Arrangement] = ACTIONS(121),
    [anon_sym_arrangement] = ACTIONS(121),
    [anon_sym_Arranger] = ACTIONS(121),
    [anon_sym_arranger] = ACTIONS(121),
    [anon_sym_Arrange] = ACTIONS(121),
    [anon_sym_arrange] = ACTIONS(121),
    [anon_sym_Vocal] = ACTIONS(121),
    [anon_sym_vocal] = ACTIONS(121),
    [anon_sym_Performer] = ACTIONS(121),
    [anon_sym_performer] = ACTIONS(121),
    [anon_sym_Illustration] = ACTIONS(121),
    [anon_sym_illustration] = ACTIONS(121),
    [anon_sym_Illust] = ACTIONS(121),
    [anon_sym_illust] = ACTIONS(121),
    [anon_sym_Label] = ACTIONS(121),
    [anon_sym_label] = ACTIONS(121),
    [anon_sym_Circle] = ACTIONS(121),
    [anon_sym_circle] = ACTIONS(121),
    [anon_sym_Producer] = ACTIONS(121),
    [anon_sym_producer] = ACTIONS(121),
    [anon_sym_Recording] = ACTIONS(121),
    [anon_sym_recording] = ACTIONS(121),
    [anon_sym_GuestVocal] = ACTIONS(121),
    [anon_sym_Guestvocal] = ACTIONS(121),
    [anon_sym_guestvocal] = ACTIONS(121),
    [anon_sym_Chorus] = ACTIONS(121),
    [anon_sym_chorus] = ACTIONS(121),
    [anon_sym_Mixing] = ACTIONS(121),
    [anon_sym_mixing] = ACTIONS(121),
    [anon_sym_Mastering] = ACTIONS(121),
    [anon_sym_mastering] = ACTIONS(121),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(121),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(121),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(121),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(121),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(121),
    [anon_sym_u827au672fu5bb6] = ACTIONS(121),
    [anon_sym_u6b4cu5531] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu66f2] = ACTIONS(121),
    [anon_sym_u7de8u66f2] = ACTIONS(121),
    [anon_sym_u7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5e] = ACTIONS(121),
    [anon_sym_u4f5cu8bcd] = ACTIONS(121),
    [anon_sym_u5382u724c] = ACTIONS(121),
    [anon_sym_u811au672c] = ACTIONS(121),
    [anon_sym_u63d2u56fe] = ACTIONS(121),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(121),
    [anon_sym_u51fau7248u65b9] = ACTIONS(121),
    [anon_sym_u5f55u97f3] = ACTIONS(121),
    [anon_sym_u539fu4f5c] = ACTIONS(121),
    [anon_sym_u58f0u4e50] = ACTIONS(121),
    [anon_sym_u4e50u5668] = ACTIONS(121),
    [anon_sym_u6df7u97f3] = ACTIONS(121),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(121),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(129),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(129),
    [anon_sym_u300a] = ACTIONS(129),
    [aux_sym_song_title_token1] = ACTIONS(129),
    [sym__role_instrument] = ACTIONS(127),
    [anon_sym_Music] = ACTIONS(129),
    [anon_sym_music] = ACTIONS(129),
    [anon_sym_Composition] = ACTIONS(129),
    [anon_sym_composition] = ACTIONS(129),
    [anon_sym_Composer] = ACTIONS(129),
    [anon_sym_composer] = ACTIONS(129),
    [anon_sym_Compose] = ACTIONS(129),
    [anon_sym_compose] = ACTIONS(129),
    [anon_sym_Lyrics] = ACTIONS(129),
    [anon_sym_lyrics] = ACTIONS(129),
    [anon_sym_Lyricist] = ACTIONS(129),
    [anon_sym_lyricist] = ACTIONS(129),
    [anon_sym_Lyric] = ACTIONS(129),
    [anon_sym_lyric] = ACTIONS(129),
    [anon_sym_Arrangement] = ACTIONS(129),
    [anon_sym_arrangement] = ACTIONS(129),
    [anon_sym_Arranger] = ACTIONS(129),
    [anon_sym_arranger] = ACTIONS(129),
    [anon_sym_Arrange] = ACTIONS(129),
    [anon_sym_arrange] = ACTIONS(129),
    [anon_sym_Vocal] = ACTIONS(129),
    [anon_sym_vocal] = ACTIONS(129),
    [anon_sym_Performer] = ACTIONS(129),
    [anon_sym_performer] = ACTIONS(129),
    [anon_sym_Illustration] = ACTIONS(129),
    [anon_sym_illustration] = ACTIONS(129),
    [anon_sym_Illust] = ACTIONS(129),
    [anon_sym_illust] = ACTIONS(129),
    [anon_sym_Label] = ACTIONS(129),
    [anon_sym_label] = ACTIONS(129),
    [anon_sym_Circle] = ACTIONS(129),
    [anon_sym_circle] = ACTIONS(129),
    [anon_sym_Producer] = ACTIONS(129),
    [anon_sym_producer] = ACTIONS(129),
    [anon_sym_Recording] = ACTIONS(129),
    [anon_sym_recording] = ACTIONS(129),
    [anon_sym_GuestVocal] = ACTIONS(129),
    [anon_sym_Guestvocal] = ACTIONS(129),
    [anon_sym_guestvocal] = ACTIONS(129),
    [anon_sym_Chorus] = ACTIONS(129),
    [anon_sym_chorus] = ACTIONS(129),
    [anon_sym_Mixing] = ACTIONS(129),
    [anon_sym_mixing] = ACTIONS(129),
    [anon_sym_Mastering] = ACTIONS(129),
    [anon_sym_mastering] = ACTIONS(129),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(129),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(129),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(129),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(129),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(129),
    [anon_sym_u827au672fu5bb6] = ACTIONS(129),
    [anon_sym_u6b4cu5531] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(129),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu66f2] = ACTIONS(129),
    [anon_sym_u7de8u66f2] = ACTIONS(129),
    [anon_sym_u7f16u66f2] = ACTIONS(129),
    [anon_sym_u4f5cu8a5e] = ACTIONS(129),
    [anon_sym_u4f5cu8bcd] = ACTIONS(129),
    [anon_sym_u5382u724c] = ACTIONS(129),
    [anon_sym_u811au672c] = ACTIONS(129),
    [anon_sym_u63d2u56fe] = ACTIONS(129),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(129),
    [anon_sym_u51fau7248u65b9] = ACTIONS(129),
    [anon_sym_u5f55u97f3] = ACTIONS(129),
    [anon_sym_u539fu4f5c] = ACTIONS(129),
    [anon_sym_u58f0u4e50] = ACTIONS(129),
    [anon_sym_u4e50u5668] = ACTIONS(129),
    [anon_sym_u6df7u97f3] = ACTIONS(129),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(129),
  },
  [32] = {
    [sym_role] = STATE(111),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(32),
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_creator_name_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(143),
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
    [anon_sym_GuestVocal] = ACTIONS(146),
    [anon_sym_Guestvocal] = ACTIONS(146),
    [anon_sym_guestvocal] = ACTIONS(146),
    [anon_sym_Chorus] = ACTIONS(146),
    [anon_sym_chorus] = ACTIONS(146),
    [anon_sym_Mixing] = ACTIONS(146),
    [anon_sym_mixing] = ACTIONS(146),
    [anon_sym_Mastering] = ACTIONS(146),
    [anon_sym_mastering] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(146),
    [anon_sym_u827au672fu5bb6] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u4f5cu8bcd] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [anon_sym_u58f0u4e50] = ACTIONS(146),
    [anon_sym_u4e50u5668] = ACTIONS(146),
    [anon_sym_u6df7u97f3] = ACTIONS(146),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(146),
    [sym_parts] = ACTIONS(141),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(114),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(114),
    [anon_sym_u300a] = ACTIONS(114),
    [aux_sym_song_title_token1] = ACTIONS(114),
    [sym__role_instrument] = ACTIONS(112),
    [anon_sym_Music] = ACTIONS(114),
    [anon_sym_music] = ACTIONS(114),
    [anon_sym_Composition] = ACTIONS(114),
    [anon_sym_composition] = ACTIONS(114),
    [anon_sym_Composer] = ACTIONS(114),
    [anon_sym_composer] = ACTIONS(114),
    [anon_sym_Compose] = ACTIONS(114),
    [anon_sym_compose] = ACTIONS(114),
    [anon_sym_Lyrics] = ACTIONS(114),
    [anon_sym_lyrics] = ACTIONS(114),
    [anon_sym_Lyricist] = ACTIONS(114),
    [anon_sym_lyricist] = ACTIONS(114),
    [anon_sym_Lyric] = ACTIONS(114),
    [anon_sym_lyric] = ACTIONS(114),
    [anon_sym_Arrangement] = ACTIONS(114),
    [anon_sym_arrangement] = ACTIONS(114),
    [anon_sym_Arranger] = ACTIONS(114),
    [anon_sym_arranger] = ACTIONS(114),
    [anon_sym_Arrange] = ACTIONS(114),
    [anon_sym_arrange] = ACTIONS(114),
    [anon_sym_Vocal] = ACTIONS(114),
    [anon_sym_vocal] = ACTIONS(114),
    [anon_sym_Performer] = ACTIONS(114),
    [anon_sym_performer] = ACTIONS(114),
    [anon_sym_Illustration] = ACTIONS(114),
    [anon_sym_illustration] = ACTIONS(114),
    [anon_sym_Illust] = ACTIONS(114),
    [anon_sym_illust] = ACTIONS(114),
    [anon_sym_Label] = ACTIONS(114),
    [anon_sym_label] = ACTIONS(114),
    [anon_sym_Circle] = ACTIONS(114),
    [anon_sym_circle] = ACTIONS(114),
    [anon_sym_Producer] = ACTIONS(114),
    [anon_sym_producer] = ACTIONS(114),
    [anon_sym_Recording] = ACTIONS(114),
    [anon_sym_recording] = ACTIONS(114),
    [anon_sym_GuestVocal] = ACTIONS(114),
    [anon_sym_Guestvocal] = ACTIONS(114),
    [anon_sym_guestvocal] = ACTIONS(114),
    [anon_sym_Chorus] = ACTIONS(114),
    [anon_sym_chorus] = ACTIONS(114),
    [anon_sym_Mixing] = ACTIONS(114),
    [anon_sym_mixing] = ACTIONS(114),
    [anon_sym_Mastering] = ACTIONS(114),
    [anon_sym_mastering] = ACTIONS(114),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(114),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(114),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(114),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(114),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(114),
    [anon_sym_u827au672fu5bb6] = ACTIONS(114),
    [anon_sym_u6b4cu5531] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(114),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu66f2] = ACTIONS(114),
    [anon_sym_u7de8u66f2] = ACTIONS(114),
    [anon_sym_u7f16u66f2] = ACTIONS(114),
    [anon_sym_u4f5cu8a5e] = ACTIONS(114),
    [anon_sym_u4f5cu8bcd] = ACTIONS(114),
    [anon_sym_u5382u724c] = ACTIONS(114),
    [anon_sym_u811au672c] = ACTIONS(114),
    [anon_sym_u63d2u56fe] = ACTIONS(114),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(114),
    [anon_sym_u51fau7248u65b9] = ACTIONS(114),
    [anon_sym_u5f55u97f3] = ACTIONS(114),
    [anon_sym_u539fu4f5c] = ACTIONS(114),
    [anon_sym_u58f0u4e50] = ACTIONS(114),
    [anon_sym_u4e50u5668] = ACTIONS(114),
    [anon_sym_u6df7u97f3] = ACTIONS(114),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(114),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_DISC] = ACTIONS(151),
    [anon_sym_u300a] = ACTIONS(151),
    [aux_sym_song_title_token1] = ACTIONS(151),
    [sym__role_instrument] = ACTIONS(149),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(151),
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
    [sym__sep] = ACTIONS(153),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_DISC] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_u300a] = ACTIONS(121),
    [aux_sym_song_title_token1] = ACTIONS(121),
    [sym__role_instrument] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(121),
    [anon_sym_music] = ACTIONS(121),
    [anon_sym_Composition] = ACTIONS(121),
    [anon_sym_composition] = ACTIONS(121),
    [anon_sym_Composer] = ACTIONS(121),
    [anon_sym_composer] = ACTIONS(121),
    [anon_sym_Compose] = ACTIONS(121),
    [anon_sym_compose] = ACTIONS(121),
    [anon_sym_Lyrics] = ACTIONS(121),
    [anon_sym_lyrics] = ACTIONS(121),
    [anon_sym_Lyricist] = ACTIONS(121),
    [anon_sym_lyricist] = ACTIONS(121),
    [anon_sym_Lyric] = ACTIONS(121),
    [anon_sym_lyric] = ACTIONS(121),
    [anon_sym_Arrangement] = ACTIONS(121),
    [anon_sym_arrangement] = ACTIONS(121),
    [anon_sym_Arranger] = ACTIONS(121),
    [anon_sym_arranger] = ACTIONS(121),
    [anon_sym_Arrange] = ACTIONS(121),
    [anon_sym_arrange] = ACTIONS(121),
    [anon_sym_Vocal] = ACTIONS(121),
    [anon_sym_vocal] = ACTIONS(121),
    [anon_sym_Performer] = ACTIONS(121),
    [anon_sym_performer] = ACTIONS(121),
    [anon_sym_Illustration] = ACTIONS(121),
    [anon_sym_illustration] = ACTIONS(121),
    [anon_sym_Illust] = ACTIONS(121),
    [anon_sym_illust] = ACTIONS(121),
    [anon_sym_Label] = ACTIONS(121),
    [anon_sym_label] = ACTIONS(121),
    [anon_sym_Circle] = ACTIONS(121),
    [anon_sym_circle] = ACTIONS(121),
    [anon_sym_Producer] = ACTIONS(121),
    [anon_sym_producer] = ACTIONS(121),
    [anon_sym_Recording] = ACTIONS(121),
    [anon_sym_recording] = ACTIONS(121),
    [anon_sym_GuestVocal] = ACTIONS(121),
    [anon_sym_Guestvocal] = ACTIONS(121),
    [anon_sym_guestvocal] = ACTIONS(121),
    [anon_sym_Chorus] = ACTIONS(121),
    [anon_sym_chorus] = ACTIONS(121),
    [anon_sym_Mixing] = ACTIONS(121),
    [anon_sym_mixing] = ACTIONS(121),
    [anon_sym_Mastering] = ACTIONS(121),
    [anon_sym_mastering] = ACTIONS(121),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(121),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(121),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(121),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(121),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(121),
    [anon_sym_u827au672fu5bb6] = ACTIONS(121),
    [anon_sym_u6b4cu5531] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu66f2] = ACTIONS(121),
    [anon_sym_u7de8u66f2] = ACTIONS(121),
    [anon_sym_u7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5e] = ACTIONS(121),
    [anon_sym_u4f5cu8bcd] = ACTIONS(121),
    [anon_sym_u5382u724c] = ACTIONS(121),
    [anon_sym_u811au672c] = ACTIONS(121),
    [anon_sym_u63d2u56fe] = ACTIONS(121),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(121),
    [anon_sym_u51fau7248u65b9] = ACTIONS(121),
    [anon_sym_u5f55u97f3] = ACTIONS(121),
    [anon_sym_u539fu4f5c] = ACTIONS(121),
    [anon_sym_u58f0u4e50] = ACTIONS(121),
    [anon_sym_u4e50u5668] = ACTIONS(121),
    [anon_sym_u6df7u97f3] = ACTIONS(121),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(121),
  },
  [36] = {
    [sym_role] = STATE(108),
    [sym__role] = STATE(101),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(36),
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_creator_name_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(143),
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
    [anon_sym_GuestVocal] = ACTIONS(146),
    [anon_sym_Guestvocal] = ACTIONS(146),
    [anon_sym_guestvocal] = ACTIONS(146),
    [anon_sym_Chorus] = ACTIONS(146),
    [anon_sym_chorus] = ACTIONS(146),
    [anon_sym_Mixing] = ACTIONS(146),
    [anon_sym_mixing] = ACTIONS(146),
    [anon_sym_Mastering] = ACTIONS(146),
    [anon_sym_mastering] = ACTIONS(146),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(146),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(146),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(146),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(146),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(146),
    [anon_sym_u827au672fu5bb6] = ACTIONS(146),
    [anon_sym_u6b4cu5531] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu66f2] = ACTIONS(146),
    [anon_sym_u7de8u66f2] = ACTIONS(146),
    [anon_sym_u7f16u66f2] = ACTIONS(146),
    [anon_sym_u4f5cu8a5e] = ACTIONS(146),
    [anon_sym_u4f5cu8bcd] = ACTIONS(146),
    [anon_sym_u5382u724c] = ACTIONS(146),
    [anon_sym_u811au672c] = ACTIONS(146),
    [anon_sym_u63d2u56fe] = ACTIONS(146),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(146),
    [anon_sym_u51fau7248u65b9] = ACTIONS(146),
    [anon_sym_u5f55u97f3] = ACTIONS(146),
    [anon_sym_u539fu4f5c] = ACTIONS(146),
    [anon_sym_u58f0u4e50] = ACTIONS(146),
    [anon_sym_u4e50u5668] = ACTIONS(146),
    [anon_sym_u6df7u97f3] = ACTIONS(146),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(146),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DISC] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DISC] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_DISC] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_u300a] = ACTIONS(161),
    [aux_sym_song_title_token1] = ACTIONS(161),
    [sym__role_instrument] = ACTIONS(159),
    [anon_sym_Music] = ACTIONS(161),
    [anon_sym_music] = ACTIONS(161),
    [anon_sym_Composition] = ACTIONS(161),
    [anon_sym_composition] = ACTIONS(161),
    [anon_sym_Composer] = ACTIONS(161),
    [anon_sym_composer] = ACTIONS(161),
    [anon_sym_Compose] = ACTIONS(161),
    [anon_sym_compose] = ACTIONS(161),
    [anon_sym_Lyrics] = ACTIONS(161),
    [anon_sym_lyrics] = ACTIONS(161),
    [anon_sym_Lyricist] = ACTIONS(161),
    [anon_sym_lyricist] = ACTIONS(161),
    [anon_sym_Lyric] = ACTIONS(161),
    [anon_sym_lyric] = ACTIONS(161),
    [anon_sym_Arrangement] = ACTIONS(161),
    [anon_sym_arrangement] = ACTIONS(161),
    [anon_sym_Arranger] = ACTIONS(161),
    [anon_sym_arranger] = ACTIONS(161),
    [anon_sym_Arrange] = ACTIONS(161),
    [anon_sym_arrange] = ACTIONS(161),
    [anon_sym_Vocal] = ACTIONS(161),
    [anon_sym_vocal] = ACTIONS(161),
    [anon_sym_Performer] = ACTIONS(161),
    [anon_sym_performer] = ACTIONS(161),
    [anon_sym_Illustration] = ACTIONS(161),
    [anon_sym_illustration] = ACTIONS(161),
    [anon_sym_Illust] = ACTIONS(161),
    [anon_sym_illust] = ACTIONS(161),
    [anon_sym_Label] = ACTIONS(161),
    [anon_sym_label] = ACTIONS(161),
    [anon_sym_Circle] = ACTIONS(161),
    [anon_sym_circle] = ACTIONS(161),
    [anon_sym_Producer] = ACTIONS(161),
    [anon_sym_producer] = ACTIONS(161),
    [anon_sym_Recording] = ACTIONS(161),
    [anon_sym_recording] = ACTIONS(161),
    [anon_sym_GuestVocal] = ACTIONS(161),
    [anon_sym_Guestvocal] = ACTIONS(161),
    [anon_sym_guestvocal] = ACTIONS(161),
    [anon_sym_Chorus] = ACTIONS(161),
    [anon_sym_chorus] = ACTIONS(161),
    [anon_sym_Mixing] = ACTIONS(161),
    [anon_sym_mixing] = ACTIONS(161),
    [anon_sym_Mastering] = ACTIONS(161),
    [anon_sym_mastering] = ACTIONS(161),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(161),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(161),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(161),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(161),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(161),
    [anon_sym_u827au672fu5bb6] = ACTIONS(161),
    [anon_sym_u6b4cu5531] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu66f2] = ACTIONS(161),
    [anon_sym_u7de8u66f2] = ACTIONS(161),
    [anon_sym_u7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5e] = ACTIONS(161),
    [anon_sym_u4f5cu8bcd] = ACTIONS(161),
    [anon_sym_u5382u724c] = ACTIONS(161),
    [anon_sym_u811au672c] = ACTIONS(161),
    [anon_sym_u63d2u56fe] = ACTIONS(161),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(161),
    [anon_sym_u51fau7248u65b9] = ACTIONS(161),
    [anon_sym_u5f55u97f3] = ACTIONS(161),
    [anon_sym_u539fu4f5c] = ACTIONS(161),
    [anon_sym_u58f0u4e50] = ACTIONS(161),
    [anon_sym_u4e50u5668] = ACTIONS(161),
    [anon_sym_u6df7u97f3] = ACTIONS(161),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(161),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_DISC] = ACTIONS(165),
    [anon_sym_u300a] = ACTIONS(165),
    [aux_sym_song_title_token1] = ACTIONS(165),
    [sym__role_instrument] = ACTIONS(163),
    [anon_sym_Music] = ACTIONS(165),
    [anon_sym_music] = ACTIONS(165),
    [anon_sym_Composition] = ACTIONS(165),
    [anon_sym_composition] = ACTIONS(165),
    [anon_sym_Composer] = ACTIONS(165),
    [anon_sym_composer] = ACTIONS(165),
    [anon_sym_Compose] = ACTIONS(165),
    [anon_sym_compose] = ACTIONS(165),
    [anon_sym_Lyrics] = ACTIONS(165),
    [anon_sym_lyrics] = ACTIONS(165),
    [anon_sym_Lyricist] = ACTIONS(165),
    [anon_sym_lyricist] = ACTIONS(165),
    [anon_sym_Lyric] = ACTIONS(165),
    [anon_sym_lyric] = ACTIONS(165),
    [anon_sym_Arrangement] = ACTIONS(165),
    [anon_sym_arrangement] = ACTIONS(165),
    [anon_sym_Arranger] = ACTIONS(165),
    [anon_sym_arranger] = ACTIONS(165),
    [anon_sym_Arrange] = ACTIONS(165),
    [anon_sym_arrange] = ACTIONS(165),
    [anon_sym_Vocal] = ACTIONS(165),
    [anon_sym_vocal] = ACTIONS(165),
    [anon_sym_Performer] = ACTIONS(165),
    [anon_sym_performer] = ACTIONS(165),
    [anon_sym_Illustration] = ACTIONS(165),
    [anon_sym_illustration] = ACTIONS(165),
    [anon_sym_Illust] = ACTIONS(165),
    [anon_sym_illust] = ACTIONS(165),
    [anon_sym_Label] = ACTIONS(165),
    [anon_sym_label] = ACTIONS(165),
    [anon_sym_Circle] = ACTIONS(165),
    [anon_sym_circle] = ACTIONS(165),
    [anon_sym_Producer] = ACTIONS(165),
    [anon_sym_producer] = ACTIONS(165),
    [anon_sym_Recording] = ACTIONS(165),
    [anon_sym_recording] = ACTIONS(165),
    [anon_sym_GuestVocal] = ACTIONS(165),
    [anon_sym_Guestvocal] = ACTIONS(165),
    [anon_sym_guestvocal] = ACTIONS(165),
    [anon_sym_Chorus] = ACTIONS(165),
    [anon_sym_chorus] = ACTIONS(165),
    [anon_sym_Mixing] = ACTIONS(165),
    [anon_sym_mixing] = ACTIONS(165),
    [anon_sym_Mastering] = ACTIONS(165),
    [anon_sym_mastering] = ACTIONS(165),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(165),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(165),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(165),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(165),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(165),
    [anon_sym_u827au672fu5bb6] = ACTIONS(165),
    [anon_sym_u6b4cu5531] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu66f2] = ACTIONS(165),
    [anon_sym_u7de8u66f2] = ACTIONS(165),
    [anon_sym_u7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5e] = ACTIONS(165),
    [anon_sym_u4f5cu8bcd] = ACTIONS(165),
    [anon_sym_u5382u724c] = ACTIONS(165),
    [anon_sym_u811au672c] = ACTIONS(165),
    [anon_sym_u63d2u56fe] = ACTIONS(165),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(165),
    [anon_sym_u51fau7248u65b9] = ACTIONS(165),
    [anon_sym_u5f55u97f3] = ACTIONS(165),
    [anon_sym_u539fu4f5c] = ACTIONS(165),
    [anon_sym_u58f0u4e50] = ACTIONS(165),
    [anon_sym_u4e50u5668] = ACTIONS(165),
    [anon_sym_u6df7u97f3] = ACTIONS(165),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(165),
    [sym__sep] = ACTIONS(167),
  },
  [41] = {
    [anon_sym_DISC] = ACTIONS(169),
    [anon_sym_u300a] = ACTIONS(169),
    [aux_sym_song_title_token1] = ACTIONS(169),
    [sym__role_instrument] = ACTIONS(171),
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
    [anon_sym_GuestVocal] = ACTIONS(169),
    [anon_sym_Guestvocal] = ACTIONS(169),
    [anon_sym_guestvocal] = ACTIONS(169),
    [anon_sym_Chorus] = ACTIONS(169),
    [anon_sym_chorus] = ACTIONS(169),
    [anon_sym_Mixing] = ACTIONS(169),
    [anon_sym_mixing] = ACTIONS(169),
    [anon_sym_Mastering] = ACTIONS(169),
    [anon_sym_mastering] = ACTIONS(169),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(169),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(169),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(169),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(169),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(169),
    [anon_sym_u827au672fu5bb6] = ACTIONS(169),
    [anon_sym_u6b4cu5531] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(169),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu66f2] = ACTIONS(169),
    [anon_sym_u7de8u66f2] = ACTIONS(169),
    [anon_sym_u7f16u66f2] = ACTIONS(169),
    [anon_sym_u4f5cu8a5e] = ACTIONS(169),
    [anon_sym_u4f5cu8bcd] = ACTIONS(169),
    [anon_sym_u5382u724c] = ACTIONS(169),
    [anon_sym_u811au672c] = ACTIONS(169),
    [anon_sym_u63d2u56fe] = ACTIONS(169),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(169),
    [anon_sym_u51fau7248u65b9] = ACTIONS(169),
    [anon_sym_u5f55u97f3] = ACTIONS(169),
    [anon_sym_u539fu4f5c] = ACTIONS(169),
    [anon_sym_u58f0u4e50] = ACTIONS(169),
    [anon_sym_u4e50u5668] = ACTIONS(169),
    [anon_sym_u6df7u97f3] = ACTIONS(169),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(169),
    [sym__sep] = ACTIONS(173),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DISC] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [sym__role_instrument] = ACTIONS(67),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(69),
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
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_u300a] = ACTIONS(151),
    [aux_sym_song_title_token1] = ACTIONS(151),
    [sym__role_instrument] = ACTIONS(149),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(151),
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
    [sym__sep] = ACTIONS(175),
  },
  [44] = {
    [anon_sym_DISC] = ACTIONS(177),
    [anon_sym_u300a] = ACTIONS(177),
    [aux_sym_song_title_token1] = ACTIONS(177),
    [sym__role_instrument] = ACTIONS(179),
    [anon_sym_Music] = ACTIONS(177),
    [anon_sym_music] = ACTIONS(177),
    [anon_sym_Composition] = ACTIONS(177),
    [anon_sym_composition] = ACTIONS(177),
    [anon_sym_Composer] = ACTIONS(177),
    [anon_sym_composer] = ACTIONS(177),
    [anon_sym_Compose] = ACTIONS(177),
    [anon_sym_compose] = ACTIONS(177),
    [anon_sym_Lyrics] = ACTIONS(177),
    [anon_sym_lyrics] = ACTIONS(177),
    [anon_sym_Lyricist] = ACTIONS(177),
    [anon_sym_lyricist] = ACTIONS(177),
    [anon_sym_Lyric] = ACTIONS(177),
    [anon_sym_lyric] = ACTIONS(177),
    [anon_sym_Arrangement] = ACTIONS(177),
    [anon_sym_arrangement] = ACTIONS(177),
    [anon_sym_Arranger] = ACTIONS(177),
    [anon_sym_arranger] = ACTIONS(177),
    [anon_sym_Arrange] = ACTIONS(177),
    [anon_sym_arrange] = ACTIONS(177),
    [anon_sym_Vocal] = ACTIONS(177),
    [anon_sym_vocal] = ACTIONS(177),
    [anon_sym_Performer] = ACTIONS(177),
    [anon_sym_performer] = ACTIONS(177),
    [anon_sym_Illustration] = ACTIONS(177),
    [anon_sym_illustration] = ACTIONS(177),
    [anon_sym_Illust] = ACTIONS(177),
    [anon_sym_illust] = ACTIONS(177),
    [anon_sym_Label] = ACTIONS(177),
    [anon_sym_label] = ACTIONS(177),
    [anon_sym_Circle] = ACTIONS(177),
    [anon_sym_circle] = ACTIONS(177),
    [anon_sym_Producer] = ACTIONS(177),
    [anon_sym_producer] = ACTIONS(177),
    [anon_sym_Recording] = ACTIONS(177),
    [anon_sym_recording] = ACTIONS(177),
    [anon_sym_GuestVocal] = ACTIONS(177),
    [anon_sym_Guestvocal] = ACTIONS(177),
    [anon_sym_guestvocal] = ACTIONS(177),
    [anon_sym_Chorus] = ACTIONS(177),
    [anon_sym_chorus] = ACTIONS(177),
    [anon_sym_Mixing] = ACTIONS(177),
    [anon_sym_mixing] = ACTIONS(177),
    [anon_sym_Mastering] = ACTIONS(177),
    [anon_sym_mastering] = ACTIONS(177),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(177),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(177),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(177),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(177),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(177),
    [anon_sym_u827au672fu5bb6] = ACTIONS(177),
    [anon_sym_u6b4cu5531] = ACTIONS(177),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(177),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(177),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(177),
    [anon_sym_u4f5cu66f2] = ACTIONS(177),
    [anon_sym_u7de8u66f2] = ACTIONS(177),
    [anon_sym_u7f16u66f2] = ACTIONS(177),
    [anon_sym_u4f5cu8a5e] = ACTIONS(177),
    [anon_sym_u4f5cu8bcd] = ACTIONS(177),
    [anon_sym_u5382u724c] = ACTIONS(177),
    [anon_sym_u811au672c] = ACTIONS(177),
    [anon_sym_u63d2u56fe] = ACTIONS(177),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(177),
    [anon_sym_u51fau7248u65b9] = ACTIONS(177),
    [anon_sym_u5f55u97f3] = ACTIONS(177),
    [anon_sym_u539fu4f5c] = ACTIONS(177),
    [anon_sym_u58f0u4e50] = ACTIONS(177),
    [anon_sym_u4e50u5668] = ACTIONS(177),
    [anon_sym_u6df7u97f3] = ACTIONS(177),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(177),
    [sym__sep] = ACTIONS(181),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_DISC] = ACTIONS(185),
    [anon_sym_u300a] = ACTIONS(185),
    [aux_sym_song_title_token1] = ACTIONS(185),
    [sym__role_instrument] = ACTIONS(183),
    [anon_sym_Music] = ACTIONS(185),
    [anon_sym_music] = ACTIONS(185),
    [anon_sym_Composition] = ACTIONS(185),
    [anon_sym_composition] = ACTIONS(185),
    [anon_sym_Composer] = ACTIONS(185),
    [anon_sym_composer] = ACTIONS(185),
    [anon_sym_Compose] = ACTIONS(185),
    [anon_sym_compose] = ACTIONS(185),
    [anon_sym_Lyrics] = ACTIONS(185),
    [anon_sym_lyrics] = ACTIONS(185),
    [anon_sym_Lyricist] = ACTIONS(185),
    [anon_sym_lyricist] = ACTIONS(185),
    [anon_sym_Lyric] = ACTIONS(185),
    [anon_sym_lyric] = ACTIONS(185),
    [anon_sym_Arrangement] = ACTIONS(185),
    [anon_sym_arrangement] = ACTIONS(185),
    [anon_sym_Arranger] = ACTIONS(185),
    [anon_sym_arranger] = ACTIONS(185),
    [anon_sym_Arrange] = ACTIONS(185),
    [anon_sym_arrange] = ACTIONS(185),
    [anon_sym_Vocal] = ACTIONS(185),
    [anon_sym_vocal] = ACTIONS(185),
    [anon_sym_Performer] = ACTIONS(185),
    [anon_sym_performer] = ACTIONS(185),
    [anon_sym_Illustration] = ACTIONS(185),
    [anon_sym_illustration] = ACTIONS(185),
    [anon_sym_Illust] = ACTIONS(185),
    [anon_sym_illust] = ACTIONS(185),
    [anon_sym_Label] = ACTIONS(185),
    [anon_sym_label] = ACTIONS(185),
    [anon_sym_Circle] = ACTIONS(185),
    [anon_sym_circle] = ACTIONS(185),
    [anon_sym_Producer] = ACTIONS(185),
    [anon_sym_producer] = ACTIONS(185),
    [anon_sym_Recording] = ACTIONS(185),
    [anon_sym_recording] = ACTIONS(185),
    [anon_sym_GuestVocal] = ACTIONS(185),
    [anon_sym_Guestvocal] = ACTIONS(185),
    [anon_sym_guestvocal] = ACTIONS(185),
    [anon_sym_Chorus] = ACTIONS(185),
    [anon_sym_chorus] = ACTIONS(185),
    [anon_sym_Mixing] = ACTIONS(185),
    [anon_sym_mixing] = ACTIONS(185),
    [anon_sym_Mastering] = ACTIONS(185),
    [anon_sym_mastering] = ACTIONS(185),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(185),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(185),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(185),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(185),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(185),
    [anon_sym_u827au672fu5bb6] = ACTIONS(185),
    [anon_sym_u6b4cu5531] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu66f2] = ACTIONS(185),
    [anon_sym_u7de8u66f2] = ACTIONS(185),
    [anon_sym_u7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5e] = ACTIONS(185),
    [anon_sym_u4f5cu8bcd] = ACTIONS(185),
    [anon_sym_u5382u724c] = ACTIONS(185),
    [anon_sym_u811au672c] = ACTIONS(185),
    [anon_sym_u63d2u56fe] = ACTIONS(185),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(185),
    [anon_sym_u51fau7248u65b9] = ACTIONS(185),
    [anon_sym_u5f55u97f3] = ACTIONS(185),
    [anon_sym_u539fu4f5c] = ACTIONS(185),
    [anon_sym_u58f0u4e50] = ACTIONS(185),
    [anon_sym_u4e50u5668] = ACTIONS(185),
    [anon_sym_u6df7u97f3] = ACTIONS(185),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(185),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DISC] = ACTIONS(189),
    [anon_sym_u300a] = ACTIONS(189),
    [aux_sym_song_title_token1] = ACTIONS(189),
    [sym__role_instrument] = ACTIONS(187),
    [anon_sym_Music] = ACTIONS(189),
    [anon_sym_music] = ACTIONS(189),
    [anon_sym_Composition] = ACTIONS(189),
    [anon_sym_composition] = ACTIONS(189),
    [anon_sym_Composer] = ACTIONS(189),
    [anon_sym_composer] = ACTIONS(189),
    [anon_sym_Compose] = ACTIONS(189),
    [anon_sym_compose] = ACTIONS(189),
    [anon_sym_Lyrics] = ACTIONS(189),
    [anon_sym_lyrics] = ACTIONS(189),
    [anon_sym_Lyricist] = ACTIONS(189),
    [anon_sym_lyricist] = ACTIONS(189),
    [anon_sym_Lyric] = ACTIONS(189),
    [anon_sym_lyric] = ACTIONS(189),
    [anon_sym_Arrangement] = ACTIONS(189),
    [anon_sym_arrangement] = ACTIONS(189),
    [anon_sym_Arranger] = ACTIONS(189),
    [anon_sym_arranger] = ACTIONS(189),
    [anon_sym_Arrange] = ACTIONS(189),
    [anon_sym_arrange] = ACTIONS(189),
    [anon_sym_Vocal] = ACTIONS(189),
    [anon_sym_vocal] = ACTIONS(189),
    [anon_sym_Performer] = ACTIONS(189),
    [anon_sym_performer] = ACTIONS(189),
    [anon_sym_Illustration] = ACTIONS(189),
    [anon_sym_illustration] = ACTIONS(189),
    [anon_sym_Illust] = ACTIONS(189),
    [anon_sym_illust] = ACTIONS(189),
    [anon_sym_Label] = ACTIONS(189),
    [anon_sym_label] = ACTIONS(189),
    [anon_sym_Circle] = ACTIONS(189),
    [anon_sym_circle] = ACTIONS(189),
    [anon_sym_Producer] = ACTIONS(189),
    [anon_sym_producer] = ACTIONS(189),
    [anon_sym_Recording] = ACTIONS(189),
    [anon_sym_recording] = ACTIONS(189),
    [anon_sym_GuestVocal] = ACTIONS(189),
    [anon_sym_Guestvocal] = ACTIONS(189),
    [anon_sym_guestvocal] = ACTIONS(189),
    [anon_sym_Chorus] = ACTIONS(189),
    [anon_sym_chorus] = ACTIONS(189),
    [anon_sym_Mixing] = ACTIONS(189),
    [anon_sym_mixing] = ACTIONS(189),
    [anon_sym_Mastering] = ACTIONS(189),
    [anon_sym_mastering] = ACTIONS(189),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(189),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(189),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(189),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(189),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(189),
    [anon_sym_u827au672fu5bb6] = ACTIONS(189),
    [anon_sym_u6b4cu5531] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu66f2] = ACTIONS(189),
    [anon_sym_u7de8u66f2] = ACTIONS(189),
    [anon_sym_u7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5e] = ACTIONS(189),
    [anon_sym_u4f5cu8bcd] = ACTIONS(189),
    [anon_sym_u5382u724c] = ACTIONS(189),
    [anon_sym_u811au672c] = ACTIONS(189),
    [anon_sym_u63d2u56fe] = ACTIONS(189),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(189),
    [anon_sym_u51fau7248u65b9] = ACTIONS(189),
    [anon_sym_u5f55u97f3] = ACTIONS(189),
    [anon_sym_u539fu4f5c] = ACTIONS(189),
    [anon_sym_u58f0u4e50] = ACTIONS(189),
    [anon_sym_u4e50u5668] = ACTIONS(189),
    [anon_sym_u6df7u97f3] = ACTIONS(189),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(189),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_u300a] = ACTIONS(165),
    [aux_sym_song_title_token1] = ACTIONS(165),
    [sym__role_instrument] = ACTIONS(163),
    [anon_sym_Music] = ACTIONS(165),
    [anon_sym_music] = ACTIONS(165),
    [anon_sym_Composition] = ACTIONS(165),
    [anon_sym_composition] = ACTIONS(165),
    [anon_sym_Composer] = ACTIONS(165),
    [anon_sym_composer] = ACTIONS(165),
    [anon_sym_Compose] = ACTIONS(165),
    [anon_sym_compose] = ACTIONS(165),
    [anon_sym_Lyrics] = ACTIONS(165),
    [anon_sym_lyrics] = ACTIONS(165),
    [anon_sym_Lyricist] = ACTIONS(165),
    [anon_sym_lyricist] = ACTIONS(165),
    [anon_sym_Lyric] = ACTIONS(165),
    [anon_sym_lyric] = ACTIONS(165),
    [anon_sym_Arrangement] = ACTIONS(165),
    [anon_sym_arrangement] = ACTIONS(165),
    [anon_sym_Arranger] = ACTIONS(165),
    [anon_sym_arranger] = ACTIONS(165),
    [anon_sym_Arrange] = ACTIONS(165),
    [anon_sym_arrange] = ACTIONS(165),
    [anon_sym_Vocal] = ACTIONS(165),
    [anon_sym_vocal] = ACTIONS(165),
    [anon_sym_Performer] = ACTIONS(165),
    [anon_sym_performer] = ACTIONS(165),
    [anon_sym_Illustration] = ACTIONS(165),
    [anon_sym_illustration] = ACTIONS(165),
    [anon_sym_Illust] = ACTIONS(165),
    [anon_sym_illust] = ACTIONS(165),
    [anon_sym_Label] = ACTIONS(165),
    [anon_sym_label] = ACTIONS(165),
    [anon_sym_Circle] = ACTIONS(165),
    [anon_sym_circle] = ACTIONS(165),
    [anon_sym_Producer] = ACTIONS(165),
    [anon_sym_producer] = ACTIONS(165),
    [anon_sym_Recording] = ACTIONS(165),
    [anon_sym_recording] = ACTIONS(165),
    [anon_sym_GuestVocal] = ACTIONS(165),
    [anon_sym_Guestvocal] = ACTIONS(165),
    [anon_sym_guestvocal] = ACTIONS(165),
    [anon_sym_Chorus] = ACTIONS(165),
    [anon_sym_chorus] = ACTIONS(165),
    [anon_sym_Mixing] = ACTIONS(165),
    [anon_sym_mixing] = ACTIONS(165),
    [anon_sym_Mastering] = ACTIONS(165),
    [anon_sym_mastering] = ACTIONS(165),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(165),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(165),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(165),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(165),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(165),
    [anon_sym_u827au672fu5bb6] = ACTIONS(165),
    [anon_sym_u6b4cu5531] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(165),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu66f2] = ACTIONS(165),
    [anon_sym_u7de8u66f2] = ACTIONS(165),
    [anon_sym_u7f16u66f2] = ACTIONS(165),
    [anon_sym_u4f5cu8a5e] = ACTIONS(165),
    [anon_sym_u4f5cu8bcd] = ACTIONS(165),
    [anon_sym_u5382u724c] = ACTIONS(165),
    [anon_sym_u811au672c] = ACTIONS(165),
    [anon_sym_u63d2u56fe] = ACTIONS(165),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(165),
    [anon_sym_u51fau7248u65b9] = ACTIONS(165),
    [anon_sym_u5f55u97f3] = ACTIONS(165),
    [anon_sym_u539fu4f5c] = ACTIONS(165),
    [anon_sym_u58f0u4e50] = ACTIONS(165),
    [anon_sym_u4e50u5668] = ACTIONS(165),
    [anon_sym_u6df7u97f3] = ACTIONS(165),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(165),
    [sym__sep] = ACTIONS(191),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(157),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(157),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DISC] = ACTIONS(51),
    [anon_sym_u300a] = ACTIONS(51),
    [aux_sym_song_title_token1] = ACTIONS(51),
    [sym__role_instrument] = ACTIONS(49),
    [anon_sym_Music] = ACTIONS(51),
    [anon_sym_music] = ACTIONS(51),
    [anon_sym_Composition] = ACTIONS(51),
    [anon_sym_composition] = ACTIONS(51),
    [anon_sym_Composer] = ACTIONS(51),
    [anon_sym_composer] = ACTIONS(51),
    [anon_sym_Compose] = ACTIONS(51),
    [anon_sym_compose] = ACTIONS(51),
    [anon_sym_Lyrics] = ACTIONS(51),
    [anon_sym_lyrics] = ACTIONS(51),
    [anon_sym_Lyricist] = ACTIONS(51),
    [anon_sym_lyricist] = ACTIONS(51),
    [anon_sym_Lyric] = ACTIONS(51),
    [anon_sym_lyric] = ACTIONS(51),
    [anon_sym_Arrangement] = ACTIONS(51),
    [anon_sym_arrangement] = ACTIONS(51),
    [anon_sym_Arranger] = ACTIONS(51),
    [anon_sym_arranger] = ACTIONS(51),
    [anon_sym_Arrange] = ACTIONS(51),
    [anon_sym_arrange] = ACTIONS(51),
    [anon_sym_Vocal] = ACTIONS(51),
    [anon_sym_vocal] = ACTIONS(51),
    [anon_sym_Performer] = ACTIONS(51),
    [anon_sym_performer] = ACTIONS(51),
    [anon_sym_Illustration] = ACTIONS(51),
    [anon_sym_illustration] = ACTIONS(51),
    [anon_sym_Illust] = ACTIONS(51),
    [anon_sym_illust] = ACTIONS(51),
    [anon_sym_Label] = ACTIONS(51),
    [anon_sym_label] = ACTIONS(51),
    [anon_sym_Circle] = ACTIONS(51),
    [anon_sym_circle] = ACTIONS(51),
    [anon_sym_Producer] = ACTIONS(51),
    [anon_sym_producer] = ACTIONS(51),
    [anon_sym_Recording] = ACTIONS(51),
    [anon_sym_recording] = ACTIONS(51),
    [anon_sym_GuestVocal] = ACTIONS(51),
    [anon_sym_Guestvocal] = ACTIONS(51),
    [anon_sym_guestvocal] = ACTIONS(51),
    [anon_sym_Chorus] = ACTIONS(51),
    [anon_sym_chorus] = ACTIONS(51),
    [anon_sym_Mixing] = ACTIONS(51),
    [anon_sym_mixing] = ACTIONS(51),
    [anon_sym_Mastering] = ACTIONS(51),
    [anon_sym_mastering] = ACTIONS(51),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(51),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(51),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(51),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(51),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(51),
    [anon_sym_u827au672fu5bb6] = ACTIONS(51),
    [anon_sym_u6b4cu5531] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu66f2] = ACTIONS(51),
    [anon_sym_u7de8u66f2] = ACTIONS(51),
    [anon_sym_u7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5e] = ACTIONS(51),
    [anon_sym_u4f5cu8bcd] = ACTIONS(51),
    [anon_sym_u5382u724c] = ACTIONS(51),
    [anon_sym_u811au672c] = ACTIONS(51),
    [anon_sym_u63d2u56fe] = ACTIONS(51),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(51),
    [anon_sym_u51fau7248u65b9] = ACTIONS(51),
    [anon_sym_u5f55u97f3] = ACTIONS(51),
    [anon_sym_u539fu4f5c] = ACTIONS(51),
    [anon_sym_u58f0u4e50] = ACTIONS(51),
    [anon_sym_u4e50u5668] = ACTIONS(51),
    [anon_sym_u6df7u97f3] = ACTIONS(51),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(51),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_u300a] = ACTIONS(121),
    [aux_sym_song_title_token1] = ACTIONS(121),
    [sym__role_instrument] = ACTIONS(119),
    [anon_sym_Music] = ACTIONS(121),
    [anon_sym_music] = ACTIONS(121),
    [anon_sym_Composition] = ACTIONS(121),
    [anon_sym_composition] = ACTIONS(121),
    [anon_sym_Composer] = ACTIONS(121),
    [anon_sym_composer] = ACTIONS(121),
    [anon_sym_Compose] = ACTIONS(121),
    [anon_sym_compose] = ACTIONS(121),
    [anon_sym_Lyrics] = ACTIONS(121),
    [anon_sym_lyrics] = ACTIONS(121),
    [anon_sym_Lyricist] = ACTIONS(121),
    [anon_sym_lyricist] = ACTIONS(121),
    [anon_sym_Lyric] = ACTIONS(121),
    [anon_sym_lyric] = ACTIONS(121),
    [anon_sym_Arrangement] = ACTIONS(121),
    [anon_sym_arrangement] = ACTIONS(121),
    [anon_sym_Arranger] = ACTIONS(121),
    [anon_sym_arranger] = ACTIONS(121),
    [anon_sym_Arrange] = ACTIONS(121),
    [anon_sym_arrange] = ACTIONS(121),
    [anon_sym_Vocal] = ACTIONS(121),
    [anon_sym_vocal] = ACTIONS(121),
    [anon_sym_Performer] = ACTIONS(121),
    [anon_sym_performer] = ACTIONS(121),
    [anon_sym_Illustration] = ACTIONS(121),
    [anon_sym_illustration] = ACTIONS(121),
    [anon_sym_Illust] = ACTIONS(121),
    [anon_sym_illust] = ACTIONS(121),
    [anon_sym_Label] = ACTIONS(121),
    [anon_sym_label] = ACTIONS(121),
    [anon_sym_Circle] = ACTIONS(121),
    [anon_sym_circle] = ACTIONS(121),
    [anon_sym_Producer] = ACTIONS(121),
    [anon_sym_producer] = ACTIONS(121),
    [anon_sym_Recording] = ACTIONS(121),
    [anon_sym_recording] = ACTIONS(121),
    [anon_sym_GuestVocal] = ACTIONS(121),
    [anon_sym_Guestvocal] = ACTIONS(121),
    [anon_sym_guestvocal] = ACTIONS(121),
    [anon_sym_Chorus] = ACTIONS(121),
    [anon_sym_chorus] = ACTIONS(121),
    [anon_sym_Mixing] = ACTIONS(121),
    [anon_sym_mixing] = ACTIONS(121),
    [anon_sym_Mastering] = ACTIONS(121),
    [anon_sym_mastering] = ACTIONS(121),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(121),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(121),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(121),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(121),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(121),
    [anon_sym_u827au672fu5bb6] = ACTIONS(121),
    [anon_sym_u6b4cu5531] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu66f2] = ACTIONS(121),
    [anon_sym_u7de8u66f2] = ACTIONS(121),
    [anon_sym_u7f16u66f2] = ACTIONS(121),
    [anon_sym_u4f5cu8a5e] = ACTIONS(121),
    [anon_sym_u4f5cu8bcd] = ACTIONS(121),
    [anon_sym_u5382u724c] = ACTIONS(121),
    [anon_sym_u811au672c] = ACTIONS(121),
    [anon_sym_u63d2u56fe] = ACTIONS(121),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(121),
    [anon_sym_u51fau7248u65b9] = ACTIONS(121),
    [anon_sym_u5f55u97f3] = ACTIONS(121),
    [anon_sym_u539fu4f5c] = ACTIONS(121),
    [anon_sym_u58f0u4e50] = ACTIONS(121),
    [anon_sym_u4e50u5668] = ACTIONS(121),
    [anon_sym_u6df7u97f3] = ACTIONS(121),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(121),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_u300a] = ACTIONS(161),
    [aux_sym_song_title_token1] = ACTIONS(161),
    [sym__role_instrument] = ACTIONS(159),
    [anon_sym_Music] = ACTIONS(161),
    [anon_sym_music] = ACTIONS(161),
    [anon_sym_Composition] = ACTIONS(161),
    [anon_sym_composition] = ACTIONS(161),
    [anon_sym_Composer] = ACTIONS(161),
    [anon_sym_composer] = ACTIONS(161),
    [anon_sym_Compose] = ACTIONS(161),
    [anon_sym_compose] = ACTIONS(161),
    [anon_sym_Lyrics] = ACTIONS(161),
    [anon_sym_lyrics] = ACTIONS(161),
    [anon_sym_Lyricist] = ACTIONS(161),
    [anon_sym_lyricist] = ACTIONS(161),
    [anon_sym_Lyric] = ACTIONS(161),
    [anon_sym_lyric] = ACTIONS(161),
    [anon_sym_Arrangement] = ACTIONS(161),
    [anon_sym_arrangement] = ACTIONS(161),
    [anon_sym_Arranger] = ACTIONS(161),
    [anon_sym_arranger] = ACTIONS(161),
    [anon_sym_Arrange] = ACTIONS(161),
    [anon_sym_arrange] = ACTIONS(161),
    [anon_sym_Vocal] = ACTIONS(161),
    [anon_sym_vocal] = ACTIONS(161),
    [anon_sym_Performer] = ACTIONS(161),
    [anon_sym_performer] = ACTIONS(161),
    [anon_sym_Illustration] = ACTIONS(161),
    [anon_sym_illustration] = ACTIONS(161),
    [anon_sym_Illust] = ACTIONS(161),
    [anon_sym_illust] = ACTIONS(161),
    [anon_sym_Label] = ACTIONS(161),
    [anon_sym_label] = ACTIONS(161),
    [anon_sym_Circle] = ACTIONS(161),
    [anon_sym_circle] = ACTIONS(161),
    [anon_sym_Producer] = ACTIONS(161),
    [anon_sym_producer] = ACTIONS(161),
    [anon_sym_Recording] = ACTIONS(161),
    [anon_sym_recording] = ACTIONS(161),
    [anon_sym_GuestVocal] = ACTIONS(161),
    [anon_sym_Guestvocal] = ACTIONS(161),
    [anon_sym_guestvocal] = ACTIONS(161),
    [anon_sym_Chorus] = ACTIONS(161),
    [anon_sym_chorus] = ACTIONS(161),
    [anon_sym_Mixing] = ACTIONS(161),
    [anon_sym_mixing] = ACTIONS(161),
    [anon_sym_Mastering] = ACTIONS(161),
    [anon_sym_mastering] = ACTIONS(161),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(161),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(161),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(161),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(161),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(161),
    [anon_sym_u827au672fu5bb6] = ACTIONS(161),
    [anon_sym_u6b4cu5531] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(161),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu66f2] = ACTIONS(161),
    [anon_sym_u7de8u66f2] = ACTIONS(161),
    [anon_sym_u7f16u66f2] = ACTIONS(161),
    [anon_sym_u4f5cu8a5e] = ACTIONS(161),
    [anon_sym_u4f5cu8bcd] = ACTIONS(161),
    [anon_sym_u5382u724c] = ACTIONS(161),
    [anon_sym_u811au672c] = ACTIONS(161),
    [anon_sym_u63d2u56fe] = ACTIONS(161),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(161),
    [anon_sym_u51fau7248u65b9] = ACTIONS(161),
    [anon_sym_u5f55u97f3] = ACTIONS(161),
    [anon_sym_u539fu4f5c] = ACTIONS(161),
    [anon_sym_u58f0u4e50] = ACTIONS(161),
    [anon_sym_u4e50u5668] = ACTIONS(161),
    [anon_sym_u6df7u97f3] = ACTIONS(161),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(161),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(51),
    [aux_sym_song_title_token1] = ACTIONS(51),
    [sym__role_instrument] = ACTIONS(49),
    [anon_sym_Music] = ACTIONS(51),
    [anon_sym_music] = ACTIONS(51),
    [anon_sym_Composition] = ACTIONS(51),
    [anon_sym_composition] = ACTIONS(51),
    [anon_sym_Composer] = ACTIONS(51),
    [anon_sym_composer] = ACTIONS(51),
    [anon_sym_Compose] = ACTIONS(51),
    [anon_sym_compose] = ACTIONS(51),
    [anon_sym_Lyrics] = ACTIONS(51),
    [anon_sym_lyrics] = ACTIONS(51),
    [anon_sym_Lyricist] = ACTIONS(51),
    [anon_sym_lyricist] = ACTIONS(51),
    [anon_sym_Lyric] = ACTIONS(51),
    [anon_sym_lyric] = ACTIONS(51),
    [anon_sym_Arrangement] = ACTIONS(51),
    [anon_sym_arrangement] = ACTIONS(51),
    [anon_sym_Arranger] = ACTIONS(51),
    [anon_sym_arranger] = ACTIONS(51),
    [anon_sym_Arrange] = ACTIONS(51),
    [anon_sym_arrange] = ACTIONS(51),
    [anon_sym_Vocal] = ACTIONS(51),
    [anon_sym_vocal] = ACTIONS(51),
    [anon_sym_Performer] = ACTIONS(51),
    [anon_sym_performer] = ACTIONS(51),
    [anon_sym_Illustration] = ACTIONS(51),
    [anon_sym_illustration] = ACTIONS(51),
    [anon_sym_Illust] = ACTIONS(51),
    [anon_sym_illust] = ACTIONS(51),
    [anon_sym_Label] = ACTIONS(51),
    [anon_sym_label] = ACTIONS(51),
    [anon_sym_Circle] = ACTIONS(51),
    [anon_sym_circle] = ACTIONS(51),
    [anon_sym_Producer] = ACTIONS(51),
    [anon_sym_producer] = ACTIONS(51),
    [anon_sym_Recording] = ACTIONS(51),
    [anon_sym_recording] = ACTIONS(51),
    [anon_sym_GuestVocal] = ACTIONS(51),
    [anon_sym_Guestvocal] = ACTIONS(51),
    [anon_sym_guestvocal] = ACTIONS(51),
    [anon_sym_Chorus] = ACTIONS(51),
    [anon_sym_chorus] = ACTIONS(51),
    [anon_sym_Mixing] = ACTIONS(51),
    [anon_sym_mixing] = ACTIONS(51),
    [anon_sym_Mastering] = ACTIONS(51),
    [anon_sym_mastering] = ACTIONS(51),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(51),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(51),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(51),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(51),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(51),
    [anon_sym_u827au672fu5bb6] = ACTIONS(51),
    [anon_sym_u6b4cu5531] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu66f2] = ACTIONS(51),
    [anon_sym_u7de8u66f2] = ACTIONS(51),
    [anon_sym_u7f16u66f2] = ACTIONS(51),
    [anon_sym_u4f5cu8a5e] = ACTIONS(51),
    [anon_sym_u4f5cu8bcd] = ACTIONS(51),
    [anon_sym_u5382u724c] = ACTIONS(51),
    [anon_sym_u811au672c] = ACTIONS(51),
    [anon_sym_u63d2u56fe] = ACTIONS(51),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(51),
    [anon_sym_u51fau7248u65b9] = ACTIONS(51),
    [anon_sym_u5f55u97f3] = ACTIONS(51),
    [anon_sym_u539fu4f5c] = ACTIONS(51),
    [anon_sym_u58f0u4e50] = ACTIONS(51),
    [anon_sym_u4e50u5668] = ACTIONS(51),
    [anon_sym_u6df7u97f3] = ACTIONS(51),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(51),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [sym__role_instrument] = ACTIONS(67),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(69),
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
  },
  [55] = {
    [anon_sym_DISC] = ACTIONS(19),
    [anon_sym_u300a] = ACTIONS(19),
    [aux_sym_song_title_token1] = ACTIONS(19),
    [sym__role_instrument] = ACTIONS(25),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(19),
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
  [56] = {
    [anon_sym_DISC] = ACTIONS(33),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(33),
    [sym__role_instrument] = ACTIONS(37),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(33),
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
  [57] = {
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_creator_name_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(193),
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
    [sym_parts] = ACTIONS(141),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_u300a] = ACTIONS(185),
    [aux_sym_song_title_token1] = ACTIONS(185),
    [sym__role_instrument] = ACTIONS(183),
    [anon_sym_Music] = ACTIONS(185),
    [anon_sym_music] = ACTIONS(185),
    [anon_sym_Composition] = ACTIONS(185),
    [anon_sym_composition] = ACTIONS(185),
    [anon_sym_Composer] = ACTIONS(185),
    [anon_sym_composer] = ACTIONS(185),
    [anon_sym_Compose] = ACTIONS(185),
    [anon_sym_compose] = ACTIONS(185),
    [anon_sym_Lyrics] = ACTIONS(185),
    [anon_sym_lyrics] = ACTIONS(185),
    [anon_sym_Lyricist] = ACTIONS(185),
    [anon_sym_lyricist] = ACTIONS(185),
    [anon_sym_Lyric] = ACTIONS(185),
    [anon_sym_lyric] = ACTIONS(185),
    [anon_sym_Arrangement] = ACTIONS(185),
    [anon_sym_arrangement] = ACTIONS(185),
    [anon_sym_Arranger] = ACTIONS(185),
    [anon_sym_arranger] = ACTIONS(185),
    [anon_sym_Arrange] = ACTIONS(185),
    [anon_sym_arrange] = ACTIONS(185),
    [anon_sym_Vocal] = ACTIONS(185),
    [anon_sym_vocal] = ACTIONS(185),
    [anon_sym_Performer] = ACTIONS(185),
    [anon_sym_performer] = ACTIONS(185),
    [anon_sym_Illustration] = ACTIONS(185),
    [anon_sym_illustration] = ACTIONS(185),
    [anon_sym_Illust] = ACTIONS(185),
    [anon_sym_illust] = ACTIONS(185),
    [anon_sym_Label] = ACTIONS(185),
    [anon_sym_label] = ACTIONS(185),
    [anon_sym_Circle] = ACTIONS(185),
    [anon_sym_circle] = ACTIONS(185),
    [anon_sym_Producer] = ACTIONS(185),
    [anon_sym_producer] = ACTIONS(185),
    [anon_sym_Recording] = ACTIONS(185),
    [anon_sym_recording] = ACTIONS(185),
    [anon_sym_GuestVocal] = ACTIONS(185),
    [anon_sym_Guestvocal] = ACTIONS(185),
    [anon_sym_guestvocal] = ACTIONS(185),
    [anon_sym_Chorus] = ACTIONS(185),
    [anon_sym_chorus] = ACTIONS(185),
    [anon_sym_Mixing] = ACTIONS(185),
    [anon_sym_mixing] = ACTIONS(185),
    [anon_sym_Mastering] = ACTIONS(185),
    [anon_sym_mastering] = ACTIONS(185),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(185),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(185),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(185),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(185),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(185),
    [anon_sym_u827au672fu5bb6] = ACTIONS(185),
    [anon_sym_u6b4cu5531] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(185),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu66f2] = ACTIONS(185),
    [anon_sym_u7de8u66f2] = ACTIONS(185),
    [anon_sym_u7f16u66f2] = ACTIONS(185),
    [anon_sym_u4f5cu8a5e] = ACTIONS(185),
    [anon_sym_u4f5cu8bcd] = ACTIONS(185),
    [anon_sym_u5382u724c] = ACTIONS(185),
    [anon_sym_u811au672c] = ACTIONS(185),
    [anon_sym_u63d2u56fe] = ACTIONS(185),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(185),
    [anon_sym_u51fau7248u65b9] = ACTIONS(185),
    [anon_sym_u5f55u97f3] = ACTIONS(185),
    [anon_sym_u539fu4f5c] = ACTIONS(185),
    [anon_sym_u58f0u4e50] = ACTIONS(185),
    [anon_sym_u4e50u5668] = ACTIONS(185),
    [anon_sym_u6df7u97f3] = ACTIONS(185),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(185),
  },
  [59] = {
    [anon_sym_DISC] = ACTIONS(195),
    [anon_sym_u300a] = ACTIONS(195),
    [aux_sym_song_title_token1] = ACTIONS(195),
    [sym__role_instrument] = ACTIONS(197),
    [anon_sym_Music] = ACTIONS(195),
    [anon_sym_music] = ACTIONS(195),
    [anon_sym_Composition] = ACTIONS(195),
    [anon_sym_composition] = ACTIONS(195),
    [anon_sym_Composer] = ACTIONS(195),
    [anon_sym_composer] = ACTIONS(195),
    [anon_sym_Compose] = ACTIONS(195),
    [anon_sym_compose] = ACTIONS(195),
    [anon_sym_Lyrics] = ACTIONS(195),
    [anon_sym_lyrics] = ACTIONS(195),
    [anon_sym_Lyricist] = ACTIONS(195),
    [anon_sym_lyricist] = ACTIONS(195),
    [anon_sym_Lyric] = ACTIONS(195),
    [anon_sym_lyric] = ACTIONS(195),
    [anon_sym_Arrangement] = ACTIONS(195),
    [anon_sym_arrangement] = ACTIONS(195),
    [anon_sym_Arranger] = ACTIONS(195),
    [anon_sym_arranger] = ACTIONS(195),
    [anon_sym_Arrange] = ACTIONS(195),
    [anon_sym_arrange] = ACTIONS(195),
    [anon_sym_Vocal] = ACTIONS(195),
    [anon_sym_vocal] = ACTIONS(195),
    [anon_sym_Performer] = ACTIONS(195),
    [anon_sym_performer] = ACTIONS(195),
    [anon_sym_Illustration] = ACTIONS(195),
    [anon_sym_illustration] = ACTIONS(195),
    [anon_sym_Illust] = ACTIONS(195),
    [anon_sym_illust] = ACTIONS(195),
    [anon_sym_Label] = ACTIONS(195),
    [anon_sym_label] = ACTIONS(195),
    [anon_sym_Circle] = ACTIONS(195),
    [anon_sym_circle] = ACTIONS(195),
    [anon_sym_Producer] = ACTIONS(195),
    [anon_sym_producer] = ACTIONS(195),
    [anon_sym_Recording] = ACTIONS(195),
    [anon_sym_recording] = ACTIONS(195),
    [anon_sym_GuestVocal] = ACTIONS(195),
    [anon_sym_Guestvocal] = ACTIONS(195),
    [anon_sym_guestvocal] = ACTIONS(195),
    [anon_sym_Chorus] = ACTIONS(195),
    [anon_sym_chorus] = ACTIONS(195),
    [anon_sym_Mixing] = ACTIONS(195),
    [anon_sym_mixing] = ACTIONS(195),
    [anon_sym_Mastering] = ACTIONS(195),
    [anon_sym_mastering] = ACTIONS(195),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(195),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(195),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(195),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(195),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(195),
    [anon_sym_u827au672fu5bb6] = ACTIONS(195),
    [anon_sym_u6b4cu5531] = ACTIONS(195),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(195),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(195),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(195),
    [anon_sym_u4f5cu66f2] = ACTIONS(195),
    [anon_sym_u7de8u66f2] = ACTIONS(195),
    [anon_sym_u7f16u66f2] = ACTIONS(195),
    [anon_sym_u4f5cu8a5e] = ACTIONS(195),
    [anon_sym_u4f5cu8bcd] = ACTIONS(195),
    [anon_sym_u5382u724c] = ACTIONS(195),
    [anon_sym_u811au672c] = ACTIONS(195),
    [anon_sym_u63d2u56fe] = ACTIONS(195),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(195),
    [anon_sym_u51fau7248u65b9] = ACTIONS(195),
    [anon_sym_u5f55u97f3] = ACTIONS(195),
    [anon_sym_u539fu4f5c] = ACTIONS(195),
    [anon_sym_u58f0u4e50] = ACTIONS(195),
    [anon_sym_u4e50u5668] = ACTIONS(195),
    [anon_sym_u6df7u97f3] = ACTIONS(195),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(195),
  },
  [60] = {
    [anon_sym_DISC] = ACTIONS(199),
    [anon_sym_u300a] = ACTIONS(199),
    [aux_sym_song_title_token1] = ACTIONS(199),
    [sym__role_instrument] = ACTIONS(201),
    [anon_sym_Music] = ACTIONS(199),
    [anon_sym_music] = ACTIONS(199),
    [anon_sym_Composition] = ACTIONS(199),
    [anon_sym_composition] = ACTIONS(199),
    [anon_sym_Composer] = ACTIONS(199),
    [anon_sym_composer] = ACTIONS(199),
    [anon_sym_Compose] = ACTIONS(199),
    [anon_sym_compose] = ACTIONS(199),
    [anon_sym_Lyrics] = ACTIONS(199),
    [anon_sym_lyrics] = ACTIONS(199),
    [anon_sym_Lyricist] = ACTIONS(199),
    [anon_sym_lyricist] = ACTIONS(199),
    [anon_sym_Lyric] = ACTIONS(199),
    [anon_sym_lyric] = ACTIONS(199),
    [anon_sym_Arrangement] = ACTIONS(199),
    [anon_sym_arrangement] = ACTIONS(199),
    [anon_sym_Arranger] = ACTIONS(199),
    [anon_sym_arranger] = ACTIONS(199),
    [anon_sym_Arrange] = ACTIONS(199),
    [anon_sym_arrange] = ACTIONS(199),
    [anon_sym_Vocal] = ACTIONS(199),
    [anon_sym_vocal] = ACTIONS(199),
    [anon_sym_Performer] = ACTIONS(199),
    [anon_sym_performer] = ACTIONS(199),
    [anon_sym_Illustration] = ACTIONS(199),
    [anon_sym_illustration] = ACTIONS(199),
    [anon_sym_Illust] = ACTIONS(199),
    [anon_sym_illust] = ACTIONS(199),
    [anon_sym_Label] = ACTIONS(199),
    [anon_sym_label] = ACTIONS(199),
    [anon_sym_Circle] = ACTIONS(199),
    [anon_sym_circle] = ACTIONS(199),
    [anon_sym_Producer] = ACTIONS(199),
    [anon_sym_producer] = ACTIONS(199),
    [anon_sym_Recording] = ACTIONS(199),
    [anon_sym_recording] = ACTIONS(199),
    [anon_sym_GuestVocal] = ACTIONS(199),
    [anon_sym_Guestvocal] = ACTIONS(199),
    [anon_sym_guestvocal] = ACTIONS(199),
    [anon_sym_Chorus] = ACTIONS(199),
    [anon_sym_chorus] = ACTIONS(199),
    [anon_sym_Mixing] = ACTIONS(199),
    [anon_sym_mixing] = ACTIONS(199),
    [anon_sym_Mastering] = ACTIONS(199),
    [anon_sym_mastering] = ACTIONS(199),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(199),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(199),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(199),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(199),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(199),
    [anon_sym_u827au672fu5bb6] = ACTIONS(199),
    [anon_sym_u6b4cu5531] = ACTIONS(199),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(199),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(199),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(199),
    [anon_sym_u4f5cu66f2] = ACTIONS(199),
    [anon_sym_u7de8u66f2] = ACTIONS(199),
    [anon_sym_u7f16u66f2] = ACTIONS(199),
    [anon_sym_u4f5cu8a5e] = ACTIONS(199),
    [anon_sym_u4f5cu8bcd] = ACTIONS(199),
    [anon_sym_u5382u724c] = ACTIONS(199),
    [anon_sym_u811au672c] = ACTIONS(199),
    [anon_sym_u63d2u56fe] = ACTIONS(199),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(199),
    [anon_sym_u51fau7248u65b9] = ACTIONS(199),
    [anon_sym_u5f55u97f3] = ACTIONS(199),
    [anon_sym_u539fu4f5c] = ACTIONS(199),
    [anon_sym_u58f0u4e50] = ACTIONS(199),
    [anon_sym_u4e50u5668] = ACTIONS(199),
    [anon_sym_u6df7u97f3] = ACTIONS(199),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(199),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_u300a] = ACTIONS(189),
    [aux_sym_song_title_token1] = ACTIONS(189),
    [sym__role_instrument] = ACTIONS(187),
    [anon_sym_Music] = ACTIONS(189),
    [anon_sym_music] = ACTIONS(189),
    [anon_sym_Composition] = ACTIONS(189),
    [anon_sym_composition] = ACTIONS(189),
    [anon_sym_Composer] = ACTIONS(189),
    [anon_sym_composer] = ACTIONS(189),
    [anon_sym_Compose] = ACTIONS(189),
    [anon_sym_compose] = ACTIONS(189),
    [anon_sym_Lyrics] = ACTIONS(189),
    [anon_sym_lyrics] = ACTIONS(189),
    [anon_sym_Lyricist] = ACTIONS(189),
    [anon_sym_lyricist] = ACTIONS(189),
    [anon_sym_Lyric] = ACTIONS(189),
    [anon_sym_lyric] = ACTIONS(189),
    [anon_sym_Arrangement] = ACTIONS(189),
    [anon_sym_arrangement] = ACTIONS(189),
    [anon_sym_Arranger] = ACTIONS(189),
    [anon_sym_arranger] = ACTIONS(189),
    [anon_sym_Arrange] = ACTIONS(189),
    [anon_sym_arrange] = ACTIONS(189),
    [anon_sym_Vocal] = ACTIONS(189),
    [anon_sym_vocal] = ACTIONS(189),
    [anon_sym_Performer] = ACTIONS(189),
    [anon_sym_performer] = ACTIONS(189),
    [anon_sym_Illustration] = ACTIONS(189),
    [anon_sym_illustration] = ACTIONS(189),
    [anon_sym_Illust] = ACTIONS(189),
    [anon_sym_illust] = ACTIONS(189),
    [anon_sym_Label] = ACTIONS(189),
    [anon_sym_label] = ACTIONS(189),
    [anon_sym_Circle] = ACTIONS(189),
    [anon_sym_circle] = ACTIONS(189),
    [anon_sym_Producer] = ACTIONS(189),
    [anon_sym_producer] = ACTIONS(189),
    [anon_sym_Recording] = ACTIONS(189),
    [anon_sym_recording] = ACTIONS(189),
    [anon_sym_GuestVocal] = ACTIONS(189),
    [anon_sym_Guestvocal] = ACTIONS(189),
    [anon_sym_guestvocal] = ACTIONS(189),
    [anon_sym_Chorus] = ACTIONS(189),
    [anon_sym_chorus] = ACTIONS(189),
    [anon_sym_Mixing] = ACTIONS(189),
    [anon_sym_mixing] = ACTIONS(189),
    [anon_sym_Mastering] = ACTIONS(189),
    [anon_sym_mastering] = ACTIONS(189),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(189),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(189),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(189),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(189),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(189),
    [anon_sym_u827au672fu5bb6] = ACTIONS(189),
    [anon_sym_u6b4cu5531] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(189),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu66f2] = ACTIONS(189),
    [anon_sym_u7de8u66f2] = ACTIONS(189),
    [anon_sym_u7f16u66f2] = ACTIONS(189),
    [anon_sym_u4f5cu8a5e] = ACTIONS(189),
    [anon_sym_u4f5cu8bcd] = ACTIONS(189),
    [anon_sym_u5382u724c] = ACTIONS(189),
    [anon_sym_u811au672c] = ACTIONS(189),
    [anon_sym_u63d2u56fe] = ACTIONS(189),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(189),
    [anon_sym_u51fau7248u65b9] = ACTIONS(189),
    [anon_sym_u5f55u97f3] = ACTIONS(189),
    [anon_sym_u539fu4f5c] = ACTIONS(189),
    [anon_sym_u58f0u4e50] = ACTIONS(189),
    [anon_sym_u4e50u5668] = ACTIONS(189),
    [anon_sym_u6df7u97f3] = ACTIONS(189),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(189),
  },
  [62] = {
    [anon_sym_u300a] = ACTIONS(141),
    [aux_sym_creator_name_token1] = ACTIONS(141),
    [sym__role_instrument] = ACTIONS(193),
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
    STATE(6), 1,
      sym__quotable_song_title_maybecomment,
    STATE(24), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(31), 1,
      sym_song_title,
    STATE(67), 2,
      aux_sym__disc,
      sym_song,
    STATE(80), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_DISC,
    ACTIONS(207), 1,
      anon_sym_u300a,
    ACTIONS(210), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym__quotable_song_title,
    STATE(28), 1,
      sym_song_title,
    STATE(64), 2,
      aux_sym__disc,
      sym_song,
  [59] = 9,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_DISC,
    ACTIONS(217), 1,
      anon_sym_u300a,
    ACTIONS(219), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym__quotable_song_title,
    STATE(28), 1,
      sym_song_title,
    STATE(64), 2,
      aux_sym__disc,
      sym_song,
  [88] = 8,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_u300a,
    ACTIONS(224), 1,
      aux_sym_song_title_token1,
    STATE(6), 1,
      sym__quotable_song_title_maybecomment,
    STATE(24), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(31), 1,
      sym_song_title,
    STATE(66), 2,
      aux_sym__disc,
      sym_song,
  [114] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym__quotable_song_title_maybecomment,
    STATE(24), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(31), 1,
      sym_song_title,
    STATE(66), 2,
      aux_sym__disc,
      sym_song,
  [140] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym__quotable_song_title_maybecomment,
    STATE(24), 1,
      aux_sym_song_title_repeat1,
    STATE(29), 1,
      sym__quotable_song_title,
    STATE(31), 1,
      sym_song_title,
    STATE(66), 2,
      aux_sym__disc,
      sym_song,
  [166] = 7,
    ACTIONS(217), 1,
      anon_sym_u300a,
    ACTIONS(219), 1,
      aux_sym_song_title_token1,
    STATE(2), 1,
      sym__quotable_song_title_maybecomment,
    STATE(19), 1,
      aux_sym_song_title_repeat1,
    STATE(23), 1,
      sym__quotable_song_title,
    STATE(28), 1,
      sym_song_title,
    STATE(65), 2,
      aux_sym__disc,
      sym_song,
  [189] = 7,
    ACTIONS(23), 1,
      aux_sym_creator_name_token1,
    ACTIONS(27), 1,
      sym_parts,
    ACTIONS(41), 1,
      anon_sym_u300a,
    STATE(72), 1,
      aux_sym_creator_name_repeat1,
    STATE(81), 1,
      sym_creator_name,
    STATE(87), 1,
      sym__quotable_creator_name,
    STATE(98), 1,
      sym__quotable_creator_name_maybeparts,
  [211] = 4,
    ACTIONS(233), 1,
      aux_sym_creator_name_token1,
    ACTIONS(236), 1,
      sym__sep,
    STATE(71), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(231), 2,
      anon_sym_LF,
      sym_parts,
  [225] = 4,
    ACTIONS(240), 1,
      aux_sym_creator_name_token1,
    ACTIONS(242), 1,
      sym__sep,
    STATE(71), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(238), 2,
      anon_sym_LF,
      sym_parts,
  [239] = 5,
    ACTIONS(41), 1,
      anon_sym_u300a,
    ACTIONS(244), 1,
      aux_sym_creator_name_token1,
    STATE(79), 1,
      aux_sym_creator_name_repeat1,
    STATE(81), 1,
      sym_creator_name,
    STATE(99), 1,
      sym__quotable_creator_name,
  [255] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_DISC,
    STATE(78), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [266] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [275] = 4,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      sym__sep,
    ACTIONS(248), 1,
      aux_sym_creator_name_token1,
    STATE(76), 1,
      aux_sym_creator_name_repeat1,
  [288] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [297] = 3,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      anon_sym_DISC,
    STATE(78), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [308] = 4,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      sym__sep,
    ACTIONS(260), 1,
      aux_sym_creator_name_token1,
    STATE(76), 1,
      aux_sym_creator_name_repeat1,
  [321] = 3,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_DISC,
    STATE(78), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [332] = 2,
    ACTIONS(264), 1,
      sym__sep,
    ACTIONS(262), 2,
      anon_sym_LF,
      sym_parts,
  [340] = 3,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      sym__sep,
    STATE(83), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [350] = 3,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 1,
      sym__sep,
    STATE(83), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [360] = 3,
    ACTIONS(275), 1,
      aux_sym_song_title_token1,
    STATE(88), 1,
      aux_sym_song_title_repeat1,
    STATE(114), 1,
      sym_song_title,
  [370] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [378] = 3,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      sym__sep,
    STATE(86), 1,
      aux_sym_credit_field_repeat1,
  [388] = 3,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      sym_parts,
    ACTIONS(286), 1,
      sym__sep,
  [398] = 3,
    ACTIONS(89), 1,
      anon_sym_u300b,
    ACTIONS(288), 1,
      aux_sym_song_title_token1,
    STATE(89), 1,
      aux_sym_song_title_repeat1,
  [408] = 3,
    ACTIONS(95), 1,
      anon_sym_u300b,
    ACTIONS(290), 1,
      aux_sym_song_title_token1,
    STATE(89), 1,
      aux_sym_song_title_repeat1,
  [418] = 3,
    ACTIONS(275), 1,
      aux_sym_song_title_token1,
    STATE(88), 1,
      aux_sym_song_title_repeat1,
    STATE(109), 1,
      sym_song_title,
  [428] = 3,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      sym__sep,
    STATE(82), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [438] = 3,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      sym__sep,
    STATE(86), 1,
      aux_sym_credit_field_repeat1,
  [448] = 2,
    ACTIONS(303), 1,
      sym__sep,
    ACTIONS(301), 2,
      anon_sym_LF,
      sym_parts,
  [456] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [464] = 3,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      sym__sep,
    STATE(92), 1,
      aux_sym_credit_field_repeat1,
  [474] = 3,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      sym__sep,
    STATE(86), 1,
      aux_sym_credit_field_repeat1,
  [484] = 3,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      sym__sep,
    STATE(96), 1,
      aux_sym_credit_field_repeat1,
  [494] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 1,
      sym__sep,
  [501] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 1,
      sym__sep,
  [508] = 2,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      sym__sep,
  [515] = 1,
    ACTIONS(329), 1,
      sym__sep,
  [519] = 1,
    ACTIONS(331), 1,
      anon_sym_u300b,
  [523] = 1,
    ACTIONS(333), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [527] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [531] = 1,
    ACTIONS(337), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [535] = 1,
    ACTIONS(339), 1,
      sym__sep,
  [539] = 1,
    ACTIONS(341), 1,
      sym__sep,
  [543] = 1,
    ACTIONS(343), 1,
      sym__sep,
  [547] = 1,
    ACTIONS(345), 1,
      anon_sym_u300b,
  [551] = 1,
    ACTIONS(347), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [555] = 1,
    ACTIONS(349), 1,
      sym__sep,
  [559] = 1,
    ACTIONS(351), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [563] = 1,
    ACTIONS(353), 1,
      aux_sym__quotable_creator_name_token1,
  [567] = 1,
    ACTIONS(355), 1,
      anon_sym_u300b,
  [571] = 1,
    ACTIONS(357), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 30,
  [SMALL_STATE(65)] = 59,
  [SMALL_STATE(66)] = 88,
  [SMALL_STATE(67)] = 114,
  [SMALL_STATE(68)] = 140,
  [SMALL_STATE(69)] = 166,
  [SMALL_STATE(70)] = 189,
  [SMALL_STATE(71)] = 211,
  [SMALL_STATE(72)] = 225,
  [SMALL_STATE(73)] = 239,
  [SMALL_STATE(74)] = 255,
  [SMALL_STATE(75)] = 266,
  [SMALL_STATE(76)] = 275,
  [SMALL_STATE(77)] = 288,
  [SMALL_STATE(78)] = 297,
  [SMALL_STATE(79)] = 308,
  [SMALL_STATE(80)] = 321,
  [SMALL_STATE(81)] = 332,
  [SMALL_STATE(82)] = 340,
  [SMALL_STATE(83)] = 350,
  [SMALL_STATE(84)] = 360,
  [SMALL_STATE(85)] = 370,
  [SMALL_STATE(86)] = 378,
  [SMALL_STATE(87)] = 388,
  [SMALL_STATE(88)] = 398,
  [SMALL_STATE(89)] = 408,
  [SMALL_STATE(90)] = 418,
  [SMALL_STATE(91)] = 428,
  [SMALL_STATE(92)] = 438,
  [SMALL_STATE(93)] = 448,
  [SMALL_STATE(94)] = 456,
  [SMALL_STATE(95)] = 464,
  [SMALL_STATE(96)] = 474,
  [SMALL_STATE(97)] = 484,
  [SMALL_STATE(98)] = 494,
  [SMALL_STATE(99)] = 501,
  [SMALL_STATE(100)] = 508,
  [SMALL_STATE(101)] = 515,
  [SMALL_STATE(102)] = 519,
  [SMALL_STATE(103)] = 523,
  [SMALL_STATE(104)] = 527,
  [SMALL_STATE(105)] = 531,
  [SMALL_STATE(106)] = 535,
  [SMALL_STATE(107)] = 539,
  [SMALL_STATE(108)] = 543,
  [SMALL_STATE(109)] = 547,
  [SMALL_STATE(110)] = 551,
  [SMALL_STATE(111)] = 555,
  [SMALL_STATE(112)] = 559,
  [SMALL_STATE(113)] = 563,
  [SMALL_STATE(114)] = 567,
  [SMALL_STATE(115)] = 571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 11),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 8),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 8),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block_maybeparts, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 11),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 8),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 8),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 11),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 8),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 8),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 11),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(90),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(84),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(24),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creator_name, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creator_name, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 3, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 3, 0, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12), SHIFT_REPEAT(70),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12), SHIFT_REPEAT(73),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name_maybeparts, 1, 0, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name_maybeparts, 1, 0, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 9),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 9),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 10),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 10),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 10),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 10),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name_maybeparts, 2, 0, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name_maybeparts, 2, 0, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__role, 1, 0, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
