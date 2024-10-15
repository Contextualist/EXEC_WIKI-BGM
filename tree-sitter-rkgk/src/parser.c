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
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 93
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 1
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_DISC = 1,
  anon_sym_LF = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__quotable_song_title_maybecomment_token1 = 4,
  aux_sym__quotable_song_title_maybecomment_token2 = 5,
  anon_sym_u300a = 6,
  anon_sym_u300b = 7,
  aux_sym_song_title_token1 = 8,
  aux_sym__quotable_creator_field_token1 = 9,
  aux_sym__quotable_creator_field_token2 = 10,
  aux_sym__quotable_creator_field_token3 = 11,
  anon_sym_u300a2 = 12,
  aux_sym__quotable_creator_name_token1 = 13,
  aux_sym_creator_name_token1 = 14,
  sym__role_instrument = 15,
  anon_sym_Music = 16,
  anon_sym_music = 17,
  anon_sym_Composition = 18,
  anon_sym_composition = 19,
  anon_sym_Composer = 20,
  anon_sym_composer = 21,
  anon_sym_Compose = 22,
  anon_sym_compose = 23,
  anon_sym_Lyrics = 24,
  anon_sym_lyrics = 25,
  anon_sym_Lyricist = 26,
  anon_sym_lyricist = 27,
  anon_sym_Lyric = 28,
  anon_sym_lyric = 29,
  anon_sym_Arrangement = 30,
  anon_sym_arrangement = 31,
  anon_sym_Arranger = 32,
  anon_sym_arranger = 33,
  anon_sym_Arrange = 34,
  anon_sym_arrange = 35,
  anon_sym_Vocal = 36,
  anon_sym_vocal = 37,
  anon_sym_Performer = 38,
  anon_sym_performer = 39,
  anon_sym_Illustration = 40,
  anon_sym_illustration = 41,
  anon_sym_Illust = 42,
  anon_sym_illust = 43,
  anon_sym_Label = 44,
  anon_sym_label = 45,
  anon_sym_Circle = 46,
  anon_sym_circle = 47,
  anon_sym_Producer = 48,
  anon_sym_producer = 49,
  anon_sym_Recording = 50,
  anon_sym_recording = 51,
  anon_sym_GuestVocal = 52,
  anon_sym_Guestvocal = 53,
  anon_sym_guestvocal = 54,
  anon_sym_Chorus = 55,
  anon_sym_chorus = 56,
  anon_sym_Mixing = 57,
  anon_sym_mixing = 58,
  anon_sym_Mastering = 59,
  anon_sym_mastering = 60,
  anon_sym_u30dcu30fcu30abu30eb = 61,
  anon_sym_u30a2u30ecu30f3u30b8 = 62,
  anon_sym_u30a4u30e9u30b9u30c8 = 63,
  anon_sym_u30ecu30fcu30d9u30eb = 64,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 65,
  anon_sym_u827au672fu5bb6 = 66,
  anon_sym_u6b4cu5531 = 67,
  anon_sym_u6b4c = 68,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 69,
  anon_sym_u4f5cu8bcdu4f5cu7f16u66f2 = 70,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 71,
  anon_sym_u4f5cu8bcdu4f5cu66f2 = 72,
  anon_sym_u4f5cu8a5eu66f2 = 73,
  anon_sym_u4f5cu8bcdu66f2 = 74,
  anon_sym_u4f5cu7de8u66f2 = 75,
  anon_sym_u4f5cu7f16u66f2 = 76,
  anon_sym_u4f5cu66f2 = 77,
  anon_sym_u7de8u66f2 = 78,
  anon_sym_u7f16u66f2 = 79,
  anon_sym_u4f5cu8a5e = 80,
  anon_sym_u4f5cu8bcd = 81,
  anon_sym_u5382u724c = 82,
  anon_sym_u811au672c = 83,
  anon_sym_u63d2u56fe = 84,
  anon_sym_u5236u4f5cu4eba = 85,
  anon_sym_u51fau7248u65b9 = 86,
  anon_sym_u5f55u97f3 = 87,
  anon_sym_u539fu4f5c = 88,
  anon_sym_u58f0u4e50 = 89,
  anon_sym_u4e50u5668 = 90,
  anon_sym_u6df7u97f3 = 91,
  anon_sym_u6bcdu5e26u5236u4f5c = 92,
  sym_parts = 93,
  sym__sep = 94,
  sym_source_file = 95,
  sym_disc = 96,
  aux_sym__disc = 97,
  sym_song = 98,
  sym_credit_block_maybeparts = 99,
  sym_credit_field_maybeparts = 100,
  sym_credit_block = 101,
  sym_credit_field = 102,
  sym__quotable_song_title_maybecomment = 103,
  sym__quotable_song_title = 104,
  sym_song_title = 105,
  sym__quotable_creator_field_maybeparts = 106,
  sym__quotable_creator_field = 107,
  sym__quotable_creator_name = 108,
  sym_creator_name = 109,
  sym_role = 110,
  sym__role = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_credit_block_maybeparts_repeat1 = 113,
  aux_sym_credit_field_maybeparts_repeat1 = 114,
  aux_sym_credit_field_maybeparts_repeat2 = 115,
  aux_sym_credit_block_repeat1 = 116,
  aux_sym_credit_field_repeat1 = 117,
  aux_sym_song_title_repeat1 = 118,
  aux_sym_creator_name_repeat1 = 119,
  alias_sym_creator_sep = 120,
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
  [aux_sym__quotable_creator_field_token1] = "cv_conj",
  [aux_sym__quotable_creator_field_token2] = "cv_conj",
  [aux_sym__quotable_creator_field_token3] = "cv_conj",
  [anon_sym_u300a2] = "\u300a",
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
  [anon_sym_u6b4c] = "\u6b4c",
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
  [sym__quotable_creator_field_maybeparts] = "_quotable_creator_field_maybeparts",
  [sym__quotable_creator_field] = "_quotable_creator_field",
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
  [aux_sym__quotable_creator_field_token1] = aux_sym__quotable_creator_field_token1,
  [aux_sym__quotable_creator_field_token2] = aux_sym__quotable_creator_field_token1,
  [aux_sym__quotable_creator_field_token3] = aux_sym__quotable_creator_field_token1,
  [anon_sym_u300a2] = anon_sym_u300a,
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
  [anon_sym_u6b4c] = anon_sym_u6b4c,
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
  [sym__quotable_creator_field_maybeparts] = sym__quotable_creator_field_maybeparts,
  [sym__quotable_creator_field] = sym__quotable_creator_field,
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
  [aux_sym__quotable_creator_field_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quotable_creator_field_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quotable_creator_field_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u300a2] = {
    .visible = true,
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
  [anon_sym_u6b4c] = {
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
  [sym__quotable_creator_field_maybeparts] = {
    .visible = false,
    .named = true,
  },
  [sym__quotable_creator_field] = {
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
  [9] = {.index = 8, .length = 3},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 4},
  [13] = {.index = 18, .length = 2},
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
  [18] =
    {field_creator, 0, .inherited = true},
    {field_creator, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
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
  [8] = 5,
  [9] = 4,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 13,
  [26] = 19,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 29,
  [38] = 38,
  [39] = 23,
  [40] = 40,
  [41] = 13,
  [42] = 42,
  [43] = 12,
  [44] = 44,
  [45] = 30,
  [46] = 46,
  [47] = 38,
  [48] = 40,
  [49] = 49,
  [50] = 33,
  [51] = 30,
  [52] = 52,
  [53] = 36,
  [54] = 44,
  [55] = 42,
  [56] = 23,
  [57] = 35,
  [58] = 58,
  [59] = 49,
  [60] = 30,
  [61] = 61,
  [62] = 23,
  [63] = 46,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 52,
  [70] = 58,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 64,
  [75] = 75,
  [76] = 76,
  [77] = 66,
  [78] = 65,
  [79] = 61,
  [80] = 67,
  [81] = 68,
  [82] = 82,
  [83] = 72,
  [84] = 76,
  [85] = 85,
  [86] = 73,
  [87] = 71,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 88,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 13,
  [102] = 12,
  [103] = 103,
  [104] = 103,
  [105] = 13,
  [106] = 106,
  [107] = 30,
  [108] = 108,
  [109] = 106,
  [110] = 12,
  [111] = 106,
  [112] = 108,
  [113] = 23,
  [114] = 31,
  [115] = 108,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 13,
  [125] = 52,
  [126] = 12,
  [127] = 120,
  [128] = 128,
  [129] = 118,
  [130] = 23,
  [131] = 128,
  [132] = 132,
  [133] = 30,
  [134] = 58,
  [135] = 29,
  [136] = 28,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 141,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 139,
  [152] = 149,
  [153] = 153,
  [154] = 30,
  [155] = 139,
  [156] = 23,
  [157] = 153,
  [158] = 139,
  [159] = 139,
  [160] = 139,
  [161] = 139,
  [162] = 162,
  [163] = 162,
  [164] = 150,
  [165] = 162,
  [166] = 153,
  [167] = 162,
  [168] = 162,
  [169] = 162,
  [170] = 162,
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
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '(', 18,
        '/', 27,
        'A', 180,
        'C', 102,
        'D', 32,
        'G', 221,
        'I', 126,
        'L', 36,
        'M', 37,
        'P', 79,
        'R', 70,
        'V', 150,
        'a', 192,
        'c', 103,
        'g', 227,
        'i', 130,
        'l', 46,
        'm', 48,
        'p', 89,
        'r', 91,
        'v', 161,
        0x300a, 401,
        0x300b, 334,
        0x30a2, 245,
        0x30a4, 241,
        0x30dc, 248,
        0x30de, 236,
        0x30ec, 249,
        0x4e50, 256,
        0x4f5c, 262,
        0x51fa, 273,
        0x5236, 252,
        0x5382, 274,
        0x539f, 253,
        0x58f0, 250,
        0x5f55, 275,
        0x63d2, 258,
        0x6b4c, 515,
        0x6bcd, 260,
        0x6df7, 276,
        0x7de8, 263,
        0x7f16, 264,
        0x811a, 271,
        0x827a, 272,
        0xff08, 30,
        ')', 399,
        0xff09, 399,
        '|', 400,
        0xff5c, 400,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(306);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 309,
        '(', 415,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 337,
        ' ', 337,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(405);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == 0xff08) ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead == '|' ||
          lookahead == 0xff5c) ADVANCE(400);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(404);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == 0xff08) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(545);
      if (lookahead == '|' ||
          lookahead == 0xff5c) ADVANCE(400);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(9);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(546);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(10);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x300b) ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(316);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(403);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(404);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == ')') ADVANCE(541);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '(', 415,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(24);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '(', 415,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(24);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == 0x300a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(25);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(29);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(29);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(308);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'V') ADVANCE(279);
      END_STATE();
    case 35:
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(504);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(506);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(497);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(507);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(498);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 231:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 232:
      if (lookahead == 0x300a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(439);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 233:
      if (lookahead == 0x30ab) ADVANCE(243);
      END_STATE();
    case 234:
      if (lookahead == 0x30b0) ADVANCE(512);
      END_STATE();
    case 235:
      if (lookahead == 0x30b8) ADVANCE(509);
      END_STATE();
    case 236:
      if (lookahead == 0x30b9) ADVANCE(238);
      END_STATE();
    case 237:
      if (lookahead == 0x30b9) ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == 0x30bf) ADVANCE(242);
      END_STATE();
    case 239:
      if (lookahead == 0x30c8) ADVANCE(510);
      END_STATE();
    case 240:
      if (lookahead == 0x30d9) ADVANCE(244);
      END_STATE();
    case 241:
      if (lookahead == 0x30e9) ADVANCE(237);
      END_STATE();
    case 242:
      if (lookahead == 0x30ea) ADVANCE(247);
      END_STATE();
    case 243:
      if (lookahead == 0x30eb) ADVANCE(508);
      END_STATE();
    case 244:
      if (lookahead == 0x30eb) ADVANCE(511);
      END_STATE();
    case 245:
      if (lookahead == 0x30ec) ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 0x30f3) ADVANCE(235);
      END_STATE();
    case 247:
      if (lookahead == 0x30f3) ADVANCE(234);
      END_STATE();
    case 248:
      if (lookahead == 0x30fc) ADVANCE(233);
      END_STATE();
    case 249:
      if (lookahead == 0x30fc) ADVANCE(240);
      END_STATE();
    case 250:
      if (lookahead == 0x4e50) ADVANCE(536);
      END_STATE();
    case 251:
      if (lookahead == 0x4eba) ADVANCE(532);
      END_STATE();
    case 252:
      if (lookahead == 0x4f5c) ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == 0x4f5c) ADVANCE(535);
      if (lookahead == 0x66f2) ADVANCE(281);
      END_STATE();
    case 254:
      if (lookahead == 0x4f5c) ADVANCE(540);
      END_STATE();
    case 255:
      if (lookahead == 0x5236) ADVANCE(254);
      END_STATE();
    case 256:
      if (lookahead == 0x5668) ADVANCE(538);
      END_STATE();
    case 257:
      if (lookahead == 0x5668) ADVANCE(537);
      END_STATE();
    case 258:
      if (lookahead == 0x56fe) ADVANCE(531);
      END_STATE();
    case 259:
      if (lookahead == 0x5bb6) ADVANCE(513);
      END_STATE();
    case 260:
      if (lookahead == 0x5e26) ADVANCE(255);
      END_STATE();
    case 261:
      if (lookahead == 0x65b9) ADVANCE(533);
      END_STATE();
    case 262:
      if (lookahead == 0x66f2) ADVANCE(524);
      if (lookahead == 0x7de8) ADVANCE(265);
      if (lookahead == 0x7f16) ADVANCE(266);
      if (lookahead == 0x8a5e) ADVANCE(527);
      if (lookahead == 0x8bcd) ADVANCE(528);
      END_STATE();
    case 263:
      if (lookahead == 0x66f2) ADVANCE(525);
      END_STATE();
    case 264:
      if (lookahead == 0x66f2) ADVANCE(526);
      END_STATE();
    case 265:
      if (lookahead == 0x66f2) ADVANCE(522);
      END_STATE();
    case 266:
      if (lookahead == 0x66f2) ADVANCE(523);
      END_STATE();
    case 267:
      if (lookahead == 0x66f2) ADVANCE(518);
      if (lookahead == 0x7de8) ADVANCE(269);
      END_STATE();
    case 268:
      if (lookahead == 0x66f2) ADVANCE(519);
      if (lookahead == 0x7f16) ADVANCE(270);
      END_STATE();
    case 269:
      if (lookahead == 0x66f2) ADVANCE(516);
      END_STATE();
    case 270:
      if (lookahead == 0x66f2) ADVANCE(517);
      END_STATE();
    case 271:
      if (lookahead == 0x672c) ADVANCE(530);
      END_STATE();
    case 272:
      if (lookahead == 0x672f) ADVANCE(259);
      END_STATE();
    case 273:
      if (lookahead == 0x7248) ADVANCE(261);
      END_STATE();
    case 274:
      if (lookahead == 0x724c) ADVANCE(529);
      END_STATE();
    case 275:
      if (lookahead == 0x97f3) ADVANCE(534);
      END_STATE();
    case 276:
      if (lookahead == 0x97f3) ADVANCE(539);
      END_STATE();
    case 277:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(277);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 278:
      if (lookahead == ')' ||
          lookahead == 0xff09) ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(278);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(461);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 279:
      if (lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 0xff1a) ADVANCE(398);
      END_STATE();
    case 280:
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(462);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 282:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 310,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 283:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 311,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 333,
        0x300b, 335,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 542,
        ' ', 542,
        '(', 419,
        0xff08, 419,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(406);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 284:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 312,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 333,
        0x300b, 335,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 543,
        ' ', 543,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 285:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(285);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 286:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(286);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 287:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 317,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 346,
        ' ', 346,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 288:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 318,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 289:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 319,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 333,
        0x300b, 335,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 547,
        ' ', 547,
        '(', 419,
        0xff08, 419,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 290:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(291);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(385);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 291:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(291);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 292:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 320,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 548,
        ' ', 548,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 293:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(294);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(385);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 294:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(294);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 295:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(296);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(385);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 296:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(296);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 297:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 321,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 349,
        ' ', 349,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 298:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 322,
        '/', 355,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 384,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 299:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 323,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 549,
        ' ', 549,
        '(', 356,
        0xff08, 356,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 300:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 324,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 333,
        0x300b, 335,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 448,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 550,
        ' ', 550,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 301:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 325,
        '/', 355,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 384,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 302:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 326,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 551,
        ' ', 551,
        '(', 356,
        0xff08, 356,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(353);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 303:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '\n', 327,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 385,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 552,
        ' ', 552,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(354);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 304:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(305);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(385);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 305:
      if (eof) ADVANCE(307);
      if (lookahead == '\n') SKIP(305);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 306:
      if (eof) ADVANCE(307);
      ADVANCE_MAP(
        '(', 18,
        '/', 27,
        'A', 180,
        'C', 102,
        'D', 32,
        'G', 221,
        'I', 126,
        'L', 36,
        'M', 37,
        'P', 79,
        'R', 70,
        'V', 150,
        'a', 192,
        'c', 103,
        'g', 227,
        'i', 130,
        'l', 46,
        'm', 48,
        'p', 89,
        'r', 91,
        'v', 161,
        0x300a, 401,
        0x300b, 334,
        0x30a2, 245,
        0x30a4, 241,
        0x30dc, 248,
        0x30de, 236,
        0x30ec, 249,
        0x4e50, 257,
        0x4f5c, 262,
        0x51fa, 273,
        0x5236, 252,
        0x5382, 274,
        0x539f, 253,
        0x58f0, 250,
        0x5f55, 275,
        0x63d2, 258,
        0x6b4c, 515,
        0x6bcd, 260,
        0x6df7, 276,
        0x7de8, 263,
        0x7f16, 264,
        0x811a, 271,
        0x827a, 272,
        0xff08, 30,
        ')', 399,
        0xff09, 399,
        '|', 400,
        0xff5c, 400,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == 0x300a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(405);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(542);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(419);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(406);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(543);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == 0xff08) ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == 0xff08) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(545);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(546);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == 0x300a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(318);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(419);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(548);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(321);
      if (lookahead == 0x300a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(349);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(356);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(550);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(356);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(354);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 309,
        '(', 415,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 337,
        ' ', 337,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(405);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 310,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(3);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'V') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == 0x300a) ADVANCE(333);
      if (lookahead == 0x30a2) ADVANCE(378);
      if (lookahead == 0x30a4) ADVANCE(377);
      if (lookahead == 0x30dc) ADVANCE(379);
      if (lookahead == 0x30de) ADVANCE(376);
      if (lookahead == 0x30ec) ADVANCE(380);
      if (lookahead == 0x4e50) ADVANCE(386);
      if (lookahead == 0x4f5c) ADVANCE(389);
      if (lookahead == 0x51fa) ADVANCE(394);
      if (lookahead == 0x5236) ADVANCE(382);
      if (lookahead == 0x5382) ADVANCE(395);
      if (lookahead == 0x539f) ADVANCE(383);
      if (lookahead == 0x58f0) ADVANCE(381);
      if (lookahead == 0x5f55) ADVANCE(396);
      if (lookahead == 0x63d2) ADVANCE(387);
      if (lookahead == 0x6b4c) ADVANCE(515);
      if (lookahead == 0x6bcd) ADVANCE(388);
      if (lookahead == 0x6df7) ADVANCE(397);
      if (lookahead == 0x7de8) ADVANCE(390);
      if (lookahead == 0x7f16) ADVANCE(391);
      if (lookahead == 0x811a) ADVANCE(392);
      if (lookahead == 0x827a) ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == 0x300a) ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x300b) ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 317,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 346,
        ' ', 346,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 318,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 320,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 548,
        ' ', 548,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 321,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 349,
        ' ', 349,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(335);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 322,
        '/', 355,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 384,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 323,
        'A', 372,
        'C', 366,
        'D', 357,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 549,
        ' ', 549,
        '(', 356,
        0xff08, 356,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 325,
        '/', 355,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 384,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 326,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 551,
        ' ', 551,
        '(', 356,
        0xff08, 356,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(353);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 327,
        'A', 372,
        'C', 366,
        'G', 374,
        'I', 368,
        'L', 358,
        'M', 359,
        'P', 363,
        'R', 362,
        'V', 370,
        'a', 373,
        'c', 367,
        'g', 375,
        'i', 369,
        'l', 360,
        'm', 361,
        'p', 364,
        'r', 365,
        'v', 371,
        0x300a, 333,
        0x30a2, 378,
        0x30a4, 377,
        0x30dc, 379,
        0x30de, 376,
        0x30ec, 380,
        0x4e50, 386,
        0x4f5c, 389,
        0x51fa, 394,
        0x5236, 382,
        0x5382, 395,
        0x539f, 383,
        0x58f0, 381,
        0x5f55, 396,
        0x63d2, 387,
        0x6b4c, 515,
        0x6bcd, 388,
        0x6df7, 397,
        0x7de8, 390,
        0x7f16, 391,
        0x811a, 392,
        0x827a, 393,
        '\t', 552,
        ' ', 552,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(354);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(238);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(237);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(246);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(233);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(240);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(536);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(251);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(535);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(535);
      if (lookahead == 0x66f2) ADVANCE(281);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(538);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(537);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(531);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(255);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(524);
      if (lookahead == 0x7de8) ADVANCE(265);
      if (lookahead == 0x7f16) ADVANCE(266);
      if (lookahead == 0x8a5e) ADVANCE(527);
      if (lookahead == 0x8bcd) ADVANCE(528);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(525);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(526);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(530);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672f) ADVANCE(259);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(261);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(529);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(534);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(539);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token2);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token3);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_u300a2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 309,
        '(', 415,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 337,
        ' ', 337,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(405);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 311,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 542,
        ' ', 542,
        '(', 419,
        0xff08, 419,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(406);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 312,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 543,
        ' ', 543,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == 0xff08) ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead == '|' ||
          lookahead == 0xff5c) ADVANCE(400);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 317,
        'A', 435,
        'C', 429,
        'D', 420,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 346,
        ' ', 346,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 319,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 547,
        ' ', 547,
        '(', 419,
        0xff08, 419,
        '|', 400,
        0xff5c, 400,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 321,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 349,
        ' ', 349,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 324,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
        '\t', 550,
        ' ', 550,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '(', 415,
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == 0x300a) ADVANCE(401);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        'A', 435,
        'C', 429,
        'G', 437,
        'I', 431,
        'L', 421,
        'M', 422,
        'P', 426,
        'R', 425,
        'V', 433,
        'a', 436,
        'c', 430,
        'g', 438,
        'i', 432,
        'l', 423,
        'm', 424,
        'p', 427,
        'r', 428,
        'v', 434,
        0x300a, 401,
        0x30a2, 442,
        0x30a4, 441,
        0x30dc, 443,
        0x30de, 440,
        0x30ec, 444,
        0x4e50, 449,
        0x4f5c, 452,
        0x51fa, 457,
        0x5236, 446,
        0x5382, 458,
        0x539f, 447,
        0x58f0, 445,
        0x5f55, 459,
        0x63d2, 450,
        0x6b4c, 515,
        0x6bcd, 451,
        0x6df7, 460,
        0x7de8, 453,
        0x7f16, 454,
        0x811a, 455,
        0x827a, 456,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x300a) ADVANCE(401);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(439);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30b9) ADVANCE(238);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30e9) ADVANCE(237);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30ec) ADVANCE(246);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(233);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(240);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4e50) ADVANCE(536);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(251);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(535);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(538);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(537);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x56fe) ADVANCE(531);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5e26) ADVANCE(255);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(524);
      if (lookahead == 0x7de8) ADVANCE(265);
      if (lookahead == 0x7f16) ADVANCE(266);
      if (lookahead == 0x8a5e) ADVANCE(527);
      if (lookahead == 0x8bcd) ADVANCE(528);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(525);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(526);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672c) ADVANCE(530);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672f) ADVANCE(259);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x7248) ADVANCE(261);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x724c) ADVANCE(529);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(534);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(539);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ')' ||
          lookahead == 0xff09) ADVANCE(399);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(461);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(404);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__role_instrument);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Vocal);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_vocal);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_u827au672fu5bb6);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_u6b4c);
      if (lookahead == 0x5531) ADVANCE(514);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(267);
      if (lookahead == 0x66f2) ADVANCE(520);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(268);
      if (lookahead == 0x66f2) ADVANCE(521);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_parts);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(542);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(419);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(406);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(543);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == 0xff08) ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\n', 314,
        '(', 18,
        0xff08, 30,
        '\t', 545,
        ' ', 545,
        '&', 557,
        ',', 557,
        '/', 557,
        ':', 557,
        0x3000, 557,
        0x3001, 557,
        0x30fb, 557,
        0xff06, 557,
        0xff0f, 557,
        0xff1a, 557,
        0xff1b, 557,
      );
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\n', 315,
        '\t', 546,
        ' ', 546,
        '&', 557,
        ',', 557,
        '/', 557,
        ':', 557,
        0x3000, 557,
        0x3001, 557,
        0x30fb, 557,
        0xff06, 557,
        0xff0f, 557,
        0xff1a, 557,
        0xff1b, 557,
      );
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(419);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(548);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(348);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(356);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(550);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(356);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(353);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(354);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(340);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 555,
        ' ', 555,
        '&', 557,
        ',', 557,
        '/', 557,
        ':', 557,
        0x3000, 557,
        0x3001, 557,
        0x30fb, 557,
        0xff06, 557,
        0xff0f, 557,
        0xff1a, 557,
        0xff1b, 557,
      );
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(341);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 557,
        ' ', 557,
        '&', 557,
        ',', 557,
        '/', 557,
        ':', 557,
        0x3000, 557,
        0x3001, 557,
        0x30fb, 557,
        0xff06, 557,
        0xff0f, 557,
        0xff1a, 557,
        0xff1b, 557,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 304},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 282},
  [5] = {.lex_state = 287},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 297},
  [9] = {.lex_state = 288},
  [10] = {.lex_state = 304},
  [11] = {.lex_state = 297},
  [12] = {.lex_state = 283},
  [13] = {.lex_state = 283},
  [14] = {.lex_state = 289},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 290},
  [17] = {.lex_state = 304},
  [18] = {.lex_state = 289},
  [19] = {.lex_state = 304},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 304},
  [22] = {.lex_state = 304},
  [23] = {.lex_state = 299},
  [24] = {.lex_state = 284},
  [25] = {.lex_state = 284},
  [26] = {.lex_state = 290},
  [27] = {.lex_state = 290},
  [28] = {.lex_state = 298},
  [29] = {.lex_state = 298},
  [30] = {.lex_state = 299},
  [31] = {.lex_state = 299},
  [32] = {.lex_state = 301},
  [33] = {.lex_state = 298},
  [34] = {.lex_state = 302},
  [35] = {.lex_state = 298},
  [36] = {.lex_state = 292},
  [37] = {.lex_state = 301},
  [38] = {.lex_state = 298},
  [39] = {.lex_state = 302},
  [40] = {.lex_state = 292},
  [41] = {.lex_state = 300},
  [42] = {.lex_state = 298},
  [43] = {.lex_state = 300},
  [44] = {.lex_state = 292},
  [45] = {.lex_state = 302},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 301},
  [48] = {.lex_state = 303},
  [49] = {.lex_state = 292},
  [50] = {.lex_state = 301},
  [51] = {.lex_state = 292},
  [52] = {.lex_state = 292},
  [53] = {.lex_state = 303},
  [54] = {.lex_state = 303},
  [55] = {.lex_state = 301},
  [56] = {.lex_state = 292},
  [57] = {.lex_state = 301},
  [58] = {.lex_state = 292},
  [59] = {.lex_state = 303},
  [60] = {.lex_state = 303},
  [61] = {.lex_state = 282},
  [62] = {.lex_state = 303},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 282},
  [65] = {.lex_state = 293},
  [66] = {.lex_state = 293},
  [67] = {.lex_state = 282},
  [68] = {.lex_state = 282},
  [69] = {.lex_state = 303},
  [70] = {.lex_state = 303},
  [71] = {.lex_state = 304},
  [72] = {.lex_state = 304},
  [73] = {.lex_state = 304},
  [74] = {.lex_state = 288},
  [75] = {.lex_state = 293},
  [76] = {.lex_state = 304},
  [77] = {.lex_state = 295},
  [78] = {.lex_state = 295},
  [79] = {.lex_state = 288},
  [80] = {.lex_state = 288},
  [81] = {.lex_state = 288},
  [82] = {.lex_state = 293},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 290},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 290},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 304},
  [90] = {.lex_state = 304},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 285},
  [94] = {.lex_state = 285},
  [95] = {.lex_state = 285},
  [96] = {.lex_state = 286},
  [97] = {.lex_state = 286},
  [98] = {.lex_state = 286},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 286},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 232},
  [104] = {.lex_state = 232},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 232},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 232},
  [109] = {.lex_state = 232},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 232},
  [112] = {.lex_state = 232},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 232},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 285},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 285},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 278},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 278},
  [127] = {.lex_state = 286},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 286},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 277},
  [141] = {.lex_state = 277},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 277},
  [145] = {.lex_state = 277},
  [146] = {.lex_state = 277},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DISC] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(1),
    [anon_sym_u300a] = ACTIONS(1),
    [anon_sym_u300b] = ACTIONS(1),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(1),
    [aux_sym__quotable_creator_field_token2] = ACTIONS(1),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(1),
    [anon_sym_u300a2] = ACTIONS(1),
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
    [anon_sym_u6b4c] = ACTIONS(1),
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
    [sym_source_file] = STATE(143),
    [sym_disc] = STATE(117),
    [aux_sym__disc] = STATE(96),
    [sym_song] = STATE(96),
    [sym_credit_block_maybeparts] = STATE(93),
    [sym_credit_field_maybeparts] = STATE(21),
    [sym__quotable_song_title_maybecomment] = STATE(9),
    [sym__quotable_song_title] = STATE(50),
    [sym_song_title] = STATE(47),
    [sym_role] = STATE(141),
    [sym__role] = STATE(140),
    [aux_sym_source_file_repeat1] = STATE(117),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(21),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [aux_sym_song_title_repeat1] = STATE(37),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym__quotable_creator_field_maybeparts] = STATE(138),
    [sym__quotable_creator_field] = STATE(122),
    [sym__quotable_creator_name] = STATE(114),
    [sym_creator_name] = STATE(113),
    [aux_sym_creator_name_repeat1] = STATE(101),
    [anon_sym_DISC] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_u300a] = ACTIONS(13),
    [aux_sym_song_title_token1] = ACTIONS(13),
    [anon_sym_u300a2] = ACTIONS(17),
    [aux_sym_creator_name_token1] = ACTIONS(19),
    [sym__role_instrument] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(13),
    [anon_sym_compose] = ACTIONS(13),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(13),
    [anon_sym_lyric] = ACTIONS(13),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(13),
    [anon_sym_arrange] = ACTIONS(13),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(13),
    [anon_sym_illust] = ACTIONS(13),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_GuestVocal] = ACTIONS(13),
    [anon_sym_Guestvocal] = ACTIONS(13),
    [anon_sym_guestvocal] = ACTIONS(13),
    [anon_sym_Chorus] = ACTIONS(13),
    [anon_sym_chorus] = ACTIONS(13),
    [anon_sym_Mixing] = ACTIONS(13),
    [anon_sym_mixing] = ACTIONS(13),
    [anon_sym_Mastering] = ACTIONS(13),
    [anon_sym_mastering] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(13),
    [anon_sym_u827au672fu5bb6] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u6b4c] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(13),
    [anon_sym_u4f5cu8bcd] = ACTIONS(13),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
    [anon_sym_u58f0u4e50] = ACTIONS(13),
    [anon_sym_u4e50u5668] = ACTIONS(13),
    [anon_sym_u6df7u97f3] = ACTIONS(13),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(13),
    [sym_parts] = ACTIONS(23),
  },
  [3] = {
    [sym__quotable_creator_field_maybeparts] = STATE(138),
    [sym__quotable_creator_field] = STATE(122),
    [sym__quotable_creator_name] = STATE(114),
    [sym_creator_name] = STATE(113),
    [aux_sym_creator_name_repeat1] = STATE(101),
    [anon_sym_DISC] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_u300a] = ACTIONS(25),
    [aux_sym_song_title_token1] = ACTIONS(25),
    [anon_sym_u300a2] = ACTIONS(17),
    [aux_sym_creator_name_token1] = ACTIONS(19),
    [sym__role_instrument] = ACTIONS(29),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u6b4c] = ACTIONS(25),
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
    [sym_parts] = ACTIONS(23),
  },
  [4] = {
    [sym_credit_block] = STATE(118),
    [sym_credit_field] = STATE(19),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_DISC] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(33),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym__quotable_creator_field] = STATE(49),
    [sym__quotable_creator_name] = STATE(31),
    [sym_creator_name] = STATE(23),
    [aux_sym_creator_name_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_DISC] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_u300a] = ACTIONS(39),
    [aux_sym_song_title_token1] = ACTIONS(39),
    [anon_sym_u300a2] = ACTIONS(43),
    [aux_sym_creator_name_token1] = ACTIONS(45),
    [sym__role_instrument] = ACTIONS(37),
    [anon_sym_Music] = ACTIONS(39),
    [anon_sym_music] = ACTIONS(39),
    [anon_sym_Composition] = ACTIONS(39),
    [anon_sym_composition] = ACTIONS(39),
    [anon_sym_Composer] = ACTIONS(39),
    [anon_sym_composer] = ACTIONS(39),
    [anon_sym_Compose] = ACTIONS(39),
    [anon_sym_compose] = ACTIONS(39),
    [anon_sym_Lyrics] = ACTIONS(39),
    [anon_sym_lyrics] = ACTIONS(39),
    [anon_sym_Lyricist] = ACTIONS(39),
    [anon_sym_lyricist] = ACTIONS(39),
    [anon_sym_Lyric] = ACTIONS(39),
    [anon_sym_lyric] = ACTIONS(39),
    [anon_sym_Arrangement] = ACTIONS(39),
    [anon_sym_arrangement] = ACTIONS(39),
    [anon_sym_Arranger] = ACTIONS(39),
    [anon_sym_arranger] = ACTIONS(39),
    [anon_sym_Arrange] = ACTIONS(39),
    [anon_sym_arrange] = ACTIONS(39),
    [anon_sym_Vocal] = ACTIONS(39),
    [anon_sym_vocal] = ACTIONS(39),
    [anon_sym_Performer] = ACTIONS(39),
    [anon_sym_performer] = ACTIONS(39),
    [anon_sym_Illustration] = ACTIONS(39),
    [anon_sym_illustration] = ACTIONS(39),
    [anon_sym_Illust] = ACTIONS(39),
    [anon_sym_illust] = ACTIONS(39),
    [anon_sym_Label] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_Circle] = ACTIONS(39),
    [anon_sym_circle] = ACTIONS(39),
    [anon_sym_Producer] = ACTIONS(39),
    [anon_sym_producer] = ACTIONS(39),
    [anon_sym_Recording] = ACTIONS(39),
    [anon_sym_recording] = ACTIONS(39),
    [anon_sym_GuestVocal] = ACTIONS(39),
    [anon_sym_Guestvocal] = ACTIONS(39),
    [anon_sym_guestvocal] = ACTIONS(39),
    [anon_sym_Chorus] = ACTIONS(39),
    [anon_sym_chorus] = ACTIONS(39),
    [anon_sym_Mixing] = ACTIONS(39),
    [anon_sym_mixing] = ACTIONS(39),
    [anon_sym_Mastering] = ACTIONS(39),
    [anon_sym_mastering] = ACTIONS(39),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(39),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(39),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(39),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(39),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(39),
    [anon_sym_u827au672fu5bb6] = ACTIONS(39),
    [anon_sym_u6b4cu5531] = ACTIONS(39),
    [anon_sym_u6b4c] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu66f2] = ACTIONS(39),
    [anon_sym_u7de8u66f2] = ACTIONS(39),
    [anon_sym_u7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5e] = ACTIONS(39),
    [anon_sym_u4f5cu8bcd] = ACTIONS(39),
    [anon_sym_u5382u724c] = ACTIONS(39),
    [anon_sym_u811au672c] = ACTIONS(39),
    [anon_sym_u63d2u56fe] = ACTIONS(39),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(39),
    [anon_sym_u51fau7248u65b9] = ACTIONS(39),
    [anon_sym_u5f55u97f3] = ACTIONS(39),
    [anon_sym_u539fu4f5c] = ACTIONS(39),
    [anon_sym_u58f0u4e50] = ACTIONS(39),
    [anon_sym_u4e50u5668] = ACTIONS(39),
    [anon_sym_u6df7u97f3] = ACTIONS(39),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(39),
  },
  [6] = {
    [sym__quotable_creator_field] = STATE(49),
    [sym__quotable_creator_name] = STATE(31),
    [sym_creator_name] = STATE(23),
    [aux_sym_creator_name_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DISC] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
    [anon_sym_u300a2] = ACTIONS(43),
    [aux_sym_creator_name_token1] = ACTIONS(45),
    [sym__role_instrument] = ACTIONS(47),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u6b4c] = ACTIONS(49),
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
  [7] = {
    [sym__quotable_creator_field_maybeparts] = STATE(123),
    [sym__quotable_creator_field] = STATE(122),
    [sym__quotable_creator_name] = STATE(114),
    [sym_creator_name] = STATE(113),
    [sym_role] = STATE(141),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(46),
    [aux_sym_creator_name_repeat1] = STATE(101),
    [anon_sym_u300a2] = ACTIONS(17),
    [aux_sym_creator_name_token1] = ACTIONS(19),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym_parts] = ACTIONS(53),
  },
  [8] = {
    [sym__quotable_creator_field] = STATE(59),
    [sym__quotable_creator_name] = STATE(34),
    [sym_creator_name] = STATE(39),
    [aux_sym_creator_name_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_u300a] = ACTIONS(39),
    [aux_sym_song_title_token1] = ACTIONS(39),
    [anon_sym_u300a2] = ACTIONS(57),
    [aux_sym_creator_name_token1] = ACTIONS(59),
    [sym__role_instrument] = ACTIONS(37),
    [anon_sym_Music] = ACTIONS(39),
    [anon_sym_music] = ACTIONS(39),
    [anon_sym_Composition] = ACTIONS(39),
    [anon_sym_composition] = ACTIONS(39),
    [anon_sym_Composer] = ACTIONS(39),
    [anon_sym_composer] = ACTIONS(39),
    [anon_sym_Compose] = ACTIONS(39),
    [anon_sym_compose] = ACTIONS(39),
    [anon_sym_Lyrics] = ACTIONS(39),
    [anon_sym_lyrics] = ACTIONS(39),
    [anon_sym_Lyricist] = ACTIONS(39),
    [anon_sym_lyricist] = ACTIONS(39),
    [anon_sym_Lyric] = ACTIONS(39),
    [anon_sym_lyric] = ACTIONS(39),
    [anon_sym_Arrangement] = ACTIONS(39),
    [anon_sym_arrangement] = ACTIONS(39),
    [anon_sym_Arranger] = ACTIONS(39),
    [anon_sym_arranger] = ACTIONS(39),
    [anon_sym_Arrange] = ACTIONS(39),
    [anon_sym_arrange] = ACTIONS(39),
    [anon_sym_Vocal] = ACTIONS(39),
    [anon_sym_vocal] = ACTIONS(39),
    [anon_sym_Performer] = ACTIONS(39),
    [anon_sym_performer] = ACTIONS(39),
    [anon_sym_Illustration] = ACTIONS(39),
    [anon_sym_illustration] = ACTIONS(39),
    [anon_sym_Illust] = ACTIONS(39),
    [anon_sym_illust] = ACTIONS(39),
    [anon_sym_Label] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_Circle] = ACTIONS(39),
    [anon_sym_circle] = ACTIONS(39),
    [anon_sym_Producer] = ACTIONS(39),
    [anon_sym_producer] = ACTIONS(39),
    [anon_sym_Recording] = ACTIONS(39),
    [anon_sym_recording] = ACTIONS(39),
    [anon_sym_GuestVocal] = ACTIONS(39),
    [anon_sym_Guestvocal] = ACTIONS(39),
    [anon_sym_guestvocal] = ACTIONS(39),
    [anon_sym_Chorus] = ACTIONS(39),
    [anon_sym_chorus] = ACTIONS(39),
    [anon_sym_Mixing] = ACTIONS(39),
    [anon_sym_mixing] = ACTIONS(39),
    [anon_sym_Mastering] = ACTIONS(39),
    [anon_sym_mastering] = ACTIONS(39),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(39),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(39),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(39),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(39),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(39),
    [anon_sym_u827au672fu5bb6] = ACTIONS(39),
    [anon_sym_u6b4cu5531] = ACTIONS(39),
    [anon_sym_u6b4c] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu66f2] = ACTIONS(39),
    [anon_sym_u7de8u66f2] = ACTIONS(39),
    [anon_sym_u7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5e] = ACTIONS(39),
    [anon_sym_u4f5cu8bcd] = ACTIONS(39),
    [anon_sym_u5382u724c] = ACTIONS(39),
    [anon_sym_u811au672c] = ACTIONS(39),
    [anon_sym_u63d2u56fe] = ACTIONS(39),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(39),
    [anon_sym_u51fau7248u65b9] = ACTIONS(39),
    [anon_sym_u5f55u97f3] = ACTIONS(39),
    [anon_sym_u539fu4f5c] = ACTIONS(39),
    [anon_sym_u58f0u4e50] = ACTIONS(39),
    [anon_sym_u4e50u5668] = ACTIONS(39),
    [anon_sym_u6df7u97f3] = ACTIONS(39),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(39),
  },
  [9] = {
    [sym_credit_block] = STATE(129),
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_u300a] = ACTIONS(33),
    [aux_sym_song_title_token1] = ACTIONS(33),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym_credit_block] = STATE(120),
    [sym_credit_field] = STATE(19),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_DISC] = ACTIONS(65),
    [anon_sym_u300a] = ACTIONS(65),
    [aux_sym_song_title_token1] = ACTIONS(65),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym__quotable_creator_field] = STATE(59),
    [sym__quotable_creator_name] = STATE(34),
    [sym_creator_name] = STATE(39),
    [aux_sym_creator_name_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
    [anon_sym_u300a2] = ACTIONS(57),
    [aux_sym_creator_name_token1] = ACTIONS(59),
    [sym__role_instrument] = ACTIONS(47),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u6b4c] = ACTIONS(49),
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
  [12] = {
    [aux_sym_creator_name_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DISC] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(71),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(71),
    [aux_sym_creator_name_token1] = ACTIONS(73),
    [sym__role_instrument] = ACTIONS(69),
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
    [anon_sym_GuestVocal] = ACTIONS(71),
    [anon_sym_Guestvocal] = ACTIONS(71),
    [anon_sym_guestvocal] = ACTIONS(71),
    [anon_sym_Chorus] = ACTIONS(71),
    [anon_sym_chorus] = ACTIONS(71),
    [anon_sym_Mixing] = ACTIONS(71),
    [anon_sym_mixing] = ACTIONS(71),
    [anon_sym_Mastering] = ACTIONS(71),
    [anon_sym_mastering] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(71),
    [anon_sym_u827au672fu5bb6] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u6b4c] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u4f5cu8bcd] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
    [anon_sym_u58f0u4e50] = ACTIONS(71),
    [anon_sym_u4e50u5668] = ACTIONS(71),
    [anon_sym_u6df7u97f3] = ACTIONS(71),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(71),
    [sym__sep] = ACTIONS(71),
  },
  [13] = {
    [aux_sym_creator_name_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_DISC] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_u300a] = ACTIONS(78),
    [aux_sym_song_title_token1] = ACTIONS(78),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(78),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(78),
    [aux_sym_creator_name_token1] = ACTIONS(80),
    [sym__role_instrument] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(78),
    [anon_sym_Guestvocal] = ACTIONS(78),
    [anon_sym_guestvocal] = ACTIONS(78),
    [anon_sym_Chorus] = ACTIONS(78),
    [anon_sym_chorus] = ACTIONS(78),
    [anon_sym_Mixing] = ACTIONS(78),
    [anon_sym_mixing] = ACTIONS(78),
    [anon_sym_Mastering] = ACTIONS(78),
    [anon_sym_mastering] = ACTIONS(78),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(78),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(78),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(78),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(78),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(78),
    [anon_sym_u827au672fu5bb6] = ACTIONS(78),
    [anon_sym_u6b4cu5531] = ACTIONS(78),
    [anon_sym_u6b4c] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu66f2] = ACTIONS(78),
    [anon_sym_u7de8u66f2] = ACTIONS(78),
    [anon_sym_u7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5e] = ACTIONS(78),
    [anon_sym_u4f5cu8bcd] = ACTIONS(78),
    [anon_sym_u5382u724c] = ACTIONS(78),
    [anon_sym_u811au672c] = ACTIONS(78),
    [anon_sym_u63d2u56fe] = ACTIONS(78),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(78),
    [anon_sym_u51fau7248u65b9] = ACTIONS(78),
    [anon_sym_u5f55u97f3] = ACTIONS(78),
    [anon_sym_u539fu4f5c] = ACTIONS(78),
    [anon_sym_u58f0u4e50] = ACTIONS(78),
    [anon_sym_u4e50u5668] = ACTIONS(78),
    [anon_sym_u6df7u97f3] = ACTIONS(78),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(78),
    [sym__sep] = ACTIONS(78),
  },
  [14] = {
    [aux_sym_creator_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(71),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(71),
    [aux_sym_creator_name_token1] = ACTIONS(82),
    [sym__role_instrument] = ACTIONS(69),
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
    [anon_sym_GuestVocal] = ACTIONS(71),
    [anon_sym_Guestvocal] = ACTIONS(71),
    [anon_sym_guestvocal] = ACTIONS(71),
    [anon_sym_Chorus] = ACTIONS(71),
    [anon_sym_chorus] = ACTIONS(71),
    [anon_sym_Mixing] = ACTIONS(71),
    [anon_sym_mixing] = ACTIONS(71),
    [anon_sym_Mastering] = ACTIONS(71),
    [anon_sym_mastering] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(71),
    [anon_sym_u827au672fu5bb6] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u6b4c] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u4f5cu8bcd] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
    [anon_sym_u58f0u4e50] = ACTIONS(71),
    [anon_sym_u4e50u5668] = ACTIONS(71),
    [anon_sym_u6df7u97f3] = ACTIONS(71),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(71),
    [sym__sep] = ACTIONS(71),
  },
  [15] = {
    [sym__quotable_creator_field] = STATE(36),
    [sym__quotable_creator_name] = STATE(31),
    [sym_creator_name] = STATE(23),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(63),
    [aux_sym_creator_name_repeat1] = STATE(13),
    [anon_sym_u300a2] = ACTIONS(43),
    [aux_sym_creator_name_token1] = ACTIONS(45),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym_credit_block] = STATE(127),
    [sym_credit_field] = STATE(26),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_u300a] = ACTIONS(65),
    [aux_sym_song_title_token1] = ACTIONS(65),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
  [17] = {
    [sym_credit_field] = STATE(17),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_DISC] = ACTIONS(87),
    [anon_sym_u300a] = ACTIONS(87),
    [aux_sym_song_title_token1] = ACTIONS(87),
    [sym__role_instrument] = ACTIONS(89),
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
    [anon_sym_u6b4c] = ACTIONS(92),
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
  [18] = {
    [aux_sym_creator_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_u300a] = ACTIONS(78),
    [aux_sym_song_title_token1] = ACTIONS(78),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(78),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(78),
    [aux_sym_creator_name_token1] = ACTIONS(95),
    [sym__role_instrument] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(78),
    [anon_sym_Guestvocal] = ACTIONS(78),
    [anon_sym_guestvocal] = ACTIONS(78),
    [anon_sym_Chorus] = ACTIONS(78),
    [anon_sym_chorus] = ACTIONS(78),
    [anon_sym_Mixing] = ACTIONS(78),
    [anon_sym_mixing] = ACTIONS(78),
    [anon_sym_Mastering] = ACTIONS(78),
    [anon_sym_mastering] = ACTIONS(78),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(78),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(78),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(78),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(78),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(78),
    [anon_sym_u827au672fu5bb6] = ACTIONS(78),
    [anon_sym_u6b4cu5531] = ACTIONS(78),
    [anon_sym_u6b4c] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu66f2] = ACTIONS(78),
    [anon_sym_u7de8u66f2] = ACTIONS(78),
    [anon_sym_u7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5e] = ACTIONS(78),
    [anon_sym_u4f5cu8bcd] = ACTIONS(78),
    [anon_sym_u5382u724c] = ACTIONS(78),
    [anon_sym_u811au672c] = ACTIONS(78),
    [anon_sym_u63d2u56fe] = ACTIONS(78),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(78),
    [anon_sym_u51fau7248u65b9] = ACTIONS(78),
    [anon_sym_u5f55u97f3] = ACTIONS(78),
    [anon_sym_u539fu4f5c] = ACTIONS(78),
    [anon_sym_u58f0u4e50] = ACTIONS(78),
    [anon_sym_u4e50u5668] = ACTIONS(78),
    [anon_sym_u6df7u97f3] = ACTIONS(78),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(78),
    [sym__sep] = ACTIONS(78),
  },
  [19] = {
    [sym_credit_field] = STATE(17),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(15),
    [aux_sym_credit_block_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_DISC] = ACTIONS(99),
    [anon_sym_u300a] = ACTIONS(99),
    [aux_sym_song_title_token1] = ACTIONS(99),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
  [20] = {
    [sym__quotable_creator_field] = STATE(53),
    [sym__quotable_creator_name] = STATE(34),
    [sym_creator_name] = STATE(39),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(63),
    [aux_sym_creator_name_repeat1] = STATE(18),
    [anon_sym_u300a2] = ACTIONS(57),
    [aux_sym_creator_name_token1] = ACTIONS(59),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym_credit_field_maybeparts] = STATE(22),
    [sym_role] = STATE(141),
    [sym__role] = STATE(140),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(22),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [anon_sym_DISC] = ACTIONS(101),
    [anon_sym_u300a] = ACTIONS(101),
    [aux_sym_song_title_token1] = ACTIONS(101),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
    [sym_credit_field_maybeparts] = STATE(22),
    [sym_role] = STATE(141),
    [sym__role] = STATE(140),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(22),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(7),
    [anon_sym_DISC] = ACTIONS(103),
    [anon_sym_u300a] = ACTIONS(103),
    [aux_sym_song_title_token1] = ACTIONS(103),
    [sym__role_instrument] = ACTIONS(105),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(108),
    [anon_sym_u6b4cu5531] = ACTIONS(108),
    [anon_sym_u6b4c] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(108),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu66f2] = ACTIONS(108),
    [anon_sym_u7de8u66f2] = ACTIONS(108),
    [anon_sym_u7f16u66f2] = ACTIONS(108),
    [anon_sym_u4f5cu8a5e] = ACTIONS(108),
    [anon_sym_u4f5cu8bcd] = ACTIONS(108),
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
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_DISC] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(113),
    [aux_sym_song_title_token1] = ACTIONS(113),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(113),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(113),
    [sym__role_instrument] = ACTIONS(111),
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
    [anon_sym_GuestVocal] = ACTIONS(113),
    [anon_sym_Guestvocal] = ACTIONS(113),
    [anon_sym_guestvocal] = ACTIONS(113),
    [anon_sym_Chorus] = ACTIONS(113),
    [anon_sym_chorus] = ACTIONS(113),
    [anon_sym_Mixing] = ACTIONS(113),
    [anon_sym_mixing] = ACTIONS(113),
    [anon_sym_Mastering] = ACTIONS(113),
    [anon_sym_mastering] = ACTIONS(113),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(113),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(113),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(113),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(113),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(113),
    [anon_sym_u827au672fu5bb6] = ACTIONS(113),
    [anon_sym_u6b4cu5531] = ACTIONS(113),
    [anon_sym_u6b4c] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu66f2] = ACTIONS(113),
    [anon_sym_u7de8u66f2] = ACTIONS(113),
    [anon_sym_u7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5e] = ACTIONS(113),
    [anon_sym_u4f5cu8bcd] = ACTIONS(113),
    [anon_sym_u5382u724c] = ACTIONS(113),
    [anon_sym_u811au672c] = ACTIONS(113),
    [anon_sym_u63d2u56fe] = ACTIONS(113),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(113),
    [anon_sym_u51fau7248u65b9] = ACTIONS(113),
    [anon_sym_u5f55u97f3] = ACTIONS(113),
    [anon_sym_u539fu4f5c] = ACTIONS(113),
    [anon_sym_u58f0u4e50] = ACTIONS(113),
    [anon_sym_u4e50u5668] = ACTIONS(113),
    [anon_sym_u6df7u97f3] = ACTIONS(113),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(113),
    [sym__sep] = ACTIONS(113),
  },
  [24] = {
    [aux_sym_creator_name_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DISC] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [aux_sym_creator_name_token1] = ACTIONS(115),
    [sym__role_instrument] = ACTIONS(69),
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
    [anon_sym_GuestVocal] = ACTIONS(71),
    [anon_sym_Guestvocal] = ACTIONS(71),
    [anon_sym_guestvocal] = ACTIONS(71),
    [anon_sym_Chorus] = ACTIONS(71),
    [anon_sym_chorus] = ACTIONS(71),
    [anon_sym_Mixing] = ACTIONS(71),
    [anon_sym_mixing] = ACTIONS(71),
    [anon_sym_Mastering] = ACTIONS(71),
    [anon_sym_mastering] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(71),
    [anon_sym_u827au672fu5bb6] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u6b4c] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u4f5cu8bcd] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
    [anon_sym_u58f0u4e50] = ACTIONS(71),
    [anon_sym_u4e50u5668] = ACTIONS(71),
    [anon_sym_u6df7u97f3] = ACTIONS(71),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(71),
    [sym__sep] = ACTIONS(71),
  },
  [25] = {
    [aux_sym_creator_name_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_DISC] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_u300a] = ACTIONS(78),
    [aux_sym_song_title_token1] = ACTIONS(78),
    [aux_sym_creator_name_token1] = ACTIONS(118),
    [sym__role_instrument] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(78),
    [anon_sym_Guestvocal] = ACTIONS(78),
    [anon_sym_guestvocal] = ACTIONS(78),
    [anon_sym_Chorus] = ACTIONS(78),
    [anon_sym_chorus] = ACTIONS(78),
    [anon_sym_Mixing] = ACTIONS(78),
    [anon_sym_mixing] = ACTIONS(78),
    [anon_sym_Mastering] = ACTIONS(78),
    [anon_sym_mastering] = ACTIONS(78),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(78),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(78),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(78),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(78),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(78),
    [anon_sym_u827au672fu5bb6] = ACTIONS(78),
    [anon_sym_u6b4cu5531] = ACTIONS(78),
    [anon_sym_u6b4c] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu66f2] = ACTIONS(78),
    [anon_sym_u7de8u66f2] = ACTIONS(78),
    [anon_sym_u7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5e] = ACTIONS(78),
    [anon_sym_u4f5cu8bcd] = ACTIONS(78),
    [anon_sym_u5382u724c] = ACTIONS(78),
    [anon_sym_u811au672c] = ACTIONS(78),
    [anon_sym_u63d2u56fe] = ACTIONS(78),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(78),
    [anon_sym_u51fau7248u65b9] = ACTIONS(78),
    [anon_sym_u5f55u97f3] = ACTIONS(78),
    [anon_sym_u539fu4f5c] = ACTIONS(78),
    [anon_sym_u58f0u4e50] = ACTIONS(78),
    [anon_sym_u4e50u5668] = ACTIONS(78),
    [anon_sym_u6df7u97f3] = ACTIONS(78),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(78),
    [sym__sep] = ACTIONS(78),
  },
  [26] = {
    [sym_credit_field] = STATE(27),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_u300a] = ACTIONS(99),
    [aux_sym_song_title_token1] = ACTIONS(99),
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
    [anon_sym_u6b4c] = ACTIONS(11),
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
  [27] = {
    [sym_credit_field] = STATE(27),
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_block_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_u300a] = ACTIONS(87),
    [aux_sym_song_title_token1] = ACTIONS(87),
    [sym__role_instrument] = ACTIONS(89),
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
    [anon_sym_u6b4c] = ACTIONS(92),
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
  [28] = {
    [aux_sym_song_title_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_DISC] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(122),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(124),
    [sym__role_instrument] = ACTIONS(120),
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
    [anon_sym_u6b4c] = ACTIONS(122),
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
  [29] = {
    [aux_sym_song_title_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_DISC] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(129),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(129),
    [anon_sym_u300a] = ACTIONS(129),
    [aux_sym_song_title_token1] = ACTIONS(131),
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
    [anon_sym_u6b4c] = ACTIONS(129),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DISC] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_u300a] = ACTIONS(135),
    [aux_sym_song_title_token1] = ACTIONS(135),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(135),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(135),
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
    [anon_sym_u6b4c] = ACTIONS(135),
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
    [sym__sep] = ACTIONS(135),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_DISC] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [aux_sym_song_title_token1] = ACTIONS(139),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(141),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(143),
    [sym__role_instrument] = ACTIONS(137),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u6b4c] = ACTIONS(139),
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
    [sym__sep] = ACTIONS(139),
  },
  [32] = {
    [aux_sym_song_title_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(122),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(145),
    [sym__role_instrument] = ACTIONS(120),
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
    [anon_sym_u6b4c] = ACTIONS(122),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_DISC] = ACTIONS(150),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_SLASH_SLASH] = ACTIONS(154),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(156),
    [anon_sym_u300a] = ACTIONS(150),
    [aux_sym_song_title_token1] = ACTIONS(150),
    [sym__role_instrument] = ACTIONS(148),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(150),
    [anon_sym_u6b4cu5531] = ACTIONS(150),
    [anon_sym_u6b4c] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu66f2] = ACTIONS(150),
    [anon_sym_u7de8u66f2] = ACTIONS(150),
    [anon_sym_u7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5e] = ACTIONS(150),
    [anon_sym_u4f5cu8bcd] = ACTIONS(150),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_u300a] = ACTIONS(139),
    [aux_sym_song_title_token1] = ACTIONS(139),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(158),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(160),
    [sym__role_instrument] = ACTIONS(137),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(139),
    [anon_sym_u6b4cu5531] = ACTIONS(139),
    [anon_sym_u6b4c] = ACTIONS(139),
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
    [sym__sep] = ACTIONS(139),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DISC] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(168),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
    [sym__role_instrument] = ACTIONS(162),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(164),
    [anon_sym_u6b4cu5531] = ACTIONS(164),
    [anon_sym_u6b4c] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu66f2] = ACTIONS(164),
    [anon_sym_u7de8u66f2] = ACTIONS(164),
    [anon_sym_u7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5e] = ACTIONS(164),
    [anon_sym_u4f5cu8bcd] = ACTIONS(164),
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
  },
  [36] = {
    [aux_sym_credit_field_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DISC] = ACTIONS(172),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [sym__role_instrument] = ACTIONS(170),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u6b4c] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u4f5cu8bcd] = ACTIONS(172),
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
    [sym__sep] = ACTIONS(176),
  },
  [37] = {
    [aux_sym_song_title_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(129),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(129),
    [anon_sym_u300a] = ACTIONS(129),
    [aux_sym_song_title_token1] = ACTIONS(178),
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
    [anon_sym_u6b4c] = ACTIONS(129),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DISC] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(182),
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [sym__role_instrument] = ACTIONS(180),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u6b4c] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u4f5cu8bcd] = ACTIONS(182),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(113),
    [aux_sym_song_title_token1] = ACTIONS(113),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(113),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(113),
    [sym__role_instrument] = ACTIONS(111),
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
    [anon_sym_GuestVocal] = ACTIONS(113),
    [anon_sym_Guestvocal] = ACTIONS(113),
    [anon_sym_guestvocal] = ACTIONS(113),
    [anon_sym_Chorus] = ACTIONS(113),
    [anon_sym_chorus] = ACTIONS(113),
    [anon_sym_Mixing] = ACTIONS(113),
    [anon_sym_mixing] = ACTIONS(113),
    [anon_sym_Mastering] = ACTIONS(113),
    [anon_sym_mastering] = ACTIONS(113),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(113),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(113),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(113),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(113),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(113),
    [anon_sym_u827au672fu5bb6] = ACTIONS(113),
    [anon_sym_u6b4cu5531] = ACTIONS(113),
    [anon_sym_u6b4c] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu66f2] = ACTIONS(113),
    [anon_sym_u7de8u66f2] = ACTIONS(113),
    [anon_sym_u7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5e] = ACTIONS(113),
    [anon_sym_u4f5cu8bcd] = ACTIONS(113),
    [anon_sym_u5382u724c] = ACTIONS(113),
    [anon_sym_u811au672c] = ACTIONS(113),
    [anon_sym_u63d2u56fe] = ACTIONS(113),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(113),
    [anon_sym_u51fau7248u65b9] = ACTIONS(113),
    [anon_sym_u5f55u97f3] = ACTIONS(113),
    [anon_sym_u539fu4f5c] = ACTIONS(113),
    [anon_sym_u58f0u4e50] = ACTIONS(113),
    [anon_sym_u4e50u5668] = ACTIONS(113),
    [anon_sym_u6df7u97f3] = ACTIONS(113),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(113),
    [sym__sep] = ACTIONS(113),
  },
  [40] = {
    [aux_sym_credit_field_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_DISC] = ACTIONS(186),
    [anon_sym_LF] = ACTIONS(186),
    [anon_sym_u300a] = ACTIONS(186),
    [aux_sym_song_title_token1] = ACTIONS(186),
    [sym__role_instrument] = ACTIONS(184),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(186),
    [anon_sym_u6b4cu5531] = ACTIONS(186),
    [anon_sym_u6b4c] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu66f2] = ACTIONS(186),
    [anon_sym_u7de8u66f2] = ACTIONS(186),
    [anon_sym_u7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5e] = ACTIONS(186),
    [anon_sym_u4f5cu8bcd] = ACTIONS(186),
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
    [sym__sep] = ACTIONS(188),
  },
  [41] = {
    [aux_sym_creator_name_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_u300a] = ACTIONS(78),
    [aux_sym_song_title_token1] = ACTIONS(78),
    [aux_sym_creator_name_token1] = ACTIONS(191),
    [sym__role_instrument] = ACTIONS(76),
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
    [anon_sym_GuestVocal] = ACTIONS(78),
    [anon_sym_Guestvocal] = ACTIONS(78),
    [anon_sym_guestvocal] = ACTIONS(78),
    [anon_sym_Chorus] = ACTIONS(78),
    [anon_sym_chorus] = ACTIONS(78),
    [anon_sym_Mixing] = ACTIONS(78),
    [anon_sym_mixing] = ACTIONS(78),
    [anon_sym_Mastering] = ACTIONS(78),
    [anon_sym_mastering] = ACTIONS(78),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(78),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(78),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(78),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(78),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(78),
    [anon_sym_u827au672fu5bb6] = ACTIONS(78),
    [anon_sym_u6b4cu5531] = ACTIONS(78),
    [anon_sym_u6b4c] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu66f2] = ACTIONS(78),
    [anon_sym_u7de8u66f2] = ACTIONS(78),
    [anon_sym_u7f16u66f2] = ACTIONS(78),
    [anon_sym_u4f5cu8a5e] = ACTIONS(78),
    [anon_sym_u4f5cu8bcd] = ACTIONS(78),
    [anon_sym_u5382u724c] = ACTIONS(78),
    [anon_sym_u811au672c] = ACTIONS(78),
    [anon_sym_u63d2u56fe] = ACTIONS(78),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(78),
    [anon_sym_u51fau7248u65b9] = ACTIONS(78),
    [anon_sym_u5f55u97f3] = ACTIONS(78),
    [anon_sym_u539fu4f5c] = ACTIONS(78),
    [anon_sym_u58f0u4e50] = ACTIONS(78),
    [anon_sym_u4e50u5668] = ACTIONS(78),
    [anon_sym_u6df7u97f3] = ACTIONS(78),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(78),
    [sym__sep] = ACTIONS(78),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_DISC] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SLASH_SLASH] = ACTIONS(195),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(195),
    [anon_sym_u300a] = ACTIONS(195),
    [aux_sym_song_title_token1] = ACTIONS(195),
    [sym__role_instrument] = ACTIONS(193),
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
    [anon_sym_u6b4c] = ACTIONS(195),
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
  [43] = {
    [aux_sym_creator_name_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_u300a] = ACTIONS(71),
    [aux_sym_song_title_token1] = ACTIONS(71),
    [aux_sym_creator_name_token1] = ACTIONS(197),
    [sym__role_instrument] = ACTIONS(69),
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
    [anon_sym_GuestVocal] = ACTIONS(71),
    [anon_sym_Guestvocal] = ACTIONS(71),
    [anon_sym_guestvocal] = ACTIONS(71),
    [anon_sym_Chorus] = ACTIONS(71),
    [anon_sym_chorus] = ACTIONS(71),
    [anon_sym_Mixing] = ACTIONS(71),
    [anon_sym_mixing] = ACTIONS(71),
    [anon_sym_Mastering] = ACTIONS(71),
    [anon_sym_mastering] = ACTIONS(71),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(71),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(71),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(71),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(71),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(71),
    [anon_sym_u827au672fu5bb6] = ACTIONS(71),
    [anon_sym_u6b4cu5531] = ACTIONS(71),
    [anon_sym_u6b4c] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu66f2] = ACTIONS(71),
    [anon_sym_u7de8u66f2] = ACTIONS(71),
    [anon_sym_u7f16u66f2] = ACTIONS(71),
    [anon_sym_u4f5cu8a5e] = ACTIONS(71),
    [anon_sym_u4f5cu8bcd] = ACTIONS(71),
    [anon_sym_u5382u724c] = ACTIONS(71),
    [anon_sym_u811au672c] = ACTIONS(71),
    [anon_sym_u63d2u56fe] = ACTIONS(71),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(71),
    [anon_sym_u51fau7248u65b9] = ACTIONS(71),
    [anon_sym_u5f55u97f3] = ACTIONS(71),
    [anon_sym_u539fu4f5c] = ACTIONS(71),
    [anon_sym_u58f0u4e50] = ACTIONS(71),
    [anon_sym_u4e50u5668] = ACTIONS(71),
    [anon_sym_u6df7u97f3] = ACTIONS(71),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(71),
    [sym__sep] = ACTIONS(71),
  },
  [44] = {
    [aux_sym_credit_field_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_DISC] = ACTIONS(202),
    [anon_sym_LF] = ACTIONS(204),
    [anon_sym_u300a] = ACTIONS(202),
    [aux_sym_song_title_token1] = ACTIONS(202),
    [sym__role_instrument] = ACTIONS(200),
    [anon_sym_Music] = ACTIONS(202),
    [anon_sym_music] = ACTIONS(202),
    [anon_sym_Composition] = ACTIONS(202),
    [anon_sym_composition] = ACTIONS(202),
    [anon_sym_Composer] = ACTIONS(202),
    [anon_sym_composer] = ACTIONS(202),
    [anon_sym_Compose] = ACTIONS(202),
    [anon_sym_compose] = ACTIONS(202),
    [anon_sym_Lyrics] = ACTIONS(202),
    [anon_sym_lyrics] = ACTIONS(202),
    [anon_sym_Lyricist] = ACTIONS(202),
    [anon_sym_lyricist] = ACTIONS(202),
    [anon_sym_Lyric] = ACTIONS(202),
    [anon_sym_lyric] = ACTIONS(202),
    [anon_sym_Arrangement] = ACTIONS(202),
    [anon_sym_arrangement] = ACTIONS(202),
    [anon_sym_Arranger] = ACTIONS(202),
    [anon_sym_arranger] = ACTIONS(202),
    [anon_sym_Arrange] = ACTIONS(202),
    [anon_sym_arrange] = ACTIONS(202),
    [anon_sym_Vocal] = ACTIONS(202),
    [anon_sym_vocal] = ACTIONS(202),
    [anon_sym_Performer] = ACTIONS(202),
    [anon_sym_performer] = ACTIONS(202),
    [anon_sym_Illustration] = ACTIONS(202),
    [anon_sym_illustration] = ACTIONS(202),
    [anon_sym_Illust] = ACTIONS(202),
    [anon_sym_illust] = ACTIONS(202),
    [anon_sym_Label] = ACTIONS(202),
    [anon_sym_label] = ACTIONS(202),
    [anon_sym_Circle] = ACTIONS(202),
    [anon_sym_circle] = ACTIONS(202),
    [anon_sym_Producer] = ACTIONS(202),
    [anon_sym_producer] = ACTIONS(202),
    [anon_sym_Recording] = ACTIONS(202),
    [anon_sym_recording] = ACTIONS(202),
    [anon_sym_GuestVocal] = ACTIONS(202),
    [anon_sym_Guestvocal] = ACTIONS(202),
    [anon_sym_guestvocal] = ACTIONS(202),
    [anon_sym_Chorus] = ACTIONS(202),
    [anon_sym_chorus] = ACTIONS(202),
    [anon_sym_Mixing] = ACTIONS(202),
    [anon_sym_mixing] = ACTIONS(202),
    [anon_sym_Mastering] = ACTIONS(202),
    [anon_sym_mastering] = ACTIONS(202),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(202),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(202),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(202),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(202),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(202),
    [anon_sym_u827au672fu5bb6] = ACTIONS(202),
    [anon_sym_u6b4cu5531] = ACTIONS(202),
    [anon_sym_u6b4c] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu66f2] = ACTIONS(202),
    [anon_sym_u7de8u66f2] = ACTIONS(202),
    [anon_sym_u7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5e] = ACTIONS(202),
    [anon_sym_u4f5cu8bcd] = ACTIONS(202),
    [anon_sym_u5382u724c] = ACTIONS(202),
    [anon_sym_u811au672c] = ACTIONS(202),
    [anon_sym_u63d2u56fe] = ACTIONS(202),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(202),
    [anon_sym_u51fau7248u65b9] = ACTIONS(202),
    [anon_sym_u5f55u97f3] = ACTIONS(202),
    [anon_sym_u539fu4f5c] = ACTIONS(202),
    [anon_sym_u58f0u4e50] = ACTIONS(202),
    [anon_sym_u4e50u5668] = ACTIONS(202),
    [anon_sym_u6df7u97f3] = ACTIONS(202),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(202),
    [sym__sep] = ACTIONS(206),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_u300a] = ACTIONS(135),
    [aux_sym_song_title_token1] = ACTIONS(135),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(135),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(135),
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
    [anon_sym_u6b4c] = ACTIONS(135),
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
    [sym__sep] = ACTIONS(135),
  },
  [46] = {
    [sym_role] = STATE(141),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(46),
    [anon_sym_u300a2] = ACTIONS(208),
    [aux_sym_creator_name_token1] = ACTIONS(208),
    [sym__role_instrument] = ACTIONS(210),
    [anon_sym_Music] = ACTIONS(213),
    [anon_sym_music] = ACTIONS(213),
    [anon_sym_Composition] = ACTIONS(213),
    [anon_sym_composition] = ACTIONS(213),
    [anon_sym_Composer] = ACTIONS(213),
    [anon_sym_composer] = ACTIONS(213),
    [anon_sym_Compose] = ACTIONS(213),
    [anon_sym_compose] = ACTIONS(213),
    [anon_sym_Lyrics] = ACTIONS(213),
    [anon_sym_lyrics] = ACTIONS(213),
    [anon_sym_Lyricist] = ACTIONS(213),
    [anon_sym_lyricist] = ACTIONS(213),
    [anon_sym_Lyric] = ACTIONS(213),
    [anon_sym_lyric] = ACTIONS(213),
    [anon_sym_Arrangement] = ACTIONS(213),
    [anon_sym_arrangement] = ACTIONS(213),
    [anon_sym_Arranger] = ACTIONS(213),
    [anon_sym_arranger] = ACTIONS(213),
    [anon_sym_Arrange] = ACTIONS(213),
    [anon_sym_arrange] = ACTIONS(213),
    [anon_sym_Vocal] = ACTIONS(213),
    [anon_sym_vocal] = ACTIONS(213),
    [anon_sym_Performer] = ACTIONS(213),
    [anon_sym_performer] = ACTIONS(213),
    [anon_sym_Illustration] = ACTIONS(213),
    [anon_sym_illustration] = ACTIONS(213),
    [anon_sym_Illust] = ACTIONS(213),
    [anon_sym_illust] = ACTIONS(213),
    [anon_sym_Label] = ACTIONS(213),
    [anon_sym_label] = ACTIONS(213),
    [anon_sym_Circle] = ACTIONS(213),
    [anon_sym_circle] = ACTIONS(213),
    [anon_sym_Producer] = ACTIONS(213),
    [anon_sym_producer] = ACTIONS(213),
    [anon_sym_Recording] = ACTIONS(213),
    [anon_sym_recording] = ACTIONS(213),
    [anon_sym_GuestVocal] = ACTIONS(213),
    [anon_sym_Guestvocal] = ACTIONS(213),
    [anon_sym_guestvocal] = ACTIONS(213),
    [anon_sym_Chorus] = ACTIONS(213),
    [anon_sym_chorus] = ACTIONS(213),
    [anon_sym_Mixing] = ACTIONS(213),
    [anon_sym_mixing] = ACTIONS(213),
    [anon_sym_Mastering] = ACTIONS(213),
    [anon_sym_mastering] = ACTIONS(213),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(213),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(213),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(213),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(213),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(213),
    [anon_sym_u827au672fu5bb6] = ACTIONS(213),
    [anon_sym_u6b4cu5531] = ACTIONS(213),
    [anon_sym_u6b4c] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu66f2] = ACTIONS(213),
    [anon_sym_u7de8u66f2] = ACTIONS(213),
    [anon_sym_u7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5e] = ACTIONS(213),
    [anon_sym_u4f5cu8bcd] = ACTIONS(213),
    [anon_sym_u5382u724c] = ACTIONS(213),
    [anon_sym_u811au672c] = ACTIONS(213),
    [anon_sym_u63d2u56fe] = ACTIONS(213),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(213),
    [anon_sym_u51fau7248u65b9] = ACTIONS(213),
    [anon_sym_u5f55u97f3] = ACTIONS(213),
    [anon_sym_u539fu4f5c] = ACTIONS(213),
    [anon_sym_u58f0u4e50] = ACTIONS(213),
    [anon_sym_u4e50u5668] = ACTIONS(213),
    [anon_sym_u6df7u97f3] = ACTIONS(213),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(213),
    [sym_parts] = ACTIONS(208),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(182),
    [anon_sym_u300a] = ACTIONS(182),
    [aux_sym_song_title_token1] = ACTIONS(182),
    [sym__role_instrument] = ACTIONS(180),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(182),
    [anon_sym_u6b4cu5531] = ACTIONS(182),
    [anon_sym_u6b4c] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu66f2] = ACTIONS(182),
    [anon_sym_u7de8u66f2] = ACTIONS(182),
    [anon_sym_u7f16u66f2] = ACTIONS(182),
    [anon_sym_u4f5cu8a5e] = ACTIONS(182),
    [anon_sym_u4f5cu8bcd] = ACTIONS(182),
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
  [48] = {
    [aux_sym_credit_field_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(186),
    [anon_sym_u300a] = ACTIONS(186),
    [aux_sym_song_title_token1] = ACTIONS(186),
    [sym__role_instrument] = ACTIONS(184),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(186),
    [anon_sym_u6b4cu5531] = ACTIONS(186),
    [anon_sym_u6b4c] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu66f2] = ACTIONS(186),
    [anon_sym_u7de8u66f2] = ACTIONS(186),
    [anon_sym_u7f16u66f2] = ACTIONS(186),
    [anon_sym_u4f5cu8a5e] = ACTIONS(186),
    [anon_sym_u4f5cu8bcd] = ACTIONS(186),
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
    [sym__sep] = ACTIONS(216),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DISC] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_u300a] = ACTIONS(221),
    [aux_sym_song_title_token1] = ACTIONS(221),
    [sym__role_instrument] = ACTIONS(219),
    [anon_sym_Music] = ACTIONS(221),
    [anon_sym_music] = ACTIONS(221),
    [anon_sym_Composition] = ACTIONS(221),
    [anon_sym_composition] = ACTIONS(221),
    [anon_sym_Composer] = ACTIONS(221),
    [anon_sym_composer] = ACTIONS(221),
    [anon_sym_Compose] = ACTIONS(221),
    [anon_sym_compose] = ACTIONS(221),
    [anon_sym_Lyrics] = ACTIONS(221),
    [anon_sym_lyrics] = ACTIONS(221),
    [anon_sym_Lyricist] = ACTIONS(221),
    [anon_sym_lyricist] = ACTIONS(221),
    [anon_sym_Lyric] = ACTIONS(221),
    [anon_sym_lyric] = ACTIONS(221),
    [anon_sym_Arrangement] = ACTIONS(221),
    [anon_sym_arrangement] = ACTIONS(221),
    [anon_sym_Arranger] = ACTIONS(221),
    [anon_sym_arranger] = ACTIONS(221),
    [anon_sym_Arrange] = ACTIONS(221),
    [anon_sym_arrange] = ACTIONS(221),
    [anon_sym_Vocal] = ACTIONS(221),
    [anon_sym_vocal] = ACTIONS(221),
    [anon_sym_Performer] = ACTIONS(221),
    [anon_sym_performer] = ACTIONS(221),
    [anon_sym_Illustration] = ACTIONS(221),
    [anon_sym_illustration] = ACTIONS(221),
    [anon_sym_Illust] = ACTIONS(221),
    [anon_sym_illust] = ACTIONS(221),
    [anon_sym_Label] = ACTIONS(221),
    [anon_sym_label] = ACTIONS(221),
    [anon_sym_Circle] = ACTIONS(221),
    [anon_sym_circle] = ACTIONS(221),
    [anon_sym_Producer] = ACTIONS(221),
    [anon_sym_producer] = ACTIONS(221),
    [anon_sym_Recording] = ACTIONS(221),
    [anon_sym_recording] = ACTIONS(221),
    [anon_sym_GuestVocal] = ACTIONS(221),
    [anon_sym_Guestvocal] = ACTIONS(221),
    [anon_sym_guestvocal] = ACTIONS(221),
    [anon_sym_Chorus] = ACTIONS(221),
    [anon_sym_chorus] = ACTIONS(221),
    [anon_sym_Mixing] = ACTIONS(221),
    [anon_sym_mixing] = ACTIONS(221),
    [anon_sym_Mastering] = ACTIONS(221),
    [anon_sym_mastering] = ACTIONS(221),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(221),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(221),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(221),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(221),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(221),
    [anon_sym_u827au672fu5bb6] = ACTIONS(221),
    [anon_sym_u6b4cu5531] = ACTIONS(221),
    [anon_sym_u6b4c] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu66f2] = ACTIONS(221),
    [anon_sym_u7de8u66f2] = ACTIONS(221),
    [anon_sym_u7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5e] = ACTIONS(221),
    [anon_sym_u4f5cu8bcd] = ACTIONS(221),
    [anon_sym_u5382u724c] = ACTIONS(221),
    [anon_sym_u811au672c] = ACTIONS(221),
    [anon_sym_u63d2u56fe] = ACTIONS(221),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(221),
    [anon_sym_u51fau7248u65b9] = ACTIONS(221),
    [anon_sym_u5f55u97f3] = ACTIONS(221),
    [anon_sym_u539fu4f5c] = ACTIONS(221),
    [anon_sym_u58f0u4e50] = ACTIONS(221),
    [anon_sym_u4e50u5668] = ACTIONS(221),
    [anon_sym_u6df7u97f3] = ACTIONS(221),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(221),
    [sym__sep] = ACTIONS(221),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_SLASH_SLASH] = ACTIONS(225),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(227),
    [anon_sym_u300a] = ACTIONS(150),
    [aux_sym_song_title_token1] = ACTIONS(150),
    [sym__role_instrument] = ACTIONS(148),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(150),
    [anon_sym_u6b4cu5531] = ACTIONS(150),
    [anon_sym_u6b4c] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu66f2] = ACTIONS(150),
    [anon_sym_u7de8u66f2] = ACTIONS(150),
    [anon_sym_u7f16u66f2] = ACTIONS(150),
    [anon_sym_u4f5cu8a5e] = ACTIONS(150),
    [anon_sym_u4f5cu8bcd] = ACTIONS(150),
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
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DISC] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
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
    [anon_sym_u6b4c] = ACTIONS(135),
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
    [sym__sep] = ACTIONS(135),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_DISC] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_u300a] = ACTIONS(231),
    [aux_sym_song_title_token1] = ACTIONS(231),
    [sym__role_instrument] = ACTIONS(229),
    [anon_sym_Music] = ACTIONS(231),
    [anon_sym_music] = ACTIONS(231),
    [anon_sym_Composition] = ACTIONS(231),
    [anon_sym_composition] = ACTIONS(231),
    [anon_sym_Composer] = ACTIONS(231),
    [anon_sym_composer] = ACTIONS(231),
    [anon_sym_Compose] = ACTIONS(231),
    [anon_sym_compose] = ACTIONS(231),
    [anon_sym_Lyrics] = ACTIONS(231),
    [anon_sym_lyrics] = ACTIONS(231),
    [anon_sym_Lyricist] = ACTIONS(231),
    [anon_sym_lyricist] = ACTIONS(231),
    [anon_sym_Lyric] = ACTIONS(231),
    [anon_sym_lyric] = ACTIONS(231),
    [anon_sym_Arrangement] = ACTIONS(231),
    [anon_sym_arrangement] = ACTIONS(231),
    [anon_sym_Arranger] = ACTIONS(231),
    [anon_sym_arranger] = ACTIONS(231),
    [anon_sym_Arrange] = ACTIONS(231),
    [anon_sym_arrange] = ACTIONS(231),
    [anon_sym_Vocal] = ACTIONS(231),
    [anon_sym_vocal] = ACTIONS(231),
    [anon_sym_Performer] = ACTIONS(231),
    [anon_sym_performer] = ACTIONS(231),
    [anon_sym_Illustration] = ACTIONS(231),
    [anon_sym_illustration] = ACTIONS(231),
    [anon_sym_Illust] = ACTIONS(231),
    [anon_sym_illust] = ACTIONS(231),
    [anon_sym_Label] = ACTIONS(231),
    [anon_sym_label] = ACTIONS(231),
    [anon_sym_Circle] = ACTIONS(231),
    [anon_sym_circle] = ACTIONS(231),
    [anon_sym_Producer] = ACTIONS(231),
    [anon_sym_producer] = ACTIONS(231),
    [anon_sym_Recording] = ACTIONS(231),
    [anon_sym_recording] = ACTIONS(231),
    [anon_sym_GuestVocal] = ACTIONS(231),
    [anon_sym_Guestvocal] = ACTIONS(231),
    [anon_sym_guestvocal] = ACTIONS(231),
    [anon_sym_Chorus] = ACTIONS(231),
    [anon_sym_chorus] = ACTIONS(231),
    [anon_sym_Mixing] = ACTIONS(231),
    [anon_sym_mixing] = ACTIONS(231),
    [anon_sym_Mastering] = ACTIONS(231),
    [anon_sym_mastering] = ACTIONS(231),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(231),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(231),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(231),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(231),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(231),
    [anon_sym_u827au672fu5bb6] = ACTIONS(231),
    [anon_sym_u6b4cu5531] = ACTIONS(231),
    [anon_sym_u6b4c] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu66f2] = ACTIONS(231),
    [anon_sym_u7de8u66f2] = ACTIONS(231),
    [anon_sym_u7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5e] = ACTIONS(231),
    [anon_sym_u4f5cu8bcd] = ACTIONS(231),
    [anon_sym_u5382u724c] = ACTIONS(231),
    [anon_sym_u811au672c] = ACTIONS(231),
    [anon_sym_u63d2u56fe] = ACTIONS(231),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(231),
    [anon_sym_u51fau7248u65b9] = ACTIONS(231),
    [anon_sym_u5f55u97f3] = ACTIONS(231),
    [anon_sym_u539fu4f5c] = ACTIONS(231),
    [anon_sym_u58f0u4e50] = ACTIONS(231),
    [anon_sym_u4e50u5668] = ACTIONS(231),
    [anon_sym_u6df7u97f3] = ACTIONS(231),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(231),
    [sym__sep] = ACTIONS(231),
  },
  [53] = {
    [aux_sym_credit_field_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_u300a] = ACTIONS(172),
    [aux_sym_song_title_token1] = ACTIONS(172),
    [sym__role_instrument] = ACTIONS(170),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(172),
    [anon_sym_u6b4cu5531] = ACTIONS(172),
    [anon_sym_u6b4c] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu66f2] = ACTIONS(172),
    [anon_sym_u7de8u66f2] = ACTIONS(172),
    [anon_sym_u7f16u66f2] = ACTIONS(172),
    [anon_sym_u4f5cu8a5e] = ACTIONS(172),
    [anon_sym_u4f5cu8bcd] = ACTIONS(172),
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
    [sym__sep] = ACTIONS(235),
  },
  [54] = {
    [aux_sym_credit_field_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_u300a] = ACTIONS(202),
    [aux_sym_song_title_token1] = ACTIONS(202),
    [sym__role_instrument] = ACTIONS(200),
    [anon_sym_Music] = ACTIONS(202),
    [anon_sym_music] = ACTIONS(202),
    [anon_sym_Composition] = ACTIONS(202),
    [anon_sym_composition] = ACTIONS(202),
    [anon_sym_Composer] = ACTIONS(202),
    [anon_sym_composer] = ACTIONS(202),
    [anon_sym_Compose] = ACTIONS(202),
    [anon_sym_compose] = ACTIONS(202),
    [anon_sym_Lyrics] = ACTIONS(202),
    [anon_sym_lyrics] = ACTIONS(202),
    [anon_sym_Lyricist] = ACTIONS(202),
    [anon_sym_lyricist] = ACTIONS(202),
    [anon_sym_Lyric] = ACTIONS(202),
    [anon_sym_lyric] = ACTIONS(202),
    [anon_sym_Arrangement] = ACTIONS(202),
    [anon_sym_arrangement] = ACTIONS(202),
    [anon_sym_Arranger] = ACTIONS(202),
    [anon_sym_arranger] = ACTIONS(202),
    [anon_sym_Arrange] = ACTIONS(202),
    [anon_sym_arrange] = ACTIONS(202),
    [anon_sym_Vocal] = ACTIONS(202),
    [anon_sym_vocal] = ACTIONS(202),
    [anon_sym_Performer] = ACTIONS(202),
    [anon_sym_performer] = ACTIONS(202),
    [anon_sym_Illustration] = ACTIONS(202),
    [anon_sym_illustration] = ACTIONS(202),
    [anon_sym_Illust] = ACTIONS(202),
    [anon_sym_illust] = ACTIONS(202),
    [anon_sym_Label] = ACTIONS(202),
    [anon_sym_label] = ACTIONS(202),
    [anon_sym_Circle] = ACTIONS(202),
    [anon_sym_circle] = ACTIONS(202),
    [anon_sym_Producer] = ACTIONS(202),
    [anon_sym_producer] = ACTIONS(202),
    [anon_sym_Recording] = ACTIONS(202),
    [anon_sym_recording] = ACTIONS(202),
    [anon_sym_GuestVocal] = ACTIONS(202),
    [anon_sym_Guestvocal] = ACTIONS(202),
    [anon_sym_guestvocal] = ACTIONS(202),
    [anon_sym_Chorus] = ACTIONS(202),
    [anon_sym_chorus] = ACTIONS(202),
    [anon_sym_Mixing] = ACTIONS(202),
    [anon_sym_mixing] = ACTIONS(202),
    [anon_sym_Mastering] = ACTIONS(202),
    [anon_sym_mastering] = ACTIONS(202),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(202),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(202),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(202),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(202),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(202),
    [anon_sym_u827au672fu5bb6] = ACTIONS(202),
    [anon_sym_u6b4cu5531] = ACTIONS(202),
    [anon_sym_u6b4c] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(202),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu66f2] = ACTIONS(202),
    [anon_sym_u7de8u66f2] = ACTIONS(202),
    [anon_sym_u7f16u66f2] = ACTIONS(202),
    [anon_sym_u4f5cu8a5e] = ACTIONS(202),
    [anon_sym_u4f5cu8bcd] = ACTIONS(202),
    [anon_sym_u5382u724c] = ACTIONS(202),
    [anon_sym_u811au672c] = ACTIONS(202),
    [anon_sym_u63d2u56fe] = ACTIONS(202),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(202),
    [anon_sym_u51fau7248u65b9] = ACTIONS(202),
    [anon_sym_u5f55u97f3] = ACTIONS(202),
    [anon_sym_u539fu4f5c] = ACTIONS(202),
    [anon_sym_u58f0u4e50] = ACTIONS(202),
    [anon_sym_u4e50u5668] = ACTIONS(202),
    [anon_sym_u6df7u97f3] = ACTIONS(202),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(202),
    [sym__sep] = ACTIONS(239),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SLASH_SLASH] = ACTIONS(195),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(195),
    [anon_sym_u300a] = ACTIONS(195),
    [aux_sym_song_title_token1] = ACTIONS(195),
    [sym__role_instrument] = ACTIONS(193),
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
    [anon_sym_u6b4c] = ACTIONS(195),
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
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_DISC] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(113),
    [aux_sym_song_title_token1] = ACTIONS(113),
    [sym__role_instrument] = ACTIONS(111),
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
    [anon_sym_GuestVocal] = ACTIONS(113),
    [anon_sym_Guestvocal] = ACTIONS(113),
    [anon_sym_guestvocal] = ACTIONS(113),
    [anon_sym_Chorus] = ACTIONS(113),
    [anon_sym_chorus] = ACTIONS(113),
    [anon_sym_Mixing] = ACTIONS(113),
    [anon_sym_mixing] = ACTIONS(113),
    [anon_sym_Mastering] = ACTIONS(113),
    [anon_sym_mastering] = ACTIONS(113),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(113),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(113),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(113),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(113),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(113),
    [anon_sym_u827au672fu5bb6] = ACTIONS(113),
    [anon_sym_u6b4cu5531] = ACTIONS(113),
    [anon_sym_u6b4c] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu66f2] = ACTIONS(113),
    [anon_sym_u7de8u66f2] = ACTIONS(113),
    [anon_sym_u7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5e] = ACTIONS(113),
    [anon_sym_u4f5cu8bcd] = ACTIONS(113),
    [anon_sym_u5382u724c] = ACTIONS(113),
    [anon_sym_u811au672c] = ACTIONS(113),
    [anon_sym_u63d2u56fe] = ACTIONS(113),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(113),
    [anon_sym_u51fau7248u65b9] = ACTIONS(113),
    [anon_sym_u5f55u97f3] = ACTIONS(113),
    [anon_sym_u539fu4f5c] = ACTIONS(113),
    [anon_sym_u58f0u4e50] = ACTIONS(113),
    [anon_sym_u4e50u5668] = ACTIONS(113),
    [anon_sym_u6df7u97f3] = ACTIONS(113),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(113),
    [sym__sep] = ACTIONS(113),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(243),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
    [sym__role_instrument] = ACTIONS(162),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(164),
    [anon_sym_u6b4cu5531] = ACTIONS(164),
    [anon_sym_u6b4c] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu66f2] = ACTIONS(164),
    [anon_sym_u7de8u66f2] = ACTIONS(164),
    [anon_sym_u7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5e] = ACTIONS(164),
    [anon_sym_u4f5cu8bcd] = ACTIONS(164),
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
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_DISC] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_u300a] = ACTIONS(247),
    [aux_sym_song_title_token1] = ACTIONS(247),
    [sym__role_instrument] = ACTIONS(245),
    [anon_sym_Music] = ACTIONS(247),
    [anon_sym_music] = ACTIONS(247),
    [anon_sym_Composition] = ACTIONS(247),
    [anon_sym_composition] = ACTIONS(247),
    [anon_sym_Composer] = ACTIONS(247),
    [anon_sym_composer] = ACTIONS(247),
    [anon_sym_Compose] = ACTIONS(247),
    [anon_sym_compose] = ACTIONS(247),
    [anon_sym_Lyrics] = ACTIONS(247),
    [anon_sym_lyrics] = ACTIONS(247),
    [anon_sym_Lyricist] = ACTIONS(247),
    [anon_sym_lyricist] = ACTIONS(247),
    [anon_sym_Lyric] = ACTIONS(247),
    [anon_sym_lyric] = ACTIONS(247),
    [anon_sym_Arrangement] = ACTIONS(247),
    [anon_sym_arrangement] = ACTIONS(247),
    [anon_sym_Arranger] = ACTIONS(247),
    [anon_sym_arranger] = ACTIONS(247),
    [anon_sym_Arrange] = ACTIONS(247),
    [anon_sym_arrange] = ACTIONS(247),
    [anon_sym_Vocal] = ACTIONS(247),
    [anon_sym_vocal] = ACTIONS(247),
    [anon_sym_Performer] = ACTIONS(247),
    [anon_sym_performer] = ACTIONS(247),
    [anon_sym_Illustration] = ACTIONS(247),
    [anon_sym_illustration] = ACTIONS(247),
    [anon_sym_Illust] = ACTIONS(247),
    [anon_sym_illust] = ACTIONS(247),
    [anon_sym_Label] = ACTIONS(247),
    [anon_sym_label] = ACTIONS(247),
    [anon_sym_Circle] = ACTIONS(247),
    [anon_sym_circle] = ACTIONS(247),
    [anon_sym_Producer] = ACTIONS(247),
    [anon_sym_producer] = ACTIONS(247),
    [anon_sym_Recording] = ACTIONS(247),
    [anon_sym_recording] = ACTIONS(247),
    [anon_sym_GuestVocal] = ACTIONS(247),
    [anon_sym_Guestvocal] = ACTIONS(247),
    [anon_sym_guestvocal] = ACTIONS(247),
    [anon_sym_Chorus] = ACTIONS(247),
    [anon_sym_chorus] = ACTIONS(247),
    [anon_sym_Mixing] = ACTIONS(247),
    [anon_sym_mixing] = ACTIONS(247),
    [anon_sym_Mastering] = ACTIONS(247),
    [anon_sym_mastering] = ACTIONS(247),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(247),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(247),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(247),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(247),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(247),
    [anon_sym_u827au672fu5bb6] = ACTIONS(247),
    [anon_sym_u6b4cu5531] = ACTIONS(247),
    [anon_sym_u6b4c] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu66f2] = ACTIONS(247),
    [anon_sym_u7de8u66f2] = ACTIONS(247),
    [anon_sym_u7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5e] = ACTIONS(247),
    [anon_sym_u4f5cu8bcd] = ACTIONS(247),
    [anon_sym_u5382u724c] = ACTIONS(247),
    [anon_sym_u811au672c] = ACTIONS(247),
    [anon_sym_u63d2u56fe] = ACTIONS(247),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(247),
    [anon_sym_u51fau7248u65b9] = ACTIONS(247),
    [anon_sym_u5f55u97f3] = ACTIONS(247),
    [anon_sym_u539fu4f5c] = ACTIONS(247),
    [anon_sym_u58f0u4e50] = ACTIONS(247),
    [anon_sym_u4e50u5668] = ACTIONS(247),
    [anon_sym_u6df7u97f3] = ACTIONS(247),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(247),
    [sym__sep] = ACTIONS(247),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_u300a] = ACTIONS(221),
    [aux_sym_song_title_token1] = ACTIONS(221),
    [sym__role_instrument] = ACTIONS(219),
    [anon_sym_Music] = ACTIONS(221),
    [anon_sym_music] = ACTIONS(221),
    [anon_sym_Composition] = ACTIONS(221),
    [anon_sym_composition] = ACTIONS(221),
    [anon_sym_Composer] = ACTIONS(221),
    [anon_sym_composer] = ACTIONS(221),
    [anon_sym_Compose] = ACTIONS(221),
    [anon_sym_compose] = ACTIONS(221),
    [anon_sym_Lyrics] = ACTIONS(221),
    [anon_sym_lyrics] = ACTIONS(221),
    [anon_sym_Lyricist] = ACTIONS(221),
    [anon_sym_lyricist] = ACTIONS(221),
    [anon_sym_Lyric] = ACTIONS(221),
    [anon_sym_lyric] = ACTIONS(221),
    [anon_sym_Arrangement] = ACTIONS(221),
    [anon_sym_arrangement] = ACTIONS(221),
    [anon_sym_Arranger] = ACTIONS(221),
    [anon_sym_arranger] = ACTIONS(221),
    [anon_sym_Arrange] = ACTIONS(221),
    [anon_sym_arrange] = ACTIONS(221),
    [anon_sym_Vocal] = ACTIONS(221),
    [anon_sym_vocal] = ACTIONS(221),
    [anon_sym_Performer] = ACTIONS(221),
    [anon_sym_performer] = ACTIONS(221),
    [anon_sym_Illustration] = ACTIONS(221),
    [anon_sym_illustration] = ACTIONS(221),
    [anon_sym_Illust] = ACTIONS(221),
    [anon_sym_illust] = ACTIONS(221),
    [anon_sym_Label] = ACTIONS(221),
    [anon_sym_label] = ACTIONS(221),
    [anon_sym_Circle] = ACTIONS(221),
    [anon_sym_circle] = ACTIONS(221),
    [anon_sym_Producer] = ACTIONS(221),
    [anon_sym_producer] = ACTIONS(221),
    [anon_sym_Recording] = ACTIONS(221),
    [anon_sym_recording] = ACTIONS(221),
    [anon_sym_GuestVocal] = ACTIONS(221),
    [anon_sym_Guestvocal] = ACTIONS(221),
    [anon_sym_guestvocal] = ACTIONS(221),
    [anon_sym_Chorus] = ACTIONS(221),
    [anon_sym_chorus] = ACTIONS(221),
    [anon_sym_Mixing] = ACTIONS(221),
    [anon_sym_mixing] = ACTIONS(221),
    [anon_sym_Mastering] = ACTIONS(221),
    [anon_sym_mastering] = ACTIONS(221),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(221),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(221),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(221),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(221),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(221),
    [anon_sym_u827au672fu5bb6] = ACTIONS(221),
    [anon_sym_u6b4cu5531] = ACTIONS(221),
    [anon_sym_u6b4c] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(221),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu66f2] = ACTIONS(221),
    [anon_sym_u7de8u66f2] = ACTIONS(221),
    [anon_sym_u7f16u66f2] = ACTIONS(221),
    [anon_sym_u4f5cu8a5e] = ACTIONS(221),
    [anon_sym_u4f5cu8bcd] = ACTIONS(221),
    [anon_sym_u5382u724c] = ACTIONS(221),
    [anon_sym_u811au672c] = ACTIONS(221),
    [anon_sym_u63d2u56fe] = ACTIONS(221),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(221),
    [anon_sym_u51fau7248u65b9] = ACTIONS(221),
    [anon_sym_u5f55u97f3] = ACTIONS(221),
    [anon_sym_u539fu4f5c] = ACTIONS(221),
    [anon_sym_u58f0u4e50] = ACTIONS(221),
    [anon_sym_u4e50u5668] = ACTIONS(221),
    [anon_sym_u6df7u97f3] = ACTIONS(221),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(221),
    [sym__sep] = ACTIONS(221),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(135),
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
    [anon_sym_u6b4c] = ACTIONS(135),
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
    [sym__sep] = ACTIONS(135),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_DISC] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_u300a] = ACTIONS(251),
    [aux_sym_song_title_token1] = ACTIONS(251),
    [sym__role_instrument] = ACTIONS(249),
    [anon_sym_Music] = ACTIONS(251),
    [anon_sym_music] = ACTIONS(251),
    [anon_sym_Composition] = ACTIONS(251),
    [anon_sym_composition] = ACTIONS(251),
    [anon_sym_Composer] = ACTIONS(251),
    [anon_sym_composer] = ACTIONS(251),
    [anon_sym_Compose] = ACTIONS(251),
    [anon_sym_compose] = ACTIONS(251),
    [anon_sym_Lyrics] = ACTIONS(251),
    [anon_sym_lyrics] = ACTIONS(251),
    [anon_sym_Lyricist] = ACTIONS(251),
    [anon_sym_lyricist] = ACTIONS(251),
    [anon_sym_Lyric] = ACTIONS(251),
    [anon_sym_lyric] = ACTIONS(251),
    [anon_sym_Arrangement] = ACTIONS(251),
    [anon_sym_arrangement] = ACTIONS(251),
    [anon_sym_Arranger] = ACTIONS(251),
    [anon_sym_arranger] = ACTIONS(251),
    [anon_sym_Arrange] = ACTIONS(251),
    [anon_sym_arrange] = ACTIONS(251),
    [anon_sym_Vocal] = ACTIONS(251),
    [anon_sym_vocal] = ACTIONS(251),
    [anon_sym_Performer] = ACTIONS(251),
    [anon_sym_performer] = ACTIONS(251),
    [anon_sym_Illustration] = ACTIONS(251),
    [anon_sym_illustration] = ACTIONS(251),
    [anon_sym_Illust] = ACTIONS(251),
    [anon_sym_illust] = ACTIONS(251),
    [anon_sym_Label] = ACTIONS(251),
    [anon_sym_label] = ACTIONS(251),
    [anon_sym_Circle] = ACTIONS(251),
    [anon_sym_circle] = ACTIONS(251),
    [anon_sym_Producer] = ACTIONS(251),
    [anon_sym_producer] = ACTIONS(251),
    [anon_sym_Recording] = ACTIONS(251),
    [anon_sym_recording] = ACTIONS(251),
    [anon_sym_GuestVocal] = ACTIONS(251),
    [anon_sym_Guestvocal] = ACTIONS(251),
    [anon_sym_guestvocal] = ACTIONS(251),
    [anon_sym_Chorus] = ACTIONS(251),
    [anon_sym_chorus] = ACTIONS(251),
    [anon_sym_Mixing] = ACTIONS(251),
    [anon_sym_mixing] = ACTIONS(251),
    [anon_sym_Mastering] = ACTIONS(251),
    [anon_sym_mastering] = ACTIONS(251),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(251),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(251),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(251),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(251),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(251),
    [anon_sym_u827au672fu5bb6] = ACTIONS(251),
    [anon_sym_u6b4cu5531] = ACTIONS(251),
    [anon_sym_u6b4c] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu66f2] = ACTIONS(251),
    [anon_sym_u7de8u66f2] = ACTIONS(251),
    [anon_sym_u7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5e] = ACTIONS(251),
    [anon_sym_u4f5cu8bcd] = ACTIONS(251),
    [anon_sym_u5382u724c] = ACTIONS(251),
    [anon_sym_u811au672c] = ACTIONS(251),
    [anon_sym_u63d2u56fe] = ACTIONS(251),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(251),
    [anon_sym_u51fau7248u65b9] = ACTIONS(251),
    [anon_sym_u5f55u97f3] = ACTIONS(251),
    [anon_sym_u539fu4f5c] = ACTIONS(251),
    [anon_sym_u58f0u4e50] = ACTIONS(251),
    [anon_sym_u4e50u5668] = ACTIONS(251),
    [anon_sym_u6df7u97f3] = ACTIONS(251),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(251),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_u300a] = ACTIONS(113),
    [aux_sym_song_title_token1] = ACTIONS(113),
    [sym__role_instrument] = ACTIONS(111),
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
    [anon_sym_GuestVocal] = ACTIONS(113),
    [anon_sym_Guestvocal] = ACTIONS(113),
    [anon_sym_guestvocal] = ACTIONS(113),
    [anon_sym_Chorus] = ACTIONS(113),
    [anon_sym_chorus] = ACTIONS(113),
    [anon_sym_Mixing] = ACTIONS(113),
    [anon_sym_mixing] = ACTIONS(113),
    [anon_sym_Mastering] = ACTIONS(113),
    [anon_sym_mastering] = ACTIONS(113),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(113),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(113),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(113),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(113),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(113),
    [anon_sym_u827au672fu5bb6] = ACTIONS(113),
    [anon_sym_u6b4cu5531] = ACTIONS(113),
    [anon_sym_u6b4c] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu66f2] = ACTIONS(113),
    [anon_sym_u7de8u66f2] = ACTIONS(113),
    [anon_sym_u7f16u66f2] = ACTIONS(113),
    [anon_sym_u4f5cu8a5e] = ACTIONS(113),
    [anon_sym_u4f5cu8bcd] = ACTIONS(113),
    [anon_sym_u5382u724c] = ACTIONS(113),
    [anon_sym_u811au672c] = ACTIONS(113),
    [anon_sym_u63d2u56fe] = ACTIONS(113),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(113),
    [anon_sym_u51fau7248u65b9] = ACTIONS(113),
    [anon_sym_u5f55u97f3] = ACTIONS(113),
    [anon_sym_u539fu4f5c] = ACTIONS(113),
    [anon_sym_u58f0u4e50] = ACTIONS(113),
    [anon_sym_u4e50u5668] = ACTIONS(113),
    [anon_sym_u6df7u97f3] = ACTIONS(113),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(113),
    [sym__sep] = ACTIONS(113),
  },
  [63] = {
    [sym_role] = STATE(146),
    [sym__role] = STATE(140),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(63),
    [anon_sym_u300a2] = ACTIONS(208),
    [aux_sym_creator_name_token1] = ACTIONS(208),
    [sym__role_instrument] = ACTIONS(210),
    [anon_sym_Music] = ACTIONS(213),
    [anon_sym_music] = ACTIONS(213),
    [anon_sym_Composition] = ACTIONS(213),
    [anon_sym_composition] = ACTIONS(213),
    [anon_sym_Composer] = ACTIONS(213),
    [anon_sym_composer] = ACTIONS(213),
    [anon_sym_Compose] = ACTIONS(213),
    [anon_sym_compose] = ACTIONS(213),
    [anon_sym_Lyrics] = ACTIONS(213),
    [anon_sym_lyrics] = ACTIONS(213),
    [anon_sym_Lyricist] = ACTIONS(213),
    [anon_sym_lyricist] = ACTIONS(213),
    [anon_sym_Lyric] = ACTIONS(213),
    [anon_sym_lyric] = ACTIONS(213),
    [anon_sym_Arrangement] = ACTIONS(213),
    [anon_sym_arrangement] = ACTIONS(213),
    [anon_sym_Arranger] = ACTIONS(213),
    [anon_sym_arranger] = ACTIONS(213),
    [anon_sym_Arrange] = ACTIONS(213),
    [anon_sym_arrange] = ACTIONS(213),
    [anon_sym_Vocal] = ACTIONS(213),
    [anon_sym_vocal] = ACTIONS(213),
    [anon_sym_Performer] = ACTIONS(213),
    [anon_sym_performer] = ACTIONS(213),
    [anon_sym_Illustration] = ACTIONS(213),
    [anon_sym_illustration] = ACTIONS(213),
    [anon_sym_Illust] = ACTIONS(213),
    [anon_sym_illust] = ACTIONS(213),
    [anon_sym_Label] = ACTIONS(213),
    [anon_sym_label] = ACTIONS(213),
    [anon_sym_Circle] = ACTIONS(213),
    [anon_sym_circle] = ACTIONS(213),
    [anon_sym_Producer] = ACTIONS(213),
    [anon_sym_producer] = ACTIONS(213),
    [anon_sym_Recording] = ACTIONS(213),
    [anon_sym_recording] = ACTIONS(213),
    [anon_sym_GuestVocal] = ACTIONS(213),
    [anon_sym_Guestvocal] = ACTIONS(213),
    [anon_sym_guestvocal] = ACTIONS(213),
    [anon_sym_Chorus] = ACTIONS(213),
    [anon_sym_chorus] = ACTIONS(213),
    [anon_sym_Mixing] = ACTIONS(213),
    [anon_sym_mixing] = ACTIONS(213),
    [anon_sym_Mastering] = ACTIONS(213),
    [anon_sym_mastering] = ACTIONS(213),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(213),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(213),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(213),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(213),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(213),
    [anon_sym_u827au672fu5bb6] = ACTIONS(213),
    [anon_sym_u6b4cu5531] = ACTIONS(213),
    [anon_sym_u6b4c] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(213),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu66f2] = ACTIONS(213),
    [anon_sym_u7de8u66f2] = ACTIONS(213),
    [anon_sym_u7f16u66f2] = ACTIONS(213),
    [anon_sym_u4f5cu8a5e] = ACTIONS(213),
    [anon_sym_u4f5cu8bcd] = ACTIONS(213),
    [anon_sym_u5382u724c] = ACTIONS(213),
    [anon_sym_u811au672c] = ACTIONS(213),
    [anon_sym_u63d2u56fe] = ACTIONS(213),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(213),
    [anon_sym_u51fau7248u65b9] = ACTIONS(213),
    [anon_sym_u5f55u97f3] = ACTIONS(213),
    [anon_sym_u539fu4f5c] = ACTIONS(213),
    [anon_sym_u58f0u4e50] = ACTIONS(213),
    [anon_sym_u4e50u5668] = ACTIONS(213),
    [anon_sym_u6df7u97f3] = ACTIONS(213),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(213),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DISC] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
    [sym__role_instrument] = ACTIONS(162),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(164),
    [anon_sym_u6b4cu5531] = ACTIONS(164),
    [anon_sym_u6b4c] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu66f2] = ACTIONS(164),
    [anon_sym_u7de8u66f2] = ACTIONS(164),
    [anon_sym_u7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5e] = ACTIONS(164),
    [anon_sym_u4f5cu8bcd] = ACTIONS(164),
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
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_DISC] = ACTIONS(255),
    [anon_sym_u300a] = ACTIONS(255),
    [aux_sym_song_title_token1] = ACTIONS(255),
    [sym__role_instrument] = ACTIONS(253),
    [anon_sym_Music] = ACTIONS(255),
    [anon_sym_music] = ACTIONS(255),
    [anon_sym_Composition] = ACTIONS(255),
    [anon_sym_composition] = ACTIONS(255),
    [anon_sym_Composer] = ACTIONS(255),
    [anon_sym_composer] = ACTIONS(255),
    [anon_sym_Compose] = ACTIONS(255),
    [anon_sym_compose] = ACTIONS(255),
    [anon_sym_Lyrics] = ACTIONS(255),
    [anon_sym_lyrics] = ACTIONS(255),
    [anon_sym_Lyricist] = ACTIONS(255),
    [anon_sym_lyricist] = ACTIONS(255),
    [anon_sym_Lyric] = ACTIONS(255),
    [anon_sym_lyric] = ACTIONS(255),
    [anon_sym_Arrangement] = ACTIONS(255),
    [anon_sym_arrangement] = ACTIONS(255),
    [anon_sym_Arranger] = ACTIONS(255),
    [anon_sym_arranger] = ACTIONS(255),
    [anon_sym_Arrange] = ACTIONS(255),
    [anon_sym_arrange] = ACTIONS(255),
    [anon_sym_Vocal] = ACTIONS(255),
    [anon_sym_vocal] = ACTIONS(255),
    [anon_sym_Performer] = ACTIONS(255),
    [anon_sym_performer] = ACTIONS(255),
    [anon_sym_Illustration] = ACTIONS(255),
    [anon_sym_illustration] = ACTIONS(255),
    [anon_sym_Illust] = ACTIONS(255),
    [anon_sym_illust] = ACTIONS(255),
    [anon_sym_Label] = ACTIONS(255),
    [anon_sym_label] = ACTIONS(255),
    [anon_sym_Circle] = ACTIONS(255),
    [anon_sym_circle] = ACTIONS(255),
    [anon_sym_Producer] = ACTIONS(255),
    [anon_sym_producer] = ACTIONS(255),
    [anon_sym_Recording] = ACTIONS(255),
    [anon_sym_recording] = ACTIONS(255),
    [anon_sym_GuestVocal] = ACTIONS(255),
    [anon_sym_Guestvocal] = ACTIONS(255),
    [anon_sym_guestvocal] = ACTIONS(255),
    [anon_sym_Chorus] = ACTIONS(255),
    [anon_sym_chorus] = ACTIONS(255),
    [anon_sym_Mixing] = ACTIONS(255),
    [anon_sym_mixing] = ACTIONS(255),
    [anon_sym_Mastering] = ACTIONS(255),
    [anon_sym_mastering] = ACTIONS(255),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(255),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(255),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(255),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(255),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(255),
    [anon_sym_u827au672fu5bb6] = ACTIONS(255),
    [anon_sym_u6b4cu5531] = ACTIONS(255),
    [anon_sym_u6b4c] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu66f2] = ACTIONS(255),
    [anon_sym_u7de8u66f2] = ACTIONS(255),
    [anon_sym_u7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5e] = ACTIONS(255),
    [anon_sym_u4f5cu8bcd] = ACTIONS(255),
    [anon_sym_u5382u724c] = ACTIONS(255),
    [anon_sym_u811au672c] = ACTIONS(255),
    [anon_sym_u63d2u56fe] = ACTIONS(255),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(255),
    [anon_sym_u51fau7248u65b9] = ACTIONS(255),
    [anon_sym_u5f55u97f3] = ACTIONS(255),
    [anon_sym_u539fu4f5c] = ACTIONS(255),
    [anon_sym_u58f0u4e50] = ACTIONS(255),
    [anon_sym_u4e50u5668] = ACTIONS(255),
    [anon_sym_u6df7u97f3] = ACTIONS(255),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(255),
    [sym__sep] = ACTIONS(257),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_DISC] = ACTIONS(261),
    [anon_sym_u300a] = ACTIONS(261),
    [aux_sym_song_title_token1] = ACTIONS(261),
    [sym__role_instrument] = ACTIONS(259),
    [anon_sym_Music] = ACTIONS(261),
    [anon_sym_music] = ACTIONS(261),
    [anon_sym_Composition] = ACTIONS(261),
    [anon_sym_composition] = ACTIONS(261),
    [anon_sym_Composer] = ACTIONS(261),
    [anon_sym_composer] = ACTIONS(261),
    [anon_sym_Compose] = ACTIONS(261),
    [anon_sym_compose] = ACTIONS(261),
    [anon_sym_Lyrics] = ACTIONS(261),
    [anon_sym_lyrics] = ACTIONS(261),
    [anon_sym_Lyricist] = ACTIONS(261),
    [anon_sym_lyricist] = ACTIONS(261),
    [anon_sym_Lyric] = ACTIONS(261),
    [anon_sym_lyric] = ACTIONS(261),
    [anon_sym_Arrangement] = ACTIONS(261),
    [anon_sym_arrangement] = ACTIONS(261),
    [anon_sym_Arranger] = ACTIONS(261),
    [anon_sym_arranger] = ACTIONS(261),
    [anon_sym_Arrange] = ACTIONS(261),
    [anon_sym_arrange] = ACTIONS(261),
    [anon_sym_Vocal] = ACTIONS(261),
    [anon_sym_vocal] = ACTIONS(261),
    [anon_sym_Performer] = ACTIONS(261),
    [anon_sym_performer] = ACTIONS(261),
    [anon_sym_Illustration] = ACTIONS(261),
    [anon_sym_illustration] = ACTIONS(261),
    [anon_sym_Illust] = ACTIONS(261),
    [anon_sym_illust] = ACTIONS(261),
    [anon_sym_Label] = ACTIONS(261),
    [anon_sym_label] = ACTIONS(261),
    [anon_sym_Circle] = ACTIONS(261),
    [anon_sym_circle] = ACTIONS(261),
    [anon_sym_Producer] = ACTIONS(261),
    [anon_sym_producer] = ACTIONS(261),
    [anon_sym_Recording] = ACTIONS(261),
    [anon_sym_recording] = ACTIONS(261),
    [anon_sym_GuestVocal] = ACTIONS(261),
    [anon_sym_Guestvocal] = ACTIONS(261),
    [anon_sym_guestvocal] = ACTIONS(261),
    [anon_sym_Chorus] = ACTIONS(261),
    [anon_sym_chorus] = ACTIONS(261),
    [anon_sym_Mixing] = ACTIONS(261),
    [anon_sym_mixing] = ACTIONS(261),
    [anon_sym_Mastering] = ACTIONS(261),
    [anon_sym_mastering] = ACTIONS(261),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(261),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(261),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(261),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(261),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(261),
    [anon_sym_u827au672fu5bb6] = ACTIONS(261),
    [anon_sym_u6b4cu5531] = ACTIONS(261),
    [anon_sym_u6b4c] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu66f2] = ACTIONS(261),
    [anon_sym_u7de8u66f2] = ACTIONS(261),
    [anon_sym_u7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5e] = ACTIONS(261),
    [anon_sym_u4f5cu8bcd] = ACTIONS(261),
    [anon_sym_u5382u724c] = ACTIONS(261),
    [anon_sym_u811au672c] = ACTIONS(261),
    [anon_sym_u63d2u56fe] = ACTIONS(261),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(261),
    [anon_sym_u51fau7248u65b9] = ACTIONS(261),
    [anon_sym_u5f55u97f3] = ACTIONS(261),
    [anon_sym_u539fu4f5c] = ACTIONS(261),
    [anon_sym_u58f0u4e50] = ACTIONS(261),
    [anon_sym_u4e50u5668] = ACTIONS(261),
    [anon_sym_u6df7u97f3] = ACTIONS(261),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(261),
    [sym__sep] = ACTIONS(263),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_DISC] = ACTIONS(267),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_u300a] = ACTIONS(267),
    [aux_sym_song_title_token1] = ACTIONS(267),
    [sym__role_instrument] = ACTIONS(265),
    [anon_sym_Music] = ACTIONS(267),
    [anon_sym_music] = ACTIONS(267),
    [anon_sym_Composition] = ACTIONS(267),
    [anon_sym_composition] = ACTIONS(267),
    [anon_sym_Composer] = ACTIONS(267),
    [anon_sym_composer] = ACTIONS(267),
    [anon_sym_Compose] = ACTIONS(267),
    [anon_sym_compose] = ACTIONS(267),
    [anon_sym_Lyrics] = ACTIONS(267),
    [anon_sym_lyrics] = ACTIONS(267),
    [anon_sym_Lyricist] = ACTIONS(267),
    [anon_sym_lyricist] = ACTIONS(267),
    [anon_sym_Lyric] = ACTIONS(267),
    [anon_sym_lyric] = ACTIONS(267),
    [anon_sym_Arrangement] = ACTIONS(267),
    [anon_sym_arrangement] = ACTIONS(267),
    [anon_sym_Arranger] = ACTIONS(267),
    [anon_sym_arranger] = ACTIONS(267),
    [anon_sym_Arrange] = ACTIONS(267),
    [anon_sym_arrange] = ACTIONS(267),
    [anon_sym_Vocal] = ACTIONS(267),
    [anon_sym_vocal] = ACTIONS(267),
    [anon_sym_Performer] = ACTIONS(267),
    [anon_sym_performer] = ACTIONS(267),
    [anon_sym_Illustration] = ACTIONS(267),
    [anon_sym_illustration] = ACTIONS(267),
    [anon_sym_Illust] = ACTIONS(267),
    [anon_sym_illust] = ACTIONS(267),
    [anon_sym_Label] = ACTIONS(267),
    [anon_sym_label] = ACTIONS(267),
    [anon_sym_Circle] = ACTIONS(267),
    [anon_sym_circle] = ACTIONS(267),
    [anon_sym_Producer] = ACTIONS(267),
    [anon_sym_producer] = ACTIONS(267),
    [anon_sym_Recording] = ACTIONS(267),
    [anon_sym_recording] = ACTIONS(267),
    [anon_sym_GuestVocal] = ACTIONS(267),
    [anon_sym_Guestvocal] = ACTIONS(267),
    [anon_sym_guestvocal] = ACTIONS(267),
    [anon_sym_Chorus] = ACTIONS(267),
    [anon_sym_chorus] = ACTIONS(267),
    [anon_sym_Mixing] = ACTIONS(267),
    [anon_sym_mixing] = ACTIONS(267),
    [anon_sym_Mastering] = ACTIONS(267),
    [anon_sym_mastering] = ACTIONS(267),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(267),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(267),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(267),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(267),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(267),
    [anon_sym_u827au672fu5bb6] = ACTIONS(267),
    [anon_sym_u6b4cu5531] = ACTIONS(267),
    [anon_sym_u6b4c] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu66f2] = ACTIONS(267),
    [anon_sym_u7de8u66f2] = ACTIONS(267),
    [anon_sym_u7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5e] = ACTIONS(267),
    [anon_sym_u4f5cu8bcd] = ACTIONS(267),
    [anon_sym_u5382u724c] = ACTIONS(267),
    [anon_sym_u811au672c] = ACTIONS(267),
    [anon_sym_u63d2u56fe] = ACTIONS(267),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(267),
    [anon_sym_u51fau7248u65b9] = ACTIONS(267),
    [anon_sym_u5f55u97f3] = ACTIONS(267),
    [anon_sym_u539fu4f5c] = ACTIONS(267),
    [anon_sym_u58f0u4e50] = ACTIONS(267),
    [anon_sym_u4e50u5668] = ACTIONS(267),
    [anon_sym_u6df7u97f3] = ACTIONS(267),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(267),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_DISC] = ACTIONS(267),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_u300a] = ACTIONS(267),
    [aux_sym_song_title_token1] = ACTIONS(267),
    [sym__role_instrument] = ACTIONS(265),
    [anon_sym_Music] = ACTIONS(267),
    [anon_sym_music] = ACTIONS(267),
    [anon_sym_Composition] = ACTIONS(267),
    [anon_sym_composition] = ACTIONS(267),
    [anon_sym_Composer] = ACTIONS(267),
    [anon_sym_composer] = ACTIONS(267),
    [anon_sym_Compose] = ACTIONS(267),
    [anon_sym_compose] = ACTIONS(267),
    [anon_sym_Lyrics] = ACTIONS(267),
    [anon_sym_lyrics] = ACTIONS(267),
    [anon_sym_Lyricist] = ACTIONS(267),
    [anon_sym_lyricist] = ACTIONS(267),
    [anon_sym_Lyric] = ACTIONS(267),
    [anon_sym_lyric] = ACTIONS(267),
    [anon_sym_Arrangement] = ACTIONS(267),
    [anon_sym_arrangement] = ACTIONS(267),
    [anon_sym_Arranger] = ACTIONS(267),
    [anon_sym_arranger] = ACTIONS(267),
    [anon_sym_Arrange] = ACTIONS(267),
    [anon_sym_arrange] = ACTIONS(267),
    [anon_sym_Vocal] = ACTIONS(267),
    [anon_sym_vocal] = ACTIONS(267),
    [anon_sym_Performer] = ACTIONS(267),
    [anon_sym_performer] = ACTIONS(267),
    [anon_sym_Illustration] = ACTIONS(267),
    [anon_sym_illustration] = ACTIONS(267),
    [anon_sym_Illust] = ACTIONS(267),
    [anon_sym_illust] = ACTIONS(267),
    [anon_sym_Label] = ACTIONS(267),
    [anon_sym_label] = ACTIONS(267),
    [anon_sym_Circle] = ACTIONS(267),
    [anon_sym_circle] = ACTIONS(267),
    [anon_sym_Producer] = ACTIONS(267),
    [anon_sym_producer] = ACTIONS(267),
    [anon_sym_Recording] = ACTIONS(267),
    [anon_sym_recording] = ACTIONS(267),
    [anon_sym_GuestVocal] = ACTIONS(267),
    [anon_sym_Guestvocal] = ACTIONS(267),
    [anon_sym_guestvocal] = ACTIONS(267),
    [anon_sym_Chorus] = ACTIONS(267),
    [anon_sym_chorus] = ACTIONS(267),
    [anon_sym_Mixing] = ACTIONS(267),
    [anon_sym_mixing] = ACTIONS(267),
    [anon_sym_Mastering] = ACTIONS(267),
    [anon_sym_mastering] = ACTIONS(267),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(267),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(267),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(267),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(267),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(267),
    [anon_sym_u827au672fu5bb6] = ACTIONS(267),
    [anon_sym_u6b4cu5531] = ACTIONS(267),
    [anon_sym_u6b4c] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu66f2] = ACTIONS(267),
    [anon_sym_u7de8u66f2] = ACTIONS(267),
    [anon_sym_u7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5e] = ACTIONS(267),
    [anon_sym_u4f5cu8bcd] = ACTIONS(267),
    [anon_sym_u5382u724c] = ACTIONS(267),
    [anon_sym_u811au672c] = ACTIONS(267),
    [anon_sym_u63d2u56fe] = ACTIONS(267),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(267),
    [anon_sym_u51fau7248u65b9] = ACTIONS(267),
    [anon_sym_u5f55u97f3] = ACTIONS(267),
    [anon_sym_u539fu4f5c] = ACTIONS(267),
    [anon_sym_u58f0u4e50] = ACTIONS(267),
    [anon_sym_u4e50u5668] = ACTIONS(267),
    [anon_sym_u6df7u97f3] = ACTIONS(267),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(267),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_u300a] = ACTIONS(231),
    [aux_sym_song_title_token1] = ACTIONS(231),
    [sym__role_instrument] = ACTIONS(229),
    [anon_sym_Music] = ACTIONS(231),
    [anon_sym_music] = ACTIONS(231),
    [anon_sym_Composition] = ACTIONS(231),
    [anon_sym_composition] = ACTIONS(231),
    [anon_sym_Composer] = ACTIONS(231),
    [anon_sym_composer] = ACTIONS(231),
    [anon_sym_Compose] = ACTIONS(231),
    [anon_sym_compose] = ACTIONS(231),
    [anon_sym_Lyrics] = ACTIONS(231),
    [anon_sym_lyrics] = ACTIONS(231),
    [anon_sym_Lyricist] = ACTIONS(231),
    [anon_sym_lyricist] = ACTIONS(231),
    [anon_sym_Lyric] = ACTIONS(231),
    [anon_sym_lyric] = ACTIONS(231),
    [anon_sym_Arrangement] = ACTIONS(231),
    [anon_sym_arrangement] = ACTIONS(231),
    [anon_sym_Arranger] = ACTIONS(231),
    [anon_sym_arranger] = ACTIONS(231),
    [anon_sym_Arrange] = ACTIONS(231),
    [anon_sym_arrange] = ACTIONS(231),
    [anon_sym_Vocal] = ACTIONS(231),
    [anon_sym_vocal] = ACTIONS(231),
    [anon_sym_Performer] = ACTIONS(231),
    [anon_sym_performer] = ACTIONS(231),
    [anon_sym_Illustration] = ACTIONS(231),
    [anon_sym_illustration] = ACTIONS(231),
    [anon_sym_Illust] = ACTIONS(231),
    [anon_sym_illust] = ACTIONS(231),
    [anon_sym_Label] = ACTIONS(231),
    [anon_sym_label] = ACTIONS(231),
    [anon_sym_Circle] = ACTIONS(231),
    [anon_sym_circle] = ACTIONS(231),
    [anon_sym_Producer] = ACTIONS(231),
    [anon_sym_producer] = ACTIONS(231),
    [anon_sym_Recording] = ACTIONS(231),
    [anon_sym_recording] = ACTIONS(231),
    [anon_sym_GuestVocal] = ACTIONS(231),
    [anon_sym_Guestvocal] = ACTIONS(231),
    [anon_sym_guestvocal] = ACTIONS(231),
    [anon_sym_Chorus] = ACTIONS(231),
    [anon_sym_chorus] = ACTIONS(231),
    [anon_sym_Mixing] = ACTIONS(231),
    [anon_sym_mixing] = ACTIONS(231),
    [anon_sym_Mastering] = ACTIONS(231),
    [anon_sym_mastering] = ACTIONS(231),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(231),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(231),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(231),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(231),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(231),
    [anon_sym_u827au672fu5bb6] = ACTIONS(231),
    [anon_sym_u6b4cu5531] = ACTIONS(231),
    [anon_sym_u6b4c] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(231),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu66f2] = ACTIONS(231),
    [anon_sym_u7de8u66f2] = ACTIONS(231),
    [anon_sym_u7f16u66f2] = ACTIONS(231),
    [anon_sym_u4f5cu8a5e] = ACTIONS(231),
    [anon_sym_u4f5cu8bcd] = ACTIONS(231),
    [anon_sym_u5382u724c] = ACTIONS(231),
    [anon_sym_u811au672c] = ACTIONS(231),
    [anon_sym_u63d2u56fe] = ACTIONS(231),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(231),
    [anon_sym_u51fau7248u65b9] = ACTIONS(231),
    [anon_sym_u5f55u97f3] = ACTIONS(231),
    [anon_sym_u539fu4f5c] = ACTIONS(231),
    [anon_sym_u58f0u4e50] = ACTIONS(231),
    [anon_sym_u4e50u5668] = ACTIONS(231),
    [anon_sym_u6df7u97f3] = ACTIONS(231),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(231),
    [sym__sep] = ACTIONS(231),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_u300a] = ACTIONS(247),
    [aux_sym_song_title_token1] = ACTIONS(247),
    [sym__role_instrument] = ACTIONS(245),
    [anon_sym_Music] = ACTIONS(247),
    [anon_sym_music] = ACTIONS(247),
    [anon_sym_Composition] = ACTIONS(247),
    [anon_sym_composition] = ACTIONS(247),
    [anon_sym_Composer] = ACTIONS(247),
    [anon_sym_composer] = ACTIONS(247),
    [anon_sym_Compose] = ACTIONS(247),
    [anon_sym_compose] = ACTIONS(247),
    [anon_sym_Lyrics] = ACTIONS(247),
    [anon_sym_lyrics] = ACTIONS(247),
    [anon_sym_Lyricist] = ACTIONS(247),
    [anon_sym_lyricist] = ACTIONS(247),
    [anon_sym_Lyric] = ACTIONS(247),
    [anon_sym_lyric] = ACTIONS(247),
    [anon_sym_Arrangement] = ACTIONS(247),
    [anon_sym_arrangement] = ACTIONS(247),
    [anon_sym_Arranger] = ACTIONS(247),
    [anon_sym_arranger] = ACTIONS(247),
    [anon_sym_Arrange] = ACTIONS(247),
    [anon_sym_arrange] = ACTIONS(247),
    [anon_sym_Vocal] = ACTIONS(247),
    [anon_sym_vocal] = ACTIONS(247),
    [anon_sym_Performer] = ACTIONS(247),
    [anon_sym_performer] = ACTIONS(247),
    [anon_sym_Illustration] = ACTIONS(247),
    [anon_sym_illustration] = ACTIONS(247),
    [anon_sym_Illust] = ACTIONS(247),
    [anon_sym_illust] = ACTIONS(247),
    [anon_sym_Label] = ACTIONS(247),
    [anon_sym_label] = ACTIONS(247),
    [anon_sym_Circle] = ACTIONS(247),
    [anon_sym_circle] = ACTIONS(247),
    [anon_sym_Producer] = ACTIONS(247),
    [anon_sym_producer] = ACTIONS(247),
    [anon_sym_Recording] = ACTIONS(247),
    [anon_sym_recording] = ACTIONS(247),
    [anon_sym_GuestVocal] = ACTIONS(247),
    [anon_sym_Guestvocal] = ACTIONS(247),
    [anon_sym_guestvocal] = ACTIONS(247),
    [anon_sym_Chorus] = ACTIONS(247),
    [anon_sym_chorus] = ACTIONS(247),
    [anon_sym_Mixing] = ACTIONS(247),
    [anon_sym_mixing] = ACTIONS(247),
    [anon_sym_Mastering] = ACTIONS(247),
    [anon_sym_mastering] = ACTIONS(247),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(247),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(247),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(247),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(247),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(247),
    [anon_sym_u827au672fu5bb6] = ACTIONS(247),
    [anon_sym_u6b4cu5531] = ACTIONS(247),
    [anon_sym_u6b4c] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(247),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu66f2] = ACTIONS(247),
    [anon_sym_u7de8u66f2] = ACTIONS(247),
    [anon_sym_u7f16u66f2] = ACTIONS(247),
    [anon_sym_u4f5cu8a5e] = ACTIONS(247),
    [anon_sym_u4f5cu8bcd] = ACTIONS(247),
    [anon_sym_u5382u724c] = ACTIONS(247),
    [anon_sym_u811au672c] = ACTIONS(247),
    [anon_sym_u63d2u56fe] = ACTIONS(247),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(247),
    [anon_sym_u51fau7248u65b9] = ACTIONS(247),
    [anon_sym_u5f55u97f3] = ACTIONS(247),
    [anon_sym_u539fu4f5c] = ACTIONS(247),
    [anon_sym_u58f0u4e50] = ACTIONS(247),
    [anon_sym_u4e50u5668] = ACTIONS(247),
    [anon_sym_u6df7u97f3] = ACTIONS(247),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(247),
    [sym__sep] = ACTIONS(247),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_DISC] = ACTIONS(271),
    [anon_sym_u300a] = ACTIONS(271),
    [aux_sym_song_title_token1] = ACTIONS(271),
    [sym__role_instrument] = ACTIONS(269),
    [anon_sym_Music] = ACTIONS(271),
    [anon_sym_music] = ACTIONS(271),
    [anon_sym_Composition] = ACTIONS(271),
    [anon_sym_composition] = ACTIONS(271),
    [anon_sym_Composer] = ACTIONS(271),
    [anon_sym_composer] = ACTIONS(271),
    [anon_sym_Compose] = ACTIONS(271),
    [anon_sym_compose] = ACTIONS(271),
    [anon_sym_Lyrics] = ACTIONS(271),
    [anon_sym_lyrics] = ACTIONS(271),
    [anon_sym_Lyricist] = ACTIONS(271),
    [anon_sym_lyricist] = ACTIONS(271),
    [anon_sym_Lyric] = ACTIONS(271),
    [anon_sym_lyric] = ACTIONS(271),
    [anon_sym_Arrangement] = ACTIONS(271),
    [anon_sym_arrangement] = ACTIONS(271),
    [anon_sym_Arranger] = ACTIONS(271),
    [anon_sym_arranger] = ACTIONS(271),
    [anon_sym_Arrange] = ACTIONS(271),
    [anon_sym_arrange] = ACTIONS(271),
    [anon_sym_Vocal] = ACTIONS(271),
    [anon_sym_vocal] = ACTIONS(271),
    [anon_sym_Performer] = ACTIONS(271),
    [anon_sym_performer] = ACTIONS(271),
    [anon_sym_Illustration] = ACTIONS(271),
    [anon_sym_illustration] = ACTIONS(271),
    [anon_sym_Illust] = ACTIONS(271),
    [anon_sym_illust] = ACTIONS(271),
    [anon_sym_Label] = ACTIONS(271),
    [anon_sym_label] = ACTIONS(271),
    [anon_sym_Circle] = ACTIONS(271),
    [anon_sym_circle] = ACTIONS(271),
    [anon_sym_Producer] = ACTIONS(271),
    [anon_sym_producer] = ACTIONS(271),
    [anon_sym_Recording] = ACTIONS(271),
    [anon_sym_recording] = ACTIONS(271),
    [anon_sym_GuestVocal] = ACTIONS(271),
    [anon_sym_Guestvocal] = ACTIONS(271),
    [anon_sym_guestvocal] = ACTIONS(271),
    [anon_sym_Chorus] = ACTIONS(271),
    [anon_sym_chorus] = ACTIONS(271),
    [anon_sym_Mixing] = ACTIONS(271),
    [anon_sym_mixing] = ACTIONS(271),
    [anon_sym_Mastering] = ACTIONS(271),
    [anon_sym_mastering] = ACTIONS(271),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(271),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(271),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(271),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(271),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(271),
    [anon_sym_u827au672fu5bb6] = ACTIONS(271),
    [anon_sym_u6b4cu5531] = ACTIONS(271),
    [anon_sym_u6b4c] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu66f2] = ACTIONS(271),
    [anon_sym_u7de8u66f2] = ACTIONS(271),
    [anon_sym_u7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5e] = ACTIONS(271),
    [anon_sym_u4f5cu8bcd] = ACTIONS(271),
    [anon_sym_u5382u724c] = ACTIONS(271),
    [anon_sym_u811au672c] = ACTIONS(271),
    [anon_sym_u63d2u56fe] = ACTIONS(271),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(271),
    [anon_sym_u51fau7248u65b9] = ACTIONS(271),
    [anon_sym_u5f55u97f3] = ACTIONS(271),
    [anon_sym_u539fu4f5c] = ACTIONS(271),
    [anon_sym_u58f0u4e50] = ACTIONS(271),
    [anon_sym_u4e50u5668] = ACTIONS(271),
    [anon_sym_u6df7u97f3] = ACTIONS(271),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(271),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DISC] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
    [sym__role_instrument] = ACTIONS(47),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u6b4c] = ACTIONS(49),
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
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_DISC] = ACTIONS(39),
    [anon_sym_u300a] = ACTIONS(39),
    [aux_sym_song_title_token1] = ACTIONS(39),
    [sym__role_instrument] = ACTIONS(37),
    [anon_sym_Music] = ACTIONS(39),
    [anon_sym_music] = ACTIONS(39),
    [anon_sym_Composition] = ACTIONS(39),
    [anon_sym_composition] = ACTIONS(39),
    [anon_sym_Composer] = ACTIONS(39),
    [anon_sym_composer] = ACTIONS(39),
    [anon_sym_Compose] = ACTIONS(39),
    [anon_sym_compose] = ACTIONS(39),
    [anon_sym_Lyrics] = ACTIONS(39),
    [anon_sym_lyrics] = ACTIONS(39),
    [anon_sym_Lyricist] = ACTIONS(39),
    [anon_sym_lyricist] = ACTIONS(39),
    [anon_sym_Lyric] = ACTIONS(39),
    [anon_sym_lyric] = ACTIONS(39),
    [anon_sym_Arrangement] = ACTIONS(39),
    [anon_sym_arrangement] = ACTIONS(39),
    [anon_sym_Arranger] = ACTIONS(39),
    [anon_sym_arranger] = ACTIONS(39),
    [anon_sym_Arrange] = ACTIONS(39),
    [anon_sym_arrange] = ACTIONS(39),
    [anon_sym_Vocal] = ACTIONS(39),
    [anon_sym_vocal] = ACTIONS(39),
    [anon_sym_Performer] = ACTIONS(39),
    [anon_sym_performer] = ACTIONS(39),
    [anon_sym_Illustration] = ACTIONS(39),
    [anon_sym_illustration] = ACTIONS(39),
    [anon_sym_Illust] = ACTIONS(39),
    [anon_sym_illust] = ACTIONS(39),
    [anon_sym_Label] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_Circle] = ACTIONS(39),
    [anon_sym_circle] = ACTIONS(39),
    [anon_sym_Producer] = ACTIONS(39),
    [anon_sym_producer] = ACTIONS(39),
    [anon_sym_Recording] = ACTIONS(39),
    [anon_sym_recording] = ACTIONS(39),
    [anon_sym_GuestVocal] = ACTIONS(39),
    [anon_sym_Guestvocal] = ACTIONS(39),
    [anon_sym_guestvocal] = ACTIONS(39),
    [anon_sym_Chorus] = ACTIONS(39),
    [anon_sym_chorus] = ACTIONS(39),
    [anon_sym_Mixing] = ACTIONS(39),
    [anon_sym_mixing] = ACTIONS(39),
    [anon_sym_Mastering] = ACTIONS(39),
    [anon_sym_mastering] = ACTIONS(39),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(39),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(39),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(39),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(39),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(39),
    [anon_sym_u827au672fu5bb6] = ACTIONS(39),
    [anon_sym_u6b4cu5531] = ACTIONS(39),
    [anon_sym_u6b4c] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu66f2] = ACTIONS(39),
    [anon_sym_u7de8u66f2] = ACTIONS(39),
    [anon_sym_u7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5e] = ACTIONS(39),
    [anon_sym_u4f5cu8bcd] = ACTIONS(39),
    [anon_sym_u5382u724c] = ACTIONS(39),
    [anon_sym_u811au672c] = ACTIONS(39),
    [anon_sym_u63d2u56fe] = ACTIONS(39),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(39),
    [anon_sym_u51fau7248u65b9] = ACTIONS(39),
    [anon_sym_u5f55u97f3] = ACTIONS(39),
    [anon_sym_u539fu4f5c] = ACTIONS(39),
    [anon_sym_u58f0u4e50] = ACTIONS(39),
    [anon_sym_u4e50u5668] = ACTIONS(39),
    [anon_sym_u6df7u97f3] = ACTIONS(39),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(39),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_u300a] = ACTIONS(164),
    [aux_sym_song_title_token1] = ACTIONS(164),
    [sym__role_instrument] = ACTIONS(162),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(164),
    [anon_sym_u6b4cu5531] = ACTIONS(164),
    [anon_sym_u6b4c] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu66f2] = ACTIONS(164),
    [anon_sym_u7de8u66f2] = ACTIONS(164),
    [anon_sym_u7f16u66f2] = ACTIONS(164),
    [anon_sym_u4f5cu8a5e] = ACTIONS(164),
    [anon_sym_u4f5cu8bcd] = ACTIONS(164),
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
  },
  [75] = {
    [anon_sym_DISC] = ACTIONS(273),
    [anon_sym_u300a] = ACTIONS(273),
    [aux_sym_song_title_token1] = ACTIONS(273),
    [sym__role_instrument] = ACTIONS(275),
    [anon_sym_Music] = ACTIONS(273),
    [anon_sym_music] = ACTIONS(273),
    [anon_sym_Composition] = ACTIONS(273),
    [anon_sym_composition] = ACTIONS(273),
    [anon_sym_Composer] = ACTIONS(273),
    [anon_sym_composer] = ACTIONS(273),
    [anon_sym_Compose] = ACTIONS(273),
    [anon_sym_compose] = ACTIONS(273),
    [anon_sym_Lyrics] = ACTIONS(273),
    [anon_sym_lyrics] = ACTIONS(273),
    [anon_sym_Lyricist] = ACTIONS(273),
    [anon_sym_lyricist] = ACTIONS(273),
    [anon_sym_Lyric] = ACTIONS(273),
    [anon_sym_lyric] = ACTIONS(273),
    [anon_sym_Arrangement] = ACTIONS(273),
    [anon_sym_arrangement] = ACTIONS(273),
    [anon_sym_Arranger] = ACTIONS(273),
    [anon_sym_arranger] = ACTIONS(273),
    [anon_sym_Arrange] = ACTIONS(273),
    [anon_sym_arrange] = ACTIONS(273),
    [anon_sym_Vocal] = ACTIONS(273),
    [anon_sym_vocal] = ACTIONS(273),
    [anon_sym_Performer] = ACTIONS(273),
    [anon_sym_performer] = ACTIONS(273),
    [anon_sym_Illustration] = ACTIONS(273),
    [anon_sym_illustration] = ACTIONS(273),
    [anon_sym_Illust] = ACTIONS(273),
    [anon_sym_illust] = ACTIONS(273),
    [anon_sym_Label] = ACTIONS(273),
    [anon_sym_label] = ACTIONS(273),
    [anon_sym_Circle] = ACTIONS(273),
    [anon_sym_circle] = ACTIONS(273),
    [anon_sym_Producer] = ACTIONS(273),
    [anon_sym_producer] = ACTIONS(273),
    [anon_sym_Recording] = ACTIONS(273),
    [anon_sym_recording] = ACTIONS(273),
    [anon_sym_GuestVocal] = ACTIONS(273),
    [anon_sym_Guestvocal] = ACTIONS(273),
    [anon_sym_guestvocal] = ACTIONS(273),
    [anon_sym_Chorus] = ACTIONS(273),
    [anon_sym_chorus] = ACTIONS(273),
    [anon_sym_Mixing] = ACTIONS(273),
    [anon_sym_mixing] = ACTIONS(273),
    [anon_sym_Mastering] = ACTIONS(273),
    [anon_sym_mastering] = ACTIONS(273),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(273),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(273),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(273),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(273),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(273),
    [anon_sym_u827au672fu5bb6] = ACTIONS(273),
    [anon_sym_u6b4cu5531] = ACTIONS(273),
    [anon_sym_u6b4c] = ACTIONS(273),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(273),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(273),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(273),
    [anon_sym_u4f5cu66f2] = ACTIONS(273),
    [anon_sym_u7de8u66f2] = ACTIONS(273),
    [anon_sym_u7f16u66f2] = ACTIONS(273),
    [anon_sym_u4f5cu8a5e] = ACTIONS(273),
    [anon_sym_u4f5cu8bcd] = ACTIONS(273),
    [anon_sym_u5382u724c] = ACTIONS(273),
    [anon_sym_u811au672c] = ACTIONS(273),
    [anon_sym_u63d2u56fe] = ACTIONS(273),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(273),
    [anon_sym_u51fau7248u65b9] = ACTIONS(273),
    [anon_sym_u5f55u97f3] = ACTIONS(273),
    [anon_sym_u539fu4f5c] = ACTIONS(273),
    [anon_sym_u58f0u4e50] = ACTIONS(273),
    [anon_sym_u4e50u5668] = ACTIONS(273),
    [anon_sym_u6df7u97f3] = ACTIONS(273),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(273),
    [sym__sep] = ACTIONS(277),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DISC] = ACTIONS(281),
    [anon_sym_u300a] = ACTIONS(281),
    [aux_sym_song_title_token1] = ACTIONS(281),
    [sym__role_instrument] = ACTIONS(279),
    [anon_sym_Music] = ACTIONS(281),
    [anon_sym_music] = ACTIONS(281),
    [anon_sym_Composition] = ACTIONS(281),
    [anon_sym_composition] = ACTIONS(281),
    [anon_sym_Composer] = ACTIONS(281),
    [anon_sym_composer] = ACTIONS(281),
    [anon_sym_Compose] = ACTIONS(281),
    [anon_sym_compose] = ACTIONS(281),
    [anon_sym_Lyrics] = ACTIONS(281),
    [anon_sym_lyrics] = ACTIONS(281),
    [anon_sym_Lyricist] = ACTIONS(281),
    [anon_sym_lyricist] = ACTIONS(281),
    [anon_sym_Lyric] = ACTIONS(281),
    [anon_sym_lyric] = ACTIONS(281),
    [anon_sym_Arrangement] = ACTIONS(281),
    [anon_sym_arrangement] = ACTIONS(281),
    [anon_sym_Arranger] = ACTIONS(281),
    [anon_sym_arranger] = ACTIONS(281),
    [anon_sym_Arrange] = ACTIONS(281),
    [anon_sym_arrange] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illust] = ACTIONS(281),
    [anon_sym_illust] = ACTIONS(281),
    [anon_sym_Label] = ACTIONS(281),
    [anon_sym_label] = ACTIONS(281),
    [anon_sym_Circle] = ACTIONS(281),
    [anon_sym_circle] = ACTIONS(281),
    [anon_sym_Producer] = ACTIONS(281),
    [anon_sym_producer] = ACTIONS(281),
    [anon_sym_Recording] = ACTIONS(281),
    [anon_sym_recording] = ACTIONS(281),
    [anon_sym_GuestVocal] = ACTIONS(281),
    [anon_sym_Guestvocal] = ACTIONS(281),
    [anon_sym_guestvocal] = ACTIONS(281),
    [anon_sym_Chorus] = ACTIONS(281),
    [anon_sym_chorus] = ACTIONS(281),
    [anon_sym_Mixing] = ACTIONS(281),
    [anon_sym_mixing] = ACTIONS(281),
    [anon_sym_Mastering] = ACTIONS(281),
    [anon_sym_mastering] = ACTIONS(281),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(281),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(281),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(281),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(281),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(281),
    [anon_sym_u827au672fu5bb6] = ACTIONS(281),
    [anon_sym_u6b4cu5531] = ACTIONS(281),
    [anon_sym_u6b4c] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu66f2] = ACTIONS(281),
    [anon_sym_u7de8u66f2] = ACTIONS(281),
    [anon_sym_u7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5e] = ACTIONS(281),
    [anon_sym_u4f5cu8bcd] = ACTIONS(281),
    [anon_sym_u5382u724c] = ACTIONS(281),
    [anon_sym_u811au672c] = ACTIONS(281),
    [anon_sym_u63d2u56fe] = ACTIONS(281),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(281),
    [anon_sym_u51fau7248u65b9] = ACTIONS(281),
    [anon_sym_u5f55u97f3] = ACTIONS(281),
    [anon_sym_u539fu4f5c] = ACTIONS(281),
    [anon_sym_u58f0u4e50] = ACTIONS(281),
    [anon_sym_u4e50u5668] = ACTIONS(281),
    [anon_sym_u6df7u97f3] = ACTIONS(281),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(281),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_u300a] = ACTIONS(261),
    [aux_sym_song_title_token1] = ACTIONS(261),
    [sym__role_instrument] = ACTIONS(259),
    [anon_sym_Music] = ACTIONS(261),
    [anon_sym_music] = ACTIONS(261),
    [anon_sym_Composition] = ACTIONS(261),
    [anon_sym_composition] = ACTIONS(261),
    [anon_sym_Composer] = ACTIONS(261),
    [anon_sym_composer] = ACTIONS(261),
    [anon_sym_Compose] = ACTIONS(261),
    [anon_sym_compose] = ACTIONS(261),
    [anon_sym_Lyrics] = ACTIONS(261),
    [anon_sym_lyrics] = ACTIONS(261),
    [anon_sym_Lyricist] = ACTIONS(261),
    [anon_sym_lyricist] = ACTIONS(261),
    [anon_sym_Lyric] = ACTIONS(261),
    [anon_sym_lyric] = ACTIONS(261),
    [anon_sym_Arrangement] = ACTIONS(261),
    [anon_sym_arrangement] = ACTIONS(261),
    [anon_sym_Arranger] = ACTIONS(261),
    [anon_sym_arranger] = ACTIONS(261),
    [anon_sym_Arrange] = ACTIONS(261),
    [anon_sym_arrange] = ACTIONS(261),
    [anon_sym_Vocal] = ACTIONS(261),
    [anon_sym_vocal] = ACTIONS(261),
    [anon_sym_Performer] = ACTIONS(261),
    [anon_sym_performer] = ACTIONS(261),
    [anon_sym_Illustration] = ACTIONS(261),
    [anon_sym_illustration] = ACTIONS(261),
    [anon_sym_Illust] = ACTIONS(261),
    [anon_sym_illust] = ACTIONS(261),
    [anon_sym_Label] = ACTIONS(261),
    [anon_sym_label] = ACTIONS(261),
    [anon_sym_Circle] = ACTIONS(261),
    [anon_sym_circle] = ACTIONS(261),
    [anon_sym_Producer] = ACTIONS(261),
    [anon_sym_producer] = ACTIONS(261),
    [anon_sym_Recording] = ACTIONS(261),
    [anon_sym_recording] = ACTIONS(261),
    [anon_sym_GuestVocal] = ACTIONS(261),
    [anon_sym_Guestvocal] = ACTIONS(261),
    [anon_sym_guestvocal] = ACTIONS(261),
    [anon_sym_Chorus] = ACTIONS(261),
    [anon_sym_chorus] = ACTIONS(261),
    [anon_sym_Mixing] = ACTIONS(261),
    [anon_sym_mixing] = ACTIONS(261),
    [anon_sym_Mastering] = ACTIONS(261),
    [anon_sym_mastering] = ACTIONS(261),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(261),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(261),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(261),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(261),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(261),
    [anon_sym_u827au672fu5bb6] = ACTIONS(261),
    [anon_sym_u6b4cu5531] = ACTIONS(261),
    [anon_sym_u6b4c] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(261),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu66f2] = ACTIONS(261),
    [anon_sym_u7de8u66f2] = ACTIONS(261),
    [anon_sym_u7f16u66f2] = ACTIONS(261),
    [anon_sym_u4f5cu8a5e] = ACTIONS(261),
    [anon_sym_u4f5cu8bcd] = ACTIONS(261),
    [anon_sym_u5382u724c] = ACTIONS(261),
    [anon_sym_u811au672c] = ACTIONS(261),
    [anon_sym_u63d2u56fe] = ACTIONS(261),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(261),
    [anon_sym_u51fau7248u65b9] = ACTIONS(261),
    [anon_sym_u5f55u97f3] = ACTIONS(261),
    [anon_sym_u539fu4f5c] = ACTIONS(261),
    [anon_sym_u58f0u4e50] = ACTIONS(261),
    [anon_sym_u4e50u5668] = ACTIONS(261),
    [anon_sym_u6df7u97f3] = ACTIONS(261),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(261),
    [sym__sep] = ACTIONS(283),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_u300a] = ACTIONS(255),
    [aux_sym_song_title_token1] = ACTIONS(255),
    [sym__role_instrument] = ACTIONS(253),
    [anon_sym_Music] = ACTIONS(255),
    [anon_sym_music] = ACTIONS(255),
    [anon_sym_Composition] = ACTIONS(255),
    [anon_sym_composition] = ACTIONS(255),
    [anon_sym_Composer] = ACTIONS(255),
    [anon_sym_composer] = ACTIONS(255),
    [anon_sym_Compose] = ACTIONS(255),
    [anon_sym_compose] = ACTIONS(255),
    [anon_sym_Lyrics] = ACTIONS(255),
    [anon_sym_lyrics] = ACTIONS(255),
    [anon_sym_Lyricist] = ACTIONS(255),
    [anon_sym_lyricist] = ACTIONS(255),
    [anon_sym_Lyric] = ACTIONS(255),
    [anon_sym_lyric] = ACTIONS(255),
    [anon_sym_Arrangement] = ACTIONS(255),
    [anon_sym_arrangement] = ACTIONS(255),
    [anon_sym_Arranger] = ACTIONS(255),
    [anon_sym_arranger] = ACTIONS(255),
    [anon_sym_Arrange] = ACTIONS(255),
    [anon_sym_arrange] = ACTIONS(255),
    [anon_sym_Vocal] = ACTIONS(255),
    [anon_sym_vocal] = ACTIONS(255),
    [anon_sym_Performer] = ACTIONS(255),
    [anon_sym_performer] = ACTIONS(255),
    [anon_sym_Illustration] = ACTIONS(255),
    [anon_sym_illustration] = ACTIONS(255),
    [anon_sym_Illust] = ACTIONS(255),
    [anon_sym_illust] = ACTIONS(255),
    [anon_sym_Label] = ACTIONS(255),
    [anon_sym_label] = ACTIONS(255),
    [anon_sym_Circle] = ACTIONS(255),
    [anon_sym_circle] = ACTIONS(255),
    [anon_sym_Producer] = ACTIONS(255),
    [anon_sym_producer] = ACTIONS(255),
    [anon_sym_Recording] = ACTIONS(255),
    [anon_sym_recording] = ACTIONS(255),
    [anon_sym_GuestVocal] = ACTIONS(255),
    [anon_sym_Guestvocal] = ACTIONS(255),
    [anon_sym_guestvocal] = ACTIONS(255),
    [anon_sym_Chorus] = ACTIONS(255),
    [anon_sym_chorus] = ACTIONS(255),
    [anon_sym_Mixing] = ACTIONS(255),
    [anon_sym_mixing] = ACTIONS(255),
    [anon_sym_Mastering] = ACTIONS(255),
    [anon_sym_mastering] = ACTIONS(255),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(255),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(255),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(255),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(255),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(255),
    [anon_sym_u827au672fu5bb6] = ACTIONS(255),
    [anon_sym_u6b4cu5531] = ACTIONS(255),
    [anon_sym_u6b4c] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(255),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu66f2] = ACTIONS(255),
    [anon_sym_u7de8u66f2] = ACTIONS(255),
    [anon_sym_u7f16u66f2] = ACTIONS(255),
    [anon_sym_u4f5cu8a5e] = ACTIONS(255),
    [anon_sym_u4f5cu8bcd] = ACTIONS(255),
    [anon_sym_u5382u724c] = ACTIONS(255),
    [anon_sym_u811au672c] = ACTIONS(255),
    [anon_sym_u63d2u56fe] = ACTIONS(255),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(255),
    [anon_sym_u51fau7248u65b9] = ACTIONS(255),
    [anon_sym_u5f55u97f3] = ACTIONS(255),
    [anon_sym_u539fu4f5c] = ACTIONS(255),
    [anon_sym_u58f0u4e50] = ACTIONS(255),
    [anon_sym_u4e50u5668] = ACTIONS(255),
    [anon_sym_u6df7u97f3] = ACTIONS(255),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(255),
    [sym__sep] = ACTIONS(285),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_u300a] = ACTIONS(251),
    [aux_sym_song_title_token1] = ACTIONS(251),
    [sym__role_instrument] = ACTIONS(249),
    [anon_sym_Music] = ACTIONS(251),
    [anon_sym_music] = ACTIONS(251),
    [anon_sym_Composition] = ACTIONS(251),
    [anon_sym_composition] = ACTIONS(251),
    [anon_sym_Composer] = ACTIONS(251),
    [anon_sym_composer] = ACTIONS(251),
    [anon_sym_Compose] = ACTIONS(251),
    [anon_sym_compose] = ACTIONS(251),
    [anon_sym_Lyrics] = ACTIONS(251),
    [anon_sym_lyrics] = ACTIONS(251),
    [anon_sym_Lyricist] = ACTIONS(251),
    [anon_sym_lyricist] = ACTIONS(251),
    [anon_sym_Lyric] = ACTIONS(251),
    [anon_sym_lyric] = ACTIONS(251),
    [anon_sym_Arrangement] = ACTIONS(251),
    [anon_sym_arrangement] = ACTIONS(251),
    [anon_sym_Arranger] = ACTIONS(251),
    [anon_sym_arranger] = ACTIONS(251),
    [anon_sym_Arrange] = ACTIONS(251),
    [anon_sym_arrange] = ACTIONS(251),
    [anon_sym_Vocal] = ACTIONS(251),
    [anon_sym_vocal] = ACTIONS(251),
    [anon_sym_Performer] = ACTIONS(251),
    [anon_sym_performer] = ACTIONS(251),
    [anon_sym_Illustration] = ACTIONS(251),
    [anon_sym_illustration] = ACTIONS(251),
    [anon_sym_Illust] = ACTIONS(251),
    [anon_sym_illust] = ACTIONS(251),
    [anon_sym_Label] = ACTIONS(251),
    [anon_sym_label] = ACTIONS(251),
    [anon_sym_Circle] = ACTIONS(251),
    [anon_sym_circle] = ACTIONS(251),
    [anon_sym_Producer] = ACTIONS(251),
    [anon_sym_producer] = ACTIONS(251),
    [anon_sym_Recording] = ACTIONS(251),
    [anon_sym_recording] = ACTIONS(251),
    [anon_sym_GuestVocal] = ACTIONS(251),
    [anon_sym_Guestvocal] = ACTIONS(251),
    [anon_sym_guestvocal] = ACTIONS(251),
    [anon_sym_Chorus] = ACTIONS(251),
    [anon_sym_chorus] = ACTIONS(251),
    [anon_sym_Mixing] = ACTIONS(251),
    [anon_sym_mixing] = ACTIONS(251),
    [anon_sym_Mastering] = ACTIONS(251),
    [anon_sym_mastering] = ACTIONS(251),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(251),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(251),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(251),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(251),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(251),
    [anon_sym_u827au672fu5bb6] = ACTIONS(251),
    [anon_sym_u6b4cu5531] = ACTIONS(251),
    [anon_sym_u6b4c] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(251),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu66f2] = ACTIONS(251),
    [anon_sym_u7de8u66f2] = ACTIONS(251),
    [anon_sym_u7f16u66f2] = ACTIONS(251),
    [anon_sym_u4f5cu8a5e] = ACTIONS(251),
    [anon_sym_u4f5cu8bcd] = ACTIONS(251),
    [anon_sym_u5382u724c] = ACTIONS(251),
    [anon_sym_u811au672c] = ACTIONS(251),
    [anon_sym_u63d2u56fe] = ACTIONS(251),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(251),
    [anon_sym_u51fau7248u65b9] = ACTIONS(251),
    [anon_sym_u5f55u97f3] = ACTIONS(251),
    [anon_sym_u539fu4f5c] = ACTIONS(251),
    [anon_sym_u58f0u4e50] = ACTIONS(251),
    [anon_sym_u4e50u5668] = ACTIONS(251),
    [anon_sym_u6df7u97f3] = ACTIONS(251),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(251),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_u300a] = ACTIONS(267),
    [aux_sym_song_title_token1] = ACTIONS(267),
    [sym__role_instrument] = ACTIONS(265),
    [anon_sym_Music] = ACTIONS(267),
    [anon_sym_music] = ACTIONS(267),
    [anon_sym_Composition] = ACTIONS(267),
    [anon_sym_composition] = ACTIONS(267),
    [anon_sym_Composer] = ACTIONS(267),
    [anon_sym_composer] = ACTIONS(267),
    [anon_sym_Compose] = ACTIONS(267),
    [anon_sym_compose] = ACTIONS(267),
    [anon_sym_Lyrics] = ACTIONS(267),
    [anon_sym_lyrics] = ACTIONS(267),
    [anon_sym_Lyricist] = ACTIONS(267),
    [anon_sym_lyricist] = ACTIONS(267),
    [anon_sym_Lyric] = ACTIONS(267),
    [anon_sym_lyric] = ACTIONS(267),
    [anon_sym_Arrangement] = ACTIONS(267),
    [anon_sym_arrangement] = ACTIONS(267),
    [anon_sym_Arranger] = ACTIONS(267),
    [anon_sym_arranger] = ACTIONS(267),
    [anon_sym_Arrange] = ACTIONS(267),
    [anon_sym_arrange] = ACTIONS(267),
    [anon_sym_Vocal] = ACTIONS(267),
    [anon_sym_vocal] = ACTIONS(267),
    [anon_sym_Performer] = ACTIONS(267),
    [anon_sym_performer] = ACTIONS(267),
    [anon_sym_Illustration] = ACTIONS(267),
    [anon_sym_illustration] = ACTIONS(267),
    [anon_sym_Illust] = ACTIONS(267),
    [anon_sym_illust] = ACTIONS(267),
    [anon_sym_Label] = ACTIONS(267),
    [anon_sym_label] = ACTIONS(267),
    [anon_sym_Circle] = ACTIONS(267),
    [anon_sym_circle] = ACTIONS(267),
    [anon_sym_Producer] = ACTIONS(267),
    [anon_sym_producer] = ACTIONS(267),
    [anon_sym_Recording] = ACTIONS(267),
    [anon_sym_recording] = ACTIONS(267),
    [anon_sym_GuestVocal] = ACTIONS(267),
    [anon_sym_Guestvocal] = ACTIONS(267),
    [anon_sym_guestvocal] = ACTIONS(267),
    [anon_sym_Chorus] = ACTIONS(267),
    [anon_sym_chorus] = ACTIONS(267),
    [anon_sym_Mixing] = ACTIONS(267),
    [anon_sym_mixing] = ACTIONS(267),
    [anon_sym_Mastering] = ACTIONS(267),
    [anon_sym_mastering] = ACTIONS(267),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(267),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(267),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(267),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(267),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(267),
    [anon_sym_u827au672fu5bb6] = ACTIONS(267),
    [anon_sym_u6b4cu5531] = ACTIONS(267),
    [anon_sym_u6b4c] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu66f2] = ACTIONS(267),
    [anon_sym_u7de8u66f2] = ACTIONS(267),
    [anon_sym_u7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5e] = ACTIONS(267),
    [anon_sym_u4f5cu8bcd] = ACTIONS(267),
    [anon_sym_u5382u724c] = ACTIONS(267),
    [anon_sym_u811au672c] = ACTIONS(267),
    [anon_sym_u63d2u56fe] = ACTIONS(267),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(267),
    [anon_sym_u51fau7248u65b9] = ACTIONS(267),
    [anon_sym_u5f55u97f3] = ACTIONS(267),
    [anon_sym_u539fu4f5c] = ACTIONS(267),
    [anon_sym_u58f0u4e50] = ACTIONS(267),
    [anon_sym_u4e50u5668] = ACTIONS(267),
    [anon_sym_u6df7u97f3] = ACTIONS(267),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(267),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_u300a] = ACTIONS(267),
    [aux_sym_song_title_token1] = ACTIONS(267),
    [sym__role_instrument] = ACTIONS(265),
    [anon_sym_Music] = ACTIONS(267),
    [anon_sym_music] = ACTIONS(267),
    [anon_sym_Composition] = ACTIONS(267),
    [anon_sym_composition] = ACTIONS(267),
    [anon_sym_Composer] = ACTIONS(267),
    [anon_sym_composer] = ACTIONS(267),
    [anon_sym_Compose] = ACTIONS(267),
    [anon_sym_compose] = ACTIONS(267),
    [anon_sym_Lyrics] = ACTIONS(267),
    [anon_sym_lyrics] = ACTIONS(267),
    [anon_sym_Lyricist] = ACTIONS(267),
    [anon_sym_lyricist] = ACTIONS(267),
    [anon_sym_Lyric] = ACTIONS(267),
    [anon_sym_lyric] = ACTIONS(267),
    [anon_sym_Arrangement] = ACTIONS(267),
    [anon_sym_arrangement] = ACTIONS(267),
    [anon_sym_Arranger] = ACTIONS(267),
    [anon_sym_arranger] = ACTIONS(267),
    [anon_sym_Arrange] = ACTIONS(267),
    [anon_sym_arrange] = ACTIONS(267),
    [anon_sym_Vocal] = ACTIONS(267),
    [anon_sym_vocal] = ACTIONS(267),
    [anon_sym_Performer] = ACTIONS(267),
    [anon_sym_performer] = ACTIONS(267),
    [anon_sym_Illustration] = ACTIONS(267),
    [anon_sym_illustration] = ACTIONS(267),
    [anon_sym_Illust] = ACTIONS(267),
    [anon_sym_illust] = ACTIONS(267),
    [anon_sym_Label] = ACTIONS(267),
    [anon_sym_label] = ACTIONS(267),
    [anon_sym_Circle] = ACTIONS(267),
    [anon_sym_circle] = ACTIONS(267),
    [anon_sym_Producer] = ACTIONS(267),
    [anon_sym_producer] = ACTIONS(267),
    [anon_sym_Recording] = ACTIONS(267),
    [anon_sym_recording] = ACTIONS(267),
    [anon_sym_GuestVocal] = ACTIONS(267),
    [anon_sym_Guestvocal] = ACTIONS(267),
    [anon_sym_guestvocal] = ACTIONS(267),
    [anon_sym_Chorus] = ACTIONS(267),
    [anon_sym_chorus] = ACTIONS(267),
    [anon_sym_Mixing] = ACTIONS(267),
    [anon_sym_mixing] = ACTIONS(267),
    [anon_sym_Mastering] = ACTIONS(267),
    [anon_sym_mastering] = ACTIONS(267),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(267),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(267),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(267),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(267),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(267),
    [anon_sym_u827au672fu5bb6] = ACTIONS(267),
    [anon_sym_u6b4cu5531] = ACTIONS(267),
    [anon_sym_u6b4c] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu66f2] = ACTIONS(267),
    [anon_sym_u7de8u66f2] = ACTIONS(267),
    [anon_sym_u7f16u66f2] = ACTIONS(267),
    [anon_sym_u4f5cu8a5e] = ACTIONS(267),
    [anon_sym_u4f5cu8bcd] = ACTIONS(267),
    [anon_sym_u5382u724c] = ACTIONS(267),
    [anon_sym_u811au672c] = ACTIONS(267),
    [anon_sym_u63d2u56fe] = ACTIONS(267),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(267),
    [anon_sym_u51fau7248u65b9] = ACTIONS(267),
    [anon_sym_u5f55u97f3] = ACTIONS(267),
    [anon_sym_u539fu4f5c] = ACTIONS(267),
    [anon_sym_u58f0u4e50] = ACTIONS(267),
    [anon_sym_u4e50u5668] = ACTIONS(267),
    [anon_sym_u6df7u97f3] = ACTIONS(267),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(267),
  },
  [82] = {
    [anon_sym_DISC] = ACTIONS(287),
    [anon_sym_u300a] = ACTIONS(287),
    [aux_sym_song_title_token1] = ACTIONS(287),
    [sym__role_instrument] = ACTIONS(289),
    [anon_sym_Music] = ACTIONS(287),
    [anon_sym_music] = ACTIONS(287),
    [anon_sym_Composition] = ACTIONS(287),
    [anon_sym_composition] = ACTIONS(287),
    [anon_sym_Composer] = ACTIONS(287),
    [anon_sym_composer] = ACTIONS(287),
    [anon_sym_Compose] = ACTIONS(287),
    [anon_sym_compose] = ACTIONS(287),
    [anon_sym_Lyrics] = ACTIONS(287),
    [anon_sym_lyrics] = ACTIONS(287),
    [anon_sym_Lyricist] = ACTIONS(287),
    [anon_sym_lyricist] = ACTIONS(287),
    [anon_sym_Lyric] = ACTIONS(287),
    [anon_sym_lyric] = ACTIONS(287),
    [anon_sym_Arrangement] = ACTIONS(287),
    [anon_sym_arrangement] = ACTIONS(287),
    [anon_sym_Arranger] = ACTIONS(287),
    [anon_sym_arranger] = ACTIONS(287),
    [anon_sym_Arrange] = ACTIONS(287),
    [anon_sym_arrange] = ACTIONS(287),
    [anon_sym_Vocal] = ACTIONS(287),
    [anon_sym_vocal] = ACTIONS(287),
    [anon_sym_Performer] = ACTIONS(287),
    [anon_sym_performer] = ACTIONS(287),
    [anon_sym_Illustration] = ACTIONS(287),
    [anon_sym_illustration] = ACTIONS(287),
    [anon_sym_Illust] = ACTIONS(287),
    [anon_sym_illust] = ACTIONS(287),
    [anon_sym_Label] = ACTIONS(287),
    [anon_sym_label] = ACTIONS(287),
    [anon_sym_Circle] = ACTIONS(287),
    [anon_sym_circle] = ACTIONS(287),
    [anon_sym_Producer] = ACTIONS(287),
    [anon_sym_producer] = ACTIONS(287),
    [anon_sym_Recording] = ACTIONS(287),
    [anon_sym_recording] = ACTIONS(287),
    [anon_sym_GuestVocal] = ACTIONS(287),
    [anon_sym_Guestvocal] = ACTIONS(287),
    [anon_sym_guestvocal] = ACTIONS(287),
    [anon_sym_Chorus] = ACTIONS(287),
    [anon_sym_chorus] = ACTIONS(287),
    [anon_sym_Mixing] = ACTIONS(287),
    [anon_sym_mixing] = ACTIONS(287),
    [anon_sym_Mastering] = ACTIONS(287),
    [anon_sym_mastering] = ACTIONS(287),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(287),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(287),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(287),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(287),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(287),
    [anon_sym_u827au672fu5bb6] = ACTIONS(287),
    [anon_sym_u6b4cu5531] = ACTIONS(287),
    [anon_sym_u6b4c] = ACTIONS(287),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(287),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(287),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(287),
    [anon_sym_u4f5cu66f2] = ACTIONS(287),
    [anon_sym_u7de8u66f2] = ACTIONS(287),
    [anon_sym_u7f16u66f2] = ACTIONS(287),
    [anon_sym_u4f5cu8a5e] = ACTIONS(287),
    [anon_sym_u4f5cu8bcd] = ACTIONS(287),
    [anon_sym_u5382u724c] = ACTIONS(287),
    [anon_sym_u811au672c] = ACTIONS(287),
    [anon_sym_u63d2u56fe] = ACTIONS(287),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(287),
    [anon_sym_u51fau7248u65b9] = ACTIONS(287),
    [anon_sym_u5f55u97f3] = ACTIONS(287),
    [anon_sym_u539fu4f5c] = ACTIONS(287),
    [anon_sym_u58f0u4e50] = ACTIONS(287),
    [anon_sym_u4e50u5668] = ACTIONS(287),
    [anon_sym_u6df7u97f3] = ACTIONS(287),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(287),
    [sym__sep] = ACTIONS(291),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_u300a] = ACTIONS(49),
    [aux_sym_song_title_token1] = ACTIONS(49),
    [sym__role_instrument] = ACTIONS(47),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(49),
    [anon_sym_u6b4cu5531] = ACTIONS(49),
    [anon_sym_u6b4c] = ACTIONS(49),
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
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_u300a] = ACTIONS(281),
    [aux_sym_song_title_token1] = ACTIONS(281),
    [sym__role_instrument] = ACTIONS(279),
    [anon_sym_Music] = ACTIONS(281),
    [anon_sym_music] = ACTIONS(281),
    [anon_sym_Composition] = ACTIONS(281),
    [anon_sym_composition] = ACTIONS(281),
    [anon_sym_Composer] = ACTIONS(281),
    [anon_sym_composer] = ACTIONS(281),
    [anon_sym_Compose] = ACTIONS(281),
    [anon_sym_compose] = ACTIONS(281),
    [anon_sym_Lyrics] = ACTIONS(281),
    [anon_sym_lyrics] = ACTIONS(281),
    [anon_sym_Lyricist] = ACTIONS(281),
    [anon_sym_lyricist] = ACTIONS(281),
    [anon_sym_Lyric] = ACTIONS(281),
    [anon_sym_lyric] = ACTIONS(281),
    [anon_sym_Arrangement] = ACTIONS(281),
    [anon_sym_arrangement] = ACTIONS(281),
    [anon_sym_Arranger] = ACTIONS(281),
    [anon_sym_arranger] = ACTIONS(281),
    [anon_sym_Arrange] = ACTIONS(281),
    [anon_sym_arrange] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illust] = ACTIONS(281),
    [anon_sym_illust] = ACTIONS(281),
    [anon_sym_Label] = ACTIONS(281),
    [anon_sym_label] = ACTIONS(281),
    [anon_sym_Circle] = ACTIONS(281),
    [anon_sym_circle] = ACTIONS(281),
    [anon_sym_Producer] = ACTIONS(281),
    [anon_sym_producer] = ACTIONS(281),
    [anon_sym_Recording] = ACTIONS(281),
    [anon_sym_recording] = ACTIONS(281),
    [anon_sym_GuestVocal] = ACTIONS(281),
    [anon_sym_Guestvocal] = ACTIONS(281),
    [anon_sym_guestvocal] = ACTIONS(281),
    [anon_sym_Chorus] = ACTIONS(281),
    [anon_sym_chorus] = ACTIONS(281),
    [anon_sym_Mixing] = ACTIONS(281),
    [anon_sym_mixing] = ACTIONS(281),
    [anon_sym_Mastering] = ACTIONS(281),
    [anon_sym_mastering] = ACTIONS(281),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(281),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(281),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(281),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(281),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(281),
    [anon_sym_u827au672fu5bb6] = ACTIONS(281),
    [anon_sym_u6b4cu5531] = ACTIONS(281),
    [anon_sym_u6b4c] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(281),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu66f2] = ACTIONS(281),
    [anon_sym_u7de8u66f2] = ACTIONS(281),
    [anon_sym_u7f16u66f2] = ACTIONS(281),
    [anon_sym_u4f5cu8a5e] = ACTIONS(281),
    [anon_sym_u4f5cu8bcd] = ACTIONS(281),
    [anon_sym_u5382u724c] = ACTIONS(281),
    [anon_sym_u811au672c] = ACTIONS(281),
    [anon_sym_u63d2u56fe] = ACTIONS(281),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(281),
    [anon_sym_u51fau7248u65b9] = ACTIONS(281),
    [anon_sym_u5f55u97f3] = ACTIONS(281),
    [anon_sym_u539fu4f5c] = ACTIONS(281),
    [anon_sym_u58f0u4e50] = ACTIONS(281),
    [anon_sym_u4e50u5668] = ACTIONS(281),
    [anon_sym_u6df7u97f3] = ACTIONS(281),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(281),
  },
  [85] = {
    [anon_sym_DISC] = ACTIONS(293),
    [anon_sym_u300a] = ACTIONS(293),
    [aux_sym_song_title_token1] = ACTIONS(293),
    [sym__role_instrument] = ACTIONS(295),
    [anon_sym_Music] = ACTIONS(293),
    [anon_sym_music] = ACTIONS(293),
    [anon_sym_Composition] = ACTIONS(293),
    [anon_sym_composition] = ACTIONS(293),
    [anon_sym_Composer] = ACTIONS(293),
    [anon_sym_composer] = ACTIONS(293),
    [anon_sym_Compose] = ACTIONS(293),
    [anon_sym_compose] = ACTIONS(293),
    [anon_sym_Lyrics] = ACTIONS(293),
    [anon_sym_lyrics] = ACTIONS(293),
    [anon_sym_Lyricist] = ACTIONS(293),
    [anon_sym_lyricist] = ACTIONS(293),
    [anon_sym_Lyric] = ACTIONS(293),
    [anon_sym_lyric] = ACTIONS(293),
    [anon_sym_Arrangement] = ACTIONS(293),
    [anon_sym_arrangement] = ACTIONS(293),
    [anon_sym_Arranger] = ACTIONS(293),
    [anon_sym_arranger] = ACTIONS(293),
    [anon_sym_Arrange] = ACTIONS(293),
    [anon_sym_arrange] = ACTIONS(293),
    [anon_sym_Vocal] = ACTIONS(293),
    [anon_sym_vocal] = ACTIONS(293),
    [anon_sym_Performer] = ACTIONS(293),
    [anon_sym_performer] = ACTIONS(293),
    [anon_sym_Illustration] = ACTIONS(293),
    [anon_sym_illustration] = ACTIONS(293),
    [anon_sym_Illust] = ACTIONS(293),
    [anon_sym_illust] = ACTIONS(293),
    [anon_sym_Label] = ACTIONS(293),
    [anon_sym_label] = ACTIONS(293),
    [anon_sym_Circle] = ACTIONS(293),
    [anon_sym_circle] = ACTIONS(293),
    [anon_sym_Producer] = ACTIONS(293),
    [anon_sym_producer] = ACTIONS(293),
    [anon_sym_Recording] = ACTIONS(293),
    [anon_sym_recording] = ACTIONS(293),
    [anon_sym_GuestVocal] = ACTIONS(293),
    [anon_sym_Guestvocal] = ACTIONS(293),
    [anon_sym_guestvocal] = ACTIONS(293),
    [anon_sym_Chorus] = ACTIONS(293),
    [anon_sym_chorus] = ACTIONS(293),
    [anon_sym_Mixing] = ACTIONS(293),
    [anon_sym_mixing] = ACTIONS(293),
    [anon_sym_Mastering] = ACTIONS(293),
    [anon_sym_mastering] = ACTIONS(293),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(293),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(293),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(293),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(293),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(293),
    [anon_sym_u827au672fu5bb6] = ACTIONS(293),
    [anon_sym_u6b4cu5531] = ACTIONS(293),
    [anon_sym_u6b4c] = ACTIONS(293),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(293),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(293),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(293),
    [anon_sym_u4f5cu66f2] = ACTIONS(293),
    [anon_sym_u7de8u66f2] = ACTIONS(293),
    [anon_sym_u7f16u66f2] = ACTIONS(293),
    [anon_sym_u4f5cu8a5e] = ACTIONS(293),
    [anon_sym_u4f5cu8bcd] = ACTIONS(293),
    [anon_sym_u5382u724c] = ACTIONS(293),
    [anon_sym_u811au672c] = ACTIONS(293),
    [anon_sym_u63d2u56fe] = ACTIONS(293),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(293),
    [anon_sym_u51fau7248u65b9] = ACTIONS(293),
    [anon_sym_u5f55u97f3] = ACTIONS(293),
    [anon_sym_u539fu4f5c] = ACTIONS(293),
    [anon_sym_u58f0u4e50] = ACTIONS(293),
    [anon_sym_u4e50u5668] = ACTIONS(293),
    [anon_sym_u6df7u97f3] = ACTIONS(293),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(293),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_u300a] = ACTIONS(39),
    [aux_sym_song_title_token1] = ACTIONS(39),
    [sym__role_instrument] = ACTIONS(37),
    [anon_sym_Music] = ACTIONS(39),
    [anon_sym_music] = ACTIONS(39),
    [anon_sym_Composition] = ACTIONS(39),
    [anon_sym_composition] = ACTIONS(39),
    [anon_sym_Composer] = ACTIONS(39),
    [anon_sym_composer] = ACTIONS(39),
    [anon_sym_Compose] = ACTIONS(39),
    [anon_sym_compose] = ACTIONS(39),
    [anon_sym_Lyrics] = ACTIONS(39),
    [anon_sym_lyrics] = ACTIONS(39),
    [anon_sym_Lyricist] = ACTIONS(39),
    [anon_sym_lyricist] = ACTIONS(39),
    [anon_sym_Lyric] = ACTIONS(39),
    [anon_sym_lyric] = ACTIONS(39),
    [anon_sym_Arrangement] = ACTIONS(39),
    [anon_sym_arrangement] = ACTIONS(39),
    [anon_sym_Arranger] = ACTIONS(39),
    [anon_sym_arranger] = ACTIONS(39),
    [anon_sym_Arrange] = ACTIONS(39),
    [anon_sym_arrange] = ACTIONS(39),
    [anon_sym_Vocal] = ACTIONS(39),
    [anon_sym_vocal] = ACTIONS(39),
    [anon_sym_Performer] = ACTIONS(39),
    [anon_sym_performer] = ACTIONS(39),
    [anon_sym_Illustration] = ACTIONS(39),
    [anon_sym_illustration] = ACTIONS(39),
    [anon_sym_Illust] = ACTIONS(39),
    [anon_sym_illust] = ACTIONS(39),
    [anon_sym_Label] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_Circle] = ACTIONS(39),
    [anon_sym_circle] = ACTIONS(39),
    [anon_sym_Producer] = ACTIONS(39),
    [anon_sym_producer] = ACTIONS(39),
    [anon_sym_Recording] = ACTIONS(39),
    [anon_sym_recording] = ACTIONS(39),
    [anon_sym_GuestVocal] = ACTIONS(39),
    [anon_sym_Guestvocal] = ACTIONS(39),
    [anon_sym_guestvocal] = ACTIONS(39),
    [anon_sym_Chorus] = ACTIONS(39),
    [anon_sym_chorus] = ACTIONS(39),
    [anon_sym_Mixing] = ACTIONS(39),
    [anon_sym_mixing] = ACTIONS(39),
    [anon_sym_Mastering] = ACTIONS(39),
    [anon_sym_mastering] = ACTIONS(39),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(39),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(39),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(39),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(39),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(39),
    [anon_sym_u827au672fu5bb6] = ACTIONS(39),
    [anon_sym_u6b4cu5531] = ACTIONS(39),
    [anon_sym_u6b4c] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu66f2] = ACTIONS(39),
    [anon_sym_u7de8u66f2] = ACTIONS(39),
    [anon_sym_u7f16u66f2] = ACTIONS(39),
    [anon_sym_u4f5cu8a5e] = ACTIONS(39),
    [anon_sym_u4f5cu8bcd] = ACTIONS(39),
    [anon_sym_u5382u724c] = ACTIONS(39),
    [anon_sym_u811au672c] = ACTIONS(39),
    [anon_sym_u63d2u56fe] = ACTIONS(39),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(39),
    [anon_sym_u51fau7248u65b9] = ACTIONS(39),
    [anon_sym_u5f55u97f3] = ACTIONS(39),
    [anon_sym_u539fu4f5c] = ACTIONS(39),
    [anon_sym_u58f0u4e50] = ACTIONS(39),
    [anon_sym_u4e50u5668] = ACTIONS(39),
    [anon_sym_u6df7u97f3] = ACTIONS(39),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(39),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_u300a] = ACTIONS(271),
    [aux_sym_song_title_token1] = ACTIONS(271),
    [sym__role_instrument] = ACTIONS(269),
    [anon_sym_Music] = ACTIONS(271),
    [anon_sym_music] = ACTIONS(271),
    [anon_sym_Composition] = ACTIONS(271),
    [anon_sym_composition] = ACTIONS(271),
    [anon_sym_Composer] = ACTIONS(271),
    [anon_sym_composer] = ACTIONS(271),
    [anon_sym_Compose] = ACTIONS(271),
    [anon_sym_compose] = ACTIONS(271),
    [anon_sym_Lyrics] = ACTIONS(271),
    [anon_sym_lyrics] = ACTIONS(271),
    [anon_sym_Lyricist] = ACTIONS(271),
    [anon_sym_lyricist] = ACTIONS(271),
    [anon_sym_Lyric] = ACTIONS(271),
    [anon_sym_lyric] = ACTIONS(271),
    [anon_sym_Arrangement] = ACTIONS(271),
    [anon_sym_arrangement] = ACTIONS(271),
    [anon_sym_Arranger] = ACTIONS(271),
    [anon_sym_arranger] = ACTIONS(271),
    [anon_sym_Arrange] = ACTIONS(271),
    [anon_sym_arrange] = ACTIONS(271),
    [anon_sym_Vocal] = ACTIONS(271),
    [anon_sym_vocal] = ACTIONS(271),
    [anon_sym_Performer] = ACTIONS(271),
    [anon_sym_performer] = ACTIONS(271),
    [anon_sym_Illustration] = ACTIONS(271),
    [anon_sym_illustration] = ACTIONS(271),
    [anon_sym_Illust] = ACTIONS(271),
    [anon_sym_illust] = ACTIONS(271),
    [anon_sym_Label] = ACTIONS(271),
    [anon_sym_label] = ACTIONS(271),
    [anon_sym_Circle] = ACTIONS(271),
    [anon_sym_circle] = ACTIONS(271),
    [anon_sym_Producer] = ACTIONS(271),
    [anon_sym_producer] = ACTIONS(271),
    [anon_sym_Recording] = ACTIONS(271),
    [anon_sym_recording] = ACTIONS(271),
    [anon_sym_GuestVocal] = ACTIONS(271),
    [anon_sym_Guestvocal] = ACTIONS(271),
    [anon_sym_guestvocal] = ACTIONS(271),
    [anon_sym_Chorus] = ACTIONS(271),
    [anon_sym_chorus] = ACTIONS(271),
    [anon_sym_Mixing] = ACTIONS(271),
    [anon_sym_mixing] = ACTIONS(271),
    [anon_sym_Mastering] = ACTIONS(271),
    [anon_sym_mastering] = ACTIONS(271),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(271),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(271),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(271),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(271),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(271),
    [anon_sym_u827au672fu5bb6] = ACTIONS(271),
    [anon_sym_u6b4cu5531] = ACTIONS(271),
    [anon_sym_u6b4c] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(271),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu66f2] = ACTIONS(271),
    [anon_sym_u7de8u66f2] = ACTIONS(271),
    [anon_sym_u7f16u66f2] = ACTIONS(271),
    [anon_sym_u4f5cu8a5e] = ACTIONS(271),
    [anon_sym_u4f5cu8bcd] = ACTIONS(271),
    [anon_sym_u5382u724c] = ACTIONS(271),
    [anon_sym_u811au672c] = ACTIONS(271),
    [anon_sym_u63d2u56fe] = ACTIONS(271),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(271),
    [anon_sym_u51fau7248u65b9] = ACTIONS(271),
    [anon_sym_u5f55u97f3] = ACTIONS(271),
    [anon_sym_u539fu4f5c] = ACTIONS(271),
    [anon_sym_u58f0u4e50] = ACTIONS(271),
    [anon_sym_u4e50u5668] = ACTIONS(271),
    [anon_sym_u6df7u97f3] = ACTIONS(271),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(271),
  },
  [88] = {
    [anon_sym_u300a2] = ACTIONS(208),
    [aux_sym_creator_name_token1] = ACTIONS(208),
    [sym__role_instrument] = ACTIONS(297),
    [anon_sym_Music] = ACTIONS(208),
    [anon_sym_music] = ACTIONS(208),
    [anon_sym_Composition] = ACTIONS(208),
    [anon_sym_composition] = ACTIONS(208),
    [anon_sym_Composer] = ACTIONS(208),
    [anon_sym_composer] = ACTIONS(208),
    [anon_sym_Compose] = ACTIONS(208),
    [anon_sym_compose] = ACTIONS(208),
    [anon_sym_Lyrics] = ACTIONS(208),
    [anon_sym_lyrics] = ACTIONS(208),
    [anon_sym_Lyricist] = ACTIONS(208),
    [anon_sym_lyricist] = ACTIONS(208),
    [anon_sym_Lyric] = ACTIONS(208),
    [anon_sym_lyric] = ACTIONS(208),
    [anon_sym_Arrangement] = ACTIONS(208),
    [anon_sym_arrangement] = ACTIONS(208),
    [anon_sym_Arranger] = ACTIONS(208),
    [anon_sym_arranger] = ACTIONS(208),
    [anon_sym_Arrange] = ACTIONS(208),
    [anon_sym_arrange] = ACTIONS(208),
    [anon_sym_Vocal] = ACTIONS(208),
    [anon_sym_vocal] = ACTIONS(208),
    [anon_sym_Performer] = ACTIONS(208),
    [anon_sym_performer] = ACTIONS(208),
    [anon_sym_Illustration] = ACTIONS(208),
    [anon_sym_illustration] = ACTIONS(208),
    [anon_sym_Illust] = ACTIONS(208),
    [anon_sym_illust] = ACTIONS(208),
    [anon_sym_Label] = ACTIONS(208),
    [anon_sym_label] = ACTIONS(208),
    [anon_sym_Circle] = ACTIONS(208),
    [anon_sym_circle] = ACTIONS(208),
    [anon_sym_Producer] = ACTIONS(208),
    [anon_sym_producer] = ACTIONS(208),
    [anon_sym_Recording] = ACTIONS(208),
    [anon_sym_recording] = ACTIONS(208),
    [anon_sym_GuestVocal] = ACTIONS(208),
    [anon_sym_Guestvocal] = ACTIONS(208),
    [anon_sym_guestvocal] = ACTIONS(208),
    [anon_sym_Chorus] = ACTIONS(208),
    [anon_sym_chorus] = ACTIONS(208),
    [anon_sym_Mixing] = ACTIONS(208),
    [anon_sym_mixing] = ACTIONS(208),
    [anon_sym_Mastering] = ACTIONS(208),
    [anon_sym_mastering] = ACTIONS(208),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(208),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(208),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(208),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(208),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(208),
    [anon_sym_u827au672fu5bb6] = ACTIONS(208),
    [anon_sym_u6b4cu5531] = ACTIONS(208),
    [anon_sym_u6b4c] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu66f2] = ACTIONS(208),
    [anon_sym_u7de8u66f2] = ACTIONS(208),
    [anon_sym_u7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5e] = ACTIONS(208),
    [anon_sym_u4f5cu8bcd] = ACTIONS(208),
    [anon_sym_u5382u724c] = ACTIONS(208),
    [anon_sym_u811au672c] = ACTIONS(208),
    [anon_sym_u63d2u56fe] = ACTIONS(208),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(208),
    [anon_sym_u51fau7248u65b9] = ACTIONS(208),
    [anon_sym_u5f55u97f3] = ACTIONS(208),
    [anon_sym_u539fu4f5c] = ACTIONS(208),
    [anon_sym_u58f0u4e50] = ACTIONS(208),
    [anon_sym_u4e50u5668] = ACTIONS(208),
    [anon_sym_u6df7u97f3] = ACTIONS(208),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(208),
    [sym_parts] = ACTIONS(208),
  },
  [89] = {
    [anon_sym_DISC] = ACTIONS(13),
    [anon_sym_u300a] = ACTIONS(13),
    [aux_sym_song_title_token1] = ACTIONS(13),
    [sym__role_instrument] = ACTIONS(21),
    [anon_sym_Music] = ACTIONS(13),
    [anon_sym_music] = ACTIONS(13),
    [anon_sym_Composition] = ACTIONS(13),
    [anon_sym_composition] = ACTIONS(13),
    [anon_sym_Composer] = ACTIONS(13),
    [anon_sym_composer] = ACTIONS(13),
    [anon_sym_Compose] = ACTIONS(13),
    [anon_sym_compose] = ACTIONS(13),
    [anon_sym_Lyrics] = ACTIONS(13),
    [anon_sym_lyrics] = ACTIONS(13),
    [anon_sym_Lyricist] = ACTIONS(13),
    [anon_sym_lyricist] = ACTIONS(13),
    [anon_sym_Lyric] = ACTIONS(13),
    [anon_sym_lyric] = ACTIONS(13),
    [anon_sym_Arrangement] = ACTIONS(13),
    [anon_sym_arrangement] = ACTIONS(13),
    [anon_sym_Arranger] = ACTIONS(13),
    [anon_sym_arranger] = ACTIONS(13),
    [anon_sym_Arrange] = ACTIONS(13),
    [anon_sym_arrange] = ACTIONS(13),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illust] = ACTIONS(13),
    [anon_sym_illust] = ACTIONS(13),
    [anon_sym_Label] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_Circle] = ACTIONS(13),
    [anon_sym_circle] = ACTIONS(13),
    [anon_sym_Producer] = ACTIONS(13),
    [anon_sym_producer] = ACTIONS(13),
    [anon_sym_Recording] = ACTIONS(13),
    [anon_sym_recording] = ACTIONS(13),
    [anon_sym_GuestVocal] = ACTIONS(13),
    [anon_sym_Guestvocal] = ACTIONS(13),
    [anon_sym_guestvocal] = ACTIONS(13),
    [anon_sym_Chorus] = ACTIONS(13),
    [anon_sym_chorus] = ACTIONS(13),
    [anon_sym_Mixing] = ACTIONS(13),
    [anon_sym_mixing] = ACTIONS(13),
    [anon_sym_Mastering] = ACTIONS(13),
    [anon_sym_mastering] = ACTIONS(13),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(13),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(13),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(13),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(13),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(13),
    [anon_sym_u827au672fu5bb6] = ACTIONS(13),
    [anon_sym_u6b4cu5531] = ACTIONS(13),
    [anon_sym_u6b4c] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu66f2] = ACTIONS(13),
    [anon_sym_u7de8u66f2] = ACTIONS(13),
    [anon_sym_u7f16u66f2] = ACTIONS(13),
    [anon_sym_u4f5cu8a5e] = ACTIONS(13),
    [anon_sym_u4f5cu8bcd] = ACTIONS(13),
    [anon_sym_u5382u724c] = ACTIONS(13),
    [anon_sym_u811au672c] = ACTIONS(13),
    [anon_sym_u63d2u56fe] = ACTIONS(13),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(13),
    [anon_sym_u51fau7248u65b9] = ACTIONS(13),
    [anon_sym_u5f55u97f3] = ACTIONS(13),
    [anon_sym_u539fu4f5c] = ACTIONS(13),
    [anon_sym_u58f0u4e50] = ACTIONS(13),
    [anon_sym_u4e50u5668] = ACTIONS(13),
    [anon_sym_u6df7u97f3] = ACTIONS(13),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(13),
  },
  [90] = {
    [anon_sym_DISC] = ACTIONS(299),
    [anon_sym_u300a] = ACTIONS(299),
    [aux_sym_song_title_token1] = ACTIONS(299),
    [sym__role_instrument] = ACTIONS(301),
    [anon_sym_Music] = ACTIONS(299),
    [anon_sym_music] = ACTIONS(299),
    [anon_sym_Composition] = ACTIONS(299),
    [anon_sym_composition] = ACTIONS(299),
    [anon_sym_Composer] = ACTIONS(299),
    [anon_sym_composer] = ACTIONS(299),
    [anon_sym_Compose] = ACTIONS(299),
    [anon_sym_compose] = ACTIONS(299),
    [anon_sym_Lyrics] = ACTIONS(299),
    [anon_sym_lyrics] = ACTIONS(299),
    [anon_sym_Lyricist] = ACTIONS(299),
    [anon_sym_lyricist] = ACTIONS(299),
    [anon_sym_Lyric] = ACTIONS(299),
    [anon_sym_lyric] = ACTIONS(299),
    [anon_sym_Arrangement] = ACTIONS(299),
    [anon_sym_arrangement] = ACTIONS(299),
    [anon_sym_Arranger] = ACTIONS(299),
    [anon_sym_arranger] = ACTIONS(299),
    [anon_sym_Arrange] = ACTIONS(299),
    [anon_sym_arrange] = ACTIONS(299),
    [anon_sym_Vocal] = ACTIONS(299),
    [anon_sym_vocal] = ACTIONS(299),
    [anon_sym_Performer] = ACTIONS(299),
    [anon_sym_performer] = ACTIONS(299),
    [anon_sym_Illustration] = ACTIONS(299),
    [anon_sym_illustration] = ACTIONS(299),
    [anon_sym_Illust] = ACTIONS(299),
    [anon_sym_illust] = ACTIONS(299),
    [anon_sym_Label] = ACTIONS(299),
    [anon_sym_label] = ACTIONS(299),
    [anon_sym_Circle] = ACTIONS(299),
    [anon_sym_circle] = ACTIONS(299),
    [anon_sym_Producer] = ACTIONS(299),
    [anon_sym_producer] = ACTIONS(299),
    [anon_sym_Recording] = ACTIONS(299),
    [anon_sym_recording] = ACTIONS(299),
    [anon_sym_GuestVocal] = ACTIONS(299),
    [anon_sym_Guestvocal] = ACTIONS(299),
    [anon_sym_guestvocal] = ACTIONS(299),
    [anon_sym_Chorus] = ACTIONS(299),
    [anon_sym_chorus] = ACTIONS(299),
    [anon_sym_Mixing] = ACTIONS(299),
    [anon_sym_mixing] = ACTIONS(299),
    [anon_sym_Mastering] = ACTIONS(299),
    [anon_sym_mastering] = ACTIONS(299),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(299),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(299),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(299),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(299),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(299),
    [anon_sym_u827au672fu5bb6] = ACTIONS(299),
    [anon_sym_u6b4cu5531] = ACTIONS(299),
    [anon_sym_u6b4c] = ACTIONS(299),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(299),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(299),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(299),
    [anon_sym_u4f5cu66f2] = ACTIONS(299),
    [anon_sym_u7de8u66f2] = ACTIONS(299),
    [anon_sym_u7f16u66f2] = ACTIONS(299),
    [anon_sym_u4f5cu8a5e] = ACTIONS(299),
    [anon_sym_u4f5cu8bcd] = ACTIONS(299),
    [anon_sym_u5382u724c] = ACTIONS(299),
    [anon_sym_u811au672c] = ACTIONS(299),
    [anon_sym_u63d2u56fe] = ACTIONS(299),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(299),
    [anon_sym_u51fau7248u65b9] = ACTIONS(299),
    [anon_sym_u5f55u97f3] = ACTIONS(299),
    [anon_sym_u539fu4f5c] = ACTIONS(299),
    [anon_sym_u58f0u4e50] = ACTIONS(299),
    [anon_sym_u4e50u5668] = ACTIONS(299),
    [anon_sym_u6df7u97f3] = ACTIONS(299),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(299),
  },
  [91] = {
    [anon_sym_DISC] = ACTIONS(25),
    [anon_sym_u300a] = ACTIONS(25),
    [aux_sym_song_title_token1] = ACTIONS(25),
    [sym__role_instrument] = ACTIONS(29),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(25),
    [anon_sym_u6b4cu5531] = ACTIONS(25),
    [anon_sym_u6b4c] = ACTIONS(25),
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
  [92] = {
    [anon_sym_u300a2] = ACTIONS(208),
    [aux_sym_creator_name_token1] = ACTIONS(208),
    [sym__role_instrument] = ACTIONS(297),
    [anon_sym_Music] = ACTIONS(208),
    [anon_sym_music] = ACTIONS(208),
    [anon_sym_Composition] = ACTIONS(208),
    [anon_sym_composition] = ACTIONS(208),
    [anon_sym_Composer] = ACTIONS(208),
    [anon_sym_composer] = ACTIONS(208),
    [anon_sym_Compose] = ACTIONS(208),
    [anon_sym_compose] = ACTIONS(208),
    [anon_sym_Lyrics] = ACTIONS(208),
    [anon_sym_lyrics] = ACTIONS(208),
    [anon_sym_Lyricist] = ACTIONS(208),
    [anon_sym_lyricist] = ACTIONS(208),
    [anon_sym_Lyric] = ACTIONS(208),
    [anon_sym_lyric] = ACTIONS(208),
    [anon_sym_Arrangement] = ACTIONS(208),
    [anon_sym_arrangement] = ACTIONS(208),
    [anon_sym_Arranger] = ACTIONS(208),
    [anon_sym_arranger] = ACTIONS(208),
    [anon_sym_Arrange] = ACTIONS(208),
    [anon_sym_arrange] = ACTIONS(208),
    [anon_sym_Vocal] = ACTIONS(208),
    [anon_sym_vocal] = ACTIONS(208),
    [anon_sym_Performer] = ACTIONS(208),
    [anon_sym_performer] = ACTIONS(208),
    [anon_sym_Illustration] = ACTIONS(208),
    [anon_sym_illustration] = ACTIONS(208),
    [anon_sym_Illust] = ACTIONS(208),
    [anon_sym_illust] = ACTIONS(208),
    [anon_sym_Label] = ACTIONS(208),
    [anon_sym_label] = ACTIONS(208),
    [anon_sym_Circle] = ACTIONS(208),
    [anon_sym_circle] = ACTIONS(208),
    [anon_sym_Producer] = ACTIONS(208),
    [anon_sym_producer] = ACTIONS(208),
    [anon_sym_Recording] = ACTIONS(208),
    [anon_sym_recording] = ACTIONS(208),
    [anon_sym_GuestVocal] = ACTIONS(208),
    [anon_sym_Guestvocal] = ACTIONS(208),
    [anon_sym_guestvocal] = ACTIONS(208),
    [anon_sym_Chorus] = ACTIONS(208),
    [anon_sym_chorus] = ACTIONS(208),
    [anon_sym_Mixing] = ACTIONS(208),
    [anon_sym_mixing] = ACTIONS(208),
    [anon_sym_Mastering] = ACTIONS(208),
    [anon_sym_mastering] = ACTIONS(208),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(208),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(208),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(208),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(208),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(208),
    [anon_sym_u827au672fu5bb6] = ACTIONS(208),
    [anon_sym_u6b4cu5531] = ACTIONS(208),
    [anon_sym_u6b4c] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(208),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu66f2] = ACTIONS(208),
    [anon_sym_u7de8u66f2] = ACTIONS(208),
    [anon_sym_u7f16u66f2] = ACTIONS(208),
    [anon_sym_u4f5cu8a5e] = ACTIONS(208),
    [anon_sym_u4f5cu8bcd] = ACTIONS(208),
    [anon_sym_u5382u724c] = ACTIONS(208),
    [anon_sym_u811au672c] = ACTIONS(208),
    [anon_sym_u63d2u56fe] = ACTIONS(208),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(208),
    [anon_sym_u51fau7248u65b9] = ACTIONS(208),
    [anon_sym_u5f55u97f3] = ACTIONS(208),
    [anon_sym_u539fu4f5c] = ACTIONS(208),
    [anon_sym_u58f0u4e50] = ACTIONS(208),
    [anon_sym_u4e50u5668] = ACTIONS(208),
    [anon_sym_u6df7u97f3] = ACTIONS(208),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(208),
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
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(37), 1,
      aux_sym_song_title_repeat1,
    STATE(47), 1,
      sym_song_title,
    STATE(50), 1,
      sym__quotable_song_title,
    STATE(98), 2,
      aux_sym__disc,
      sym_song,
    STATE(116), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      anon_sym_DISC,
    ACTIONS(307), 1,
      anon_sym_u300a,
    ACTIONS(309), 1,
      aux_sym_song_title_token1,
    STATE(4), 1,
      sym__quotable_song_title_maybecomment,
    STATE(29), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(38), 1,
      sym_song_title,
    STATE(95), 2,
      aux_sym__disc,
      sym_song,
  [59] = 9,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DISC,
    ACTIONS(315), 1,
      anon_sym_u300a,
    ACTIONS(318), 1,
      aux_sym_song_title_token1,
    STATE(4), 1,
      sym__quotable_song_title_maybecomment,
    STATE(29), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(38), 1,
      sym_song_title,
    STATE(95), 2,
      aux_sym__disc,
      sym_song,
  [88] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(37), 1,
      aux_sym_song_title_repeat1,
    STATE(47), 1,
      sym_song_title,
    STATE(50), 1,
      sym__quotable_song_title,
    STATE(97), 2,
      aux_sym__disc,
      sym_song,
  [114] = 8,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_u300a,
    ACTIONS(326), 1,
      aux_sym_song_title_token1,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(37), 1,
      aux_sym_song_title_repeat1,
    STATE(47), 1,
      sym_song_title,
    STATE(50), 1,
      sym__quotable_song_title,
    STATE(97), 2,
      aux_sym__disc,
      sym_song,
  [140] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(37), 1,
      aux_sym_song_title_repeat1,
    STATE(47), 1,
      sym_song_title,
    STATE(50), 1,
      sym__quotable_song_title,
    STATE(97), 2,
      aux_sym__disc,
      sym_song,
  [166] = 8,
    ACTIONS(17), 1,
      anon_sym_u300a2,
    ACTIONS(19), 1,
      aux_sym_creator_name_token1,
    ACTIONS(23), 1,
      sym_parts,
    STATE(101), 1,
      aux_sym_creator_name_repeat1,
    STATE(113), 1,
      sym_creator_name,
    STATE(114), 1,
      sym__quotable_creator_name,
    STATE(122), 1,
      sym__quotable_creator_field,
    STATE(138), 1,
      sym__quotable_creator_field_maybeparts,
  [191] = 7,
    ACTIONS(307), 1,
      anon_sym_u300a,
    ACTIONS(309), 1,
      aux_sym_song_title_token1,
    STATE(4), 1,
      sym__quotable_song_title_maybecomment,
    STATE(29), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(38), 1,
      sym_song_title,
    STATE(94), 2,
      aux_sym__disc,
      sym_song,
  [214] = 3,
    ACTIONS(331), 1,
      aux_sym_creator_name_token1,
    STATE(102), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(78), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [228] = 3,
    ACTIONS(333), 1,
      aux_sym_creator_name_token1,
    STATE(102), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(71), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [242] = 6,
    ACTIONS(43), 1,
      anon_sym_u300a2,
    ACTIONS(45), 1,
      aux_sym_creator_name_token1,
    STATE(13), 1,
      aux_sym_creator_name_repeat1,
    STATE(23), 1,
      sym_creator_name,
    STATE(31), 1,
      sym__quotable_creator_name,
    STATE(49), 1,
      sym__quotable_creator_field,
  [261] = 6,
    ACTIONS(57), 1,
      anon_sym_u300a2,
    ACTIONS(59), 1,
      aux_sym_creator_name_token1,
    STATE(18), 1,
      aux_sym_creator_name_repeat1,
    STATE(34), 1,
      sym__quotable_creator_name,
    STATE(39), 1,
      sym_creator_name,
    STATE(59), 1,
      sym__quotable_creator_field,
  [280] = 3,
    ACTIONS(336), 1,
      aux_sym_creator_name_token1,
    STATE(110), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(78), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [292] = 5,
    ACTIONS(338), 1,
      anon_sym_u300a2,
    ACTIONS(340), 1,
      aux_sym_creator_name_token1,
    STATE(124), 1,
      aux_sym_creator_name_repeat1,
    STATE(153), 1,
      sym__quotable_creator_name,
    STATE(156), 1,
      sym_creator_name,
  [308] = 1,
    ACTIONS(135), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [316] = 5,
    ACTIONS(342), 1,
      anon_sym_u300a2,
    ACTIONS(344), 1,
      aux_sym_creator_name_token1,
    STATE(105), 1,
      aux_sym_creator_name_repeat1,
    STATE(130), 1,
      sym_creator_name,
    STATE(134), 1,
      sym__quotable_creator_name,
  [332] = 5,
    ACTIONS(338), 1,
      anon_sym_u300a2,
    ACTIONS(340), 1,
      aux_sym_creator_name_token1,
    STATE(124), 1,
      aux_sym_creator_name_repeat1,
    STATE(156), 1,
      sym_creator_name,
    STATE(166), 1,
      sym__quotable_creator_name,
  [348] = 3,
    ACTIONS(346), 1,
      aux_sym_creator_name_token1,
    STATE(110), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(71), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [360] = 5,
    ACTIONS(338), 1,
      anon_sym_u300a2,
    ACTIONS(340), 1,
      aux_sym_creator_name_token1,
    STATE(124), 1,
      aux_sym_creator_name_repeat1,
    STATE(156), 1,
      sym_creator_name,
    STATE(157), 1,
      sym__quotable_creator_name,
  [376] = 5,
    ACTIONS(349), 1,
      anon_sym_u300a2,
    ACTIONS(351), 1,
      aux_sym_creator_name_token1,
    STATE(41), 1,
      aux_sym_creator_name_repeat1,
    STATE(62), 1,
      sym_creator_name,
    STATE(70), 1,
      sym__quotable_creator_name,
  [392] = 1,
    ACTIONS(113), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [400] = 3,
    ACTIONS(353), 1,
      aux_sym__quotable_creator_field_token1,
    ACTIONS(355), 1,
      aux_sym__quotable_creator_field_token3,
    ACTIONS(139), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [412] = 5,
    ACTIONS(357), 1,
      anon_sym_u300a2,
    ACTIONS(359), 1,
      aux_sym_creator_name_token1,
    STATE(25), 1,
      aux_sym_creator_name_repeat1,
    STATE(56), 1,
      sym_creator_name,
    STATE(58), 1,
      sym__quotable_creator_name,
  [428] = 3,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_DISC,
    STATE(119), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [439] = 3,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_DISC,
    STATE(119), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [450] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [459] = 3,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      anon_sym_DISC,
    STATE(119), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [470] = 2,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [479] = 3,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(374), 1,
      sym__sep,
    STATE(121), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [489] = 2,
    ACTIONS(379), 1,
      sym_parts,
    ACTIONS(377), 2,
      anon_sym_LF,
      sym__sep,
  [497] = 3,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      sym__sep,
    STATE(132), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [507] = 3,
    ACTIONS(78), 1,
      aux_sym__quotable_creator_field_token2,
    ACTIONS(385), 1,
      aux_sym_creator_name_token1,
    STATE(126), 1,
      aux_sym_creator_name_repeat1,
  [517] = 1,
    ACTIONS(231), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [523] = 3,
    ACTIONS(71), 1,
      aux_sym__quotable_creator_field_token2,
    ACTIONS(387), 1,
      aux_sym_creator_name_token1,
    STATE(126), 1,
      aux_sym_creator_name_repeat1,
  [533] = 2,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [541] = 3,
    ACTIONS(390), 1,
      aux_sym_song_title_token1,
    STATE(135), 1,
      aux_sym_song_title_repeat1,
    STATE(142), 1,
      sym_song_title,
  [551] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [559] = 1,
    ACTIONS(113), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [565] = 3,
    ACTIONS(390), 1,
      aux_sym_song_title_token1,
    STATE(135), 1,
      aux_sym_song_title_repeat1,
    STATE(147), 1,
      sym_song_title,
  [575] = 3,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      sym__sep,
    STATE(121), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [585] = 1,
    ACTIONS(135), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [591] = 1,
    ACTIONS(247), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [597] = 3,
    ACTIONS(129), 1,
      anon_sym_u300b,
    ACTIONS(396), 1,
      aux_sym_song_title_token1,
    STATE(136), 1,
      aux_sym_song_title_repeat1,
  [607] = 3,
    ACTIONS(122), 1,
      anon_sym_u300b,
    ACTIONS(398), 1,
      aux_sym_song_title_token1,
    STATE(136), 1,
      aux_sym_song_title_repeat1,
  [617] = 1,
    ACTIONS(401), 2,
      anon_sym_LF,
      sym__sep,
  [622] = 1,
    ACTIONS(403), 2,
      anon_sym_LF,
      sym__sep,
  [627] = 1,
    ACTIONS(405), 1,
      anon_sym_u300b,
  [631] = 1,
    ACTIONS(407), 1,
      sym__sep,
  [635] = 1,
    ACTIONS(409), 1,
      sym__sep,
  [639] = 1,
    ACTIONS(411), 1,
      anon_sym_u300b,
  [643] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [647] = 1,
    ACTIONS(415), 1,
      sym__sep,
  [651] = 1,
    ACTIONS(417), 1,
      sym__sep,
  [655] = 1,
    ACTIONS(419), 1,
      sym__sep,
  [659] = 1,
    ACTIONS(421), 1,
      anon_sym_u300b,
  [663] = 1,
    ACTIONS(423), 1,
      anon_sym_LF,
  [667] = 1,
    ACTIONS(425), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [671] = 1,
    ACTIONS(427), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [675] = 1,
    ACTIONS(429), 1,
      anon_sym_u300b,
  [679] = 1,
    ACTIONS(431), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [683] = 1,
    ACTIONS(433), 1,
      aux_sym__quotable_creator_field_token2,
  [687] = 1,
    ACTIONS(133), 1,
      aux_sym__quotable_creator_field_token2,
  [691] = 1,
    ACTIONS(435), 1,
      anon_sym_u300b,
  [695] = 1,
    ACTIONS(111), 1,
      aux_sym__quotable_creator_field_token2,
  [699] = 1,
    ACTIONS(437), 1,
      aux_sym__quotable_creator_field_token2,
  [703] = 1,
    ACTIONS(439), 1,
      anon_sym_u300b,
  [707] = 1,
    ACTIONS(441), 1,
      anon_sym_u300b,
  [711] = 1,
    ACTIONS(443), 1,
      anon_sym_u300b,
  [715] = 1,
    ACTIONS(445), 1,
      anon_sym_u300b,
  [719] = 1,
    ACTIONS(447), 1,
      aux_sym__quotable_creator_name_token1,
  [723] = 1,
    ACTIONS(449), 1,
      aux_sym__quotable_creator_name_token1,
  [727] = 1,
    ACTIONS(451), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [731] = 1,
    ACTIONS(453), 1,
      aux_sym__quotable_creator_name_token1,
  [735] = 1,
    ACTIONS(455), 1,
      aux_sym__quotable_creator_field_token2,
  [739] = 1,
    ACTIONS(457), 1,
      aux_sym__quotable_creator_name_token1,
  [743] = 1,
    ACTIONS(459), 1,
      aux_sym__quotable_creator_name_token1,
  [747] = 1,
    ACTIONS(461), 1,
      aux_sym__quotable_creator_name_token1,
  [751] = 1,
    ACTIONS(463), 1,
      aux_sym__quotable_creator_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(93)] = 0,
  [SMALL_STATE(94)] = 30,
  [SMALL_STATE(95)] = 59,
  [SMALL_STATE(96)] = 88,
  [SMALL_STATE(97)] = 114,
  [SMALL_STATE(98)] = 140,
  [SMALL_STATE(99)] = 166,
  [SMALL_STATE(100)] = 191,
  [SMALL_STATE(101)] = 214,
  [SMALL_STATE(102)] = 228,
  [SMALL_STATE(103)] = 242,
  [SMALL_STATE(104)] = 261,
  [SMALL_STATE(105)] = 280,
  [SMALL_STATE(106)] = 292,
  [SMALL_STATE(107)] = 308,
  [SMALL_STATE(108)] = 316,
  [SMALL_STATE(109)] = 332,
  [SMALL_STATE(110)] = 348,
  [SMALL_STATE(111)] = 360,
  [SMALL_STATE(112)] = 376,
  [SMALL_STATE(113)] = 392,
  [SMALL_STATE(114)] = 400,
  [SMALL_STATE(115)] = 412,
  [SMALL_STATE(116)] = 428,
  [SMALL_STATE(117)] = 439,
  [SMALL_STATE(118)] = 450,
  [SMALL_STATE(119)] = 459,
  [SMALL_STATE(120)] = 470,
  [SMALL_STATE(121)] = 479,
  [SMALL_STATE(122)] = 489,
  [SMALL_STATE(123)] = 497,
  [SMALL_STATE(124)] = 507,
  [SMALL_STATE(125)] = 517,
  [SMALL_STATE(126)] = 523,
  [SMALL_STATE(127)] = 533,
  [SMALL_STATE(128)] = 541,
  [SMALL_STATE(129)] = 551,
  [SMALL_STATE(130)] = 559,
  [SMALL_STATE(131)] = 565,
  [SMALL_STATE(132)] = 575,
  [SMALL_STATE(133)] = 585,
  [SMALL_STATE(134)] = 591,
  [SMALL_STATE(135)] = 597,
  [SMALL_STATE(136)] = 607,
  [SMALL_STATE(137)] = 617,
  [SMALL_STATE(138)] = 622,
  [SMALL_STATE(139)] = 627,
  [SMALL_STATE(140)] = 631,
  [SMALL_STATE(141)] = 635,
  [SMALL_STATE(142)] = 639,
  [SMALL_STATE(143)] = 643,
  [SMALL_STATE(144)] = 647,
  [SMALL_STATE(145)] = 651,
  [SMALL_STATE(146)] = 655,
  [SMALL_STATE(147)] = 659,
  [SMALL_STATE(148)] = 663,
  [SMALL_STATE(149)] = 667,
  [SMALL_STATE(150)] = 671,
  [SMALL_STATE(151)] = 675,
  [SMALL_STATE(152)] = 679,
  [SMALL_STATE(153)] = 683,
  [SMALL_STATE(154)] = 687,
  [SMALL_STATE(155)] = 691,
  [SMALL_STATE(156)] = 695,
  [SMALL_STATE(157)] = 699,
  [SMALL_STATE(158)] = 703,
  [SMALL_STATE(159)] = 707,
  [SMALL_STATE(160)] = 711,
  [SMALL_STATE(161)] = 715,
  [SMALL_STATE(162)] = 719,
  [SMALL_STATE(163)] = 723,
  [SMALL_STATE(164)] = 727,
  [SMALL_STATE(165)] = 731,
  [SMALL_STATE(166)] = 735,
  [SMALL_STATE(167)] = 739,
  [SMALL_STATE(168)] = 743,
  [SMALL_STATE(169)] = 747,
  [SMALL_STATE(170)] = 751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 8),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creator_name, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creator_name, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block_maybeparts, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 1, 0, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 1, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 2, 0, 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 2, 0, 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12), SHIFT_REPEAT(103),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 9),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 9),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12), SHIFT_REPEAT(104),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 4, 0, 13),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 4, 0, 13),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 3, 0, 13),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 3, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 8),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 8),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 8),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 9),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 9),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 9),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 9),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(131),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(29),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(128),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 3, 0, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 3, 0, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12), SHIFT_REPEAT(99),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field_maybeparts, 1, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field_maybeparts, 2, 0, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [413] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__role, 1, 0, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
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
