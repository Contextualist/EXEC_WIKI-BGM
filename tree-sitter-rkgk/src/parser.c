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
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 91
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 1
#define TOKEN_COUNT 99
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
  anon_sym_Vocalist = 36,
  anon_sym_vocalist = 37,
  anon_sym_Vocal = 38,
  anon_sym_vocal = 39,
  anon_sym_Performer = 40,
  anon_sym_performer = 41,
  anon_sym_Illustration = 42,
  anon_sym_illustration = 43,
  anon_sym_Illustrator = 44,
  anon_sym_illustrator = 45,
  anon_sym_Illust = 46,
  anon_sym_illust = 47,
  anon_sym_Label = 48,
  anon_sym_label = 49,
  anon_sym_Circle = 50,
  anon_sym_circle = 51,
  anon_sym_Producer = 52,
  anon_sym_producer = 53,
  anon_sym_Recording = 54,
  anon_sym_recording = 55,
  anon_sym_GuestVocal = 56,
  anon_sym_Guestvocal = 57,
  anon_sym_guestvocal = 58,
  anon_sym_Chorus = 59,
  anon_sym_chorus = 60,
  anon_sym_Mixing = 61,
  anon_sym_mixing = 62,
  anon_sym_Mastering = 63,
  anon_sym_mastering = 64,
  anon_sym_u30dcu30fcu30abu30eb = 65,
  anon_sym_u30a2u30ecu30f3u30b8 = 66,
  anon_sym_u30a4u30e9u30b9u30c8 = 67,
  anon_sym_u30ecu30fcu30d9u30eb = 68,
  anon_sym_u30deu30b9u30bfu30eau30f3u30b0 = 69,
  anon_sym_u827au672fu5bb6 = 70,
  anon_sym_u6b4cu5531 = 71,
  anon_sym_u6b4c = 72,
  anon_sym_u4f5cu8a5eu4f5cu7de8u66f2 = 73,
  anon_sym_u4f5cu8bcdu4f5cu7f16u66f2 = 74,
  anon_sym_u4f5cu8a5eu4f5cu66f2 = 75,
  anon_sym_u4f5cu8bcdu4f5cu66f2 = 76,
  anon_sym_u4f5cu8a5eu66f2 = 77,
  anon_sym_u4f5cu8bcdu66f2 = 78,
  anon_sym_u4f5cu7de8u66f2 = 79,
  anon_sym_u4f5cu7f16u66f2 = 80,
  anon_sym_u4f5cu66f2 = 81,
  anon_sym_u7de8u66f2 = 82,
  anon_sym_u7f16u66f2 = 83,
  anon_sym_u4f5cu8a5e = 84,
  anon_sym_u4f5cu8bcd = 85,
  anon_sym_u5382u724c = 86,
  anon_sym_u811au672c = 87,
  anon_sym_u63d2u56fe = 88,
  anon_sym_u5236u4f5cu4eba = 89,
  anon_sym_u51fau7248u65b9 = 90,
  anon_sym_u5f55u97f3 = 91,
  anon_sym_u539fu4f5c = 92,
  anon_sym_u58f0u4e50 = 93,
  anon_sym_u4e50u5668 = 94,
  anon_sym_u6df7u97f3 = 95,
  anon_sym_u6bcdu5e26u5236u4f5c = 96,
  sym_parts = 97,
  sym__sep = 98,
  sym_source_file = 99,
  sym_disc = 100,
  aux_sym__disc = 101,
  sym_song = 102,
  sym_credit_block_maybeparts = 103,
  sym_credit_field_maybeparts = 104,
  sym_credit_block = 105,
  sym_credit_field = 106,
  sym__quotable_song_title_maybecomment = 107,
  sym__quotable_song_title = 108,
  sym_song_title = 109,
  sym__quotable_creator_field_maybeparts = 110,
  sym__quotable_creator_field = 111,
  sym__quotable_creator_name = 112,
  sym_creator_name = 113,
  sym_role = 114,
  sym__role = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_credit_block_maybeparts_repeat1 = 117,
  aux_sym_credit_field_maybeparts_repeat1 = 118,
  aux_sym_credit_field_maybeparts_repeat2 = 119,
  aux_sym_credit_block_repeat1 = 120,
  aux_sym_credit_field_repeat1 = 121,
  aux_sym_song_title_repeat1 = 122,
  aux_sym_creator_name_repeat1 = 123,
  alias_sym_creator_sep = 124,
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
  [anon_sym_Vocalist] = "Vocalist",
  [anon_sym_vocalist] = "vocalist",
  [anon_sym_Vocal] = "Vocal",
  [anon_sym_vocal] = "vocal",
  [anon_sym_Performer] = "Performer",
  [anon_sym_performer] = "performer",
  [anon_sym_Illustration] = "Illustration",
  [anon_sym_illustration] = "illustration",
  [anon_sym_Illustrator] = "Illustrator",
  [anon_sym_illustrator] = "illustrator",
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
  [anon_sym_Vocalist] = anon_sym_Vocalist,
  [anon_sym_vocalist] = anon_sym_vocalist,
  [anon_sym_Vocal] = anon_sym_Vocal,
  [anon_sym_vocal] = anon_sym_vocal,
  [anon_sym_Performer] = anon_sym_Performer,
  [anon_sym_performer] = anon_sym_performer,
  [anon_sym_Illustration] = anon_sym_Illustration,
  [anon_sym_illustration] = anon_sym_illustration,
  [anon_sym_Illustrator] = anon_sym_Illustrator,
  [anon_sym_illustrator] = anon_sym_illustrator,
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
  [anon_sym_Vocalist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vocalist] = {
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
  [anon_sym_Illustrator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illustrator] = {
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 14,
  [15] = 10,
  [16] = 16,
  [17] = 11,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 10,
  [29] = 11,
  [30] = 11,
  [31] = 10,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 27,
  [36] = 25,
  [37] = 24,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 26,
  [42] = 42,
  [43] = 33,
  [44] = 44,
  [45] = 38,
  [46] = 39,
  [47] = 42,
  [48] = 48,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 40,
  [53] = 53,
  [54] = 25,
  [55] = 26,
  [56] = 56,
  [57] = 50,
  [58] = 48,
  [59] = 51,
  [60] = 60,
  [61] = 53,
  [62] = 25,
  [63] = 44,
  [64] = 26,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 60,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 56,
  [77] = 75,
  [78] = 65,
  [79] = 68,
  [80] = 70,
  [81] = 66,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 72,
  [87] = 87,
  [88] = 88,
  [89] = 67,
  [90] = 82,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 10,
  [100] = 11,
  [101] = 101,
  [102] = 101,
  [103] = 26,
  [104] = 25,
  [105] = 27,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 10,
  [110] = 107,
  [111] = 11,
  [112] = 107,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 10,
  [120] = 11,
  [121] = 121,
  [122] = 25,
  [123] = 123,
  [124] = 124,
  [125] = 26,
  [126] = 50,
  [127] = 23,
  [128] = 128,
  [129] = 24,
  [130] = 117,
  [131] = 123,
  [132] = 51,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 26,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 140,
  [148] = 145,
  [149] = 139,
  [150] = 150,
  [151] = 140,
  [152] = 142,
  [153] = 139,
  [154] = 140,
  [155] = 140,
  [156] = 140,
  [157] = 140,
  [158] = 143,
  [159] = 135,
  [160] = 146,
  [161] = 161,
  [162] = 25,
  [163] = 135,
  [164] = 135,
  [165] = 135,
  [166] = 135,
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
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '(', 20,
        '/', 29,
        'A', 184,
        'C', 104,
        'D', 34,
        'G', 229,
        'I', 128,
        'L', 38,
        'M', 39,
        'P', 81,
        'R', 72,
        'V', 152,
        'a', 196,
        'c', 105,
        'g', 235,
        'i', 132,
        'l', 48,
        'm', 50,
        'p', 91,
        'r', 93,
        'v', 163,
        0x300a, 409,
        0x300b, 342,
        0x30a2, 253,
        0x30a4, 249,
        0x30dc, 256,
        0x30de, 244,
        0x30ec, 257,
        0x4e50, 264,
        0x4f5c, 270,
        0x51fa, 281,
        0x5236, 260,
        0x5382, 282,
        0x539f, 261,
        0x58f0, 258,
        0x5f55, 283,
        0x63d2, 266,
        0x6b4c, 527,
        0x6bcd, 268,
        0x6df7, 284,
        0x7de8, 271,
        0x7f16, 272,
        0x811a, 279,
        0x827a, 280,
        0xff08, 32,
        ')', 407,
        0xff09, 407,
        '|', 408,
        0xff5c, 408,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(316);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(344);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 319,
        '(', 423,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 345,
        ' ', 345,
        0x3000, 345,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(346);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(348);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(350);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(568);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(352);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(353);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 323,
        '(', 422,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 556,
        ' ', 556,
        0x3000, 556,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(412);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 324,
        '(', 20,
        0xff08, 32,
        '|', 408,
        0xff5c, 408,
        '\t', 557,
        ' ', 557,
        0x3000, 557,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(11);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(558);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(12);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(354);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == 0x300b) ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(355);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != 0x300b) ADVANCE(411);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(326);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(565);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != 0x300a &&
          lookahead != 0x300b) ADVANCE(412);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ')') ADVANCE(553);
      if ((',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '(', 423,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(26);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '(', 423,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(26);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == 0x300a) ADVANCE(409);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(27);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(553);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(337);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(31);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(31);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(318);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(287);
      END_STATE();
    case 37:
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(483);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(517);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(509);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(510);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(181);
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
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(498);
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
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 239:
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 240:
      if (lookahead == 0x300a) ADVANCE(409);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(240);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 241:
      if (lookahead == 0x30ab) ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 0x30b0) ADVANCE(524);
      END_STATE();
    case 243:
      if (lookahead == 0x30b8) ADVANCE(521);
      END_STATE();
    case 244:
      if (lookahead == 0x30b9) ADVANCE(246);
      END_STATE();
    case 245:
      if (lookahead == 0x30b9) ADVANCE(247);
      END_STATE();
    case 246:
      if (lookahead == 0x30bf) ADVANCE(250);
      END_STATE();
    case 247:
      if (lookahead == 0x30c8) ADVANCE(522);
      END_STATE();
    case 248:
      if (lookahead == 0x30d9) ADVANCE(252);
      END_STATE();
    case 249:
      if (lookahead == 0x30e9) ADVANCE(245);
      END_STATE();
    case 250:
      if (lookahead == 0x30ea) ADVANCE(255);
      END_STATE();
    case 251:
      if (lookahead == 0x30eb) ADVANCE(520);
      END_STATE();
    case 252:
      if (lookahead == 0x30eb) ADVANCE(523);
      END_STATE();
    case 253:
      if (lookahead == 0x30ec) ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 0x30f3) ADVANCE(243);
      END_STATE();
    case 255:
      if (lookahead == 0x30f3) ADVANCE(242);
      END_STATE();
    case 256:
      if (lookahead == 0x30fc) ADVANCE(241);
      END_STATE();
    case 257:
      if (lookahead == 0x30fc) ADVANCE(248);
      END_STATE();
    case 258:
      if (lookahead == 0x4e50) ADVANCE(548);
      END_STATE();
    case 259:
      if (lookahead == 0x4eba) ADVANCE(544);
      END_STATE();
    case 260:
      if (lookahead == 0x4f5c) ADVANCE(259);
      END_STATE();
    case 261:
      if (lookahead == 0x4f5c) ADVANCE(547);
      if (lookahead == 0x66f2) ADVANCE(289);
      END_STATE();
    case 262:
      if (lookahead == 0x4f5c) ADVANCE(552);
      END_STATE();
    case 263:
      if (lookahead == 0x5236) ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == 0x5668) ADVANCE(550);
      END_STATE();
    case 265:
      if (lookahead == 0x5668) ADVANCE(549);
      END_STATE();
    case 266:
      if (lookahead == 0x56fe) ADVANCE(543);
      END_STATE();
    case 267:
      if (lookahead == 0x5bb6) ADVANCE(525);
      END_STATE();
    case 268:
      if (lookahead == 0x5e26) ADVANCE(263);
      END_STATE();
    case 269:
      if (lookahead == 0x65b9) ADVANCE(545);
      END_STATE();
    case 270:
      if (lookahead == 0x66f2) ADVANCE(536);
      if (lookahead == 0x7de8) ADVANCE(273);
      if (lookahead == 0x7f16) ADVANCE(274);
      if (lookahead == 0x8a5e) ADVANCE(539);
      if (lookahead == 0x8bcd) ADVANCE(540);
      END_STATE();
    case 271:
      if (lookahead == 0x66f2) ADVANCE(537);
      END_STATE();
    case 272:
      if (lookahead == 0x66f2) ADVANCE(538);
      END_STATE();
    case 273:
      if (lookahead == 0x66f2) ADVANCE(534);
      END_STATE();
    case 274:
      if (lookahead == 0x66f2) ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == 0x66f2) ADVANCE(530);
      if (lookahead == 0x7de8) ADVANCE(277);
      END_STATE();
    case 276:
      if (lookahead == 0x66f2) ADVANCE(531);
      if (lookahead == 0x7f16) ADVANCE(278);
      END_STATE();
    case 277:
      if (lookahead == 0x66f2) ADVANCE(528);
      END_STATE();
    case 278:
      if (lookahead == 0x66f2) ADVANCE(529);
      END_STATE();
    case 279:
      if (lookahead == 0x672c) ADVANCE(542);
      END_STATE();
    case 280:
      if (lookahead == 0x672f) ADVANCE(267);
      END_STATE();
    case 281:
      if (lookahead == 0x7248) ADVANCE(269);
      END_STATE();
    case 282:
      if (lookahead == 0x724c) ADVANCE(541);
      END_STATE();
    case 283:
      if (lookahead == 0x97f3) ADVANCE(546);
      END_STATE();
    case 284:
      if (lookahead == 0x97f3) ADVANCE(551);
      END_STATE();
    case 285:
      if (lookahead == ')' ||
          lookahead == 0xff09) ADVANCE(407);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(285);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(567);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(286);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 287:
      if (lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 0xff1a) ADVANCE(406);
      END_STATE();
    case 288:
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(470);
      END_STATE();
    case 289:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 290:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 320,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 341,
        0x300b, 343,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '(', 427,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 554,
        ' ', 554,
        0x3000, 554,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 291:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 321,
        '/', 363,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 392,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(347);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 292:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 322,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 341,
        0x300b, 343,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 555,
        ' ', 555,
        0x3000, 555,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 293:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(293);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(352);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 294:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(294);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(353);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 295:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 327,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 356,
        ' ', 356,
        0x3000, 356,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 296:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 328,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 341,
        0x300b, 343,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '(', 427,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 559,
        ' ', 559,
        0x3000, 559,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 297:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(298);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(346);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 298:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(298);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(346);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 299:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 329,
        '/', 363,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 392,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(357);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 300:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 330,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 341,
        0x300b, 343,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 560,
        ' ', 560,
        0x3000, 560,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 301:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(302);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(348);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 302:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(302);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(348);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 303:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(304);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 304:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(304);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 305:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(306);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(350);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 306:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(306);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(350);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 307:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(308);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(568);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 308:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(308);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(568);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 309:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 331,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 456,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 358,
        ' ', 358,
        0x3000, 358,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 310:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 332,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '(', 364,
        0xff08, 364,
        '|', 408,
        0xff5c, 408,
        '\t', 561,
        ' ', 561,
        0x3000, 561,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 311:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 333,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '\t', 562,
        ' ', 562,
        0x3000, 562,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 312:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 334,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '(', 364,
        0xff08, 364,
        '|', 408,
        0xff5c, 408,
        '\t', 563,
        ' ', 563,
        0x3000, 563,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 313:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '\n', 335,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 393,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '\t', 564,
        ' ', 564,
        0x3000, 564,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(362);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 314:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(315);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(393);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(344);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 315:
      if (eof) ADVANCE(317);
      if (lookahead == '\n') SKIP(315);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(344);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 316:
      if (eof) ADVANCE(317);
      ADVANCE_MAP(
        '(', 20,
        '/', 29,
        'A', 184,
        'C', 104,
        'D', 34,
        'G', 229,
        'I', 128,
        'L', 38,
        'M', 39,
        'P', 81,
        'R', 72,
        'V', 152,
        'a', 196,
        'c', 105,
        'g', 235,
        'i', 132,
        'l', 48,
        'm', 50,
        'p', 91,
        'r', 93,
        'v', 163,
        0x300a, 409,
        0x300b, 342,
        0x30a2, 253,
        0x30a4, 249,
        0x30dc, 256,
        0x30de, 244,
        0x30ec, 257,
        0x4e50, 265,
        0x4f5c, 270,
        0x51fa, 281,
        0x5236, 260,
        0x5382, 282,
        0x539f, 261,
        0x58f0, 258,
        0x5f55, 283,
        0x63d2, 266,
        0x6b4c, 527,
        0x6bcd, 268,
        0x6df7, 284,
        0x7de8, 271,
        0x7f16, 272,
        0x811a, 279,
        0x827a, 280,
        0xff08, 32,
        ')', 407,
        0xff09, 407,
        '|', 408,
        0xff5c, 408,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) SKIP(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DISC);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == 0x300a) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(345);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(347);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(555);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 0xff08) ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(557);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(558);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 0x300a) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(356);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(559);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(329);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(357);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(560);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == 0x300a) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(358);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(561);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(562);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(360);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(563);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(361);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(564);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(362);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(565);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__quotable_song_title_maybecomment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_u300a);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_u300b);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(344);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 319,
        '(', 423,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 345,
        ' ', 345,
        0x3000, 345,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(3);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(346);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 321,
        '/', 363,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 392,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(347);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(348);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(392);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(350);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(379);
      if (lookahead == 0x300a) ADVANCE(341);
      if (lookahead == 0x30a2) ADVANCE(386);
      if (lookahead == 0x30a4) ADVANCE(385);
      if (lookahead == 0x30dc) ADVANCE(387);
      if (lookahead == 0x30de) ADVANCE(384);
      if (lookahead == 0x30ec) ADVANCE(388);
      if (lookahead == 0x4e50) ADVANCE(394);
      if (lookahead == 0x4f5c) ADVANCE(397);
      if (lookahead == 0x51fa) ADVANCE(402);
      if (lookahead == 0x5236) ADVANCE(390);
      if (lookahead == 0x5382) ADVANCE(403);
      if (lookahead == 0x539f) ADVANCE(391);
      if (lookahead == 0x58f0) ADVANCE(389);
      if (lookahead == 0x5f55) ADVANCE(404);
      if (lookahead == 0x63d2) ADVANCE(395);
      if (lookahead == 0x6b4c) ADVANCE(527);
      if (lookahead == 0x6bcd) ADVANCE(396);
      if (lookahead == 0x6df7) ADVANCE(405);
      if (lookahead == 0x7de8) ADVANCE(398);
      if (lookahead == 0x7f16) ADVANCE(399);
      if (lookahead == 0x811a) ADVANCE(400);
      if (lookahead == 0x827a) ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(568);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(352);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(9);
      if (lookahead == 0x300a) ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(353);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(354);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '\n') SKIP(14);
      if (lookahead == 0x300b) ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(355);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 327,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 356,
        ' ', 356,
        0x3000, 356,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 329,
        '/', 363,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 392,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(357);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 331,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 358,
        ' ', 358,
        0x3000, 358,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if (set_contains(sym__sep_character_set_1, 11, lookahead) ||
          lookahead == 0x300b) ADVANCE(343);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 332,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '(', 364,
        0xff08, 364,
        '|', 408,
        0xff5c, 408,
        '\t', 561,
        ' ', 561,
        0x3000, 561,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 333,
        'A', 380,
        'C', 374,
        'D', 365,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '\t', 562,
        ' ', 562,
        0x3000, 562,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 334,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '(', 364,
        0xff08, 364,
        '|', 408,
        0xff5c, 408,
        '\t', 563,
        ' ', 563,
        0x3000, 563,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      ADVANCE_MAP(
        '\n', 335,
        'A', 380,
        'C', 374,
        'G', 382,
        'I', 376,
        'L', 366,
        'M', 367,
        'P', 371,
        'R', 370,
        'V', 378,
        'a', 381,
        'c', 375,
        'g', 383,
        'i', 377,
        'l', 368,
        'm', 369,
        'p', 372,
        'r', 373,
        'v', 379,
        0x300a, 341,
        0x30a2, 386,
        0x30a4, 385,
        0x30dc, 387,
        0x30de, 384,
        0x30ec, 388,
        0x4e50, 394,
        0x4f5c, 397,
        0x51fa, 402,
        0x5236, 390,
        0x5382, 403,
        0x539f, 391,
        0x58f0, 389,
        0x5f55, 404,
        0x63d2, 395,
        0x6b4c, 527,
        0x6bcd, 396,
        0x6df7, 405,
        0x7de8, 398,
        0x7f16, 399,
        0x811a, 400,
        0x827a, 401,
        '\t', 564,
        ' ', 564,
        0x3000, 564,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(362);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == '/') ADVANCE(337);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30b9) ADVANCE(246);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30e9) ADVANCE(245);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30ec) ADVANCE(254);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(241);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x30fc) ADVANCE(248);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4e50) ADVANCE(548);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(259);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(547);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x4f5c) ADVANCE(547);
      if (lookahead == 0x66f2) ADVANCE(289);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(550);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5668) ADVANCE(549);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x56fe) ADVANCE(543);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x5e26) ADVANCE(263);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(536);
      if (lookahead == 0x7de8) ADVANCE(273);
      if (lookahead == 0x7f16) ADVANCE(274);
      if (lookahead == 0x8a5e) ADVANCE(539);
      if (lookahead == 0x8bcd) ADVANCE(540);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(537);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x66f2) ADVANCE(538);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672c) ADVANCE(542);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x672f) ADVANCE(267);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x7248) ADVANCE(269);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x724c) ADVANCE(541);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(546);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_song_title_token1);
      if (lookahead == 0x97f3) ADVANCE(551);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token2);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__quotable_creator_field_token3);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_u300a2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 0x300b) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__quotable_creator_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 0x300b) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 319,
        '(', 423,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 345,
        ' ', 345,
        0x3000, 345,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 320,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '(', 427,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 554,
        ' ', 554,
        0x3000, 554,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 322,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 555,
        ' ', 555,
        0x3000, 555,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 323,
        '(', 422,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 556,
        ' ', 556,
        0x3000, 556,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 327,
        'A', 443,
        'C', 437,
        'D', 428,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 356,
        ' ', 356,
        0x3000, 356,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 328,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '(', 427,
        0xff08, 427,
        '|', 408,
        0xff5c, 408,
        '\t', 559,
        ' ', 559,
        0x3000, 559,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 330,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 560,
        ' ', 560,
        0x3000, 560,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '\n', 331,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
        '\t', 358,
        ' ', 358,
        0x3000, 358,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(565);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        '(', 423,
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == 0x300a) ADVANCE(409);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(425);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      ADVANCE_MAP(
        'A', 443,
        'C', 437,
        'G', 445,
        'I', 439,
        'L', 429,
        'M', 430,
        'P', 434,
        'R', 433,
        'V', 441,
        'a', 444,
        'c', 438,
        'g', 446,
        'i', 440,
        'l', 431,
        'm', 432,
        'p', 435,
        'r', 436,
        'v', 442,
        0x300a, 409,
        0x30a2, 450,
        0x30a4, 449,
        0x30dc, 451,
        0x30de, 448,
        0x30ec, 452,
        0x4e50, 457,
        0x4f5c, 460,
        0x51fa, 465,
        0x5236, 454,
        0x5382, 466,
        0x539f, 455,
        0x58f0, 453,
        0x5f55, 467,
        0x63d2, 458,
        0x6b4c, 527,
        0x6bcd, 459,
        0x6df7, 468,
        0x7de8, 461,
        0x7f16, 462,
        0x811a, 463,
        0x827a, 464,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(426);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x300a) ADVANCE(409);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(447);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30b9) ADVANCE(246);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30e9) ADVANCE(245);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30ec) ADVANCE(254);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(241);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x30fc) ADVANCE(248);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4e50) ADVANCE(548);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(259);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x4f5c) ADVANCE(547);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(550);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5668) ADVANCE(549);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x56fe) ADVANCE(543);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x5e26) ADVANCE(263);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(536);
      if (lookahead == 0x7de8) ADVANCE(273);
      if (lookahead == 0x7f16) ADVANCE(274);
      if (lookahead == 0x8a5e) ADVANCE(539);
      if (lookahead == 0x8bcd) ADVANCE(540);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(537);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x66f2) ADVANCE(538);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672c) ADVANCE(542);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x672f) ADVANCE(267);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x7248) ADVANCE(269);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x724c) ADVANCE(541);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(546);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == 0x97f3) ADVANCE(551);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_creator_name_token1);
      if (lookahead == ')' ||
          lookahead == 0xff09) ADVANCE(407);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(469);
      if ((!eof && set_contains(aux_sym_creator_name_token1_character_set_1, 13, lookahead))) ADVANCE(412);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__role_instrument);
      if ((!eof && set_contains(sym__role_instrument_character_set_1, 11, lookahead))) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_Music);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Composition);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_composition);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_Composer);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_composer);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_Compose);
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_compose);
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Lyrics);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_lyrics);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Lyricist);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_lyricist);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Lyric);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_lyric);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_Arrangement);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_arrangement);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_Arranger);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_arranger);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_Arrange);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_arrange);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_Vocalist);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_vocalist);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_Vocal);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_vocal);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_Performer);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_performer);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_Illustration);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_illustration);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_Illustrator);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_illustrator);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_Illust);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_illust);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_Label);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_circle);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_Producer);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_producer);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_Recording);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_recording);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_GuestVocal);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_Guestvocal);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_guestvocal);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_Chorus);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_chorus);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_Mixing);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_mixing);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_Mastering);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_mastering);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_u30dcu30fcu30abu30eb);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_u30a2u30ecu30f3u30b8);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u30a4u30e9u30b9u30c8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_u30ecu30fcu30d9u30eb);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u30deu30b9u30bfu30eau30f3u30b0);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_u827au672fu5bb6);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_u6b4cu5531);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_u6b4c);
      if (lookahead == 0x5531) ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu7de8u66f2);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu7f16u66f2);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu4f5cu66f2);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu4f5cu66f2);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5eu66f2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcdu66f2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_u4f5cu7de8u66f2);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_u4f5cu7f16u66f2);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_u4f5cu66f2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_u7de8u66f2);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_u7f16u66f2);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_u4f5cu8a5e);
      if (lookahead == 0x4f5c) ADVANCE(275);
      if (lookahead == 0x66f2) ADVANCE(532);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_u4f5cu8bcd);
      if (lookahead == 0x4f5c) ADVANCE(276);
      if (lookahead == 0x66f2) ADVANCE(533);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_u5382u724c);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_u811au672c);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_u63d2u56fe);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_u5236u4f5cu4eba);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_u51fau7248u65b9);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_u5f55u97f3);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_u539fu4f5c);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_u58f0u4e50);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_u4e50u5668);
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_u6df7u97f3);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_u6bcdu5e26u5236u4f5c);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_parts);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(554);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(555);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(556);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\n', 324,
        '(', 20,
        0xff08, 32,
        '\t', 557,
        ' ', 557,
        0x3000, 557,
        '&', 569,
        ',', 569,
        '/', 569,
        ':', 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff0f, 569,
        0xff1a, 569,
        0xff1b, 569,
      );
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\n', 325,
        '\t', 558,
        ' ', 558,
        0x3000, 558,
        '&', 569,
        ',', 569,
        '/', 569,
        ':', 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff0f, 569,
        0xff1a, 569,
        0xff1b, 569,
      );
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(559);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(560);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(561);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(359);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(562);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(360);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '(' ||
          lookahead == 0xff08) ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(563);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(361);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(564);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(362);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(565);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(566);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 567,
        ' ', 567,
        0x3000, 567,
        '&', 569,
        ',', 569,
        '/', 569,
        ':', 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff0f, 569,
        0xff1a, 569,
        0xff1b, 569,
      );
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 0x3000) ADVANCE(568);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(351);
      if (set_contains(sym__sep_character_set_1, 11, lookahead)) ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__sep);
      ADVANCE_MAP(
        '\t', 569,
        ' ', 569,
        '&', 569,
        ',', 569,
        '/', 569,
        ':', 569,
        0x3000, 569,
        0x3001, 569,
        0x30fb, 569,
        0xff06, 569,
        0xff0f, 569,
        0xff1a, 569,
        0xff1b, 569,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 314},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 295},
  [6] = {.lex_state = 295},
  [7] = {.lex_state = 309},
  [8] = {.lex_state = 309},
  [9] = {.lex_state = 314},
  [10] = {.lex_state = 290},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 297},
  [14] = {.lex_state = 314},
  [15] = {.lex_state = 296},
  [16] = {.lex_state = 314},
  [17] = {.lex_state = 296},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 314},
  [20] = {.lex_state = 314},
  [21] = {.lex_state = 297},
  [22] = {.lex_state = 297},
  [23] = {.lex_state = 291},
  [24] = {.lex_state = 291},
  [25] = {.lex_state = 310},
  [26] = {.lex_state = 310},
  [27] = {.lex_state = 310},
  [28] = {.lex_state = 292},
  [29] = {.lex_state = 292},
  [30] = {.lex_state = 300},
  [31] = {.lex_state = 300},
  [32] = {.lex_state = 299},
  [33] = {.lex_state = 291},
  [34] = {.lex_state = 291},
  [35] = {.lex_state = 312},
  [36] = {.lex_state = 312},
  [37] = {.lex_state = 299},
  [38] = {.lex_state = 291},
  [39] = {.lex_state = 311},
  [40] = {.lex_state = 311},
  [41] = {.lex_state = 312},
  [42] = {.lex_state = 311},
  [43] = {.lex_state = 299},
  [44] = {.lex_state = 301},
  [45] = {.lex_state = 299},
  [46] = {.lex_state = 313},
  [47] = {.lex_state = 313},
  [48] = {.lex_state = 311},
  [49] = {.lex_state = 299},
  [50] = {.lex_state = 311},
  [51] = {.lex_state = 311},
  [52] = {.lex_state = 313},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 311},
  [55] = {.lex_state = 311},
  [56] = {.lex_state = 303},
  [57] = {.lex_state = 313},
  [58] = {.lex_state = 313},
  [59] = {.lex_state = 313},
  [60] = {.lex_state = 303},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 313},
  [63] = {.lex_state = 305},
  [64] = {.lex_state = 313},
  [65] = {.lex_state = 314},
  [66] = {.lex_state = 314},
  [67] = {.lex_state = 314},
  [68] = {.lex_state = 314},
  [69] = {.lex_state = 303},
  [70] = {.lex_state = 314},
  [71] = {.lex_state = 307},
  [72] = {.lex_state = 314},
  [73] = {.lex_state = 303},
  [74] = {.lex_state = 314},
  [75] = {.lex_state = 314},
  [76] = {.lex_state = 307},
  [77] = {.lex_state = 297},
  [78] = {.lex_state = 297},
  [79] = {.lex_state = 297},
  [80] = {.lex_state = 297},
  [81] = {.lex_state = 297},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 297},
  [84] = {.lex_state = 314},
  [85] = {.lex_state = 314},
  [86] = {.lex_state = 297},
  [87] = {.lex_state = 314},
  [88] = {.lex_state = 314},
  [89] = {.lex_state = 297},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 293},
  [92] = {.lex_state = 293},
  [93] = {.lex_state = 293},
  [94] = {.lex_state = 294},
  [95] = {.lex_state = 294},
  [96] = {.lex_state = 294},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 294},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 240},
  [102] = {.lex_state = 240},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 240},
  [107] = {.lex_state = 240},
  [108] = {.lex_state = 240},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 240},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 240},
  [113] = {.lex_state = 240},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 293},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 285},
  [120] = {.lex_state = 285},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 294},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 286},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 286},
  [142] = {.lex_state = 286},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 286},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 286},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 15},
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
    [anon_sym_Vocalist] = ACTIONS(1),
    [anon_sym_vocalist] = ACTIONS(1),
    [anon_sym_Vocal] = ACTIONS(1),
    [anon_sym_vocal] = ACTIONS(1),
    [anon_sym_Performer] = ACTIONS(1),
    [anon_sym_performer] = ACTIONS(1),
    [anon_sym_Illustration] = ACTIONS(1),
    [anon_sym_illustration] = ACTIONS(1),
    [anon_sym_Illustrator] = ACTIONS(1),
    [anon_sym_illustrator] = ACTIONS(1),
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
    [sym_source_file] = STATE(150),
    [sym_disc] = STATE(114),
    [aux_sym__disc] = STATE(94),
    [sym_song] = STATE(94),
    [sym_credit_block_maybeparts] = STATE(91),
    [sym_credit_field_maybeparts] = STATE(19),
    [sym__quotable_song_title_maybecomment] = STATE(13),
    [sym__quotable_song_title] = STATE(43),
    [sym_song_title] = STATE(49),
    [sym_role] = STATE(152),
    [sym__role] = STATE(161),
    [aux_sym_source_file_repeat1] = STATE(114),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(19),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(4),
    [aux_sym_song_title_repeat1] = STATE(32),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
    [sym__quotable_creator_field_maybeparts] = STATE(133),
    [sym__quotable_creator_field] = STATE(128),
    [sym__quotable_creator_name] = STATE(105),
    [sym_creator_name] = STATE(104),
    [aux_sym_creator_name_repeat1] = STATE(99),
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
    [anon_sym_Vocalist] = ACTIONS(13),
    [anon_sym_vocalist] = ACTIONS(13),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illustrator] = ACTIONS(13),
    [anon_sym_illustrator] = ACTIONS(13),
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
    [sym__quotable_creator_field_maybeparts] = STATE(133),
    [sym__quotable_creator_field] = STATE(128),
    [sym__quotable_creator_name] = STATE(105),
    [sym_creator_name] = STATE(104),
    [aux_sym_creator_name_repeat1] = STATE(99),
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
    [anon_sym_Vocalist] = ACTIONS(25),
    [anon_sym_vocalist] = ACTIONS(25),
    [anon_sym_Vocal] = ACTIONS(25),
    [anon_sym_vocal] = ACTIONS(25),
    [anon_sym_Performer] = ACTIONS(25),
    [anon_sym_performer] = ACTIONS(25),
    [anon_sym_Illustration] = ACTIONS(25),
    [anon_sym_illustration] = ACTIONS(25),
    [anon_sym_Illustrator] = ACTIONS(25),
    [anon_sym_illustrator] = ACTIONS(25),
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
    [sym__quotable_creator_field_maybeparts] = STATE(121),
    [sym__quotable_creator_field] = STATE(128),
    [sym__quotable_creator_name] = STATE(105),
    [sym_creator_name] = STATE(104),
    [sym_role] = STATE(152),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(53),
    [aux_sym_creator_name_repeat1] = STATE(99),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
    [sym_parts] = ACTIONS(31),
  },
  [5] = {
    [sym__quotable_creator_field] = STATE(48),
    [sym__quotable_creator_name] = STATE(27),
    [sym_creator_name] = STATE(25),
    [aux_sym_creator_name_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DISC] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_u300a] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(35),
    [anon_sym_u300a2] = ACTIONS(39),
    [aux_sym_creator_name_token1] = ACTIONS(41),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_Vocalist] = ACTIONS(35),
    [anon_sym_vocalist] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illustrator] = ACTIONS(35),
    [anon_sym_illustrator] = ACTIONS(35),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u6b4c] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u4f5cu8bcd] = ACTIONS(35),
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
  [6] = {
    [sym__quotable_creator_field] = STATE(48),
    [sym__quotable_creator_name] = STATE(27),
    [sym_creator_name] = STATE(25),
    [aux_sym_creator_name_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DISC] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_u300a] = ACTIONS(45),
    [aux_sym_song_title_token1] = ACTIONS(45),
    [anon_sym_u300a2] = ACTIONS(39),
    [aux_sym_creator_name_token1] = ACTIONS(41),
    [sym__role_instrument] = ACTIONS(43),
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
    [anon_sym_Vocalist] = ACTIONS(45),
    [anon_sym_vocalist] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illustrator] = ACTIONS(45),
    [anon_sym_illustrator] = ACTIONS(45),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u6b4c] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u4f5cu8bcd] = ACTIONS(45),
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
  },
  [7] = {
    [sym__quotable_creator_field] = STATE(58),
    [sym__quotable_creator_name] = STATE(35),
    [sym_creator_name] = STATE(36),
    [aux_sym_creator_name_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_u300a] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(35),
    [anon_sym_u300a2] = ACTIONS(51),
    [aux_sym_creator_name_token1] = ACTIONS(53),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_Vocalist] = ACTIONS(35),
    [anon_sym_vocalist] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illustrator] = ACTIONS(35),
    [anon_sym_illustrator] = ACTIONS(35),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u6b4c] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u4f5cu8bcd] = ACTIONS(35),
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
  [8] = {
    [sym__quotable_creator_field] = STATE(58),
    [sym__quotable_creator_name] = STATE(35),
    [sym_creator_name] = STATE(36),
    [aux_sym_creator_name_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_u300a] = ACTIONS(45),
    [aux_sym_song_title_token1] = ACTIONS(45),
    [anon_sym_u300a2] = ACTIONS(51),
    [aux_sym_creator_name_token1] = ACTIONS(53),
    [sym__role_instrument] = ACTIONS(43),
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
    [anon_sym_Vocalist] = ACTIONS(45),
    [anon_sym_vocalist] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illustrator] = ACTIONS(45),
    [anon_sym_illustrator] = ACTIONS(45),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u6b4c] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u4f5cu8bcd] = ACTIONS(45),
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
  },
  [9] = {
    [sym_credit_block] = STATE(117),
    [sym_credit_field] = STATE(14),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(18),
    [aux_sym_credit_block_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DISC] = ACTIONS(59),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
    [aux_sym_creator_name_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DISC] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_u300a] = ACTIONS(63),
    [aux_sym_song_title_token1] = ACTIONS(63),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(63),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(63),
    [aux_sym_creator_name_token1] = ACTIONS(65),
    [sym__role_instrument] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(63),
    [anon_sym_music] = ACTIONS(63),
    [anon_sym_Composition] = ACTIONS(63),
    [anon_sym_composition] = ACTIONS(63),
    [anon_sym_Composer] = ACTIONS(63),
    [anon_sym_composer] = ACTIONS(63),
    [anon_sym_Compose] = ACTIONS(63),
    [anon_sym_compose] = ACTIONS(63),
    [anon_sym_Lyrics] = ACTIONS(63),
    [anon_sym_lyrics] = ACTIONS(63),
    [anon_sym_Lyricist] = ACTIONS(63),
    [anon_sym_lyricist] = ACTIONS(63),
    [anon_sym_Lyric] = ACTIONS(63),
    [anon_sym_lyric] = ACTIONS(63),
    [anon_sym_Arrangement] = ACTIONS(63),
    [anon_sym_arrangement] = ACTIONS(63),
    [anon_sym_Arranger] = ACTIONS(63),
    [anon_sym_arranger] = ACTIONS(63),
    [anon_sym_Arrange] = ACTIONS(63),
    [anon_sym_arrange] = ACTIONS(63),
    [anon_sym_Vocalist] = ACTIONS(63),
    [anon_sym_vocalist] = ACTIONS(63),
    [anon_sym_Vocal] = ACTIONS(63),
    [anon_sym_vocal] = ACTIONS(63),
    [anon_sym_Performer] = ACTIONS(63),
    [anon_sym_performer] = ACTIONS(63),
    [anon_sym_Illustration] = ACTIONS(63),
    [anon_sym_illustration] = ACTIONS(63),
    [anon_sym_Illustrator] = ACTIONS(63),
    [anon_sym_illustrator] = ACTIONS(63),
    [anon_sym_Illust] = ACTIONS(63),
    [anon_sym_illust] = ACTIONS(63),
    [anon_sym_Label] = ACTIONS(63),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_Circle] = ACTIONS(63),
    [anon_sym_circle] = ACTIONS(63),
    [anon_sym_Producer] = ACTIONS(63),
    [anon_sym_producer] = ACTIONS(63),
    [anon_sym_Recording] = ACTIONS(63),
    [anon_sym_recording] = ACTIONS(63),
    [anon_sym_GuestVocal] = ACTIONS(63),
    [anon_sym_Guestvocal] = ACTIONS(63),
    [anon_sym_guestvocal] = ACTIONS(63),
    [anon_sym_Chorus] = ACTIONS(63),
    [anon_sym_chorus] = ACTIONS(63),
    [anon_sym_Mixing] = ACTIONS(63),
    [anon_sym_mixing] = ACTIONS(63),
    [anon_sym_Mastering] = ACTIONS(63),
    [anon_sym_mastering] = ACTIONS(63),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(63),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(63),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(63),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(63),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(63),
    [anon_sym_u827au672fu5bb6] = ACTIONS(63),
    [anon_sym_u6b4cu5531] = ACTIONS(63),
    [anon_sym_u6b4c] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu66f2] = ACTIONS(63),
    [anon_sym_u7de8u66f2] = ACTIONS(63),
    [anon_sym_u7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5e] = ACTIONS(63),
    [anon_sym_u4f5cu8bcd] = ACTIONS(63),
    [anon_sym_u5382u724c] = ACTIONS(63),
    [anon_sym_u811au672c] = ACTIONS(63),
    [anon_sym_u63d2u56fe] = ACTIONS(63),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(63),
    [anon_sym_u51fau7248u65b9] = ACTIONS(63),
    [anon_sym_u5f55u97f3] = ACTIONS(63),
    [anon_sym_u539fu4f5c] = ACTIONS(63),
    [anon_sym_u58f0u4e50] = ACTIONS(63),
    [anon_sym_u4e50u5668] = ACTIONS(63),
    [anon_sym_u6df7u97f3] = ACTIONS(63),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(63),
    [sym__sep] = ACTIONS(63),
  },
  [11] = {
    [aux_sym_creator_name_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DISC] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(69),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(71),
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
    [anon_sym_Vocalist] = ACTIONS(69),
    [anon_sym_vocalist] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illustrator] = ACTIONS(69),
    [anon_sym_illustrator] = ACTIONS(69),
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
    [anon_sym_u6b4c] = ACTIONS(69),
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
    [sym__sep] = ACTIONS(69),
  },
  [12] = {
    [sym__quotable_creator_field] = STATE(46),
    [sym__quotable_creator_name] = STATE(35),
    [sym_creator_name] = STATE(36),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(61),
    [aux_sym_creator_name_repeat1] = STATE(15),
    [anon_sym_u300a2] = ACTIONS(51),
    [aux_sym_creator_name_token1] = ACTIONS(53),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
  [13] = {
    [sym_credit_block] = STATE(130),
    [sym_credit_field] = STATE(22),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(12),
    [aux_sym_credit_block_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_u300a] = ACTIONS(59),
    [aux_sym_song_title_token1] = ACTIONS(59),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
  [14] = {
    [sym_credit_field] = STATE(16),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(18),
    [aux_sym_credit_block_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DISC] = ACTIONS(76),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
  [15] = {
    [aux_sym_creator_name_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_u300a] = ACTIONS(63),
    [aux_sym_song_title_token1] = ACTIONS(63),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(63),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(63),
    [aux_sym_creator_name_token1] = ACTIONS(78),
    [sym__role_instrument] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(63),
    [anon_sym_music] = ACTIONS(63),
    [anon_sym_Composition] = ACTIONS(63),
    [anon_sym_composition] = ACTIONS(63),
    [anon_sym_Composer] = ACTIONS(63),
    [anon_sym_composer] = ACTIONS(63),
    [anon_sym_Compose] = ACTIONS(63),
    [anon_sym_compose] = ACTIONS(63),
    [anon_sym_Lyrics] = ACTIONS(63),
    [anon_sym_lyrics] = ACTIONS(63),
    [anon_sym_Lyricist] = ACTIONS(63),
    [anon_sym_lyricist] = ACTIONS(63),
    [anon_sym_Lyric] = ACTIONS(63),
    [anon_sym_lyric] = ACTIONS(63),
    [anon_sym_Arrangement] = ACTIONS(63),
    [anon_sym_arrangement] = ACTIONS(63),
    [anon_sym_Arranger] = ACTIONS(63),
    [anon_sym_arranger] = ACTIONS(63),
    [anon_sym_Arrange] = ACTIONS(63),
    [anon_sym_arrange] = ACTIONS(63),
    [anon_sym_Vocalist] = ACTIONS(63),
    [anon_sym_vocalist] = ACTIONS(63),
    [anon_sym_Vocal] = ACTIONS(63),
    [anon_sym_vocal] = ACTIONS(63),
    [anon_sym_Performer] = ACTIONS(63),
    [anon_sym_performer] = ACTIONS(63),
    [anon_sym_Illustration] = ACTIONS(63),
    [anon_sym_illustration] = ACTIONS(63),
    [anon_sym_Illustrator] = ACTIONS(63),
    [anon_sym_illustrator] = ACTIONS(63),
    [anon_sym_Illust] = ACTIONS(63),
    [anon_sym_illust] = ACTIONS(63),
    [anon_sym_Label] = ACTIONS(63),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_Circle] = ACTIONS(63),
    [anon_sym_circle] = ACTIONS(63),
    [anon_sym_Producer] = ACTIONS(63),
    [anon_sym_producer] = ACTIONS(63),
    [anon_sym_Recording] = ACTIONS(63),
    [anon_sym_recording] = ACTIONS(63),
    [anon_sym_GuestVocal] = ACTIONS(63),
    [anon_sym_Guestvocal] = ACTIONS(63),
    [anon_sym_guestvocal] = ACTIONS(63),
    [anon_sym_Chorus] = ACTIONS(63),
    [anon_sym_chorus] = ACTIONS(63),
    [anon_sym_Mixing] = ACTIONS(63),
    [anon_sym_mixing] = ACTIONS(63),
    [anon_sym_Mastering] = ACTIONS(63),
    [anon_sym_mastering] = ACTIONS(63),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(63),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(63),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(63),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(63),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(63),
    [anon_sym_u827au672fu5bb6] = ACTIONS(63),
    [anon_sym_u6b4cu5531] = ACTIONS(63),
    [anon_sym_u6b4c] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu66f2] = ACTIONS(63),
    [anon_sym_u7de8u66f2] = ACTIONS(63),
    [anon_sym_u7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5e] = ACTIONS(63),
    [anon_sym_u4f5cu8bcd] = ACTIONS(63),
    [anon_sym_u5382u724c] = ACTIONS(63),
    [anon_sym_u811au672c] = ACTIONS(63),
    [anon_sym_u63d2u56fe] = ACTIONS(63),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(63),
    [anon_sym_u51fau7248u65b9] = ACTIONS(63),
    [anon_sym_u5f55u97f3] = ACTIONS(63),
    [anon_sym_u539fu4f5c] = ACTIONS(63),
    [anon_sym_u58f0u4e50] = ACTIONS(63),
    [anon_sym_u4e50u5668] = ACTIONS(63),
    [anon_sym_u6df7u97f3] = ACTIONS(63),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(63),
    [sym__sep] = ACTIONS(63),
  },
  [16] = {
    [sym_credit_field] = STATE(16),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(18),
    [aux_sym_credit_block_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_DISC] = ACTIONS(82),
    [anon_sym_u300a] = ACTIONS(82),
    [aux_sym_song_title_token1] = ACTIONS(82),
    [sym__role_instrument] = ACTIONS(84),
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
    [anon_sym_Vocalist] = ACTIONS(87),
    [anon_sym_vocalist] = ACTIONS(87),
    [anon_sym_Vocal] = ACTIONS(87),
    [anon_sym_vocal] = ACTIONS(87),
    [anon_sym_Performer] = ACTIONS(87),
    [anon_sym_performer] = ACTIONS(87),
    [anon_sym_Illustration] = ACTIONS(87),
    [anon_sym_illustration] = ACTIONS(87),
    [anon_sym_Illustrator] = ACTIONS(87),
    [anon_sym_illustrator] = ACTIONS(87),
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
    [anon_sym_GuestVocal] = ACTIONS(87),
    [anon_sym_Guestvocal] = ACTIONS(87),
    [anon_sym_guestvocal] = ACTIONS(87),
    [anon_sym_Chorus] = ACTIONS(87),
    [anon_sym_chorus] = ACTIONS(87),
    [anon_sym_Mixing] = ACTIONS(87),
    [anon_sym_mixing] = ACTIONS(87),
    [anon_sym_Mastering] = ACTIONS(87),
    [anon_sym_mastering] = ACTIONS(87),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(87),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(87),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(87),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(87),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(87),
    [anon_sym_u827au672fu5bb6] = ACTIONS(87),
    [anon_sym_u6b4cu5531] = ACTIONS(87),
    [anon_sym_u6b4c] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu66f2] = ACTIONS(87),
    [anon_sym_u7de8u66f2] = ACTIONS(87),
    [anon_sym_u7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5e] = ACTIONS(87),
    [anon_sym_u4f5cu8bcd] = ACTIONS(87),
    [anon_sym_u5382u724c] = ACTIONS(87),
    [anon_sym_u811au672c] = ACTIONS(87),
    [anon_sym_u63d2u56fe] = ACTIONS(87),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(87),
    [anon_sym_u51fau7248u65b9] = ACTIONS(87),
    [anon_sym_u5f55u97f3] = ACTIONS(87),
    [anon_sym_u539fu4f5c] = ACTIONS(87),
    [anon_sym_u58f0u4e50] = ACTIONS(87),
    [anon_sym_u4e50u5668] = ACTIONS(87),
    [anon_sym_u6df7u97f3] = ACTIONS(87),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(87),
  },
  [17] = {
    [aux_sym_creator_name_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(69),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(90),
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
    [anon_sym_Vocalist] = ACTIONS(69),
    [anon_sym_vocalist] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illustrator] = ACTIONS(69),
    [anon_sym_illustrator] = ACTIONS(69),
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
    [anon_sym_u6b4c] = ACTIONS(69),
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
    [sym__sep] = ACTIONS(69),
  },
  [18] = {
    [sym__quotable_creator_field] = STATE(39),
    [sym__quotable_creator_name] = STATE(27),
    [sym_creator_name] = STATE(25),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(61),
    [aux_sym_creator_name_repeat1] = STATE(10),
    [anon_sym_u300a2] = ACTIONS(39),
    [aux_sym_creator_name_token1] = ACTIONS(41),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
  [19] = {
    [sym_credit_field_maybeparts] = STATE(20),
    [sym_role] = STATE(152),
    [sym__role] = STATE(161),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(4),
    [anon_sym_DISC] = ACTIONS(93),
    [anon_sym_u300a] = ACTIONS(93),
    [aux_sym_song_title_token1] = ACTIONS(93),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
    [sym_credit_field_maybeparts] = STATE(20),
    [sym_role] = STATE(152),
    [sym__role] = STATE(161),
    [aux_sym_credit_block_maybeparts_repeat1] = STATE(20),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(4),
    [anon_sym_DISC] = ACTIONS(95),
    [anon_sym_u300a] = ACTIONS(95),
    [aux_sym_song_title_token1] = ACTIONS(95),
    [sym__role_instrument] = ACTIONS(97),
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
    [anon_sym_Vocalist] = ACTIONS(100),
    [anon_sym_vocalist] = ACTIONS(100),
    [anon_sym_Vocal] = ACTIONS(100),
    [anon_sym_vocal] = ACTIONS(100),
    [anon_sym_Performer] = ACTIONS(100),
    [anon_sym_performer] = ACTIONS(100),
    [anon_sym_Illustration] = ACTIONS(100),
    [anon_sym_illustration] = ACTIONS(100),
    [anon_sym_Illustrator] = ACTIONS(100),
    [anon_sym_illustrator] = ACTIONS(100),
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
    [anon_sym_GuestVocal] = ACTIONS(100),
    [anon_sym_Guestvocal] = ACTIONS(100),
    [anon_sym_guestvocal] = ACTIONS(100),
    [anon_sym_Chorus] = ACTIONS(100),
    [anon_sym_chorus] = ACTIONS(100),
    [anon_sym_Mixing] = ACTIONS(100),
    [anon_sym_mixing] = ACTIONS(100),
    [anon_sym_Mastering] = ACTIONS(100),
    [anon_sym_mastering] = ACTIONS(100),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(100),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(100),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(100),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(100),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(100),
    [anon_sym_u827au672fu5bb6] = ACTIONS(100),
    [anon_sym_u6b4cu5531] = ACTIONS(100),
    [anon_sym_u6b4c] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(100),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu66f2] = ACTIONS(100),
    [anon_sym_u7de8u66f2] = ACTIONS(100),
    [anon_sym_u7f16u66f2] = ACTIONS(100),
    [anon_sym_u4f5cu8a5e] = ACTIONS(100),
    [anon_sym_u4f5cu8bcd] = ACTIONS(100),
    [anon_sym_u5382u724c] = ACTIONS(100),
    [anon_sym_u811au672c] = ACTIONS(100),
    [anon_sym_u63d2u56fe] = ACTIONS(100),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(100),
    [anon_sym_u51fau7248u65b9] = ACTIONS(100),
    [anon_sym_u5f55u97f3] = ACTIONS(100),
    [anon_sym_u539fu4f5c] = ACTIONS(100),
    [anon_sym_u58f0u4e50] = ACTIONS(100),
    [anon_sym_u4e50u5668] = ACTIONS(100),
    [anon_sym_u6df7u97f3] = ACTIONS(100),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(100),
  },
  [21] = {
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(12),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_u300a] = ACTIONS(82),
    [aux_sym_song_title_token1] = ACTIONS(82),
    [sym__role_instrument] = ACTIONS(84),
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
    [anon_sym_Vocalist] = ACTIONS(87),
    [anon_sym_vocalist] = ACTIONS(87),
    [anon_sym_Vocal] = ACTIONS(87),
    [anon_sym_vocal] = ACTIONS(87),
    [anon_sym_Performer] = ACTIONS(87),
    [anon_sym_performer] = ACTIONS(87),
    [anon_sym_Illustration] = ACTIONS(87),
    [anon_sym_illustration] = ACTIONS(87),
    [anon_sym_Illustrator] = ACTIONS(87),
    [anon_sym_illustrator] = ACTIONS(87),
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
    [anon_sym_GuestVocal] = ACTIONS(87),
    [anon_sym_Guestvocal] = ACTIONS(87),
    [anon_sym_guestvocal] = ACTIONS(87),
    [anon_sym_Chorus] = ACTIONS(87),
    [anon_sym_chorus] = ACTIONS(87),
    [anon_sym_Mixing] = ACTIONS(87),
    [anon_sym_mixing] = ACTIONS(87),
    [anon_sym_Mastering] = ACTIONS(87),
    [anon_sym_mastering] = ACTIONS(87),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(87),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(87),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(87),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(87),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(87),
    [anon_sym_u827au672fu5bb6] = ACTIONS(87),
    [anon_sym_u6b4cu5531] = ACTIONS(87),
    [anon_sym_u6b4c] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu66f2] = ACTIONS(87),
    [anon_sym_u7de8u66f2] = ACTIONS(87),
    [anon_sym_u7f16u66f2] = ACTIONS(87),
    [anon_sym_u4f5cu8a5e] = ACTIONS(87),
    [anon_sym_u4f5cu8bcd] = ACTIONS(87),
    [anon_sym_u5382u724c] = ACTIONS(87),
    [anon_sym_u811au672c] = ACTIONS(87),
    [anon_sym_u63d2u56fe] = ACTIONS(87),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(87),
    [anon_sym_u51fau7248u65b9] = ACTIONS(87),
    [anon_sym_u5f55u97f3] = ACTIONS(87),
    [anon_sym_u539fu4f5c] = ACTIONS(87),
    [anon_sym_u58f0u4e50] = ACTIONS(87),
    [anon_sym_u4e50u5668] = ACTIONS(87),
    [anon_sym_u6df7u97f3] = ACTIONS(87),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(87),
  },
  [22] = {
    [sym_credit_field] = STATE(21),
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(12),
    [aux_sym_credit_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_u300a] = ACTIONS(76),
    [aux_sym_song_title_token1] = ACTIONS(76),
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
    [anon_sym_Vocalist] = ACTIONS(11),
    [anon_sym_vocalist] = ACTIONS(11),
    [anon_sym_Vocal] = ACTIONS(11),
    [anon_sym_vocal] = ACTIONS(11),
    [anon_sym_Performer] = ACTIONS(11),
    [anon_sym_performer] = ACTIONS(11),
    [anon_sym_Illustration] = ACTIONS(11),
    [anon_sym_illustration] = ACTIONS(11),
    [anon_sym_Illustrator] = ACTIONS(11),
    [anon_sym_illustrator] = ACTIONS(11),
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
  [23] = {
    [aux_sym_song_title_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_DISC] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(105),
    [anon_sym_u300a] = ACTIONS(105),
    [aux_sym_song_title_token1] = ACTIONS(107),
    [sym__role_instrument] = ACTIONS(103),
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
    [anon_sym_Vocalist] = ACTIONS(105),
    [anon_sym_vocalist] = ACTIONS(105),
    [anon_sym_Vocal] = ACTIONS(105),
    [anon_sym_vocal] = ACTIONS(105),
    [anon_sym_Performer] = ACTIONS(105),
    [anon_sym_performer] = ACTIONS(105),
    [anon_sym_Illustration] = ACTIONS(105),
    [anon_sym_illustration] = ACTIONS(105),
    [anon_sym_Illustrator] = ACTIONS(105),
    [anon_sym_illustrator] = ACTIONS(105),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(105),
    [anon_sym_u6b4cu5531] = ACTIONS(105),
    [anon_sym_u6b4c] = ACTIONS(105),
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
  },
  [24] = {
    [aux_sym_song_title_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_DISC] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_SLASH_SLASH] = ACTIONS(111),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(111),
    [anon_sym_u300a] = ACTIONS(111),
    [aux_sym_song_title_token1] = ACTIONS(113),
    [sym__role_instrument] = ACTIONS(109),
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
    [anon_sym_Vocalist] = ACTIONS(111),
    [anon_sym_vocalist] = ACTIONS(111),
    [anon_sym_Vocal] = ACTIONS(111),
    [anon_sym_vocal] = ACTIONS(111),
    [anon_sym_Performer] = ACTIONS(111),
    [anon_sym_performer] = ACTIONS(111),
    [anon_sym_Illustration] = ACTIONS(111),
    [anon_sym_illustration] = ACTIONS(111),
    [anon_sym_Illustrator] = ACTIONS(111),
    [anon_sym_illustrator] = ACTIONS(111),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u6b4c] = ACTIONS(111),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_DISC] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_u300a] = ACTIONS(118),
    [aux_sym_song_title_token1] = ACTIONS(118),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(118),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(118),
    [sym__role_instrument] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(118),
    [anon_sym_music] = ACTIONS(118),
    [anon_sym_Composition] = ACTIONS(118),
    [anon_sym_composition] = ACTIONS(118),
    [anon_sym_Composer] = ACTIONS(118),
    [anon_sym_composer] = ACTIONS(118),
    [anon_sym_Compose] = ACTIONS(118),
    [anon_sym_compose] = ACTIONS(118),
    [anon_sym_Lyrics] = ACTIONS(118),
    [anon_sym_lyrics] = ACTIONS(118),
    [anon_sym_Lyricist] = ACTIONS(118),
    [anon_sym_lyricist] = ACTIONS(118),
    [anon_sym_Lyric] = ACTIONS(118),
    [anon_sym_lyric] = ACTIONS(118),
    [anon_sym_Arrangement] = ACTIONS(118),
    [anon_sym_arrangement] = ACTIONS(118),
    [anon_sym_Arranger] = ACTIONS(118),
    [anon_sym_arranger] = ACTIONS(118),
    [anon_sym_Arrange] = ACTIONS(118),
    [anon_sym_arrange] = ACTIONS(118),
    [anon_sym_Vocalist] = ACTIONS(118),
    [anon_sym_vocalist] = ACTIONS(118),
    [anon_sym_Vocal] = ACTIONS(118),
    [anon_sym_vocal] = ACTIONS(118),
    [anon_sym_Performer] = ACTIONS(118),
    [anon_sym_performer] = ACTIONS(118),
    [anon_sym_Illustration] = ACTIONS(118),
    [anon_sym_illustration] = ACTIONS(118),
    [anon_sym_Illustrator] = ACTIONS(118),
    [anon_sym_illustrator] = ACTIONS(118),
    [anon_sym_Illust] = ACTIONS(118),
    [anon_sym_illust] = ACTIONS(118),
    [anon_sym_Label] = ACTIONS(118),
    [anon_sym_label] = ACTIONS(118),
    [anon_sym_Circle] = ACTIONS(118),
    [anon_sym_circle] = ACTIONS(118),
    [anon_sym_Producer] = ACTIONS(118),
    [anon_sym_producer] = ACTIONS(118),
    [anon_sym_Recording] = ACTIONS(118),
    [anon_sym_recording] = ACTIONS(118),
    [anon_sym_GuestVocal] = ACTIONS(118),
    [anon_sym_Guestvocal] = ACTIONS(118),
    [anon_sym_guestvocal] = ACTIONS(118),
    [anon_sym_Chorus] = ACTIONS(118),
    [anon_sym_chorus] = ACTIONS(118),
    [anon_sym_Mixing] = ACTIONS(118),
    [anon_sym_mixing] = ACTIONS(118),
    [anon_sym_Mastering] = ACTIONS(118),
    [anon_sym_mastering] = ACTIONS(118),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(118),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(118),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(118),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(118),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(118),
    [anon_sym_u827au672fu5bb6] = ACTIONS(118),
    [anon_sym_u6b4cu5531] = ACTIONS(118),
    [anon_sym_u6b4c] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu66f2] = ACTIONS(118),
    [anon_sym_u7de8u66f2] = ACTIONS(118),
    [anon_sym_u7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5e] = ACTIONS(118),
    [anon_sym_u4f5cu8bcd] = ACTIONS(118),
    [anon_sym_u5382u724c] = ACTIONS(118),
    [anon_sym_u811au672c] = ACTIONS(118),
    [anon_sym_u63d2u56fe] = ACTIONS(118),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(118),
    [anon_sym_u51fau7248u65b9] = ACTIONS(118),
    [anon_sym_u5f55u97f3] = ACTIONS(118),
    [anon_sym_u539fu4f5c] = ACTIONS(118),
    [anon_sym_u58f0u4e50] = ACTIONS(118),
    [anon_sym_u4e50u5668] = ACTIONS(118),
    [anon_sym_u6df7u97f3] = ACTIONS(118),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(118),
    [sym__sep] = ACTIONS(118),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_DISC] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(122),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(122),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(122),
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
    [anon_sym_Vocalist] = ACTIONS(122),
    [anon_sym_vocalist] = ACTIONS(122),
    [anon_sym_Vocal] = ACTIONS(122),
    [anon_sym_vocal] = ACTIONS(122),
    [anon_sym_Performer] = ACTIONS(122),
    [anon_sym_performer] = ACTIONS(122),
    [anon_sym_Illustration] = ACTIONS(122),
    [anon_sym_illustration] = ACTIONS(122),
    [anon_sym_Illustrator] = ACTIONS(122),
    [anon_sym_illustrator] = ACTIONS(122),
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
    [sym__sep] = ACTIONS(122),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_DISC] = ACTIONS(126),
    [anon_sym_LF] = ACTIONS(126),
    [anon_sym_u300a] = ACTIONS(126),
    [aux_sym_song_title_token1] = ACTIONS(126),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(128),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(130),
    [sym__role_instrument] = ACTIONS(124),
    [anon_sym_Music] = ACTIONS(126),
    [anon_sym_music] = ACTIONS(126),
    [anon_sym_Composition] = ACTIONS(126),
    [anon_sym_composition] = ACTIONS(126),
    [anon_sym_Composer] = ACTIONS(126),
    [anon_sym_composer] = ACTIONS(126),
    [anon_sym_Compose] = ACTIONS(126),
    [anon_sym_compose] = ACTIONS(126),
    [anon_sym_Lyrics] = ACTIONS(126),
    [anon_sym_lyrics] = ACTIONS(126),
    [anon_sym_Lyricist] = ACTIONS(126),
    [anon_sym_lyricist] = ACTIONS(126),
    [anon_sym_Lyric] = ACTIONS(126),
    [anon_sym_lyric] = ACTIONS(126),
    [anon_sym_Arrangement] = ACTIONS(126),
    [anon_sym_arrangement] = ACTIONS(126),
    [anon_sym_Arranger] = ACTIONS(126),
    [anon_sym_arranger] = ACTIONS(126),
    [anon_sym_Arrange] = ACTIONS(126),
    [anon_sym_arrange] = ACTIONS(126),
    [anon_sym_Vocalist] = ACTIONS(126),
    [anon_sym_vocalist] = ACTIONS(126),
    [anon_sym_Vocal] = ACTIONS(126),
    [anon_sym_vocal] = ACTIONS(126),
    [anon_sym_Performer] = ACTIONS(126),
    [anon_sym_performer] = ACTIONS(126),
    [anon_sym_Illustration] = ACTIONS(126),
    [anon_sym_illustration] = ACTIONS(126),
    [anon_sym_Illustrator] = ACTIONS(126),
    [anon_sym_illustrator] = ACTIONS(126),
    [anon_sym_Illust] = ACTIONS(126),
    [anon_sym_illust] = ACTIONS(126),
    [anon_sym_Label] = ACTIONS(126),
    [anon_sym_label] = ACTIONS(126),
    [anon_sym_Circle] = ACTIONS(126),
    [anon_sym_circle] = ACTIONS(126),
    [anon_sym_Producer] = ACTIONS(126),
    [anon_sym_producer] = ACTIONS(126),
    [anon_sym_Recording] = ACTIONS(126),
    [anon_sym_recording] = ACTIONS(126),
    [anon_sym_GuestVocal] = ACTIONS(126),
    [anon_sym_Guestvocal] = ACTIONS(126),
    [anon_sym_guestvocal] = ACTIONS(126),
    [anon_sym_Chorus] = ACTIONS(126),
    [anon_sym_chorus] = ACTIONS(126),
    [anon_sym_Mixing] = ACTIONS(126),
    [anon_sym_mixing] = ACTIONS(126),
    [anon_sym_Mastering] = ACTIONS(126),
    [anon_sym_mastering] = ACTIONS(126),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(126),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(126),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(126),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(126),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(126),
    [anon_sym_u827au672fu5bb6] = ACTIONS(126),
    [anon_sym_u6b4cu5531] = ACTIONS(126),
    [anon_sym_u6b4c] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu66f2] = ACTIONS(126),
    [anon_sym_u7de8u66f2] = ACTIONS(126),
    [anon_sym_u7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5e] = ACTIONS(126),
    [anon_sym_u4f5cu8bcd] = ACTIONS(126),
    [anon_sym_u5382u724c] = ACTIONS(126),
    [anon_sym_u811au672c] = ACTIONS(126),
    [anon_sym_u63d2u56fe] = ACTIONS(126),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(126),
    [anon_sym_u51fau7248u65b9] = ACTIONS(126),
    [anon_sym_u5f55u97f3] = ACTIONS(126),
    [anon_sym_u539fu4f5c] = ACTIONS(126),
    [anon_sym_u58f0u4e50] = ACTIONS(126),
    [anon_sym_u4e50u5668] = ACTIONS(126),
    [anon_sym_u6df7u97f3] = ACTIONS(126),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(126),
    [sym__sep] = ACTIONS(126),
  },
  [28] = {
    [aux_sym_creator_name_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DISC] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_u300a] = ACTIONS(63),
    [aux_sym_song_title_token1] = ACTIONS(63),
    [aux_sym_creator_name_token1] = ACTIONS(132),
    [sym__role_instrument] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(63),
    [anon_sym_music] = ACTIONS(63),
    [anon_sym_Composition] = ACTIONS(63),
    [anon_sym_composition] = ACTIONS(63),
    [anon_sym_Composer] = ACTIONS(63),
    [anon_sym_composer] = ACTIONS(63),
    [anon_sym_Compose] = ACTIONS(63),
    [anon_sym_compose] = ACTIONS(63),
    [anon_sym_Lyrics] = ACTIONS(63),
    [anon_sym_lyrics] = ACTIONS(63),
    [anon_sym_Lyricist] = ACTIONS(63),
    [anon_sym_lyricist] = ACTIONS(63),
    [anon_sym_Lyric] = ACTIONS(63),
    [anon_sym_lyric] = ACTIONS(63),
    [anon_sym_Arrangement] = ACTIONS(63),
    [anon_sym_arrangement] = ACTIONS(63),
    [anon_sym_Arranger] = ACTIONS(63),
    [anon_sym_arranger] = ACTIONS(63),
    [anon_sym_Arrange] = ACTIONS(63),
    [anon_sym_arrange] = ACTIONS(63),
    [anon_sym_Vocalist] = ACTIONS(63),
    [anon_sym_vocalist] = ACTIONS(63),
    [anon_sym_Vocal] = ACTIONS(63),
    [anon_sym_vocal] = ACTIONS(63),
    [anon_sym_Performer] = ACTIONS(63),
    [anon_sym_performer] = ACTIONS(63),
    [anon_sym_Illustration] = ACTIONS(63),
    [anon_sym_illustration] = ACTIONS(63),
    [anon_sym_Illustrator] = ACTIONS(63),
    [anon_sym_illustrator] = ACTIONS(63),
    [anon_sym_Illust] = ACTIONS(63),
    [anon_sym_illust] = ACTIONS(63),
    [anon_sym_Label] = ACTIONS(63),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_Circle] = ACTIONS(63),
    [anon_sym_circle] = ACTIONS(63),
    [anon_sym_Producer] = ACTIONS(63),
    [anon_sym_producer] = ACTIONS(63),
    [anon_sym_Recording] = ACTIONS(63),
    [anon_sym_recording] = ACTIONS(63),
    [anon_sym_GuestVocal] = ACTIONS(63),
    [anon_sym_Guestvocal] = ACTIONS(63),
    [anon_sym_guestvocal] = ACTIONS(63),
    [anon_sym_Chorus] = ACTIONS(63),
    [anon_sym_chorus] = ACTIONS(63),
    [anon_sym_Mixing] = ACTIONS(63),
    [anon_sym_mixing] = ACTIONS(63),
    [anon_sym_Mastering] = ACTIONS(63),
    [anon_sym_mastering] = ACTIONS(63),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(63),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(63),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(63),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(63),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(63),
    [anon_sym_u827au672fu5bb6] = ACTIONS(63),
    [anon_sym_u6b4cu5531] = ACTIONS(63),
    [anon_sym_u6b4c] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu66f2] = ACTIONS(63),
    [anon_sym_u7de8u66f2] = ACTIONS(63),
    [anon_sym_u7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5e] = ACTIONS(63),
    [anon_sym_u4f5cu8bcd] = ACTIONS(63),
    [anon_sym_u5382u724c] = ACTIONS(63),
    [anon_sym_u811au672c] = ACTIONS(63),
    [anon_sym_u63d2u56fe] = ACTIONS(63),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(63),
    [anon_sym_u51fau7248u65b9] = ACTIONS(63),
    [anon_sym_u5f55u97f3] = ACTIONS(63),
    [anon_sym_u539fu4f5c] = ACTIONS(63),
    [anon_sym_u58f0u4e50] = ACTIONS(63),
    [anon_sym_u4e50u5668] = ACTIONS(63),
    [anon_sym_u6df7u97f3] = ACTIONS(63),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(63),
    [sym__sep] = ACTIONS(63),
  },
  [29] = {
    [aux_sym_creator_name_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DISC] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(134),
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
    [anon_sym_Vocalist] = ACTIONS(69),
    [anon_sym_vocalist] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illustrator] = ACTIONS(69),
    [anon_sym_illustrator] = ACTIONS(69),
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
    [anon_sym_u6b4c] = ACTIONS(69),
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
    [sym__sep] = ACTIONS(69),
  },
  [30] = {
    [aux_sym_creator_name_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_u300a] = ACTIONS(69),
    [aux_sym_song_title_token1] = ACTIONS(69),
    [aux_sym_creator_name_token1] = ACTIONS(137),
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
    [anon_sym_Vocalist] = ACTIONS(69),
    [anon_sym_vocalist] = ACTIONS(69),
    [anon_sym_Vocal] = ACTIONS(69),
    [anon_sym_vocal] = ACTIONS(69),
    [anon_sym_Performer] = ACTIONS(69),
    [anon_sym_performer] = ACTIONS(69),
    [anon_sym_Illustration] = ACTIONS(69),
    [anon_sym_illustration] = ACTIONS(69),
    [anon_sym_Illustrator] = ACTIONS(69),
    [anon_sym_illustrator] = ACTIONS(69),
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
    [anon_sym_u6b4c] = ACTIONS(69),
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
    [sym__sep] = ACTIONS(69),
  },
  [31] = {
    [aux_sym_creator_name_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_u300a] = ACTIONS(63),
    [aux_sym_song_title_token1] = ACTIONS(63),
    [aux_sym_creator_name_token1] = ACTIONS(140),
    [sym__role_instrument] = ACTIONS(61),
    [anon_sym_Music] = ACTIONS(63),
    [anon_sym_music] = ACTIONS(63),
    [anon_sym_Composition] = ACTIONS(63),
    [anon_sym_composition] = ACTIONS(63),
    [anon_sym_Composer] = ACTIONS(63),
    [anon_sym_composer] = ACTIONS(63),
    [anon_sym_Compose] = ACTIONS(63),
    [anon_sym_compose] = ACTIONS(63),
    [anon_sym_Lyrics] = ACTIONS(63),
    [anon_sym_lyrics] = ACTIONS(63),
    [anon_sym_Lyricist] = ACTIONS(63),
    [anon_sym_lyricist] = ACTIONS(63),
    [anon_sym_Lyric] = ACTIONS(63),
    [anon_sym_lyric] = ACTIONS(63),
    [anon_sym_Arrangement] = ACTIONS(63),
    [anon_sym_arrangement] = ACTIONS(63),
    [anon_sym_Arranger] = ACTIONS(63),
    [anon_sym_arranger] = ACTIONS(63),
    [anon_sym_Arrange] = ACTIONS(63),
    [anon_sym_arrange] = ACTIONS(63),
    [anon_sym_Vocalist] = ACTIONS(63),
    [anon_sym_vocalist] = ACTIONS(63),
    [anon_sym_Vocal] = ACTIONS(63),
    [anon_sym_vocal] = ACTIONS(63),
    [anon_sym_Performer] = ACTIONS(63),
    [anon_sym_performer] = ACTIONS(63),
    [anon_sym_Illustration] = ACTIONS(63),
    [anon_sym_illustration] = ACTIONS(63),
    [anon_sym_Illustrator] = ACTIONS(63),
    [anon_sym_illustrator] = ACTIONS(63),
    [anon_sym_Illust] = ACTIONS(63),
    [anon_sym_illust] = ACTIONS(63),
    [anon_sym_Label] = ACTIONS(63),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_Circle] = ACTIONS(63),
    [anon_sym_circle] = ACTIONS(63),
    [anon_sym_Producer] = ACTIONS(63),
    [anon_sym_producer] = ACTIONS(63),
    [anon_sym_Recording] = ACTIONS(63),
    [anon_sym_recording] = ACTIONS(63),
    [anon_sym_GuestVocal] = ACTIONS(63),
    [anon_sym_Guestvocal] = ACTIONS(63),
    [anon_sym_guestvocal] = ACTIONS(63),
    [anon_sym_Chorus] = ACTIONS(63),
    [anon_sym_chorus] = ACTIONS(63),
    [anon_sym_Mixing] = ACTIONS(63),
    [anon_sym_mixing] = ACTIONS(63),
    [anon_sym_Mastering] = ACTIONS(63),
    [anon_sym_mastering] = ACTIONS(63),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(63),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(63),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(63),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(63),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(63),
    [anon_sym_u827au672fu5bb6] = ACTIONS(63),
    [anon_sym_u6b4cu5531] = ACTIONS(63),
    [anon_sym_u6b4c] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu66f2] = ACTIONS(63),
    [anon_sym_u7de8u66f2] = ACTIONS(63),
    [anon_sym_u7f16u66f2] = ACTIONS(63),
    [anon_sym_u4f5cu8a5e] = ACTIONS(63),
    [anon_sym_u4f5cu8bcd] = ACTIONS(63),
    [anon_sym_u5382u724c] = ACTIONS(63),
    [anon_sym_u811au672c] = ACTIONS(63),
    [anon_sym_u63d2u56fe] = ACTIONS(63),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(63),
    [anon_sym_u51fau7248u65b9] = ACTIONS(63),
    [anon_sym_u5f55u97f3] = ACTIONS(63),
    [anon_sym_u539fu4f5c] = ACTIONS(63),
    [anon_sym_u58f0u4e50] = ACTIONS(63),
    [anon_sym_u4e50u5668] = ACTIONS(63),
    [anon_sym_u6df7u97f3] = ACTIONS(63),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(63),
    [sym__sep] = ACTIONS(63),
  },
  [32] = {
    [aux_sym_song_title_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(105),
    [anon_sym_u300a] = ACTIONS(105),
    [aux_sym_song_title_token1] = ACTIONS(142),
    [sym__role_instrument] = ACTIONS(103),
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
    [anon_sym_Vocalist] = ACTIONS(105),
    [anon_sym_vocalist] = ACTIONS(105),
    [anon_sym_Vocal] = ACTIONS(105),
    [anon_sym_vocal] = ACTIONS(105),
    [anon_sym_Performer] = ACTIONS(105),
    [anon_sym_performer] = ACTIONS(105),
    [anon_sym_Illustration] = ACTIONS(105),
    [anon_sym_illustration] = ACTIONS(105),
    [anon_sym_Illustrator] = ACTIONS(105),
    [anon_sym_illustrator] = ACTIONS(105),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(105),
    [anon_sym_u6b4cu5531] = ACTIONS(105),
    [anon_sym_u6b4c] = ACTIONS(105),
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
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_DISC] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(152),
    [anon_sym_u300a] = ACTIONS(146),
    [aux_sym_song_title_token1] = ACTIONS(146),
    [sym__role_instrument] = ACTIONS(144),
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
    [anon_sym_Vocalist] = ACTIONS(146),
    [anon_sym_vocalist] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illustrator] = ACTIONS(146),
    [anon_sym_illustrator] = ACTIONS(146),
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
    [anon_sym_u6b4c] = ACTIONS(146),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DISC] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(156),
    [anon_sym_u300a] = ACTIONS(156),
    [aux_sym_song_title_token1] = ACTIONS(156),
    [sym__role_instrument] = ACTIONS(154),
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
    [anon_sym_Vocalist] = ACTIONS(156),
    [anon_sym_vocalist] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(156),
    [anon_sym_vocal] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(156),
    [anon_sym_performer] = ACTIONS(156),
    [anon_sym_Illustration] = ACTIONS(156),
    [anon_sym_illustration] = ACTIONS(156),
    [anon_sym_Illustrator] = ACTIONS(156),
    [anon_sym_illustrator] = ACTIONS(156),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u6b4c] = ACTIONS(156),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(126),
    [anon_sym_u300a] = ACTIONS(126),
    [aux_sym_song_title_token1] = ACTIONS(126),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(158),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(160),
    [sym__role_instrument] = ACTIONS(124),
    [anon_sym_Music] = ACTIONS(126),
    [anon_sym_music] = ACTIONS(126),
    [anon_sym_Composition] = ACTIONS(126),
    [anon_sym_composition] = ACTIONS(126),
    [anon_sym_Composer] = ACTIONS(126),
    [anon_sym_composer] = ACTIONS(126),
    [anon_sym_Compose] = ACTIONS(126),
    [anon_sym_compose] = ACTIONS(126),
    [anon_sym_Lyrics] = ACTIONS(126),
    [anon_sym_lyrics] = ACTIONS(126),
    [anon_sym_Lyricist] = ACTIONS(126),
    [anon_sym_lyricist] = ACTIONS(126),
    [anon_sym_Lyric] = ACTIONS(126),
    [anon_sym_lyric] = ACTIONS(126),
    [anon_sym_Arrangement] = ACTIONS(126),
    [anon_sym_arrangement] = ACTIONS(126),
    [anon_sym_Arranger] = ACTIONS(126),
    [anon_sym_arranger] = ACTIONS(126),
    [anon_sym_Arrange] = ACTIONS(126),
    [anon_sym_arrange] = ACTIONS(126),
    [anon_sym_Vocalist] = ACTIONS(126),
    [anon_sym_vocalist] = ACTIONS(126),
    [anon_sym_Vocal] = ACTIONS(126),
    [anon_sym_vocal] = ACTIONS(126),
    [anon_sym_Performer] = ACTIONS(126),
    [anon_sym_performer] = ACTIONS(126),
    [anon_sym_Illustration] = ACTIONS(126),
    [anon_sym_illustration] = ACTIONS(126),
    [anon_sym_Illustrator] = ACTIONS(126),
    [anon_sym_illustrator] = ACTIONS(126),
    [anon_sym_Illust] = ACTIONS(126),
    [anon_sym_illust] = ACTIONS(126),
    [anon_sym_Label] = ACTIONS(126),
    [anon_sym_label] = ACTIONS(126),
    [anon_sym_Circle] = ACTIONS(126),
    [anon_sym_circle] = ACTIONS(126),
    [anon_sym_Producer] = ACTIONS(126),
    [anon_sym_producer] = ACTIONS(126),
    [anon_sym_Recording] = ACTIONS(126),
    [anon_sym_recording] = ACTIONS(126),
    [anon_sym_GuestVocal] = ACTIONS(126),
    [anon_sym_Guestvocal] = ACTIONS(126),
    [anon_sym_guestvocal] = ACTIONS(126),
    [anon_sym_Chorus] = ACTIONS(126),
    [anon_sym_chorus] = ACTIONS(126),
    [anon_sym_Mixing] = ACTIONS(126),
    [anon_sym_mixing] = ACTIONS(126),
    [anon_sym_Mastering] = ACTIONS(126),
    [anon_sym_mastering] = ACTIONS(126),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(126),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(126),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(126),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(126),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(126),
    [anon_sym_u827au672fu5bb6] = ACTIONS(126),
    [anon_sym_u6b4cu5531] = ACTIONS(126),
    [anon_sym_u6b4c] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(126),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu66f2] = ACTIONS(126),
    [anon_sym_u7de8u66f2] = ACTIONS(126),
    [anon_sym_u7f16u66f2] = ACTIONS(126),
    [anon_sym_u4f5cu8a5e] = ACTIONS(126),
    [anon_sym_u4f5cu8bcd] = ACTIONS(126),
    [anon_sym_u5382u724c] = ACTIONS(126),
    [anon_sym_u811au672c] = ACTIONS(126),
    [anon_sym_u63d2u56fe] = ACTIONS(126),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(126),
    [anon_sym_u51fau7248u65b9] = ACTIONS(126),
    [anon_sym_u5f55u97f3] = ACTIONS(126),
    [anon_sym_u539fu4f5c] = ACTIONS(126),
    [anon_sym_u58f0u4e50] = ACTIONS(126),
    [anon_sym_u4e50u5668] = ACTIONS(126),
    [anon_sym_u6df7u97f3] = ACTIONS(126),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(126),
    [sym__sep] = ACTIONS(126),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_u300a] = ACTIONS(118),
    [aux_sym_song_title_token1] = ACTIONS(118),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(118),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(118),
    [sym__role_instrument] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(118),
    [anon_sym_music] = ACTIONS(118),
    [anon_sym_Composition] = ACTIONS(118),
    [anon_sym_composition] = ACTIONS(118),
    [anon_sym_Composer] = ACTIONS(118),
    [anon_sym_composer] = ACTIONS(118),
    [anon_sym_Compose] = ACTIONS(118),
    [anon_sym_compose] = ACTIONS(118),
    [anon_sym_Lyrics] = ACTIONS(118),
    [anon_sym_lyrics] = ACTIONS(118),
    [anon_sym_Lyricist] = ACTIONS(118),
    [anon_sym_lyricist] = ACTIONS(118),
    [anon_sym_Lyric] = ACTIONS(118),
    [anon_sym_lyric] = ACTIONS(118),
    [anon_sym_Arrangement] = ACTIONS(118),
    [anon_sym_arrangement] = ACTIONS(118),
    [anon_sym_Arranger] = ACTIONS(118),
    [anon_sym_arranger] = ACTIONS(118),
    [anon_sym_Arrange] = ACTIONS(118),
    [anon_sym_arrange] = ACTIONS(118),
    [anon_sym_Vocalist] = ACTIONS(118),
    [anon_sym_vocalist] = ACTIONS(118),
    [anon_sym_Vocal] = ACTIONS(118),
    [anon_sym_vocal] = ACTIONS(118),
    [anon_sym_Performer] = ACTIONS(118),
    [anon_sym_performer] = ACTIONS(118),
    [anon_sym_Illustration] = ACTIONS(118),
    [anon_sym_illustration] = ACTIONS(118),
    [anon_sym_Illustrator] = ACTIONS(118),
    [anon_sym_illustrator] = ACTIONS(118),
    [anon_sym_Illust] = ACTIONS(118),
    [anon_sym_illust] = ACTIONS(118),
    [anon_sym_Label] = ACTIONS(118),
    [anon_sym_label] = ACTIONS(118),
    [anon_sym_Circle] = ACTIONS(118),
    [anon_sym_circle] = ACTIONS(118),
    [anon_sym_Producer] = ACTIONS(118),
    [anon_sym_producer] = ACTIONS(118),
    [anon_sym_Recording] = ACTIONS(118),
    [anon_sym_recording] = ACTIONS(118),
    [anon_sym_GuestVocal] = ACTIONS(118),
    [anon_sym_Guestvocal] = ACTIONS(118),
    [anon_sym_guestvocal] = ACTIONS(118),
    [anon_sym_Chorus] = ACTIONS(118),
    [anon_sym_chorus] = ACTIONS(118),
    [anon_sym_Mixing] = ACTIONS(118),
    [anon_sym_mixing] = ACTIONS(118),
    [anon_sym_Mastering] = ACTIONS(118),
    [anon_sym_mastering] = ACTIONS(118),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(118),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(118),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(118),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(118),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(118),
    [anon_sym_u827au672fu5bb6] = ACTIONS(118),
    [anon_sym_u6b4cu5531] = ACTIONS(118),
    [anon_sym_u6b4c] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu66f2] = ACTIONS(118),
    [anon_sym_u7de8u66f2] = ACTIONS(118),
    [anon_sym_u7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5e] = ACTIONS(118),
    [anon_sym_u4f5cu8bcd] = ACTIONS(118),
    [anon_sym_u5382u724c] = ACTIONS(118),
    [anon_sym_u811au672c] = ACTIONS(118),
    [anon_sym_u63d2u56fe] = ACTIONS(118),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(118),
    [anon_sym_u51fau7248u65b9] = ACTIONS(118),
    [anon_sym_u5f55u97f3] = ACTIONS(118),
    [anon_sym_u539fu4f5c] = ACTIONS(118),
    [anon_sym_u58f0u4e50] = ACTIONS(118),
    [anon_sym_u4e50u5668] = ACTIONS(118),
    [anon_sym_u6df7u97f3] = ACTIONS(118),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(118),
    [sym__sep] = ACTIONS(118),
  },
  [37] = {
    [aux_sym_song_title_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_SLASH_SLASH] = ACTIONS(111),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(111),
    [anon_sym_u300a] = ACTIONS(111),
    [aux_sym_song_title_token1] = ACTIONS(162),
    [sym__role_instrument] = ACTIONS(109),
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
    [anon_sym_Vocalist] = ACTIONS(111),
    [anon_sym_vocalist] = ACTIONS(111),
    [anon_sym_Vocal] = ACTIONS(111),
    [anon_sym_vocal] = ACTIONS(111),
    [anon_sym_Performer] = ACTIONS(111),
    [anon_sym_performer] = ACTIONS(111),
    [anon_sym_Illustration] = ACTIONS(111),
    [anon_sym_illustration] = ACTIONS(111),
    [anon_sym_Illustrator] = ACTIONS(111),
    [anon_sym_illustrator] = ACTIONS(111),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(111),
    [anon_sym_u6b4cu5531] = ACTIONS(111),
    [anon_sym_u6b4c] = ACTIONS(111),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_DISC] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SLASH_SLASH] = ACTIONS(167),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(167),
    [anon_sym_u300a] = ACTIONS(167),
    [aux_sym_song_title_token1] = ACTIONS(167),
    [sym__role_instrument] = ACTIONS(165),
    [anon_sym_Music] = ACTIONS(167),
    [anon_sym_music] = ACTIONS(167),
    [anon_sym_Composition] = ACTIONS(167),
    [anon_sym_composition] = ACTIONS(167),
    [anon_sym_Composer] = ACTIONS(167),
    [anon_sym_composer] = ACTIONS(167),
    [anon_sym_Compose] = ACTIONS(167),
    [anon_sym_compose] = ACTIONS(167),
    [anon_sym_Lyrics] = ACTIONS(167),
    [anon_sym_lyrics] = ACTIONS(167),
    [anon_sym_Lyricist] = ACTIONS(167),
    [anon_sym_lyricist] = ACTIONS(167),
    [anon_sym_Lyric] = ACTIONS(167),
    [anon_sym_lyric] = ACTIONS(167),
    [anon_sym_Arrangement] = ACTIONS(167),
    [anon_sym_arrangement] = ACTIONS(167),
    [anon_sym_Arranger] = ACTIONS(167),
    [anon_sym_arranger] = ACTIONS(167),
    [anon_sym_Arrange] = ACTIONS(167),
    [anon_sym_arrange] = ACTIONS(167),
    [anon_sym_Vocalist] = ACTIONS(167),
    [anon_sym_vocalist] = ACTIONS(167),
    [anon_sym_Vocal] = ACTIONS(167),
    [anon_sym_vocal] = ACTIONS(167),
    [anon_sym_Performer] = ACTIONS(167),
    [anon_sym_performer] = ACTIONS(167),
    [anon_sym_Illustration] = ACTIONS(167),
    [anon_sym_illustration] = ACTIONS(167),
    [anon_sym_Illustrator] = ACTIONS(167),
    [anon_sym_illustrator] = ACTIONS(167),
    [anon_sym_Illust] = ACTIONS(167),
    [anon_sym_illust] = ACTIONS(167),
    [anon_sym_Label] = ACTIONS(167),
    [anon_sym_label] = ACTIONS(167),
    [anon_sym_Circle] = ACTIONS(167),
    [anon_sym_circle] = ACTIONS(167),
    [anon_sym_Producer] = ACTIONS(167),
    [anon_sym_producer] = ACTIONS(167),
    [anon_sym_Recording] = ACTIONS(167),
    [anon_sym_recording] = ACTIONS(167),
    [anon_sym_GuestVocal] = ACTIONS(167),
    [anon_sym_Guestvocal] = ACTIONS(167),
    [anon_sym_guestvocal] = ACTIONS(167),
    [anon_sym_Chorus] = ACTIONS(167),
    [anon_sym_chorus] = ACTIONS(167),
    [anon_sym_Mixing] = ACTIONS(167),
    [anon_sym_mixing] = ACTIONS(167),
    [anon_sym_Mastering] = ACTIONS(167),
    [anon_sym_mastering] = ACTIONS(167),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(167),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(167),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(167),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(167),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(167),
    [anon_sym_u827au672fu5bb6] = ACTIONS(167),
    [anon_sym_u6b4cu5531] = ACTIONS(167),
    [anon_sym_u6b4c] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu66f2] = ACTIONS(167),
    [anon_sym_u7de8u66f2] = ACTIONS(167),
    [anon_sym_u7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5e] = ACTIONS(167),
    [anon_sym_u4f5cu8bcd] = ACTIONS(167),
    [anon_sym_u5382u724c] = ACTIONS(167),
    [anon_sym_u811au672c] = ACTIONS(167),
    [anon_sym_u63d2u56fe] = ACTIONS(167),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(167),
    [anon_sym_u51fau7248u65b9] = ACTIONS(167),
    [anon_sym_u5f55u97f3] = ACTIONS(167),
    [anon_sym_u539fu4f5c] = ACTIONS(167),
    [anon_sym_u58f0u4e50] = ACTIONS(167),
    [anon_sym_u4e50u5668] = ACTIONS(167),
    [anon_sym_u6df7u97f3] = ACTIONS(167),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(167),
  },
  [39] = {
    [aux_sym_credit_field_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_DISC] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_u300a] = ACTIONS(171),
    [aux_sym_song_title_token1] = ACTIONS(171),
    [sym__role_instrument] = ACTIONS(169),
    [anon_sym_Music] = ACTIONS(171),
    [anon_sym_music] = ACTIONS(171),
    [anon_sym_Composition] = ACTIONS(171),
    [anon_sym_composition] = ACTIONS(171),
    [anon_sym_Composer] = ACTIONS(171),
    [anon_sym_composer] = ACTIONS(171),
    [anon_sym_Compose] = ACTIONS(171),
    [anon_sym_compose] = ACTIONS(171),
    [anon_sym_Lyrics] = ACTIONS(171),
    [anon_sym_lyrics] = ACTIONS(171),
    [anon_sym_Lyricist] = ACTIONS(171),
    [anon_sym_lyricist] = ACTIONS(171),
    [anon_sym_Lyric] = ACTIONS(171),
    [anon_sym_lyric] = ACTIONS(171),
    [anon_sym_Arrangement] = ACTIONS(171),
    [anon_sym_arrangement] = ACTIONS(171),
    [anon_sym_Arranger] = ACTIONS(171),
    [anon_sym_arranger] = ACTIONS(171),
    [anon_sym_Arrange] = ACTIONS(171),
    [anon_sym_arrange] = ACTIONS(171),
    [anon_sym_Vocalist] = ACTIONS(171),
    [anon_sym_vocalist] = ACTIONS(171),
    [anon_sym_Vocal] = ACTIONS(171),
    [anon_sym_vocal] = ACTIONS(171),
    [anon_sym_Performer] = ACTIONS(171),
    [anon_sym_performer] = ACTIONS(171),
    [anon_sym_Illustration] = ACTIONS(171),
    [anon_sym_illustration] = ACTIONS(171),
    [anon_sym_Illustrator] = ACTIONS(171),
    [anon_sym_illustrator] = ACTIONS(171),
    [anon_sym_Illust] = ACTIONS(171),
    [anon_sym_illust] = ACTIONS(171),
    [anon_sym_Label] = ACTIONS(171),
    [anon_sym_label] = ACTIONS(171),
    [anon_sym_Circle] = ACTIONS(171),
    [anon_sym_circle] = ACTIONS(171),
    [anon_sym_Producer] = ACTIONS(171),
    [anon_sym_producer] = ACTIONS(171),
    [anon_sym_Recording] = ACTIONS(171),
    [anon_sym_recording] = ACTIONS(171),
    [anon_sym_GuestVocal] = ACTIONS(171),
    [anon_sym_Guestvocal] = ACTIONS(171),
    [anon_sym_guestvocal] = ACTIONS(171),
    [anon_sym_Chorus] = ACTIONS(171),
    [anon_sym_chorus] = ACTIONS(171),
    [anon_sym_Mixing] = ACTIONS(171),
    [anon_sym_mixing] = ACTIONS(171),
    [anon_sym_Mastering] = ACTIONS(171),
    [anon_sym_mastering] = ACTIONS(171),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(171),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(171),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(171),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(171),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(171),
    [anon_sym_u827au672fu5bb6] = ACTIONS(171),
    [anon_sym_u6b4cu5531] = ACTIONS(171),
    [anon_sym_u6b4c] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu66f2] = ACTIONS(171),
    [anon_sym_u7de8u66f2] = ACTIONS(171),
    [anon_sym_u7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5e] = ACTIONS(171),
    [anon_sym_u4f5cu8bcd] = ACTIONS(171),
    [anon_sym_u5382u724c] = ACTIONS(171),
    [anon_sym_u811au672c] = ACTIONS(171),
    [anon_sym_u63d2u56fe] = ACTIONS(171),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(171),
    [anon_sym_u51fau7248u65b9] = ACTIONS(171),
    [anon_sym_u5f55u97f3] = ACTIONS(171),
    [anon_sym_u539fu4f5c] = ACTIONS(171),
    [anon_sym_u58f0u4e50] = ACTIONS(171),
    [anon_sym_u4e50u5668] = ACTIONS(171),
    [anon_sym_u6df7u97f3] = ACTIONS(171),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(171),
    [sym__sep] = ACTIONS(175),
  },
  [40] = {
    [aux_sym_credit_field_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DISC] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_u300a] = ACTIONS(179),
    [aux_sym_song_title_token1] = ACTIONS(179),
    [sym__role_instrument] = ACTIONS(177),
    [anon_sym_Music] = ACTIONS(179),
    [anon_sym_music] = ACTIONS(179),
    [anon_sym_Composition] = ACTIONS(179),
    [anon_sym_composition] = ACTIONS(179),
    [anon_sym_Composer] = ACTIONS(179),
    [anon_sym_composer] = ACTIONS(179),
    [anon_sym_Compose] = ACTIONS(179),
    [anon_sym_compose] = ACTIONS(179),
    [anon_sym_Lyrics] = ACTIONS(179),
    [anon_sym_lyrics] = ACTIONS(179),
    [anon_sym_Lyricist] = ACTIONS(179),
    [anon_sym_lyricist] = ACTIONS(179),
    [anon_sym_Lyric] = ACTIONS(179),
    [anon_sym_lyric] = ACTIONS(179),
    [anon_sym_Arrangement] = ACTIONS(179),
    [anon_sym_arrangement] = ACTIONS(179),
    [anon_sym_Arranger] = ACTIONS(179),
    [anon_sym_arranger] = ACTIONS(179),
    [anon_sym_Arrange] = ACTIONS(179),
    [anon_sym_arrange] = ACTIONS(179),
    [anon_sym_Vocalist] = ACTIONS(179),
    [anon_sym_vocalist] = ACTIONS(179),
    [anon_sym_Vocal] = ACTIONS(179),
    [anon_sym_vocal] = ACTIONS(179),
    [anon_sym_Performer] = ACTIONS(179),
    [anon_sym_performer] = ACTIONS(179),
    [anon_sym_Illustration] = ACTIONS(179),
    [anon_sym_illustration] = ACTIONS(179),
    [anon_sym_Illustrator] = ACTIONS(179),
    [anon_sym_illustrator] = ACTIONS(179),
    [anon_sym_Illust] = ACTIONS(179),
    [anon_sym_illust] = ACTIONS(179),
    [anon_sym_Label] = ACTIONS(179),
    [anon_sym_label] = ACTIONS(179),
    [anon_sym_Circle] = ACTIONS(179),
    [anon_sym_circle] = ACTIONS(179),
    [anon_sym_Producer] = ACTIONS(179),
    [anon_sym_producer] = ACTIONS(179),
    [anon_sym_Recording] = ACTIONS(179),
    [anon_sym_recording] = ACTIONS(179),
    [anon_sym_GuestVocal] = ACTIONS(179),
    [anon_sym_Guestvocal] = ACTIONS(179),
    [anon_sym_guestvocal] = ACTIONS(179),
    [anon_sym_Chorus] = ACTIONS(179),
    [anon_sym_chorus] = ACTIONS(179),
    [anon_sym_Mixing] = ACTIONS(179),
    [anon_sym_mixing] = ACTIONS(179),
    [anon_sym_Mastering] = ACTIONS(179),
    [anon_sym_mastering] = ACTIONS(179),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(179),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(179),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(179),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(179),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(179),
    [anon_sym_u827au672fu5bb6] = ACTIONS(179),
    [anon_sym_u6b4cu5531] = ACTIONS(179),
    [anon_sym_u6b4c] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu66f2] = ACTIONS(179),
    [anon_sym_u7de8u66f2] = ACTIONS(179),
    [anon_sym_u7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5e] = ACTIONS(179),
    [anon_sym_u4f5cu8bcd] = ACTIONS(179),
    [anon_sym_u5382u724c] = ACTIONS(179),
    [anon_sym_u811au672c] = ACTIONS(179),
    [anon_sym_u63d2u56fe] = ACTIONS(179),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(179),
    [anon_sym_u51fau7248u65b9] = ACTIONS(179),
    [anon_sym_u5f55u97f3] = ACTIONS(179),
    [anon_sym_u539fu4f5c] = ACTIONS(179),
    [anon_sym_u58f0u4e50] = ACTIONS(179),
    [anon_sym_u4e50u5668] = ACTIONS(179),
    [anon_sym_u6df7u97f3] = ACTIONS(179),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(179),
    [sym__sep] = ACTIONS(183),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(122),
    [aux_sym__quotable_creator_field_token1] = ACTIONS(122),
    [aux_sym__quotable_creator_field_token3] = ACTIONS(122),
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
    [anon_sym_Vocalist] = ACTIONS(122),
    [anon_sym_vocalist] = ACTIONS(122),
    [anon_sym_Vocal] = ACTIONS(122),
    [anon_sym_vocal] = ACTIONS(122),
    [anon_sym_Performer] = ACTIONS(122),
    [anon_sym_performer] = ACTIONS(122),
    [anon_sym_Illustration] = ACTIONS(122),
    [anon_sym_illustration] = ACTIONS(122),
    [anon_sym_Illustrator] = ACTIONS(122),
    [anon_sym_illustrator] = ACTIONS(122),
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
    [sym__sep] = ACTIONS(122),
  },
  [42] = {
    [aux_sym_credit_field_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_DISC] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_u300a] = ACTIONS(187),
    [aux_sym_song_title_token1] = ACTIONS(187),
    [sym__role_instrument] = ACTIONS(185),
    [anon_sym_Music] = ACTIONS(187),
    [anon_sym_music] = ACTIONS(187),
    [anon_sym_Composition] = ACTIONS(187),
    [anon_sym_composition] = ACTIONS(187),
    [anon_sym_Composer] = ACTIONS(187),
    [anon_sym_composer] = ACTIONS(187),
    [anon_sym_Compose] = ACTIONS(187),
    [anon_sym_compose] = ACTIONS(187),
    [anon_sym_Lyrics] = ACTIONS(187),
    [anon_sym_lyrics] = ACTIONS(187),
    [anon_sym_Lyricist] = ACTIONS(187),
    [anon_sym_lyricist] = ACTIONS(187),
    [anon_sym_Lyric] = ACTIONS(187),
    [anon_sym_lyric] = ACTIONS(187),
    [anon_sym_Arrangement] = ACTIONS(187),
    [anon_sym_arrangement] = ACTIONS(187),
    [anon_sym_Arranger] = ACTIONS(187),
    [anon_sym_arranger] = ACTIONS(187),
    [anon_sym_Arrange] = ACTIONS(187),
    [anon_sym_arrange] = ACTIONS(187),
    [anon_sym_Vocalist] = ACTIONS(187),
    [anon_sym_vocalist] = ACTIONS(187),
    [anon_sym_Vocal] = ACTIONS(187),
    [anon_sym_vocal] = ACTIONS(187),
    [anon_sym_Performer] = ACTIONS(187),
    [anon_sym_performer] = ACTIONS(187),
    [anon_sym_Illustration] = ACTIONS(187),
    [anon_sym_illustration] = ACTIONS(187),
    [anon_sym_Illustrator] = ACTIONS(187),
    [anon_sym_illustrator] = ACTIONS(187),
    [anon_sym_Illust] = ACTIONS(187),
    [anon_sym_illust] = ACTIONS(187),
    [anon_sym_Label] = ACTIONS(187),
    [anon_sym_label] = ACTIONS(187),
    [anon_sym_Circle] = ACTIONS(187),
    [anon_sym_circle] = ACTIONS(187),
    [anon_sym_Producer] = ACTIONS(187),
    [anon_sym_producer] = ACTIONS(187),
    [anon_sym_Recording] = ACTIONS(187),
    [anon_sym_recording] = ACTIONS(187),
    [anon_sym_GuestVocal] = ACTIONS(187),
    [anon_sym_Guestvocal] = ACTIONS(187),
    [anon_sym_guestvocal] = ACTIONS(187),
    [anon_sym_Chorus] = ACTIONS(187),
    [anon_sym_chorus] = ACTIONS(187),
    [anon_sym_Mixing] = ACTIONS(187),
    [anon_sym_mixing] = ACTIONS(187),
    [anon_sym_Mastering] = ACTIONS(187),
    [anon_sym_mastering] = ACTIONS(187),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(187),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(187),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(187),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(187),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(187),
    [anon_sym_u827au672fu5bb6] = ACTIONS(187),
    [anon_sym_u6b4cu5531] = ACTIONS(187),
    [anon_sym_u6b4c] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu66f2] = ACTIONS(187),
    [anon_sym_u7de8u66f2] = ACTIONS(187),
    [anon_sym_u7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5e] = ACTIONS(187),
    [anon_sym_u4f5cu8bcd] = ACTIONS(187),
    [anon_sym_u5382u724c] = ACTIONS(187),
    [anon_sym_u811au672c] = ACTIONS(187),
    [anon_sym_u63d2u56fe] = ACTIONS(187),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(187),
    [anon_sym_u51fau7248u65b9] = ACTIONS(187),
    [anon_sym_u5f55u97f3] = ACTIONS(187),
    [anon_sym_u539fu4f5c] = ACTIONS(187),
    [anon_sym_u58f0u4e50] = ACTIONS(187),
    [anon_sym_u4e50u5668] = ACTIONS(187),
    [anon_sym_u6df7u97f3] = ACTIONS(187),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(187),
    [sym__sep] = ACTIONS(189),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(192),
    [anon_sym_SLASH_SLASH] = ACTIONS(194),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(196),
    [anon_sym_u300a] = ACTIONS(146),
    [aux_sym_song_title_token1] = ACTIONS(146),
    [sym__role_instrument] = ACTIONS(144),
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
    [anon_sym_Vocalist] = ACTIONS(146),
    [anon_sym_vocalist] = ACTIONS(146),
    [anon_sym_Vocal] = ACTIONS(146),
    [anon_sym_vocal] = ACTIONS(146),
    [anon_sym_Performer] = ACTIONS(146),
    [anon_sym_performer] = ACTIONS(146),
    [anon_sym_Illustration] = ACTIONS(146),
    [anon_sym_illustration] = ACTIONS(146),
    [anon_sym_Illustrator] = ACTIONS(146),
    [anon_sym_illustrator] = ACTIONS(146),
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
    [anon_sym_u6b4c] = ACTIONS(146),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_DISC] = ACTIONS(200),
    [anon_sym_SLASH_SLASH] = ACTIONS(202),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(204),
    [anon_sym_u300a] = ACTIONS(200),
    [aux_sym_song_title_token1] = ACTIONS(200),
    [sym__role_instrument] = ACTIONS(198),
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
    [anon_sym_Vocalist] = ACTIONS(200),
    [anon_sym_vocalist] = ACTIONS(200),
    [anon_sym_Vocal] = ACTIONS(200),
    [anon_sym_vocal] = ACTIONS(200),
    [anon_sym_Performer] = ACTIONS(200),
    [anon_sym_performer] = ACTIONS(200),
    [anon_sym_Illustration] = ACTIONS(200),
    [anon_sym_illustration] = ACTIONS(200),
    [anon_sym_Illustrator] = ACTIONS(200),
    [anon_sym_illustrator] = ACTIONS(200),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(200),
    [anon_sym_u6b4cu5531] = ACTIONS(200),
    [anon_sym_u6b4c] = ACTIONS(200),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_SLASH_SLASH] = ACTIONS(167),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(167),
    [anon_sym_u300a] = ACTIONS(167),
    [aux_sym_song_title_token1] = ACTIONS(167),
    [sym__role_instrument] = ACTIONS(165),
    [anon_sym_Music] = ACTIONS(167),
    [anon_sym_music] = ACTIONS(167),
    [anon_sym_Composition] = ACTIONS(167),
    [anon_sym_composition] = ACTIONS(167),
    [anon_sym_Composer] = ACTIONS(167),
    [anon_sym_composer] = ACTIONS(167),
    [anon_sym_Compose] = ACTIONS(167),
    [anon_sym_compose] = ACTIONS(167),
    [anon_sym_Lyrics] = ACTIONS(167),
    [anon_sym_lyrics] = ACTIONS(167),
    [anon_sym_Lyricist] = ACTIONS(167),
    [anon_sym_lyricist] = ACTIONS(167),
    [anon_sym_Lyric] = ACTIONS(167),
    [anon_sym_lyric] = ACTIONS(167),
    [anon_sym_Arrangement] = ACTIONS(167),
    [anon_sym_arrangement] = ACTIONS(167),
    [anon_sym_Arranger] = ACTIONS(167),
    [anon_sym_arranger] = ACTIONS(167),
    [anon_sym_Arrange] = ACTIONS(167),
    [anon_sym_arrange] = ACTIONS(167),
    [anon_sym_Vocalist] = ACTIONS(167),
    [anon_sym_vocalist] = ACTIONS(167),
    [anon_sym_Vocal] = ACTIONS(167),
    [anon_sym_vocal] = ACTIONS(167),
    [anon_sym_Performer] = ACTIONS(167),
    [anon_sym_performer] = ACTIONS(167),
    [anon_sym_Illustration] = ACTIONS(167),
    [anon_sym_illustration] = ACTIONS(167),
    [anon_sym_Illustrator] = ACTIONS(167),
    [anon_sym_illustrator] = ACTIONS(167),
    [anon_sym_Illust] = ACTIONS(167),
    [anon_sym_illust] = ACTIONS(167),
    [anon_sym_Label] = ACTIONS(167),
    [anon_sym_label] = ACTIONS(167),
    [anon_sym_Circle] = ACTIONS(167),
    [anon_sym_circle] = ACTIONS(167),
    [anon_sym_Producer] = ACTIONS(167),
    [anon_sym_producer] = ACTIONS(167),
    [anon_sym_Recording] = ACTIONS(167),
    [anon_sym_recording] = ACTIONS(167),
    [anon_sym_GuestVocal] = ACTIONS(167),
    [anon_sym_Guestvocal] = ACTIONS(167),
    [anon_sym_guestvocal] = ACTIONS(167),
    [anon_sym_Chorus] = ACTIONS(167),
    [anon_sym_chorus] = ACTIONS(167),
    [anon_sym_Mixing] = ACTIONS(167),
    [anon_sym_mixing] = ACTIONS(167),
    [anon_sym_Mastering] = ACTIONS(167),
    [anon_sym_mastering] = ACTIONS(167),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(167),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(167),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(167),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(167),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(167),
    [anon_sym_u827au672fu5bb6] = ACTIONS(167),
    [anon_sym_u6b4cu5531] = ACTIONS(167),
    [anon_sym_u6b4c] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(167),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu66f2] = ACTIONS(167),
    [anon_sym_u7de8u66f2] = ACTIONS(167),
    [anon_sym_u7f16u66f2] = ACTIONS(167),
    [anon_sym_u4f5cu8a5e] = ACTIONS(167),
    [anon_sym_u4f5cu8bcd] = ACTIONS(167),
    [anon_sym_u5382u724c] = ACTIONS(167),
    [anon_sym_u811au672c] = ACTIONS(167),
    [anon_sym_u63d2u56fe] = ACTIONS(167),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(167),
    [anon_sym_u51fau7248u65b9] = ACTIONS(167),
    [anon_sym_u5f55u97f3] = ACTIONS(167),
    [anon_sym_u539fu4f5c] = ACTIONS(167),
    [anon_sym_u58f0u4e50] = ACTIONS(167),
    [anon_sym_u4e50u5668] = ACTIONS(167),
    [anon_sym_u6df7u97f3] = ACTIONS(167),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(167),
  },
  [46] = {
    [aux_sym_credit_field_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(206),
    [anon_sym_u300a] = ACTIONS(171),
    [aux_sym_song_title_token1] = ACTIONS(171),
    [sym__role_instrument] = ACTIONS(169),
    [anon_sym_Music] = ACTIONS(171),
    [anon_sym_music] = ACTIONS(171),
    [anon_sym_Composition] = ACTIONS(171),
    [anon_sym_composition] = ACTIONS(171),
    [anon_sym_Composer] = ACTIONS(171),
    [anon_sym_composer] = ACTIONS(171),
    [anon_sym_Compose] = ACTIONS(171),
    [anon_sym_compose] = ACTIONS(171),
    [anon_sym_Lyrics] = ACTIONS(171),
    [anon_sym_lyrics] = ACTIONS(171),
    [anon_sym_Lyricist] = ACTIONS(171),
    [anon_sym_lyricist] = ACTIONS(171),
    [anon_sym_Lyric] = ACTIONS(171),
    [anon_sym_lyric] = ACTIONS(171),
    [anon_sym_Arrangement] = ACTIONS(171),
    [anon_sym_arrangement] = ACTIONS(171),
    [anon_sym_Arranger] = ACTIONS(171),
    [anon_sym_arranger] = ACTIONS(171),
    [anon_sym_Arrange] = ACTIONS(171),
    [anon_sym_arrange] = ACTIONS(171),
    [anon_sym_Vocalist] = ACTIONS(171),
    [anon_sym_vocalist] = ACTIONS(171),
    [anon_sym_Vocal] = ACTIONS(171),
    [anon_sym_vocal] = ACTIONS(171),
    [anon_sym_Performer] = ACTIONS(171),
    [anon_sym_performer] = ACTIONS(171),
    [anon_sym_Illustration] = ACTIONS(171),
    [anon_sym_illustration] = ACTIONS(171),
    [anon_sym_Illustrator] = ACTIONS(171),
    [anon_sym_illustrator] = ACTIONS(171),
    [anon_sym_Illust] = ACTIONS(171),
    [anon_sym_illust] = ACTIONS(171),
    [anon_sym_Label] = ACTIONS(171),
    [anon_sym_label] = ACTIONS(171),
    [anon_sym_Circle] = ACTIONS(171),
    [anon_sym_circle] = ACTIONS(171),
    [anon_sym_Producer] = ACTIONS(171),
    [anon_sym_producer] = ACTIONS(171),
    [anon_sym_Recording] = ACTIONS(171),
    [anon_sym_recording] = ACTIONS(171),
    [anon_sym_GuestVocal] = ACTIONS(171),
    [anon_sym_Guestvocal] = ACTIONS(171),
    [anon_sym_guestvocal] = ACTIONS(171),
    [anon_sym_Chorus] = ACTIONS(171),
    [anon_sym_chorus] = ACTIONS(171),
    [anon_sym_Mixing] = ACTIONS(171),
    [anon_sym_mixing] = ACTIONS(171),
    [anon_sym_Mastering] = ACTIONS(171),
    [anon_sym_mastering] = ACTIONS(171),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(171),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(171),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(171),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(171),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(171),
    [anon_sym_u827au672fu5bb6] = ACTIONS(171),
    [anon_sym_u6b4cu5531] = ACTIONS(171),
    [anon_sym_u6b4c] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(171),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu66f2] = ACTIONS(171),
    [anon_sym_u7de8u66f2] = ACTIONS(171),
    [anon_sym_u7f16u66f2] = ACTIONS(171),
    [anon_sym_u4f5cu8a5e] = ACTIONS(171),
    [anon_sym_u4f5cu8bcd] = ACTIONS(171),
    [anon_sym_u5382u724c] = ACTIONS(171),
    [anon_sym_u811au672c] = ACTIONS(171),
    [anon_sym_u63d2u56fe] = ACTIONS(171),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(171),
    [anon_sym_u51fau7248u65b9] = ACTIONS(171),
    [anon_sym_u5f55u97f3] = ACTIONS(171),
    [anon_sym_u539fu4f5c] = ACTIONS(171),
    [anon_sym_u58f0u4e50] = ACTIONS(171),
    [anon_sym_u4e50u5668] = ACTIONS(171),
    [anon_sym_u6df7u97f3] = ACTIONS(171),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(171),
    [sym__sep] = ACTIONS(208),
  },
  [47] = {
    [aux_sym_credit_field_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_u300a] = ACTIONS(187),
    [aux_sym_song_title_token1] = ACTIONS(187),
    [sym__role_instrument] = ACTIONS(185),
    [anon_sym_Music] = ACTIONS(187),
    [anon_sym_music] = ACTIONS(187),
    [anon_sym_Composition] = ACTIONS(187),
    [anon_sym_composition] = ACTIONS(187),
    [anon_sym_Composer] = ACTIONS(187),
    [anon_sym_composer] = ACTIONS(187),
    [anon_sym_Compose] = ACTIONS(187),
    [anon_sym_compose] = ACTIONS(187),
    [anon_sym_Lyrics] = ACTIONS(187),
    [anon_sym_lyrics] = ACTIONS(187),
    [anon_sym_Lyricist] = ACTIONS(187),
    [anon_sym_lyricist] = ACTIONS(187),
    [anon_sym_Lyric] = ACTIONS(187),
    [anon_sym_lyric] = ACTIONS(187),
    [anon_sym_Arrangement] = ACTIONS(187),
    [anon_sym_arrangement] = ACTIONS(187),
    [anon_sym_Arranger] = ACTIONS(187),
    [anon_sym_arranger] = ACTIONS(187),
    [anon_sym_Arrange] = ACTIONS(187),
    [anon_sym_arrange] = ACTIONS(187),
    [anon_sym_Vocalist] = ACTIONS(187),
    [anon_sym_vocalist] = ACTIONS(187),
    [anon_sym_Vocal] = ACTIONS(187),
    [anon_sym_vocal] = ACTIONS(187),
    [anon_sym_Performer] = ACTIONS(187),
    [anon_sym_performer] = ACTIONS(187),
    [anon_sym_Illustration] = ACTIONS(187),
    [anon_sym_illustration] = ACTIONS(187),
    [anon_sym_Illustrator] = ACTIONS(187),
    [anon_sym_illustrator] = ACTIONS(187),
    [anon_sym_Illust] = ACTIONS(187),
    [anon_sym_illust] = ACTIONS(187),
    [anon_sym_Label] = ACTIONS(187),
    [anon_sym_label] = ACTIONS(187),
    [anon_sym_Circle] = ACTIONS(187),
    [anon_sym_circle] = ACTIONS(187),
    [anon_sym_Producer] = ACTIONS(187),
    [anon_sym_producer] = ACTIONS(187),
    [anon_sym_Recording] = ACTIONS(187),
    [anon_sym_recording] = ACTIONS(187),
    [anon_sym_GuestVocal] = ACTIONS(187),
    [anon_sym_Guestvocal] = ACTIONS(187),
    [anon_sym_guestvocal] = ACTIONS(187),
    [anon_sym_Chorus] = ACTIONS(187),
    [anon_sym_chorus] = ACTIONS(187),
    [anon_sym_Mixing] = ACTIONS(187),
    [anon_sym_mixing] = ACTIONS(187),
    [anon_sym_Mastering] = ACTIONS(187),
    [anon_sym_mastering] = ACTIONS(187),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(187),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(187),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(187),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(187),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(187),
    [anon_sym_u827au672fu5bb6] = ACTIONS(187),
    [anon_sym_u6b4cu5531] = ACTIONS(187),
    [anon_sym_u6b4c] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(187),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu66f2] = ACTIONS(187),
    [anon_sym_u7de8u66f2] = ACTIONS(187),
    [anon_sym_u7f16u66f2] = ACTIONS(187),
    [anon_sym_u4f5cu8a5e] = ACTIONS(187),
    [anon_sym_u4f5cu8bcd] = ACTIONS(187),
    [anon_sym_u5382u724c] = ACTIONS(187),
    [anon_sym_u811au672c] = ACTIONS(187),
    [anon_sym_u63d2u56fe] = ACTIONS(187),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(187),
    [anon_sym_u51fau7248u65b9] = ACTIONS(187),
    [anon_sym_u5f55u97f3] = ACTIONS(187),
    [anon_sym_u539fu4f5c] = ACTIONS(187),
    [anon_sym_u58f0u4e50] = ACTIONS(187),
    [anon_sym_u4e50u5668] = ACTIONS(187),
    [anon_sym_u6df7u97f3] = ACTIONS(187),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(187),
    [sym__sep] = ACTIONS(210),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DISC] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [aux_sym_song_title_token1] = ACTIONS(215),
    [sym__role_instrument] = ACTIONS(213),
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
    [anon_sym_Vocalist] = ACTIONS(215),
    [anon_sym_vocalist] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illustrator] = ACTIONS(215),
    [anon_sym_illustrator] = ACTIONS(215),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u6b4c] = ACTIONS(215),
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
    [sym__sep] = ACTIONS(215),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(156),
    [anon_sym_u300a] = ACTIONS(156),
    [aux_sym_song_title_token1] = ACTIONS(156),
    [sym__role_instrument] = ACTIONS(154),
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
    [anon_sym_Vocalist] = ACTIONS(156),
    [anon_sym_vocalist] = ACTIONS(156),
    [anon_sym_Vocal] = ACTIONS(156),
    [anon_sym_vocal] = ACTIONS(156),
    [anon_sym_Performer] = ACTIONS(156),
    [anon_sym_performer] = ACTIONS(156),
    [anon_sym_Illustration] = ACTIONS(156),
    [anon_sym_illustration] = ACTIONS(156),
    [anon_sym_Illustrator] = ACTIONS(156),
    [anon_sym_illustrator] = ACTIONS(156),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(156),
    [anon_sym_u6b4cu5531] = ACTIONS(156),
    [anon_sym_u6b4c] = ACTIONS(156),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_DISC] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_u300a] = ACTIONS(219),
    [aux_sym_song_title_token1] = ACTIONS(219),
    [sym__role_instrument] = ACTIONS(217),
    [anon_sym_Music] = ACTIONS(219),
    [anon_sym_music] = ACTIONS(219),
    [anon_sym_Composition] = ACTIONS(219),
    [anon_sym_composition] = ACTIONS(219),
    [anon_sym_Composer] = ACTIONS(219),
    [anon_sym_composer] = ACTIONS(219),
    [anon_sym_Compose] = ACTIONS(219),
    [anon_sym_compose] = ACTIONS(219),
    [anon_sym_Lyrics] = ACTIONS(219),
    [anon_sym_lyrics] = ACTIONS(219),
    [anon_sym_Lyricist] = ACTIONS(219),
    [anon_sym_lyricist] = ACTIONS(219),
    [anon_sym_Lyric] = ACTIONS(219),
    [anon_sym_lyric] = ACTIONS(219),
    [anon_sym_Arrangement] = ACTIONS(219),
    [anon_sym_arrangement] = ACTIONS(219),
    [anon_sym_Arranger] = ACTIONS(219),
    [anon_sym_arranger] = ACTIONS(219),
    [anon_sym_Arrange] = ACTIONS(219),
    [anon_sym_arrange] = ACTIONS(219),
    [anon_sym_Vocalist] = ACTIONS(219),
    [anon_sym_vocalist] = ACTIONS(219),
    [anon_sym_Vocal] = ACTIONS(219),
    [anon_sym_vocal] = ACTIONS(219),
    [anon_sym_Performer] = ACTIONS(219),
    [anon_sym_performer] = ACTIONS(219),
    [anon_sym_Illustration] = ACTIONS(219),
    [anon_sym_illustration] = ACTIONS(219),
    [anon_sym_Illustrator] = ACTIONS(219),
    [anon_sym_illustrator] = ACTIONS(219),
    [anon_sym_Illust] = ACTIONS(219),
    [anon_sym_illust] = ACTIONS(219),
    [anon_sym_Label] = ACTIONS(219),
    [anon_sym_label] = ACTIONS(219),
    [anon_sym_Circle] = ACTIONS(219),
    [anon_sym_circle] = ACTIONS(219),
    [anon_sym_Producer] = ACTIONS(219),
    [anon_sym_producer] = ACTIONS(219),
    [anon_sym_Recording] = ACTIONS(219),
    [anon_sym_recording] = ACTIONS(219),
    [anon_sym_GuestVocal] = ACTIONS(219),
    [anon_sym_Guestvocal] = ACTIONS(219),
    [anon_sym_guestvocal] = ACTIONS(219),
    [anon_sym_Chorus] = ACTIONS(219),
    [anon_sym_chorus] = ACTIONS(219),
    [anon_sym_Mixing] = ACTIONS(219),
    [anon_sym_mixing] = ACTIONS(219),
    [anon_sym_Mastering] = ACTIONS(219),
    [anon_sym_mastering] = ACTIONS(219),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(219),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(219),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(219),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(219),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(219),
    [anon_sym_u827au672fu5bb6] = ACTIONS(219),
    [anon_sym_u6b4cu5531] = ACTIONS(219),
    [anon_sym_u6b4c] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu66f2] = ACTIONS(219),
    [anon_sym_u7de8u66f2] = ACTIONS(219),
    [anon_sym_u7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5e] = ACTIONS(219),
    [anon_sym_u4f5cu8bcd] = ACTIONS(219),
    [anon_sym_u5382u724c] = ACTIONS(219),
    [anon_sym_u811au672c] = ACTIONS(219),
    [anon_sym_u63d2u56fe] = ACTIONS(219),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(219),
    [anon_sym_u51fau7248u65b9] = ACTIONS(219),
    [anon_sym_u5f55u97f3] = ACTIONS(219),
    [anon_sym_u539fu4f5c] = ACTIONS(219),
    [anon_sym_u58f0u4e50] = ACTIONS(219),
    [anon_sym_u4e50u5668] = ACTIONS(219),
    [anon_sym_u6df7u97f3] = ACTIONS(219),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(219),
    [sym__sep] = ACTIONS(219),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_DISC] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_u300a] = ACTIONS(223),
    [aux_sym_song_title_token1] = ACTIONS(223),
    [sym__role_instrument] = ACTIONS(221),
    [anon_sym_Music] = ACTIONS(223),
    [anon_sym_music] = ACTIONS(223),
    [anon_sym_Composition] = ACTIONS(223),
    [anon_sym_composition] = ACTIONS(223),
    [anon_sym_Composer] = ACTIONS(223),
    [anon_sym_composer] = ACTIONS(223),
    [anon_sym_Compose] = ACTIONS(223),
    [anon_sym_compose] = ACTIONS(223),
    [anon_sym_Lyrics] = ACTIONS(223),
    [anon_sym_lyrics] = ACTIONS(223),
    [anon_sym_Lyricist] = ACTIONS(223),
    [anon_sym_lyricist] = ACTIONS(223),
    [anon_sym_Lyric] = ACTIONS(223),
    [anon_sym_lyric] = ACTIONS(223),
    [anon_sym_Arrangement] = ACTIONS(223),
    [anon_sym_arrangement] = ACTIONS(223),
    [anon_sym_Arranger] = ACTIONS(223),
    [anon_sym_arranger] = ACTIONS(223),
    [anon_sym_Arrange] = ACTIONS(223),
    [anon_sym_arrange] = ACTIONS(223),
    [anon_sym_Vocalist] = ACTIONS(223),
    [anon_sym_vocalist] = ACTIONS(223),
    [anon_sym_Vocal] = ACTIONS(223),
    [anon_sym_vocal] = ACTIONS(223),
    [anon_sym_Performer] = ACTIONS(223),
    [anon_sym_performer] = ACTIONS(223),
    [anon_sym_Illustration] = ACTIONS(223),
    [anon_sym_illustration] = ACTIONS(223),
    [anon_sym_Illustrator] = ACTIONS(223),
    [anon_sym_illustrator] = ACTIONS(223),
    [anon_sym_Illust] = ACTIONS(223),
    [anon_sym_illust] = ACTIONS(223),
    [anon_sym_Label] = ACTIONS(223),
    [anon_sym_label] = ACTIONS(223),
    [anon_sym_Circle] = ACTIONS(223),
    [anon_sym_circle] = ACTIONS(223),
    [anon_sym_Producer] = ACTIONS(223),
    [anon_sym_producer] = ACTIONS(223),
    [anon_sym_Recording] = ACTIONS(223),
    [anon_sym_recording] = ACTIONS(223),
    [anon_sym_GuestVocal] = ACTIONS(223),
    [anon_sym_Guestvocal] = ACTIONS(223),
    [anon_sym_guestvocal] = ACTIONS(223),
    [anon_sym_Chorus] = ACTIONS(223),
    [anon_sym_chorus] = ACTIONS(223),
    [anon_sym_Mixing] = ACTIONS(223),
    [anon_sym_mixing] = ACTIONS(223),
    [anon_sym_Mastering] = ACTIONS(223),
    [anon_sym_mastering] = ACTIONS(223),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(223),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(223),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(223),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(223),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(223),
    [anon_sym_u827au672fu5bb6] = ACTIONS(223),
    [anon_sym_u6b4cu5531] = ACTIONS(223),
    [anon_sym_u6b4c] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu66f2] = ACTIONS(223),
    [anon_sym_u7de8u66f2] = ACTIONS(223),
    [anon_sym_u7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5e] = ACTIONS(223),
    [anon_sym_u4f5cu8bcd] = ACTIONS(223),
    [anon_sym_u5382u724c] = ACTIONS(223),
    [anon_sym_u811au672c] = ACTIONS(223),
    [anon_sym_u63d2u56fe] = ACTIONS(223),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(223),
    [anon_sym_u51fau7248u65b9] = ACTIONS(223),
    [anon_sym_u5f55u97f3] = ACTIONS(223),
    [anon_sym_u539fu4f5c] = ACTIONS(223),
    [anon_sym_u58f0u4e50] = ACTIONS(223),
    [anon_sym_u4e50u5668] = ACTIONS(223),
    [anon_sym_u6df7u97f3] = ACTIONS(223),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(223),
    [sym__sep] = ACTIONS(223),
  },
  [52] = {
    [aux_sym_credit_field_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_u300a] = ACTIONS(179),
    [aux_sym_song_title_token1] = ACTIONS(179),
    [sym__role_instrument] = ACTIONS(177),
    [anon_sym_Music] = ACTIONS(179),
    [anon_sym_music] = ACTIONS(179),
    [anon_sym_Composition] = ACTIONS(179),
    [anon_sym_composition] = ACTIONS(179),
    [anon_sym_Composer] = ACTIONS(179),
    [anon_sym_composer] = ACTIONS(179),
    [anon_sym_Compose] = ACTIONS(179),
    [anon_sym_compose] = ACTIONS(179),
    [anon_sym_Lyrics] = ACTIONS(179),
    [anon_sym_lyrics] = ACTIONS(179),
    [anon_sym_Lyricist] = ACTIONS(179),
    [anon_sym_lyricist] = ACTIONS(179),
    [anon_sym_Lyric] = ACTIONS(179),
    [anon_sym_lyric] = ACTIONS(179),
    [anon_sym_Arrangement] = ACTIONS(179),
    [anon_sym_arrangement] = ACTIONS(179),
    [anon_sym_Arranger] = ACTIONS(179),
    [anon_sym_arranger] = ACTIONS(179),
    [anon_sym_Arrange] = ACTIONS(179),
    [anon_sym_arrange] = ACTIONS(179),
    [anon_sym_Vocalist] = ACTIONS(179),
    [anon_sym_vocalist] = ACTIONS(179),
    [anon_sym_Vocal] = ACTIONS(179),
    [anon_sym_vocal] = ACTIONS(179),
    [anon_sym_Performer] = ACTIONS(179),
    [anon_sym_performer] = ACTIONS(179),
    [anon_sym_Illustration] = ACTIONS(179),
    [anon_sym_illustration] = ACTIONS(179),
    [anon_sym_Illustrator] = ACTIONS(179),
    [anon_sym_illustrator] = ACTIONS(179),
    [anon_sym_Illust] = ACTIONS(179),
    [anon_sym_illust] = ACTIONS(179),
    [anon_sym_Label] = ACTIONS(179),
    [anon_sym_label] = ACTIONS(179),
    [anon_sym_Circle] = ACTIONS(179),
    [anon_sym_circle] = ACTIONS(179),
    [anon_sym_Producer] = ACTIONS(179),
    [anon_sym_producer] = ACTIONS(179),
    [anon_sym_Recording] = ACTIONS(179),
    [anon_sym_recording] = ACTIONS(179),
    [anon_sym_GuestVocal] = ACTIONS(179),
    [anon_sym_Guestvocal] = ACTIONS(179),
    [anon_sym_guestvocal] = ACTIONS(179),
    [anon_sym_Chorus] = ACTIONS(179),
    [anon_sym_chorus] = ACTIONS(179),
    [anon_sym_Mixing] = ACTIONS(179),
    [anon_sym_mixing] = ACTIONS(179),
    [anon_sym_Mastering] = ACTIONS(179),
    [anon_sym_mastering] = ACTIONS(179),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(179),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(179),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(179),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(179),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(179),
    [anon_sym_u827au672fu5bb6] = ACTIONS(179),
    [anon_sym_u6b4cu5531] = ACTIONS(179),
    [anon_sym_u6b4c] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(179),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu66f2] = ACTIONS(179),
    [anon_sym_u7de8u66f2] = ACTIONS(179),
    [anon_sym_u7f16u66f2] = ACTIONS(179),
    [anon_sym_u4f5cu8a5e] = ACTIONS(179),
    [anon_sym_u4f5cu8bcd] = ACTIONS(179),
    [anon_sym_u5382u724c] = ACTIONS(179),
    [anon_sym_u811au672c] = ACTIONS(179),
    [anon_sym_u63d2u56fe] = ACTIONS(179),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(179),
    [anon_sym_u51fau7248u65b9] = ACTIONS(179),
    [anon_sym_u5f55u97f3] = ACTIONS(179),
    [anon_sym_u539fu4f5c] = ACTIONS(179),
    [anon_sym_u58f0u4e50] = ACTIONS(179),
    [anon_sym_u4e50u5668] = ACTIONS(179),
    [anon_sym_u6df7u97f3] = ACTIONS(179),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(179),
    [sym__sep] = ACTIONS(227),
  },
  [53] = {
    [sym_role] = STATE(152),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(53),
    [anon_sym_u300a2] = ACTIONS(229),
    [aux_sym_creator_name_token1] = ACTIONS(229),
    [sym__role_instrument] = ACTIONS(231),
    [anon_sym_Music] = ACTIONS(234),
    [anon_sym_music] = ACTIONS(234),
    [anon_sym_Composition] = ACTIONS(234),
    [anon_sym_composition] = ACTIONS(234),
    [anon_sym_Composer] = ACTIONS(234),
    [anon_sym_composer] = ACTIONS(234),
    [anon_sym_Compose] = ACTIONS(234),
    [anon_sym_compose] = ACTIONS(234),
    [anon_sym_Lyrics] = ACTIONS(234),
    [anon_sym_lyrics] = ACTIONS(234),
    [anon_sym_Lyricist] = ACTIONS(234),
    [anon_sym_lyricist] = ACTIONS(234),
    [anon_sym_Lyric] = ACTIONS(234),
    [anon_sym_lyric] = ACTIONS(234),
    [anon_sym_Arrangement] = ACTIONS(234),
    [anon_sym_arrangement] = ACTIONS(234),
    [anon_sym_Arranger] = ACTIONS(234),
    [anon_sym_arranger] = ACTIONS(234),
    [anon_sym_Arrange] = ACTIONS(234),
    [anon_sym_arrange] = ACTIONS(234),
    [anon_sym_Vocalist] = ACTIONS(234),
    [anon_sym_vocalist] = ACTIONS(234),
    [anon_sym_Vocal] = ACTIONS(234),
    [anon_sym_vocal] = ACTIONS(234),
    [anon_sym_Performer] = ACTIONS(234),
    [anon_sym_performer] = ACTIONS(234),
    [anon_sym_Illustration] = ACTIONS(234),
    [anon_sym_illustration] = ACTIONS(234),
    [anon_sym_Illustrator] = ACTIONS(234),
    [anon_sym_illustrator] = ACTIONS(234),
    [anon_sym_Illust] = ACTIONS(234),
    [anon_sym_illust] = ACTIONS(234),
    [anon_sym_Label] = ACTIONS(234),
    [anon_sym_label] = ACTIONS(234),
    [anon_sym_Circle] = ACTIONS(234),
    [anon_sym_circle] = ACTIONS(234),
    [anon_sym_Producer] = ACTIONS(234),
    [anon_sym_producer] = ACTIONS(234),
    [anon_sym_Recording] = ACTIONS(234),
    [anon_sym_recording] = ACTIONS(234),
    [anon_sym_GuestVocal] = ACTIONS(234),
    [anon_sym_Guestvocal] = ACTIONS(234),
    [anon_sym_guestvocal] = ACTIONS(234),
    [anon_sym_Chorus] = ACTIONS(234),
    [anon_sym_chorus] = ACTIONS(234),
    [anon_sym_Mixing] = ACTIONS(234),
    [anon_sym_mixing] = ACTIONS(234),
    [anon_sym_Mastering] = ACTIONS(234),
    [anon_sym_mastering] = ACTIONS(234),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(234),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(234),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(234),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(234),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(234),
    [anon_sym_u827au672fu5bb6] = ACTIONS(234),
    [anon_sym_u6b4cu5531] = ACTIONS(234),
    [anon_sym_u6b4c] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu66f2] = ACTIONS(234),
    [anon_sym_u7de8u66f2] = ACTIONS(234),
    [anon_sym_u7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5e] = ACTIONS(234),
    [anon_sym_u4f5cu8bcd] = ACTIONS(234),
    [anon_sym_u5382u724c] = ACTIONS(234),
    [anon_sym_u811au672c] = ACTIONS(234),
    [anon_sym_u63d2u56fe] = ACTIONS(234),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(234),
    [anon_sym_u51fau7248u65b9] = ACTIONS(234),
    [anon_sym_u5f55u97f3] = ACTIONS(234),
    [anon_sym_u539fu4f5c] = ACTIONS(234),
    [anon_sym_u58f0u4e50] = ACTIONS(234),
    [anon_sym_u4e50u5668] = ACTIONS(234),
    [anon_sym_u6df7u97f3] = ACTIONS(234),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(234),
    [sym_parts] = ACTIONS(229),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_DISC] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_u300a] = ACTIONS(118),
    [aux_sym_song_title_token1] = ACTIONS(118),
    [sym__role_instrument] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(118),
    [anon_sym_music] = ACTIONS(118),
    [anon_sym_Composition] = ACTIONS(118),
    [anon_sym_composition] = ACTIONS(118),
    [anon_sym_Composer] = ACTIONS(118),
    [anon_sym_composer] = ACTIONS(118),
    [anon_sym_Compose] = ACTIONS(118),
    [anon_sym_compose] = ACTIONS(118),
    [anon_sym_Lyrics] = ACTIONS(118),
    [anon_sym_lyrics] = ACTIONS(118),
    [anon_sym_Lyricist] = ACTIONS(118),
    [anon_sym_lyricist] = ACTIONS(118),
    [anon_sym_Lyric] = ACTIONS(118),
    [anon_sym_lyric] = ACTIONS(118),
    [anon_sym_Arrangement] = ACTIONS(118),
    [anon_sym_arrangement] = ACTIONS(118),
    [anon_sym_Arranger] = ACTIONS(118),
    [anon_sym_arranger] = ACTIONS(118),
    [anon_sym_Arrange] = ACTIONS(118),
    [anon_sym_arrange] = ACTIONS(118),
    [anon_sym_Vocalist] = ACTIONS(118),
    [anon_sym_vocalist] = ACTIONS(118),
    [anon_sym_Vocal] = ACTIONS(118),
    [anon_sym_vocal] = ACTIONS(118),
    [anon_sym_Performer] = ACTIONS(118),
    [anon_sym_performer] = ACTIONS(118),
    [anon_sym_Illustration] = ACTIONS(118),
    [anon_sym_illustration] = ACTIONS(118),
    [anon_sym_Illustrator] = ACTIONS(118),
    [anon_sym_illustrator] = ACTIONS(118),
    [anon_sym_Illust] = ACTIONS(118),
    [anon_sym_illust] = ACTIONS(118),
    [anon_sym_Label] = ACTIONS(118),
    [anon_sym_label] = ACTIONS(118),
    [anon_sym_Circle] = ACTIONS(118),
    [anon_sym_circle] = ACTIONS(118),
    [anon_sym_Producer] = ACTIONS(118),
    [anon_sym_producer] = ACTIONS(118),
    [anon_sym_Recording] = ACTIONS(118),
    [anon_sym_recording] = ACTIONS(118),
    [anon_sym_GuestVocal] = ACTIONS(118),
    [anon_sym_Guestvocal] = ACTIONS(118),
    [anon_sym_guestvocal] = ACTIONS(118),
    [anon_sym_Chorus] = ACTIONS(118),
    [anon_sym_chorus] = ACTIONS(118),
    [anon_sym_Mixing] = ACTIONS(118),
    [anon_sym_mixing] = ACTIONS(118),
    [anon_sym_Mastering] = ACTIONS(118),
    [anon_sym_mastering] = ACTIONS(118),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(118),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(118),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(118),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(118),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(118),
    [anon_sym_u827au672fu5bb6] = ACTIONS(118),
    [anon_sym_u6b4cu5531] = ACTIONS(118),
    [anon_sym_u6b4c] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu66f2] = ACTIONS(118),
    [anon_sym_u7de8u66f2] = ACTIONS(118),
    [anon_sym_u7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5e] = ACTIONS(118),
    [anon_sym_u4f5cu8bcd] = ACTIONS(118),
    [anon_sym_u5382u724c] = ACTIONS(118),
    [anon_sym_u811au672c] = ACTIONS(118),
    [anon_sym_u63d2u56fe] = ACTIONS(118),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(118),
    [anon_sym_u51fau7248u65b9] = ACTIONS(118),
    [anon_sym_u5f55u97f3] = ACTIONS(118),
    [anon_sym_u539fu4f5c] = ACTIONS(118),
    [anon_sym_u58f0u4e50] = ACTIONS(118),
    [anon_sym_u4e50u5668] = ACTIONS(118),
    [anon_sym_u6df7u97f3] = ACTIONS(118),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(118),
    [sym__sep] = ACTIONS(118),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_DISC] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(122),
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
    [anon_sym_Vocalist] = ACTIONS(122),
    [anon_sym_vocalist] = ACTIONS(122),
    [anon_sym_Vocal] = ACTIONS(122),
    [anon_sym_vocal] = ACTIONS(122),
    [anon_sym_Performer] = ACTIONS(122),
    [anon_sym_performer] = ACTIONS(122),
    [anon_sym_Illustration] = ACTIONS(122),
    [anon_sym_illustration] = ACTIONS(122),
    [anon_sym_Illustrator] = ACTIONS(122),
    [anon_sym_illustrator] = ACTIONS(122),
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
    [sym__sep] = ACTIONS(122),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_DISC] = ACTIONS(239),
    [anon_sym_u300a] = ACTIONS(239),
    [aux_sym_song_title_token1] = ACTIONS(239),
    [sym__role_instrument] = ACTIONS(237),
    [anon_sym_Music] = ACTIONS(239),
    [anon_sym_music] = ACTIONS(239),
    [anon_sym_Composition] = ACTIONS(239),
    [anon_sym_composition] = ACTIONS(239),
    [anon_sym_Composer] = ACTIONS(239),
    [anon_sym_composer] = ACTIONS(239),
    [anon_sym_Compose] = ACTIONS(239),
    [anon_sym_compose] = ACTIONS(239),
    [anon_sym_Lyrics] = ACTIONS(239),
    [anon_sym_lyrics] = ACTIONS(239),
    [anon_sym_Lyricist] = ACTIONS(239),
    [anon_sym_lyricist] = ACTIONS(239),
    [anon_sym_Lyric] = ACTIONS(239),
    [anon_sym_lyric] = ACTIONS(239),
    [anon_sym_Arrangement] = ACTIONS(239),
    [anon_sym_arrangement] = ACTIONS(239),
    [anon_sym_Arranger] = ACTIONS(239),
    [anon_sym_arranger] = ACTIONS(239),
    [anon_sym_Arrange] = ACTIONS(239),
    [anon_sym_arrange] = ACTIONS(239),
    [anon_sym_Vocalist] = ACTIONS(239),
    [anon_sym_vocalist] = ACTIONS(239),
    [anon_sym_Vocal] = ACTIONS(239),
    [anon_sym_vocal] = ACTIONS(239),
    [anon_sym_Performer] = ACTIONS(239),
    [anon_sym_performer] = ACTIONS(239),
    [anon_sym_Illustration] = ACTIONS(239),
    [anon_sym_illustration] = ACTIONS(239),
    [anon_sym_Illustrator] = ACTIONS(239),
    [anon_sym_illustrator] = ACTIONS(239),
    [anon_sym_Illust] = ACTIONS(239),
    [anon_sym_illust] = ACTIONS(239),
    [anon_sym_Label] = ACTIONS(239),
    [anon_sym_label] = ACTIONS(239),
    [anon_sym_Circle] = ACTIONS(239),
    [anon_sym_circle] = ACTIONS(239),
    [anon_sym_Producer] = ACTIONS(239),
    [anon_sym_producer] = ACTIONS(239),
    [anon_sym_Recording] = ACTIONS(239),
    [anon_sym_recording] = ACTIONS(239),
    [anon_sym_GuestVocal] = ACTIONS(239),
    [anon_sym_Guestvocal] = ACTIONS(239),
    [anon_sym_guestvocal] = ACTIONS(239),
    [anon_sym_Chorus] = ACTIONS(239),
    [anon_sym_chorus] = ACTIONS(239),
    [anon_sym_Mixing] = ACTIONS(239),
    [anon_sym_mixing] = ACTIONS(239),
    [anon_sym_Mastering] = ACTIONS(239),
    [anon_sym_mastering] = ACTIONS(239),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(239),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(239),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(239),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(239),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(239),
    [anon_sym_u827au672fu5bb6] = ACTIONS(239),
    [anon_sym_u6b4cu5531] = ACTIONS(239),
    [anon_sym_u6b4c] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu66f2] = ACTIONS(239),
    [anon_sym_u7de8u66f2] = ACTIONS(239),
    [anon_sym_u7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5e] = ACTIONS(239),
    [anon_sym_u4f5cu8bcd] = ACTIONS(239),
    [anon_sym_u5382u724c] = ACTIONS(239),
    [anon_sym_u811au672c] = ACTIONS(239),
    [anon_sym_u63d2u56fe] = ACTIONS(239),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(239),
    [anon_sym_u51fau7248u65b9] = ACTIONS(239),
    [anon_sym_u5f55u97f3] = ACTIONS(239),
    [anon_sym_u539fu4f5c] = ACTIONS(239),
    [anon_sym_u58f0u4e50] = ACTIONS(239),
    [anon_sym_u4e50u5668] = ACTIONS(239),
    [anon_sym_u6df7u97f3] = ACTIONS(239),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(239),
    [sym__sep] = ACTIONS(241),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_u300a] = ACTIONS(219),
    [aux_sym_song_title_token1] = ACTIONS(219),
    [sym__role_instrument] = ACTIONS(217),
    [anon_sym_Music] = ACTIONS(219),
    [anon_sym_music] = ACTIONS(219),
    [anon_sym_Composition] = ACTIONS(219),
    [anon_sym_composition] = ACTIONS(219),
    [anon_sym_Composer] = ACTIONS(219),
    [anon_sym_composer] = ACTIONS(219),
    [anon_sym_Compose] = ACTIONS(219),
    [anon_sym_compose] = ACTIONS(219),
    [anon_sym_Lyrics] = ACTIONS(219),
    [anon_sym_lyrics] = ACTIONS(219),
    [anon_sym_Lyricist] = ACTIONS(219),
    [anon_sym_lyricist] = ACTIONS(219),
    [anon_sym_Lyric] = ACTIONS(219),
    [anon_sym_lyric] = ACTIONS(219),
    [anon_sym_Arrangement] = ACTIONS(219),
    [anon_sym_arrangement] = ACTIONS(219),
    [anon_sym_Arranger] = ACTIONS(219),
    [anon_sym_arranger] = ACTIONS(219),
    [anon_sym_Arrange] = ACTIONS(219),
    [anon_sym_arrange] = ACTIONS(219),
    [anon_sym_Vocalist] = ACTIONS(219),
    [anon_sym_vocalist] = ACTIONS(219),
    [anon_sym_Vocal] = ACTIONS(219),
    [anon_sym_vocal] = ACTIONS(219),
    [anon_sym_Performer] = ACTIONS(219),
    [anon_sym_performer] = ACTIONS(219),
    [anon_sym_Illustration] = ACTIONS(219),
    [anon_sym_illustration] = ACTIONS(219),
    [anon_sym_Illustrator] = ACTIONS(219),
    [anon_sym_illustrator] = ACTIONS(219),
    [anon_sym_Illust] = ACTIONS(219),
    [anon_sym_illust] = ACTIONS(219),
    [anon_sym_Label] = ACTIONS(219),
    [anon_sym_label] = ACTIONS(219),
    [anon_sym_Circle] = ACTIONS(219),
    [anon_sym_circle] = ACTIONS(219),
    [anon_sym_Producer] = ACTIONS(219),
    [anon_sym_producer] = ACTIONS(219),
    [anon_sym_Recording] = ACTIONS(219),
    [anon_sym_recording] = ACTIONS(219),
    [anon_sym_GuestVocal] = ACTIONS(219),
    [anon_sym_Guestvocal] = ACTIONS(219),
    [anon_sym_guestvocal] = ACTIONS(219),
    [anon_sym_Chorus] = ACTIONS(219),
    [anon_sym_chorus] = ACTIONS(219),
    [anon_sym_Mixing] = ACTIONS(219),
    [anon_sym_mixing] = ACTIONS(219),
    [anon_sym_Mastering] = ACTIONS(219),
    [anon_sym_mastering] = ACTIONS(219),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(219),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(219),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(219),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(219),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(219),
    [anon_sym_u827au672fu5bb6] = ACTIONS(219),
    [anon_sym_u6b4cu5531] = ACTIONS(219),
    [anon_sym_u6b4c] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(219),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu66f2] = ACTIONS(219),
    [anon_sym_u7de8u66f2] = ACTIONS(219),
    [anon_sym_u7f16u66f2] = ACTIONS(219),
    [anon_sym_u4f5cu8a5e] = ACTIONS(219),
    [anon_sym_u4f5cu8bcd] = ACTIONS(219),
    [anon_sym_u5382u724c] = ACTIONS(219),
    [anon_sym_u811au672c] = ACTIONS(219),
    [anon_sym_u63d2u56fe] = ACTIONS(219),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(219),
    [anon_sym_u51fau7248u65b9] = ACTIONS(219),
    [anon_sym_u5f55u97f3] = ACTIONS(219),
    [anon_sym_u539fu4f5c] = ACTIONS(219),
    [anon_sym_u58f0u4e50] = ACTIONS(219),
    [anon_sym_u4e50u5668] = ACTIONS(219),
    [anon_sym_u6df7u97f3] = ACTIONS(219),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(219),
    [sym__sep] = ACTIONS(219),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_u300a] = ACTIONS(215),
    [aux_sym_song_title_token1] = ACTIONS(215),
    [sym__role_instrument] = ACTIONS(213),
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
    [anon_sym_Vocalist] = ACTIONS(215),
    [anon_sym_vocalist] = ACTIONS(215),
    [anon_sym_Vocal] = ACTIONS(215),
    [anon_sym_vocal] = ACTIONS(215),
    [anon_sym_Performer] = ACTIONS(215),
    [anon_sym_performer] = ACTIONS(215),
    [anon_sym_Illustration] = ACTIONS(215),
    [anon_sym_illustration] = ACTIONS(215),
    [anon_sym_Illustrator] = ACTIONS(215),
    [anon_sym_illustrator] = ACTIONS(215),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(215),
    [anon_sym_u6b4cu5531] = ACTIONS(215),
    [anon_sym_u6b4c] = ACTIONS(215),
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
    [sym__sep] = ACTIONS(215),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_u300a] = ACTIONS(223),
    [aux_sym_song_title_token1] = ACTIONS(223),
    [sym__role_instrument] = ACTIONS(221),
    [anon_sym_Music] = ACTIONS(223),
    [anon_sym_music] = ACTIONS(223),
    [anon_sym_Composition] = ACTIONS(223),
    [anon_sym_composition] = ACTIONS(223),
    [anon_sym_Composer] = ACTIONS(223),
    [anon_sym_composer] = ACTIONS(223),
    [anon_sym_Compose] = ACTIONS(223),
    [anon_sym_compose] = ACTIONS(223),
    [anon_sym_Lyrics] = ACTIONS(223),
    [anon_sym_lyrics] = ACTIONS(223),
    [anon_sym_Lyricist] = ACTIONS(223),
    [anon_sym_lyricist] = ACTIONS(223),
    [anon_sym_Lyric] = ACTIONS(223),
    [anon_sym_lyric] = ACTIONS(223),
    [anon_sym_Arrangement] = ACTIONS(223),
    [anon_sym_arrangement] = ACTIONS(223),
    [anon_sym_Arranger] = ACTIONS(223),
    [anon_sym_arranger] = ACTIONS(223),
    [anon_sym_Arrange] = ACTIONS(223),
    [anon_sym_arrange] = ACTIONS(223),
    [anon_sym_Vocalist] = ACTIONS(223),
    [anon_sym_vocalist] = ACTIONS(223),
    [anon_sym_Vocal] = ACTIONS(223),
    [anon_sym_vocal] = ACTIONS(223),
    [anon_sym_Performer] = ACTIONS(223),
    [anon_sym_performer] = ACTIONS(223),
    [anon_sym_Illustration] = ACTIONS(223),
    [anon_sym_illustration] = ACTIONS(223),
    [anon_sym_Illustrator] = ACTIONS(223),
    [anon_sym_illustrator] = ACTIONS(223),
    [anon_sym_Illust] = ACTIONS(223),
    [anon_sym_illust] = ACTIONS(223),
    [anon_sym_Label] = ACTIONS(223),
    [anon_sym_label] = ACTIONS(223),
    [anon_sym_Circle] = ACTIONS(223),
    [anon_sym_circle] = ACTIONS(223),
    [anon_sym_Producer] = ACTIONS(223),
    [anon_sym_producer] = ACTIONS(223),
    [anon_sym_Recording] = ACTIONS(223),
    [anon_sym_recording] = ACTIONS(223),
    [anon_sym_GuestVocal] = ACTIONS(223),
    [anon_sym_Guestvocal] = ACTIONS(223),
    [anon_sym_guestvocal] = ACTIONS(223),
    [anon_sym_Chorus] = ACTIONS(223),
    [anon_sym_chorus] = ACTIONS(223),
    [anon_sym_Mixing] = ACTIONS(223),
    [anon_sym_mixing] = ACTIONS(223),
    [anon_sym_Mastering] = ACTIONS(223),
    [anon_sym_mastering] = ACTIONS(223),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(223),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(223),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(223),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(223),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(223),
    [anon_sym_u827au672fu5bb6] = ACTIONS(223),
    [anon_sym_u6b4cu5531] = ACTIONS(223),
    [anon_sym_u6b4c] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(223),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu66f2] = ACTIONS(223),
    [anon_sym_u7de8u66f2] = ACTIONS(223),
    [anon_sym_u7f16u66f2] = ACTIONS(223),
    [anon_sym_u4f5cu8a5e] = ACTIONS(223),
    [anon_sym_u4f5cu8bcd] = ACTIONS(223),
    [anon_sym_u5382u724c] = ACTIONS(223),
    [anon_sym_u811au672c] = ACTIONS(223),
    [anon_sym_u63d2u56fe] = ACTIONS(223),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(223),
    [anon_sym_u51fau7248u65b9] = ACTIONS(223),
    [anon_sym_u5f55u97f3] = ACTIONS(223),
    [anon_sym_u539fu4f5c] = ACTIONS(223),
    [anon_sym_u58f0u4e50] = ACTIONS(223),
    [anon_sym_u4e50u5668] = ACTIONS(223),
    [anon_sym_u6df7u97f3] = ACTIONS(223),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(223),
    [sym__sep] = ACTIONS(223),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_DISC] = ACTIONS(245),
    [anon_sym_u300a] = ACTIONS(245),
    [aux_sym_song_title_token1] = ACTIONS(245),
    [sym__role_instrument] = ACTIONS(243),
    [anon_sym_Music] = ACTIONS(245),
    [anon_sym_music] = ACTIONS(245),
    [anon_sym_Composition] = ACTIONS(245),
    [anon_sym_composition] = ACTIONS(245),
    [anon_sym_Composer] = ACTIONS(245),
    [anon_sym_composer] = ACTIONS(245),
    [anon_sym_Compose] = ACTIONS(245),
    [anon_sym_compose] = ACTIONS(245),
    [anon_sym_Lyrics] = ACTIONS(245),
    [anon_sym_lyrics] = ACTIONS(245),
    [anon_sym_Lyricist] = ACTIONS(245),
    [anon_sym_lyricist] = ACTIONS(245),
    [anon_sym_Lyric] = ACTIONS(245),
    [anon_sym_lyric] = ACTIONS(245),
    [anon_sym_Arrangement] = ACTIONS(245),
    [anon_sym_arrangement] = ACTIONS(245),
    [anon_sym_Arranger] = ACTIONS(245),
    [anon_sym_arranger] = ACTIONS(245),
    [anon_sym_Arrange] = ACTIONS(245),
    [anon_sym_arrange] = ACTIONS(245),
    [anon_sym_Vocalist] = ACTIONS(245),
    [anon_sym_vocalist] = ACTIONS(245),
    [anon_sym_Vocal] = ACTIONS(245),
    [anon_sym_vocal] = ACTIONS(245),
    [anon_sym_Performer] = ACTIONS(245),
    [anon_sym_performer] = ACTIONS(245),
    [anon_sym_Illustration] = ACTIONS(245),
    [anon_sym_illustration] = ACTIONS(245),
    [anon_sym_Illustrator] = ACTIONS(245),
    [anon_sym_illustrator] = ACTIONS(245),
    [anon_sym_Illust] = ACTIONS(245),
    [anon_sym_illust] = ACTIONS(245),
    [anon_sym_Label] = ACTIONS(245),
    [anon_sym_label] = ACTIONS(245),
    [anon_sym_Circle] = ACTIONS(245),
    [anon_sym_circle] = ACTIONS(245),
    [anon_sym_Producer] = ACTIONS(245),
    [anon_sym_producer] = ACTIONS(245),
    [anon_sym_Recording] = ACTIONS(245),
    [anon_sym_recording] = ACTIONS(245),
    [anon_sym_GuestVocal] = ACTIONS(245),
    [anon_sym_Guestvocal] = ACTIONS(245),
    [anon_sym_guestvocal] = ACTIONS(245),
    [anon_sym_Chorus] = ACTIONS(245),
    [anon_sym_chorus] = ACTIONS(245),
    [anon_sym_Mixing] = ACTIONS(245),
    [anon_sym_mixing] = ACTIONS(245),
    [anon_sym_Mastering] = ACTIONS(245),
    [anon_sym_mastering] = ACTIONS(245),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(245),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(245),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(245),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(245),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(245),
    [anon_sym_u827au672fu5bb6] = ACTIONS(245),
    [anon_sym_u6b4cu5531] = ACTIONS(245),
    [anon_sym_u6b4c] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu66f2] = ACTIONS(245),
    [anon_sym_u7de8u66f2] = ACTIONS(245),
    [anon_sym_u7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5e] = ACTIONS(245),
    [anon_sym_u4f5cu8bcd] = ACTIONS(245),
    [anon_sym_u5382u724c] = ACTIONS(245),
    [anon_sym_u811au672c] = ACTIONS(245),
    [anon_sym_u63d2u56fe] = ACTIONS(245),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(245),
    [anon_sym_u51fau7248u65b9] = ACTIONS(245),
    [anon_sym_u5f55u97f3] = ACTIONS(245),
    [anon_sym_u539fu4f5c] = ACTIONS(245),
    [anon_sym_u58f0u4e50] = ACTIONS(245),
    [anon_sym_u4e50u5668] = ACTIONS(245),
    [anon_sym_u6df7u97f3] = ACTIONS(245),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(245),
    [sym__sep] = ACTIONS(247),
  },
  [61] = {
    [sym_role] = STATE(142),
    [sym__role] = STATE(161),
    [aux_sym_credit_field_maybeparts_repeat1] = STATE(61),
    [anon_sym_u300a2] = ACTIONS(229),
    [aux_sym_creator_name_token1] = ACTIONS(229),
    [sym__role_instrument] = ACTIONS(231),
    [anon_sym_Music] = ACTIONS(234),
    [anon_sym_music] = ACTIONS(234),
    [anon_sym_Composition] = ACTIONS(234),
    [anon_sym_composition] = ACTIONS(234),
    [anon_sym_Composer] = ACTIONS(234),
    [anon_sym_composer] = ACTIONS(234),
    [anon_sym_Compose] = ACTIONS(234),
    [anon_sym_compose] = ACTIONS(234),
    [anon_sym_Lyrics] = ACTIONS(234),
    [anon_sym_lyrics] = ACTIONS(234),
    [anon_sym_Lyricist] = ACTIONS(234),
    [anon_sym_lyricist] = ACTIONS(234),
    [anon_sym_Lyric] = ACTIONS(234),
    [anon_sym_lyric] = ACTIONS(234),
    [anon_sym_Arrangement] = ACTIONS(234),
    [anon_sym_arrangement] = ACTIONS(234),
    [anon_sym_Arranger] = ACTIONS(234),
    [anon_sym_arranger] = ACTIONS(234),
    [anon_sym_Arrange] = ACTIONS(234),
    [anon_sym_arrange] = ACTIONS(234),
    [anon_sym_Vocalist] = ACTIONS(234),
    [anon_sym_vocalist] = ACTIONS(234),
    [anon_sym_Vocal] = ACTIONS(234),
    [anon_sym_vocal] = ACTIONS(234),
    [anon_sym_Performer] = ACTIONS(234),
    [anon_sym_performer] = ACTIONS(234),
    [anon_sym_Illustration] = ACTIONS(234),
    [anon_sym_illustration] = ACTIONS(234),
    [anon_sym_Illustrator] = ACTIONS(234),
    [anon_sym_illustrator] = ACTIONS(234),
    [anon_sym_Illust] = ACTIONS(234),
    [anon_sym_illust] = ACTIONS(234),
    [anon_sym_Label] = ACTIONS(234),
    [anon_sym_label] = ACTIONS(234),
    [anon_sym_Circle] = ACTIONS(234),
    [anon_sym_circle] = ACTIONS(234),
    [anon_sym_Producer] = ACTIONS(234),
    [anon_sym_producer] = ACTIONS(234),
    [anon_sym_Recording] = ACTIONS(234),
    [anon_sym_recording] = ACTIONS(234),
    [anon_sym_GuestVocal] = ACTIONS(234),
    [anon_sym_Guestvocal] = ACTIONS(234),
    [anon_sym_guestvocal] = ACTIONS(234),
    [anon_sym_Chorus] = ACTIONS(234),
    [anon_sym_chorus] = ACTIONS(234),
    [anon_sym_Mixing] = ACTIONS(234),
    [anon_sym_mixing] = ACTIONS(234),
    [anon_sym_Mastering] = ACTIONS(234),
    [anon_sym_mastering] = ACTIONS(234),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(234),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(234),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(234),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(234),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(234),
    [anon_sym_u827au672fu5bb6] = ACTIONS(234),
    [anon_sym_u6b4cu5531] = ACTIONS(234),
    [anon_sym_u6b4c] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(234),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu66f2] = ACTIONS(234),
    [anon_sym_u7de8u66f2] = ACTIONS(234),
    [anon_sym_u7f16u66f2] = ACTIONS(234),
    [anon_sym_u4f5cu8a5e] = ACTIONS(234),
    [anon_sym_u4f5cu8bcd] = ACTIONS(234),
    [anon_sym_u5382u724c] = ACTIONS(234),
    [anon_sym_u811au672c] = ACTIONS(234),
    [anon_sym_u63d2u56fe] = ACTIONS(234),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(234),
    [anon_sym_u51fau7248u65b9] = ACTIONS(234),
    [anon_sym_u5f55u97f3] = ACTIONS(234),
    [anon_sym_u539fu4f5c] = ACTIONS(234),
    [anon_sym_u58f0u4e50] = ACTIONS(234),
    [anon_sym_u4e50u5668] = ACTIONS(234),
    [anon_sym_u6df7u97f3] = ACTIONS(234),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(234),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_u300a] = ACTIONS(118),
    [aux_sym_song_title_token1] = ACTIONS(118),
    [sym__role_instrument] = ACTIONS(116),
    [anon_sym_Music] = ACTIONS(118),
    [anon_sym_music] = ACTIONS(118),
    [anon_sym_Composition] = ACTIONS(118),
    [anon_sym_composition] = ACTIONS(118),
    [anon_sym_Composer] = ACTIONS(118),
    [anon_sym_composer] = ACTIONS(118),
    [anon_sym_Compose] = ACTIONS(118),
    [anon_sym_compose] = ACTIONS(118),
    [anon_sym_Lyrics] = ACTIONS(118),
    [anon_sym_lyrics] = ACTIONS(118),
    [anon_sym_Lyricist] = ACTIONS(118),
    [anon_sym_lyricist] = ACTIONS(118),
    [anon_sym_Lyric] = ACTIONS(118),
    [anon_sym_lyric] = ACTIONS(118),
    [anon_sym_Arrangement] = ACTIONS(118),
    [anon_sym_arrangement] = ACTIONS(118),
    [anon_sym_Arranger] = ACTIONS(118),
    [anon_sym_arranger] = ACTIONS(118),
    [anon_sym_Arrange] = ACTIONS(118),
    [anon_sym_arrange] = ACTIONS(118),
    [anon_sym_Vocalist] = ACTIONS(118),
    [anon_sym_vocalist] = ACTIONS(118),
    [anon_sym_Vocal] = ACTIONS(118),
    [anon_sym_vocal] = ACTIONS(118),
    [anon_sym_Performer] = ACTIONS(118),
    [anon_sym_performer] = ACTIONS(118),
    [anon_sym_Illustration] = ACTIONS(118),
    [anon_sym_illustration] = ACTIONS(118),
    [anon_sym_Illustrator] = ACTIONS(118),
    [anon_sym_illustrator] = ACTIONS(118),
    [anon_sym_Illust] = ACTIONS(118),
    [anon_sym_illust] = ACTIONS(118),
    [anon_sym_Label] = ACTIONS(118),
    [anon_sym_label] = ACTIONS(118),
    [anon_sym_Circle] = ACTIONS(118),
    [anon_sym_circle] = ACTIONS(118),
    [anon_sym_Producer] = ACTIONS(118),
    [anon_sym_producer] = ACTIONS(118),
    [anon_sym_Recording] = ACTIONS(118),
    [anon_sym_recording] = ACTIONS(118),
    [anon_sym_GuestVocal] = ACTIONS(118),
    [anon_sym_Guestvocal] = ACTIONS(118),
    [anon_sym_guestvocal] = ACTIONS(118),
    [anon_sym_Chorus] = ACTIONS(118),
    [anon_sym_chorus] = ACTIONS(118),
    [anon_sym_Mixing] = ACTIONS(118),
    [anon_sym_mixing] = ACTIONS(118),
    [anon_sym_Mastering] = ACTIONS(118),
    [anon_sym_mastering] = ACTIONS(118),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(118),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(118),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(118),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(118),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(118),
    [anon_sym_u827au672fu5bb6] = ACTIONS(118),
    [anon_sym_u6b4cu5531] = ACTIONS(118),
    [anon_sym_u6b4c] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu66f2] = ACTIONS(118),
    [anon_sym_u7de8u66f2] = ACTIONS(118),
    [anon_sym_u7f16u66f2] = ACTIONS(118),
    [anon_sym_u4f5cu8a5e] = ACTIONS(118),
    [anon_sym_u4f5cu8bcd] = ACTIONS(118),
    [anon_sym_u5382u724c] = ACTIONS(118),
    [anon_sym_u811au672c] = ACTIONS(118),
    [anon_sym_u63d2u56fe] = ACTIONS(118),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(118),
    [anon_sym_u51fau7248u65b9] = ACTIONS(118),
    [anon_sym_u5f55u97f3] = ACTIONS(118),
    [anon_sym_u539fu4f5c] = ACTIONS(118),
    [anon_sym_u58f0u4e50] = ACTIONS(118),
    [anon_sym_u4e50u5668] = ACTIONS(118),
    [anon_sym_u6df7u97f3] = ACTIONS(118),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(118),
    [sym__sep] = ACTIONS(118),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [aux_sym__quotable_song_title_maybecomment_token2] = ACTIONS(251),
    [anon_sym_u300a] = ACTIONS(200),
    [aux_sym_song_title_token1] = ACTIONS(200),
    [sym__role_instrument] = ACTIONS(198),
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
    [anon_sym_Vocalist] = ACTIONS(200),
    [anon_sym_vocalist] = ACTIONS(200),
    [anon_sym_Vocal] = ACTIONS(200),
    [anon_sym_vocal] = ACTIONS(200),
    [anon_sym_Performer] = ACTIONS(200),
    [anon_sym_performer] = ACTIONS(200),
    [anon_sym_Illustration] = ACTIONS(200),
    [anon_sym_illustration] = ACTIONS(200),
    [anon_sym_Illustrator] = ACTIONS(200),
    [anon_sym_illustrator] = ACTIONS(200),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(200),
    [anon_sym_u6b4cu5531] = ACTIONS(200),
    [anon_sym_u6b4c] = ACTIONS(200),
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
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_u300a] = ACTIONS(122),
    [aux_sym_song_title_token1] = ACTIONS(122),
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
    [anon_sym_Vocalist] = ACTIONS(122),
    [anon_sym_vocalist] = ACTIONS(122),
    [anon_sym_Vocal] = ACTIONS(122),
    [anon_sym_vocal] = ACTIONS(122),
    [anon_sym_Performer] = ACTIONS(122),
    [anon_sym_performer] = ACTIONS(122),
    [anon_sym_Illustration] = ACTIONS(122),
    [anon_sym_illustration] = ACTIONS(122),
    [anon_sym_Illustrator] = ACTIONS(122),
    [anon_sym_illustrator] = ACTIONS(122),
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
    [sym__sep] = ACTIONS(122),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DISC] = ACTIONS(35),
    [anon_sym_u300a] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(35),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_Vocalist] = ACTIONS(35),
    [anon_sym_vocalist] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illustrator] = ACTIONS(35),
    [anon_sym_illustrator] = ACTIONS(35),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u6b4c] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u4f5cu8bcd] = ACTIONS(35),
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
  [66] = {
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
    [anon_sym_Vocalist] = ACTIONS(255),
    [anon_sym_vocalist] = ACTIONS(255),
    [anon_sym_Vocal] = ACTIONS(255),
    [anon_sym_vocal] = ACTIONS(255),
    [anon_sym_Performer] = ACTIONS(255),
    [anon_sym_performer] = ACTIONS(255),
    [anon_sym_Illustration] = ACTIONS(255),
    [anon_sym_illustration] = ACTIONS(255),
    [anon_sym_Illustrator] = ACTIONS(255),
    [anon_sym_illustrator] = ACTIONS(255),
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
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DISC] = ACTIONS(45),
    [anon_sym_u300a] = ACTIONS(45),
    [aux_sym_song_title_token1] = ACTIONS(45),
    [sym__role_instrument] = ACTIONS(43),
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
    [anon_sym_Vocalist] = ACTIONS(45),
    [anon_sym_vocalist] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illustrator] = ACTIONS(45),
    [anon_sym_illustrator] = ACTIONS(45),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u6b4c] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u4f5cu8bcd] = ACTIONS(45),
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
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_DISC] = ACTIONS(259),
    [anon_sym_u300a] = ACTIONS(259),
    [aux_sym_song_title_token1] = ACTIONS(259),
    [sym__role_instrument] = ACTIONS(257),
    [anon_sym_Music] = ACTIONS(259),
    [anon_sym_music] = ACTIONS(259),
    [anon_sym_Composition] = ACTIONS(259),
    [anon_sym_composition] = ACTIONS(259),
    [anon_sym_Composer] = ACTIONS(259),
    [anon_sym_composer] = ACTIONS(259),
    [anon_sym_Compose] = ACTIONS(259),
    [anon_sym_compose] = ACTIONS(259),
    [anon_sym_Lyrics] = ACTIONS(259),
    [anon_sym_lyrics] = ACTIONS(259),
    [anon_sym_Lyricist] = ACTIONS(259),
    [anon_sym_lyricist] = ACTIONS(259),
    [anon_sym_Lyric] = ACTIONS(259),
    [anon_sym_lyric] = ACTIONS(259),
    [anon_sym_Arrangement] = ACTIONS(259),
    [anon_sym_arrangement] = ACTIONS(259),
    [anon_sym_Arranger] = ACTIONS(259),
    [anon_sym_arranger] = ACTIONS(259),
    [anon_sym_Arrange] = ACTIONS(259),
    [anon_sym_arrange] = ACTIONS(259),
    [anon_sym_Vocalist] = ACTIONS(259),
    [anon_sym_vocalist] = ACTIONS(259),
    [anon_sym_Vocal] = ACTIONS(259),
    [anon_sym_vocal] = ACTIONS(259),
    [anon_sym_Performer] = ACTIONS(259),
    [anon_sym_performer] = ACTIONS(259),
    [anon_sym_Illustration] = ACTIONS(259),
    [anon_sym_illustration] = ACTIONS(259),
    [anon_sym_Illustrator] = ACTIONS(259),
    [anon_sym_illustrator] = ACTIONS(259),
    [anon_sym_Illust] = ACTIONS(259),
    [anon_sym_illust] = ACTIONS(259),
    [anon_sym_Label] = ACTIONS(259),
    [anon_sym_label] = ACTIONS(259),
    [anon_sym_Circle] = ACTIONS(259),
    [anon_sym_circle] = ACTIONS(259),
    [anon_sym_Producer] = ACTIONS(259),
    [anon_sym_producer] = ACTIONS(259),
    [anon_sym_Recording] = ACTIONS(259),
    [anon_sym_recording] = ACTIONS(259),
    [anon_sym_GuestVocal] = ACTIONS(259),
    [anon_sym_Guestvocal] = ACTIONS(259),
    [anon_sym_guestvocal] = ACTIONS(259),
    [anon_sym_Chorus] = ACTIONS(259),
    [anon_sym_chorus] = ACTIONS(259),
    [anon_sym_Mixing] = ACTIONS(259),
    [anon_sym_mixing] = ACTIONS(259),
    [anon_sym_Mastering] = ACTIONS(259),
    [anon_sym_mastering] = ACTIONS(259),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(259),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(259),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(259),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(259),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(259),
    [anon_sym_u827au672fu5bb6] = ACTIONS(259),
    [anon_sym_u6b4cu5531] = ACTIONS(259),
    [anon_sym_u6b4c] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu66f2] = ACTIONS(259),
    [anon_sym_u7de8u66f2] = ACTIONS(259),
    [anon_sym_u7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5e] = ACTIONS(259),
    [anon_sym_u4f5cu8bcd] = ACTIONS(259),
    [anon_sym_u5382u724c] = ACTIONS(259),
    [anon_sym_u811au672c] = ACTIONS(259),
    [anon_sym_u63d2u56fe] = ACTIONS(259),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(259),
    [anon_sym_u51fau7248u65b9] = ACTIONS(259),
    [anon_sym_u5f55u97f3] = ACTIONS(259),
    [anon_sym_u539fu4f5c] = ACTIONS(259),
    [anon_sym_u58f0u4e50] = ACTIONS(259),
    [anon_sym_u4e50u5668] = ACTIONS(259),
    [anon_sym_u6df7u97f3] = ACTIONS(259),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(259),
  },
  [69] = {
    [anon_sym_DISC] = ACTIONS(261),
    [anon_sym_u300a] = ACTIONS(261),
    [aux_sym_song_title_token1] = ACTIONS(261),
    [sym__role_instrument] = ACTIONS(263),
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
    [anon_sym_Vocalist] = ACTIONS(261),
    [anon_sym_vocalist] = ACTIONS(261),
    [anon_sym_Vocal] = ACTIONS(261),
    [anon_sym_vocal] = ACTIONS(261),
    [anon_sym_Performer] = ACTIONS(261),
    [anon_sym_performer] = ACTIONS(261),
    [anon_sym_Illustration] = ACTIONS(261),
    [anon_sym_illustration] = ACTIONS(261),
    [anon_sym_Illustrator] = ACTIONS(261),
    [anon_sym_illustrator] = ACTIONS(261),
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
    [sym__sep] = ACTIONS(265),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_DISC] = ACTIONS(269),
    [anon_sym_u300a] = ACTIONS(269),
    [aux_sym_song_title_token1] = ACTIONS(269),
    [sym__role_instrument] = ACTIONS(267),
    [anon_sym_Music] = ACTIONS(269),
    [anon_sym_music] = ACTIONS(269),
    [anon_sym_Composition] = ACTIONS(269),
    [anon_sym_composition] = ACTIONS(269),
    [anon_sym_Composer] = ACTIONS(269),
    [anon_sym_composer] = ACTIONS(269),
    [anon_sym_Compose] = ACTIONS(269),
    [anon_sym_compose] = ACTIONS(269),
    [anon_sym_Lyrics] = ACTIONS(269),
    [anon_sym_lyrics] = ACTIONS(269),
    [anon_sym_Lyricist] = ACTIONS(269),
    [anon_sym_lyricist] = ACTIONS(269),
    [anon_sym_Lyric] = ACTIONS(269),
    [anon_sym_lyric] = ACTIONS(269),
    [anon_sym_Arrangement] = ACTIONS(269),
    [anon_sym_arrangement] = ACTIONS(269),
    [anon_sym_Arranger] = ACTIONS(269),
    [anon_sym_arranger] = ACTIONS(269),
    [anon_sym_Arrange] = ACTIONS(269),
    [anon_sym_arrange] = ACTIONS(269),
    [anon_sym_Vocalist] = ACTIONS(269),
    [anon_sym_vocalist] = ACTIONS(269),
    [anon_sym_Vocal] = ACTIONS(269),
    [anon_sym_vocal] = ACTIONS(269),
    [anon_sym_Performer] = ACTIONS(269),
    [anon_sym_performer] = ACTIONS(269),
    [anon_sym_Illustration] = ACTIONS(269),
    [anon_sym_illustration] = ACTIONS(269),
    [anon_sym_Illustrator] = ACTIONS(269),
    [anon_sym_illustrator] = ACTIONS(269),
    [anon_sym_Illust] = ACTIONS(269),
    [anon_sym_illust] = ACTIONS(269),
    [anon_sym_Label] = ACTIONS(269),
    [anon_sym_label] = ACTIONS(269),
    [anon_sym_Circle] = ACTIONS(269),
    [anon_sym_circle] = ACTIONS(269),
    [anon_sym_Producer] = ACTIONS(269),
    [anon_sym_producer] = ACTIONS(269),
    [anon_sym_Recording] = ACTIONS(269),
    [anon_sym_recording] = ACTIONS(269),
    [anon_sym_GuestVocal] = ACTIONS(269),
    [anon_sym_Guestvocal] = ACTIONS(269),
    [anon_sym_guestvocal] = ACTIONS(269),
    [anon_sym_Chorus] = ACTIONS(269),
    [anon_sym_chorus] = ACTIONS(269),
    [anon_sym_Mixing] = ACTIONS(269),
    [anon_sym_mixing] = ACTIONS(269),
    [anon_sym_Mastering] = ACTIONS(269),
    [anon_sym_mastering] = ACTIONS(269),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(269),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(269),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(269),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(269),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(269),
    [anon_sym_u827au672fu5bb6] = ACTIONS(269),
    [anon_sym_u6b4cu5531] = ACTIONS(269),
    [anon_sym_u6b4c] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu66f2] = ACTIONS(269),
    [anon_sym_u7de8u66f2] = ACTIONS(269),
    [anon_sym_u7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5e] = ACTIONS(269),
    [anon_sym_u4f5cu8bcd] = ACTIONS(269),
    [anon_sym_u5382u724c] = ACTIONS(269),
    [anon_sym_u811au672c] = ACTIONS(269),
    [anon_sym_u63d2u56fe] = ACTIONS(269),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(269),
    [anon_sym_u51fau7248u65b9] = ACTIONS(269),
    [anon_sym_u5f55u97f3] = ACTIONS(269),
    [anon_sym_u539fu4f5c] = ACTIONS(269),
    [anon_sym_u58f0u4e50] = ACTIONS(269),
    [anon_sym_u4e50u5668] = ACTIONS(269),
    [anon_sym_u6df7u97f3] = ACTIONS(269),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(269),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_u300a] = ACTIONS(245),
    [aux_sym_song_title_token1] = ACTIONS(245),
    [sym__role_instrument] = ACTIONS(243),
    [anon_sym_Music] = ACTIONS(245),
    [anon_sym_music] = ACTIONS(245),
    [anon_sym_Composition] = ACTIONS(245),
    [anon_sym_composition] = ACTIONS(245),
    [anon_sym_Composer] = ACTIONS(245),
    [anon_sym_composer] = ACTIONS(245),
    [anon_sym_Compose] = ACTIONS(245),
    [anon_sym_compose] = ACTIONS(245),
    [anon_sym_Lyrics] = ACTIONS(245),
    [anon_sym_lyrics] = ACTIONS(245),
    [anon_sym_Lyricist] = ACTIONS(245),
    [anon_sym_lyricist] = ACTIONS(245),
    [anon_sym_Lyric] = ACTIONS(245),
    [anon_sym_lyric] = ACTIONS(245),
    [anon_sym_Arrangement] = ACTIONS(245),
    [anon_sym_arrangement] = ACTIONS(245),
    [anon_sym_Arranger] = ACTIONS(245),
    [anon_sym_arranger] = ACTIONS(245),
    [anon_sym_Arrange] = ACTIONS(245),
    [anon_sym_arrange] = ACTIONS(245),
    [anon_sym_Vocalist] = ACTIONS(245),
    [anon_sym_vocalist] = ACTIONS(245),
    [anon_sym_Vocal] = ACTIONS(245),
    [anon_sym_vocal] = ACTIONS(245),
    [anon_sym_Performer] = ACTIONS(245),
    [anon_sym_performer] = ACTIONS(245),
    [anon_sym_Illustration] = ACTIONS(245),
    [anon_sym_illustration] = ACTIONS(245),
    [anon_sym_Illustrator] = ACTIONS(245),
    [anon_sym_illustrator] = ACTIONS(245),
    [anon_sym_Illust] = ACTIONS(245),
    [anon_sym_illust] = ACTIONS(245),
    [anon_sym_Label] = ACTIONS(245),
    [anon_sym_label] = ACTIONS(245),
    [anon_sym_Circle] = ACTIONS(245),
    [anon_sym_circle] = ACTIONS(245),
    [anon_sym_Producer] = ACTIONS(245),
    [anon_sym_producer] = ACTIONS(245),
    [anon_sym_Recording] = ACTIONS(245),
    [anon_sym_recording] = ACTIONS(245),
    [anon_sym_GuestVocal] = ACTIONS(245),
    [anon_sym_Guestvocal] = ACTIONS(245),
    [anon_sym_guestvocal] = ACTIONS(245),
    [anon_sym_Chorus] = ACTIONS(245),
    [anon_sym_chorus] = ACTIONS(245),
    [anon_sym_Mixing] = ACTIONS(245),
    [anon_sym_mixing] = ACTIONS(245),
    [anon_sym_Mastering] = ACTIONS(245),
    [anon_sym_mastering] = ACTIONS(245),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(245),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(245),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(245),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(245),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(245),
    [anon_sym_u827au672fu5bb6] = ACTIONS(245),
    [anon_sym_u6b4cu5531] = ACTIONS(245),
    [anon_sym_u6b4c] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(245),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu66f2] = ACTIONS(245),
    [anon_sym_u7de8u66f2] = ACTIONS(245),
    [anon_sym_u7f16u66f2] = ACTIONS(245),
    [anon_sym_u4f5cu8a5e] = ACTIONS(245),
    [anon_sym_u4f5cu8bcd] = ACTIONS(245),
    [anon_sym_u5382u724c] = ACTIONS(245),
    [anon_sym_u811au672c] = ACTIONS(245),
    [anon_sym_u63d2u56fe] = ACTIONS(245),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(245),
    [anon_sym_u51fau7248u65b9] = ACTIONS(245),
    [anon_sym_u5f55u97f3] = ACTIONS(245),
    [anon_sym_u539fu4f5c] = ACTIONS(245),
    [anon_sym_u58f0u4e50] = ACTIONS(245),
    [anon_sym_u4e50u5668] = ACTIONS(245),
    [anon_sym_u6df7u97f3] = ACTIONS(245),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(245),
    [sym__sep] = ACTIONS(271),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_DISC] = ACTIONS(200),
    [anon_sym_u300a] = ACTIONS(200),
    [aux_sym_song_title_token1] = ACTIONS(200),
    [sym__role_instrument] = ACTIONS(198),
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
    [anon_sym_Vocalist] = ACTIONS(200),
    [anon_sym_vocalist] = ACTIONS(200),
    [anon_sym_Vocal] = ACTIONS(200),
    [anon_sym_vocal] = ACTIONS(200),
    [anon_sym_Performer] = ACTIONS(200),
    [anon_sym_performer] = ACTIONS(200),
    [anon_sym_Illustration] = ACTIONS(200),
    [anon_sym_illustration] = ACTIONS(200),
    [anon_sym_Illustrator] = ACTIONS(200),
    [anon_sym_illustrator] = ACTIONS(200),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(200),
    [anon_sym_u6b4cu5531] = ACTIONS(200),
    [anon_sym_u6b4c] = ACTIONS(200),
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
  [73] = {
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
    [anon_sym_Vocalist] = ACTIONS(273),
    [anon_sym_vocalist] = ACTIONS(273),
    [anon_sym_Vocal] = ACTIONS(273),
    [anon_sym_vocal] = ACTIONS(273),
    [anon_sym_Performer] = ACTIONS(273),
    [anon_sym_performer] = ACTIONS(273),
    [anon_sym_Illustration] = ACTIONS(273),
    [anon_sym_illustration] = ACTIONS(273),
    [anon_sym_Illustrator] = ACTIONS(273),
    [anon_sym_illustrator] = ACTIONS(273),
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
  [74] = {
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
    [anon_sym_Vocalist] = ACTIONS(281),
    [anon_sym_vocalist] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illustrator] = ACTIONS(281),
    [anon_sym_illustrator] = ACTIONS(281),
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
  [75] = {
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
    [anon_sym_Vocalist] = ACTIONS(281),
    [anon_sym_vocalist] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illustrator] = ACTIONS(281),
    [anon_sym_illustrator] = ACTIONS(281),
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
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_u300a] = ACTIONS(239),
    [aux_sym_song_title_token1] = ACTIONS(239),
    [sym__role_instrument] = ACTIONS(237),
    [anon_sym_Music] = ACTIONS(239),
    [anon_sym_music] = ACTIONS(239),
    [anon_sym_Composition] = ACTIONS(239),
    [anon_sym_composition] = ACTIONS(239),
    [anon_sym_Composer] = ACTIONS(239),
    [anon_sym_composer] = ACTIONS(239),
    [anon_sym_Compose] = ACTIONS(239),
    [anon_sym_compose] = ACTIONS(239),
    [anon_sym_Lyrics] = ACTIONS(239),
    [anon_sym_lyrics] = ACTIONS(239),
    [anon_sym_Lyricist] = ACTIONS(239),
    [anon_sym_lyricist] = ACTIONS(239),
    [anon_sym_Lyric] = ACTIONS(239),
    [anon_sym_lyric] = ACTIONS(239),
    [anon_sym_Arrangement] = ACTIONS(239),
    [anon_sym_arrangement] = ACTIONS(239),
    [anon_sym_Arranger] = ACTIONS(239),
    [anon_sym_arranger] = ACTIONS(239),
    [anon_sym_Arrange] = ACTIONS(239),
    [anon_sym_arrange] = ACTIONS(239),
    [anon_sym_Vocalist] = ACTIONS(239),
    [anon_sym_vocalist] = ACTIONS(239),
    [anon_sym_Vocal] = ACTIONS(239),
    [anon_sym_vocal] = ACTIONS(239),
    [anon_sym_Performer] = ACTIONS(239),
    [anon_sym_performer] = ACTIONS(239),
    [anon_sym_Illustration] = ACTIONS(239),
    [anon_sym_illustration] = ACTIONS(239),
    [anon_sym_Illustrator] = ACTIONS(239),
    [anon_sym_illustrator] = ACTIONS(239),
    [anon_sym_Illust] = ACTIONS(239),
    [anon_sym_illust] = ACTIONS(239),
    [anon_sym_Label] = ACTIONS(239),
    [anon_sym_label] = ACTIONS(239),
    [anon_sym_Circle] = ACTIONS(239),
    [anon_sym_circle] = ACTIONS(239),
    [anon_sym_Producer] = ACTIONS(239),
    [anon_sym_producer] = ACTIONS(239),
    [anon_sym_Recording] = ACTIONS(239),
    [anon_sym_recording] = ACTIONS(239),
    [anon_sym_GuestVocal] = ACTIONS(239),
    [anon_sym_Guestvocal] = ACTIONS(239),
    [anon_sym_guestvocal] = ACTIONS(239),
    [anon_sym_Chorus] = ACTIONS(239),
    [anon_sym_chorus] = ACTIONS(239),
    [anon_sym_Mixing] = ACTIONS(239),
    [anon_sym_mixing] = ACTIONS(239),
    [anon_sym_Mastering] = ACTIONS(239),
    [anon_sym_mastering] = ACTIONS(239),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(239),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(239),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(239),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(239),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(239),
    [anon_sym_u827au672fu5bb6] = ACTIONS(239),
    [anon_sym_u6b4cu5531] = ACTIONS(239),
    [anon_sym_u6b4c] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(239),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu66f2] = ACTIONS(239),
    [anon_sym_u7de8u66f2] = ACTIONS(239),
    [anon_sym_u7f16u66f2] = ACTIONS(239),
    [anon_sym_u4f5cu8a5e] = ACTIONS(239),
    [anon_sym_u4f5cu8bcd] = ACTIONS(239),
    [anon_sym_u5382u724c] = ACTIONS(239),
    [anon_sym_u811au672c] = ACTIONS(239),
    [anon_sym_u63d2u56fe] = ACTIONS(239),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(239),
    [anon_sym_u51fau7248u65b9] = ACTIONS(239),
    [anon_sym_u5f55u97f3] = ACTIONS(239),
    [anon_sym_u539fu4f5c] = ACTIONS(239),
    [anon_sym_u58f0u4e50] = ACTIONS(239),
    [anon_sym_u4e50u5668] = ACTIONS(239),
    [anon_sym_u6df7u97f3] = ACTIONS(239),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(239),
    [sym__sep] = ACTIONS(283),
  },
  [77] = {
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
    [anon_sym_Vocalist] = ACTIONS(281),
    [anon_sym_vocalist] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illustrator] = ACTIONS(281),
    [anon_sym_illustrator] = ACTIONS(281),
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
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_u300a] = ACTIONS(35),
    [aux_sym_song_title_token1] = ACTIONS(35),
    [sym__role_instrument] = ACTIONS(33),
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
    [anon_sym_Vocalist] = ACTIONS(35),
    [anon_sym_vocalist] = ACTIONS(35),
    [anon_sym_Vocal] = ACTIONS(35),
    [anon_sym_vocal] = ACTIONS(35),
    [anon_sym_Performer] = ACTIONS(35),
    [anon_sym_performer] = ACTIONS(35),
    [anon_sym_Illustration] = ACTIONS(35),
    [anon_sym_illustration] = ACTIONS(35),
    [anon_sym_Illustrator] = ACTIONS(35),
    [anon_sym_illustrator] = ACTIONS(35),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(35),
    [anon_sym_u6b4cu5531] = ACTIONS(35),
    [anon_sym_u6b4c] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu66f2] = ACTIONS(35),
    [anon_sym_u7de8u66f2] = ACTIONS(35),
    [anon_sym_u7f16u66f2] = ACTIONS(35),
    [anon_sym_u4f5cu8a5e] = ACTIONS(35),
    [anon_sym_u4f5cu8bcd] = ACTIONS(35),
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
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_u300a] = ACTIONS(259),
    [aux_sym_song_title_token1] = ACTIONS(259),
    [sym__role_instrument] = ACTIONS(257),
    [anon_sym_Music] = ACTIONS(259),
    [anon_sym_music] = ACTIONS(259),
    [anon_sym_Composition] = ACTIONS(259),
    [anon_sym_composition] = ACTIONS(259),
    [anon_sym_Composer] = ACTIONS(259),
    [anon_sym_composer] = ACTIONS(259),
    [anon_sym_Compose] = ACTIONS(259),
    [anon_sym_compose] = ACTIONS(259),
    [anon_sym_Lyrics] = ACTIONS(259),
    [anon_sym_lyrics] = ACTIONS(259),
    [anon_sym_Lyricist] = ACTIONS(259),
    [anon_sym_lyricist] = ACTIONS(259),
    [anon_sym_Lyric] = ACTIONS(259),
    [anon_sym_lyric] = ACTIONS(259),
    [anon_sym_Arrangement] = ACTIONS(259),
    [anon_sym_arrangement] = ACTIONS(259),
    [anon_sym_Arranger] = ACTIONS(259),
    [anon_sym_arranger] = ACTIONS(259),
    [anon_sym_Arrange] = ACTIONS(259),
    [anon_sym_arrange] = ACTIONS(259),
    [anon_sym_Vocalist] = ACTIONS(259),
    [anon_sym_vocalist] = ACTIONS(259),
    [anon_sym_Vocal] = ACTIONS(259),
    [anon_sym_vocal] = ACTIONS(259),
    [anon_sym_Performer] = ACTIONS(259),
    [anon_sym_performer] = ACTIONS(259),
    [anon_sym_Illustration] = ACTIONS(259),
    [anon_sym_illustration] = ACTIONS(259),
    [anon_sym_Illustrator] = ACTIONS(259),
    [anon_sym_illustrator] = ACTIONS(259),
    [anon_sym_Illust] = ACTIONS(259),
    [anon_sym_illust] = ACTIONS(259),
    [anon_sym_Label] = ACTIONS(259),
    [anon_sym_label] = ACTIONS(259),
    [anon_sym_Circle] = ACTIONS(259),
    [anon_sym_circle] = ACTIONS(259),
    [anon_sym_Producer] = ACTIONS(259),
    [anon_sym_producer] = ACTIONS(259),
    [anon_sym_Recording] = ACTIONS(259),
    [anon_sym_recording] = ACTIONS(259),
    [anon_sym_GuestVocal] = ACTIONS(259),
    [anon_sym_Guestvocal] = ACTIONS(259),
    [anon_sym_guestvocal] = ACTIONS(259),
    [anon_sym_Chorus] = ACTIONS(259),
    [anon_sym_chorus] = ACTIONS(259),
    [anon_sym_Mixing] = ACTIONS(259),
    [anon_sym_mixing] = ACTIONS(259),
    [anon_sym_Mastering] = ACTIONS(259),
    [anon_sym_mastering] = ACTIONS(259),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(259),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(259),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(259),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(259),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(259),
    [anon_sym_u827au672fu5bb6] = ACTIONS(259),
    [anon_sym_u6b4cu5531] = ACTIONS(259),
    [anon_sym_u6b4c] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(259),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu66f2] = ACTIONS(259),
    [anon_sym_u7de8u66f2] = ACTIONS(259),
    [anon_sym_u7f16u66f2] = ACTIONS(259),
    [anon_sym_u4f5cu8a5e] = ACTIONS(259),
    [anon_sym_u4f5cu8bcd] = ACTIONS(259),
    [anon_sym_u5382u724c] = ACTIONS(259),
    [anon_sym_u811au672c] = ACTIONS(259),
    [anon_sym_u63d2u56fe] = ACTIONS(259),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(259),
    [anon_sym_u51fau7248u65b9] = ACTIONS(259),
    [anon_sym_u5f55u97f3] = ACTIONS(259),
    [anon_sym_u539fu4f5c] = ACTIONS(259),
    [anon_sym_u58f0u4e50] = ACTIONS(259),
    [anon_sym_u4e50u5668] = ACTIONS(259),
    [anon_sym_u6df7u97f3] = ACTIONS(259),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(259),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_u300a] = ACTIONS(269),
    [aux_sym_song_title_token1] = ACTIONS(269),
    [sym__role_instrument] = ACTIONS(267),
    [anon_sym_Music] = ACTIONS(269),
    [anon_sym_music] = ACTIONS(269),
    [anon_sym_Composition] = ACTIONS(269),
    [anon_sym_composition] = ACTIONS(269),
    [anon_sym_Composer] = ACTIONS(269),
    [anon_sym_composer] = ACTIONS(269),
    [anon_sym_Compose] = ACTIONS(269),
    [anon_sym_compose] = ACTIONS(269),
    [anon_sym_Lyrics] = ACTIONS(269),
    [anon_sym_lyrics] = ACTIONS(269),
    [anon_sym_Lyricist] = ACTIONS(269),
    [anon_sym_lyricist] = ACTIONS(269),
    [anon_sym_Lyric] = ACTIONS(269),
    [anon_sym_lyric] = ACTIONS(269),
    [anon_sym_Arrangement] = ACTIONS(269),
    [anon_sym_arrangement] = ACTIONS(269),
    [anon_sym_Arranger] = ACTIONS(269),
    [anon_sym_arranger] = ACTIONS(269),
    [anon_sym_Arrange] = ACTIONS(269),
    [anon_sym_arrange] = ACTIONS(269),
    [anon_sym_Vocalist] = ACTIONS(269),
    [anon_sym_vocalist] = ACTIONS(269),
    [anon_sym_Vocal] = ACTIONS(269),
    [anon_sym_vocal] = ACTIONS(269),
    [anon_sym_Performer] = ACTIONS(269),
    [anon_sym_performer] = ACTIONS(269),
    [anon_sym_Illustration] = ACTIONS(269),
    [anon_sym_illustration] = ACTIONS(269),
    [anon_sym_Illustrator] = ACTIONS(269),
    [anon_sym_illustrator] = ACTIONS(269),
    [anon_sym_Illust] = ACTIONS(269),
    [anon_sym_illust] = ACTIONS(269),
    [anon_sym_Label] = ACTIONS(269),
    [anon_sym_label] = ACTIONS(269),
    [anon_sym_Circle] = ACTIONS(269),
    [anon_sym_circle] = ACTIONS(269),
    [anon_sym_Producer] = ACTIONS(269),
    [anon_sym_producer] = ACTIONS(269),
    [anon_sym_Recording] = ACTIONS(269),
    [anon_sym_recording] = ACTIONS(269),
    [anon_sym_GuestVocal] = ACTIONS(269),
    [anon_sym_Guestvocal] = ACTIONS(269),
    [anon_sym_guestvocal] = ACTIONS(269),
    [anon_sym_Chorus] = ACTIONS(269),
    [anon_sym_chorus] = ACTIONS(269),
    [anon_sym_Mixing] = ACTIONS(269),
    [anon_sym_mixing] = ACTIONS(269),
    [anon_sym_Mastering] = ACTIONS(269),
    [anon_sym_mastering] = ACTIONS(269),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(269),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(269),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(269),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(269),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(269),
    [anon_sym_u827au672fu5bb6] = ACTIONS(269),
    [anon_sym_u6b4cu5531] = ACTIONS(269),
    [anon_sym_u6b4c] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(269),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu66f2] = ACTIONS(269),
    [anon_sym_u7de8u66f2] = ACTIONS(269),
    [anon_sym_u7f16u66f2] = ACTIONS(269),
    [anon_sym_u4f5cu8a5e] = ACTIONS(269),
    [anon_sym_u4f5cu8bcd] = ACTIONS(269),
    [anon_sym_u5382u724c] = ACTIONS(269),
    [anon_sym_u811au672c] = ACTIONS(269),
    [anon_sym_u63d2u56fe] = ACTIONS(269),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(269),
    [anon_sym_u51fau7248u65b9] = ACTIONS(269),
    [anon_sym_u5f55u97f3] = ACTIONS(269),
    [anon_sym_u539fu4f5c] = ACTIONS(269),
    [anon_sym_u58f0u4e50] = ACTIONS(269),
    [anon_sym_u4e50u5668] = ACTIONS(269),
    [anon_sym_u6df7u97f3] = ACTIONS(269),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(269),
  },
  [81] = {
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
    [anon_sym_Vocalist] = ACTIONS(255),
    [anon_sym_vocalist] = ACTIONS(255),
    [anon_sym_Vocal] = ACTIONS(255),
    [anon_sym_vocal] = ACTIONS(255),
    [anon_sym_Performer] = ACTIONS(255),
    [anon_sym_performer] = ACTIONS(255),
    [anon_sym_Illustration] = ACTIONS(255),
    [anon_sym_illustration] = ACTIONS(255),
    [anon_sym_Illustrator] = ACTIONS(255),
    [anon_sym_illustrator] = ACTIONS(255),
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
  },
  [82] = {
    [anon_sym_u300a2] = ACTIONS(229),
    [aux_sym_creator_name_token1] = ACTIONS(229),
    [sym__role_instrument] = ACTIONS(285),
    [anon_sym_Music] = ACTIONS(229),
    [anon_sym_music] = ACTIONS(229),
    [anon_sym_Composition] = ACTIONS(229),
    [anon_sym_composition] = ACTIONS(229),
    [anon_sym_Composer] = ACTIONS(229),
    [anon_sym_composer] = ACTIONS(229),
    [anon_sym_Compose] = ACTIONS(229),
    [anon_sym_compose] = ACTIONS(229),
    [anon_sym_Lyrics] = ACTIONS(229),
    [anon_sym_lyrics] = ACTIONS(229),
    [anon_sym_Lyricist] = ACTIONS(229),
    [anon_sym_lyricist] = ACTIONS(229),
    [anon_sym_Lyric] = ACTIONS(229),
    [anon_sym_lyric] = ACTIONS(229),
    [anon_sym_Arrangement] = ACTIONS(229),
    [anon_sym_arrangement] = ACTIONS(229),
    [anon_sym_Arranger] = ACTIONS(229),
    [anon_sym_arranger] = ACTIONS(229),
    [anon_sym_Arrange] = ACTIONS(229),
    [anon_sym_arrange] = ACTIONS(229),
    [anon_sym_Vocalist] = ACTIONS(229),
    [anon_sym_vocalist] = ACTIONS(229),
    [anon_sym_Vocal] = ACTIONS(229),
    [anon_sym_vocal] = ACTIONS(229),
    [anon_sym_Performer] = ACTIONS(229),
    [anon_sym_performer] = ACTIONS(229),
    [anon_sym_Illustration] = ACTIONS(229),
    [anon_sym_illustration] = ACTIONS(229),
    [anon_sym_Illustrator] = ACTIONS(229),
    [anon_sym_illustrator] = ACTIONS(229),
    [anon_sym_Illust] = ACTIONS(229),
    [anon_sym_illust] = ACTIONS(229),
    [anon_sym_Label] = ACTIONS(229),
    [anon_sym_label] = ACTIONS(229),
    [anon_sym_Circle] = ACTIONS(229),
    [anon_sym_circle] = ACTIONS(229),
    [anon_sym_Producer] = ACTIONS(229),
    [anon_sym_producer] = ACTIONS(229),
    [anon_sym_Recording] = ACTIONS(229),
    [anon_sym_recording] = ACTIONS(229),
    [anon_sym_GuestVocal] = ACTIONS(229),
    [anon_sym_Guestvocal] = ACTIONS(229),
    [anon_sym_guestvocal] = ACTIONS(229),
    [anon_sym_Chorus] = ACTIONS(229),
    [anon_sym_chorus] = ACTIONS(229),
    [anon_sym_Mixing] = ACTIONS(229),
    [anon_sym_mixing] = ACTIONS(229),
    [anon_sym_Mastering] = ACTIONS(229),
    [anon_sym_mastering] = ACTIONS(229),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(229),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(229),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(229),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(229),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(229),
    [anon_sym_u827au672fu5bb6] = ACTIONS(229),
    [anon_sym_u6b4cu5531] = ACTIONS(229),
    [anon_sym_u6b4c] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu66f2] = ACTIONS(229),
    [anon_sym_u7de8u66f2] = ACTIONS(229),
    [anon_sym_u7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5e] = ACTIONS(229),
    [anon_sym_u4f5cu8bcd] = ACTIONS(229),
    [anon_sym_u5382u724c] = ACTIONS(229),
    [anon_sym_u811au672c] = ACTIONS(229),
    [anon_sym_u63d2u56fe] = ACTIONS(229),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(229),
    [anon_sym_u51fau7248u65b9] = ACTIONS(229),
    [anon_sym_u5f55u97f3] = ACTIONS(229),
    [anon_sym_u539fu4f5c] = ACTIONS(229),
    [anon_sym_u58f0u4e50] = ACTIONS(229),
    [anon_sym_u4e50u5668] = ACTIONS(229),
    [anon_sym_u6df7u97f3] = ACTIONS(229),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(229),
    [sym_parts] = ACTIONS(229),
  },
  [83] = {
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
    [anon_sym_Vocalist] = ACTIONS(281),
    [anon_sym_vocalist] = ACTIONS(281),
    [anon_sym_Vocal] = ACTIONS(281),
    [anon_sym_vocal] = ACTIONS(281),
    [anon_sym_Performer] = ACTIONS(281),
    [anon_sym_performer] = ACTIONS(281),
    [anon_sym_Illustration] = ACTIONS(281),
    [anon_sym_illustration] = ACTIONS(281),
    [anon_sym_Illustrator] = ACTIONS(281),
    [anon_sym_illustrator] = ACTIONS(281),
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
  [84] = {
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
    [anon_sym_Vocalist] = ACTIONS(287),
    [anon_sym_vocalist] = ACTIONS(287),
    [anon_sym_Vocal] = ACTIONS(287),
    [anon_sym_vocal] = ACTIONS(287),
    [anon_sym_Performer] = ACTIONS(287),
    [anon_sym_performer] = ACTIONS(287),
    [anon_sym_Illustration] = ACTIONS(287),
    [anon_sym_illustration] = ACTIONS(287),
    [anon_sym_Illustrator] = ACTIONS(287),
    [anon_sym_illustrator] = ACTIONS(287),
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
  },
  [85] = {
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
    [anon_sym_Vocalist] = ACTIONS(25),
    [anon_sym_vocalist] = ACTIONS(25),
    [anon_sym_Vocal] = ACTIONS(25),
    [anon_sym_vocal] = ACTIONS(25),
    [anon_sym_Performer] = ACTIONS(25),
    [anon_sym_performer] = ACTIONS(25),
    [anon_sym_Illustration] = ACTIONS(25),
    [anon_sym_illustration] = ACTIONS(25),
    [anon_sym_Illustrator] = ACTIONS(25),
    [anon_sym_illustrator] = ACTIONS(25),
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
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_u300a] = ACTIONS(200),
    [aux_sym_song_title_token1] = ACTIONS(200),
    [sym__role_instrument] = ACTIONS(198),
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
    [anon_sym_Vocalist] = ACTIONS(200),
    [anon_sym_vocalist] = ACTIONS(200),
    [anon_sym_Vocal] = ACTIONS(200),
    [anon_sym_vocal] = ACTIONS(200),
    [anon_sym_Performer] = ACTIONS(200),
    [anon_sym_performer] = ACTIONS(200),
    [anon_sym_Illustration] = ACTIONS(200),
    [anon_sym_illustration] = ACTIONS(200),
    [anon_sym_Illustrator] = ACTIONS(200),
    [anon_sym_illustrator] = ACTIONS(200),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(200),
    [anon_sym_u6b4cu5531] = ACTIONS(200),
    [anon_sym_u6b4c] = ACTIONS(200),
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
  [87] = {
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
    [anon_sym_Vocalist] = ACTIONS(13),
    [anon_sym_vocalist] = ACTIONS(13),
    [anon_sym_Vocal] = ACTIONS(13),
    [anon_sym_vocal] = ACTIONS(13),
    [anon_sym_Performer] = ACTIONS(13),
    [anon_sym_performer] = ACTIONS(13),
    [anon_sym_Illustration] = ACTIONS(13),
    [anon_sym_illustration] = ACTIONS(13),
    [anon_sym_Illustrator] = ACTIONS(13),
    [anon_sym_illustrator] = ACTIONS(13),
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
  [88] = {
    [anon_sym_DISC] = ACTIONS(291),
    [anon_sym_u300a] = ACTIONS(291),
    [aux_sym_song_title_token1] = ACTIONS(291),
    [sym__role_instrument] = ACTIONS(293),
    [anon_sym_Music] = ACTIONS(291),
    [anon_sym_music] = ACTIONS(291),
    [anon_sym_Composition] = ACTIONS(291),
    [anon_sym_composition] = ACTIONS(291),
    [anon_sym_Composer] = ACTIONS(291),
    [anon_sym_composer] = ACTIONS(291),
    [anon_sym_Compose] = ACTIONS(291),
    [anon_sym_compose] = ACTIONS(291),
    [anon_sym_Lyrics] = ACTIONS(291),
    [anon_sym_lyrics] = ACTIONS(291),
    [anon_sym_Lyricist] = ACTIONS(291),
    [anon_sym_lyricist] = ACTIONS(291),
    [anon_sym_Lyric] = ACTIONS(291),
    [anon_sym_lyric] = ACTIONS(291),
    [anon_sym_Arrangement] = ACTIONS(291),
    [anon_sym_arrangement] = ACTIONS(291),
    [anon_sym_Arranger] = ACTIONS(291),
    [anon_sym_arranger] = ACTIONS(291),
    [anon_sym_Arrange] = ACTIONS(291),
    [anon_sym_arrange] = ACTIONS(291),
    [anon_sym_Vocalist] = ACTIONS(291),
    [anon_sym_vocalist] = ACTIONS(291),
    [anon_sym_Vocal] = ACTIONS(291),
    [anon_sym_vocal] = ACTIONS(291),
    [anon_sym_Performer] = ACTIONS(291),
    [anon_sym_performer] = ACTIONS(291),
    [anon_sym_Illustration] = ACTIONS(291),
    [anon_sym_illustration] = ACTIONS(291),
    [anon_sym_Illustrator] = ACTIONS(291),
    [anon_sym_illustrator] = ACTIONS(291),
    [anon_sym_Illust] = ACTIONS(291),
    [anon_sym_illust] = ACTIONS(291),
    [anon_sym_Label] = ACTIONS(291),
    [anon_sym_label] = ACTIONS(291),
    [anon_sym_Circle] = ACTIONS(291),
    [anon_sym_circle] = ACTIONS(291),
    [anon_sym_Producer] = ACTIONS(291),
    [anon_sym_producer] = ACTIONS(291),
    [anon_sym_Recording] = ACTIONS(291),
    [anon_sym_recording] = ACTIONS(291),
    [anon_sym_GuestVocal] = ACTIONS(291),
    [anon_sym_Guestvocal] = ACTIONS(291),
    [anon_sym_guestvocal] = ACTIONS(291),
    [anon_sym_Chorus] = ACTIONS(291),
    [anon_sym_chorus] = ACTIONS(291),
    [anon_sym_Mixing] = ACTIONS(291),
    [anon_sym_mixing] = ACTIONS(291),
    [anon_sym_Mastering] = ACTIONS(291),
    [anon_sym_mastering] = ACTIONS(291),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(291),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(291),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(291),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(291),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(291),
    [anon_sym_u827au672fu5bb6] = ACTIONS(291),
    [anon_sym_u6b4cu5531] = ACTIONS(291),
    [anon_sym_u6b4c] = ACTIONS(291),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(291),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(291),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(291),
    [anon_sym_u4f5cu66f2] = ACTIONS(291),
    [anon_sym_u7de8u66f2] = ACTIONS(291),
    [anon_sym_u7f16u66f2] = ACTIONS(291),
    [anon_sym_u4f5cu8a5e] = ACTIONS(291),
    [anon_sym_u4f5cu8bcd] = ACTIONS(291),
    [anon_sym_u5382u724c] = ACTIONS(291),
    [anon_sym_u811au672c] = ACTIONS(291),
    [anon_sym_u63d2u56fe] = ACTIONS(291),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(291),
    [anon_sym_u51fau7248u65b9] = ACTIONS(291),
    [anon_sym_u5f55u97f3] = ACTIONS(291),
    [anon_sym_u539fu4f5c] = ACTIONS(291),
    [anon_sym_u58f0u4e50] = ACTIONS(291),
    [anon_sym_u4e50u5668] = ACTIONS(291),
    [anon_sym_u6df7u97f3] = ACTIONS(291),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(291),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_u300a] = ACTIONS(45),
    [aux_sym_song_title_token1] = ACTIONS(45),
    [sym__role_instrument] = ACTIONS(43),
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
    [anon_sym_Vocalist] = ACTIONS(45),
    [anon_sym_vocalist] = ACTIONS(45),
    [anon_sym_Vocal] = ACTIONS(45),
    [anon_sym_vocal] = ACTIONS(45),
    [anon_sym_Performer] = ACTIONS(45),
    [anon_sym_performer] = ACTIONS(45),
    [anon_sym_Illustration] = ACTIONS(45),
    [anon_sym_illustration] = ACTIONS(45),
    [anon_sym_Illustrator] = ACTIONS(45),
    [anon_sym_illustrator] = ACTIONS(45),
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
    [anon_sym_u827au672fu5bb6] = ACTIONS(45),
    [anon_sym_u6b4cu5531] = ACTIONS(45),
    [anon_sym_u6b4c] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu66f2] = ACTIONS(45),
    [anon_sym_u7de8u66f2] = ACTIONS(45),
    [anon_sym_u7f16u66f2] = ACTIONS(45),
    [anon_sym_u4f5cu8a5e] = ACTIONS(45),
    [anon_sym_u4f5cu8bcd] = ACTIONS(45),
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
  },
  [90] = {
    [anon_sym_u300a2] = ACTIONS(229),
    [aux_sym_creator_name_token1] = ACTIONS(229),
    [sym__role_instrument] = ACTIONS(285),
    [anon_sym_Music] = ACTIONS(229),
    [anon_sym_music] = ACTIONS(229),
    [anon_sym_Composition] = ACTIONS(229),
    [anon_sym_composition] = ACTIONS(229),
    [anon_sym_Composer] = ACTIONS(229),
    [anon_sym_composer] = ACTIONS(229),
    [anon_sym_Compose] = ACTIONS(229),
    [anon_sym_compose] = ACTIONS(229),
    [anon_sym_Lyrics] = ACTIONS(229),
    [anon_sym_lyrics] = ACTIONS(229),
    [anon_sym_Lyricist] = ACTIONS(229),
    [anon_sym_lyricist] = ACTIONS(229),
    [anon_sym_Lyric] = ACTIONS(229),
    [anon_sym_lyric] = ACTIONS(229),
    [anon_sym_Arrangement] = ACTIONS(229),
    [anon_sym_arrangement] = ACTIONS(229),
    [anon_sym_Arranger] = ACTIONS(229),
    [anon_sym_arranger] = ACTIONS(229),
    [anon_sym_Arrange] = ACTIONS(229),
    [anon_sym_arrange] = ACTIONS(229),
    [anon_sym_Vocalist] = ACTIONS(229),
    [anon_sym_vocalist] = ACTIONS(229),
    [anon_sym_Vocal] = ACTIONS(229),
    [anon_sym_vocal] = ACTIONS(229),
    [anon_sym_Performer] = ACTIONS(229),
    [anon_sym_performer] = ACTIONS(229),
    [anon_sym_Illustration] = ACTIONS(229),
    [anon_sym_illustration] = ACTIONS(229),
    [anon_sym_Illustrator] = ACTIONS(229),
    [anon_sym_illustrator] = ACTIONS(229),
    [anon_sym_Illust] = ACTIONS(229),
    [anon_sym_illust] = ACTIONS(229),
    [anon_sym_Label] = ACTIONS(229),
    [anon_sym_label] = ACTIONS(229),
    [anon_sym_Circle] = ACTIONS(229),
    [anon_sym_circle] = ACTIONS(229),
    [anon_sym_Producer] = ACTIONS(229),
    [anon_sym_producer] = ACTIONS(229),
    [anon_sym_Recording] = ACTIONS(229),
    [anon_sym_recording] = ACTIONS(229),
    [anon_sym_GuestVocal] = ACTIONS(229),
    [anon_sym_Guestvocal] = ACTIONS(229),
    [anon_sym_guestvocal] = ACTIONS(229),
    [anon_sym_Chorus] = ACTIONS(229),
    [anon_sym_chorus] = ACTIONS(229),
    [anon_sym_Mixing] = ACTIONS(229),
    [anon_sym_mixing] = ACTIONS(229),
    [anon_sym_Mastering] = ACTIONS(229),
    [anon_sym_mastering] = ACTIONS(229),
    [anon_sym_u30dcu30fcu30abu30eb] = ACTIONS(229),
    [anon_sym_u30a2u30ecu30f3u30b8] = ACTIONS(229),
    [anon_sym_u30a4u30e9u30b9u30c8] = ACTIONS(229),
    [anon_sym_u30ecu30fcu30d9u30eb] = ACTIONS(229),
    [anon_sym_u30deu30b9u30bfu30eau30f3u30b0] = ACTIONS(229),
    [anon_sym_u827au672fu5bb6] = ACTIONS(229),
    [anon_sym_u6b4cu5531] = ACTIONS(229),
    [anon_sym_u6b4c] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu4f5cu7de8u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu4f5cu7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu4f5cu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu4f5cu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5eu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8bcdu66f2] = ACTIONS(229),
    [anon_sym_u4f5cu7de8u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu66f2] = ACTIONS(229),
    [anon_sym_u7de8u66f2] = ACTIONS(229),
    [anon_sym_u7f16u66f2] = ACTIONS(229),
    [anon_sym_u4f5cu8a5e] = ACTIONS(229),
    [anon_sym_u4f5cu8bcd] = ACTIONS(229),
    [anon_sym_u5382u724c] = ACTIONS(229),
    [anon_sym_u811au672c] = ACTIONS(229),
    [anon_sym_u63d2u56fe] = ACTIONS(229),
    [anon_sym_u5236u4f5cu4eba] = ACTIONS(229),
    [anon_sym_u51fau7248u65b9] = ACTIONS(229),
    [anon_sym_u5f55u97f3] = ACTIONS(229),
    [anon_sym_u539fu4f5c] = ACTIONS(229),
    [anon_sym_u58f0u4e50] = ACTIONS(229),
    [anon_sym_u4e50u5668] = ACTIONS(229),
    [anon_sym_u6df7u97f3] = ACTIONS(229),
    [anon_sym_u6bcdu5e26u5236u4f5c] = ACTIONS(229),
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
    STATE(13), 1,
      sym__quotable_song_title_maybecomment,
    STATE(32), 1,
      aux_sym_song_title_repeat1,
    STATE(43), 1,
      sym__quotable_song_title,
    STATE(49), 1,
      sym_song_title,
    STATE(96), 2,
      aux_sym__disc,
      sym_song,
    STATE(116), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      anon_sym_DISC,
    ACTIONS(299), 1,
      anon_sym_u300a,
    ACTIONS(302), 1,
      aux_sym_song_title_token1,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(23), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(34), 1,
      sym_song_title,
    STATE(92), 2,
      aux_sym__disc,
      sym_song,
  [59] = 9,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_DISC,
    ACTIONS(309), 1,
      anon_sym_u300a,
    ACTIONS(311), 1,
      aux_sym_song_title_token1,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(23), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(34), 1,
      sym_song_title,
    STATE(92), 2,
      aux_sym__disc,
      sym_song,
  [88] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym__quotable_song_title_maybecomment,
    STATE(32), 1,
      aux_sym_song_title_repeat1,
    STATE(43), 1,
      sym__quotable_song_title,
    STATE(49), 1,
      sym_song_title,
    STATE(95), 2,
      aux_sym__disc,
      sym_song,
  [114] = 8,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_u300a,
    ACTIONS(318), 1,
      aux_sym_song_title_token1,
    STATE(13), 1,
      sym__quotable_song_title_maybecomment,
    STATE(32), 1,
      aux_sym_song_title_repeat1,
    STATE(43), 1,
      sym__quotable_song_title,
    STATE(49), 1,
      sym_song_title,
    STATE(95), 2,
      aux_sym__disc,
      sym_song,
  [140] = 8,
    ACTIONS(5), 1,
      anon_sym_u300a,
    ACTIONS(7), 1,
      aux_sym_song_title_token1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym__quotable_song_title_maybecomment,
    STATE(32), 1,
      aux_sym_song_title_repeat1,
    STATE(43), 1,
      sym__quotable_song_title,
    STATE(49), 1,
      sym_song_title,
    STATE(95), 2,
      aux_sym__disc,
      sym_song,
  [166] = 8,
    ACTIONS(17), 1,
      anon_sym_u300a2,
    ACTIONS(19), 1,
      aux_sym_creator_name_token1,
    ACTIONS(23), 1,
      sym_parts,
    STATE(99), 1,
      aux_sym_creator_name_repeat1,
    STATE(104), 1,
      sym_creator_name,
    STATE(105), 1,
      sym__quotable_creator_name,
    STATE(128), 1,
      sym__quotable_creator_field,
    STATE(133), 1,
      sym__quotable_creator_field_maybeparts,
  [191] = 7,
    ACTIONS(309), 1,
      anon_sym_u300a,
    ACTIONS(311), 1,
      aux_sym_song_title_token1,
    STATE(9), 1,
      sym__quotable_song_title_maybecomment,
    STATE(23), 1,
      aux_sym_song_title_repeat1,
    STATE(33), 1,
      sym__quotable_song_title,
    STATE(34), 1,
      sym_song_title,
    STATE(93), 2,
      aux_sym__disc,
      sym_song,
  [214] = 3,
    ACTIONS(323), 1,
      aux_sym_creator_name_token1,
    STATE(100), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(63), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [228] = 3,
    ACTIONS(325), 1,
      aux_sym_creator_name_token1,
    STATE(100), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(69), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [242] = 6,
    ACTIONS(51), 1,
      anon_sym_u300a2,
    ACTIONS(53), 1,
      aux_sym_creator_name_token1,
    STATE(15), 1,
      aux_sym_creator_name_repeat1,
    STATE(35), 1,
      sym__quotable_creator_name,
    STATE(36), 1,
      sym_creator_name,
    STATE(58), 1,
      sym__quotable_creator_field,
  [261] = 6,
    ACTIONS(39), 1,
      anon_sym_u300a2,
    ACTIONS(41), 1,
      aux_sym_creator_name_token1,
    STATE(10), 1,
      aux_sym_creator_name_repeat1,
    STATE(25), 1,
      sym_creator_name,
    STATE(27), 1,
      sym__quotable_creator_name,
    STATE(48), 1,
      sym__quotable_creator_field,
  [280] = 1,
    ACTIONS(122), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [288] = 1,
    ACTIONS(118), 5,
      anon_sym_LF,
      aux_sym__quotable_creator_field_token1,
      aux_sym__quotable_creator_field_token3,
      sym_parts,
      sym__sep,
  [296] = 3,
    ACTIONS(328), 1,
      aux_sym__quotable_creator_field_token1,
    ACTIONS(330), 1,
      aux_sym__quotable_creator_field_token3,
    ACTIONS(126), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [308] = 5,
    ACTIONS(332), 1,
      anon_sym_u300a2,
    ACTIONS(334), 1,
      aux_sym_creator_name_token1,
    STATE(119), 1,
      aux_sym_creator_name_repeat1,
    STATE(139), 1,
      sym__quotable_creator_name,
    STATE(162), 1,
      sym_creator_name,
  [324] = 5,
    ACTIONS(336), 1,
      anon_sym_u300a2,
    ACTIONS(338), 1,
      aux_sym_creator_name_token1,
    STATE(109), 1,
      aux_sym_creator_name_repeat1,
    STATE(122), 1,
      sym_creator_name,
    STATE(126), 1,
      sym__quotable_creator_name,
  [340] = 5,
    ACTIONS(332), 1,
      anon_sym_u300a2,
    ACTIONS(334), 1,
      aux_sym_creator_name_token1,
    STATE(119), 1,
      aux_sym_creator_name_repeat1,
    STATE(153), 1,
      sym__quotable_creator_name,
    STATE(162), 1,
      sym_creator_name,
  [356] = 3,
    ACTIONS(340), 1,
      aux_sym_creator_name_token1,
    STATE(111), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(63), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [368] = 5,
    ACTIONS(342), 1,
      anon_sym_u300a2,
    ACTIONS(344), 1,
      aux_sym_creator_name_token1,
    STATE(28), 1,
      aux_sym_creator_name_repeat1,
    STATE(50), 1,
      sym__quotable_creator_name,
    STATE(54), 1,
      sym_creator_name,
  [384] = 3,
    ACTIONS(346), 1,
      aux_sym_creator_name_token1,
    STATE(111), 1,
      aux_sym_creator_name_repeat1,
    ACTIONS(69), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [396] = 5,
    ACTIONS(349), 1,
      anon_sym_u300a2,
    ACTIONS(351), 1,
      aux_sym_creator_name_token1,
    STATE(31), 1,
      aux_sym_creator_name_repeat1,
    STATE(57), 1,
      sym__quotable_creator_name,
    STATE(62), 1,
      sym_creator_name,
  [412] = 5,
    ACTIONS(332), 1,
      anon_sym_u300a2,
    ACTIONS(334), 1,
      aux_sym_creator_name_token1,
    STATE(119), 1,
      aux_sym_creator_name_repeat1,
    STATE(149), 1,
      sym__quotable_creator_name,
    STATE(162), 1,
      sym_creator_name,
  [428] = 3,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      anon_sym_DISC,
    STATE(115), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [439] = 3,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      anon_sym_DISC,
    STATE(115), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [450] = 3,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      anon_sym_DISC,
    STATE(115), 2,
      sym_disc,
      aux_sym_source_file_repeat1,
  [461] = 2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 3,
      anon_sym_DISC,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [470] = 3,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(366), 1,
      sym__sep,
    STATE(124), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [480] = 3,
    ACTIONS(63), 1,
      aux_sym__quotable_creator_field_token2,
    ACTIONS(368), 1,
      aux_sym_creator_name_token1,
    STATE(120), 1,
      aux_sym_creator_name_repeat1,
  [490] = 3,
    ACTIONS(69), 1,
      aux_sym__quotable_creator_field_token2,
    ACTIONS(370), 1,
      aux_sym_creator_name_token1,
    STATE(120), 1,
      aux_sym_creator_name_repeat1,
  [500] = 3,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      sym__sep,
    STATE(118), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [510] = 1,
    ACTIONS(118), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [516] = 3,
    ACTIONS(377), 1,
      aux_sym_song_title_token1,
    STATE(127), 1,
      aux_sym_song_title_repeat1,
    STATE(158), 1,
      sym_song_title,
  [526] = 3,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      sym__sep,
    STATE(124), 1,
      aux_sym_credit_field_maybeparts_repeat2,
  [536] = 1,
    ACTIONS(122), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [542] = 1,
    ACTIONS(219), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [548] = 3,
    ACTIONS(105), 1,
      anon_sym_u300b,
    ACTIONS(384), 1,
      aux_sym_song_title_token1,
    STATE(129), 1,
      aux_sym_song_title_repeat1,
  [558] = 2,
    ACTIONS(388), 1,
      sym_parts,
    ACTIONS(386), 2,
      anon_sym_LF,
      sym__sep,
  [566] = 3,
    ACTIONS(111), 1,
      anon_sym_u300b,
    ACTIONS(390), 1,
      aux_sym_song_title_token1,
    STATE(129), 1,
      aux_sym_song_title_repeat1,
  [576] = 2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 2,
      anon_sym_u300a,
      aux_sym_song_title_token1,
  [584] = 3,
    ACTIONS(377), 1,
      aux_sym_song_title_token1,
    STATE(127), 1,
      aux_sym_song_title_repeat1,
    STATE(143), 1,
      sym_song_title,
  [594] = 1,
    ACTIONS(223), 3,
      anon_sym_LF,
      sym_parts,
      sym__sep,
  [600] = 1,
    ACTIONS(393), 2,
      anon_sym_LF,
      sym__sep,
  [605] = 1,
    ACTIONS(395), 2,
      anon_sym_LF,
      sym__sep,
  [610] = 1,
    ACTIONS(397), 1,
      aux_sym__quotable_creator_name_token1,
  [614] = 1,
    ACTIONS(399), 1,
      sym__sep,
  [618] = 1,
    ACTIONS(401), 1,
      aux_sym__quotable_creator_name_token1,
  [622] = 1,
    ACTIONS(120), 1,
      aux_sym__quotable_creator_field_token2,
  [626] = 1,
    ACTIONS(403), 1,
      aux_sym__quotable_creator_field_token2,
  [630] = 1,
    ACTIONS(405), 1,
      anon_sym_u300b,
  [634] = 1,
    ACTIONS(407), 1,
      sym__sep,
  [638] = 1,
    ACTIONS(409), 1,
      sym__sep,
  [642] = 1,
    ACTIONS(411), 1,
      anon_sym_u300b,
  [646] = 1,
    ACTIONS(413), 1,
      anon_sym_LF,
  [650] = 1,
    ACTIONS(415), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [654] = 1,
    ACTIONS(417), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [658] = 1,
    ACTIONS(419), 1,
      anon_sym_u300b,
  [662] = 1,
    ACTIONS(421), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [666] = 1,
    ACTIONS(423), 1,
      aux_sym__quotable_creator_field_token2,
  [670] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [674] = 1,
    ACTIONS(427), 1,
      anon_sym_u300b,
  [678] = 1,
    ACTIONS(429), 1,
      sym__sep,
  [682] = 1,
    ACTIONS(431), 1,
      aux_sym__quotable_creator_field_token2,
  [686] = 1,
    ACTIONS(433), 1,
      anon_sym_u300b,
  [690] = 1,
    ACTIONS(435), 1,
      anon_sym_u300b,
  [694] = 1,
    ACTIONS(437), 1,
      anon_sym_u300b,
  [698] = 1,
    ACTIONS(439), 1,
      anon_sym_u300b,
  [702] = 1,
    ACTIONS(441), 1,
      anon_sym_u300b,
  [706] = 1,
    ACTIONS(443), 1,
      aux_sym__quotable_creator_name_token1,
  [710] = 1,
    ACTIONS(445), 1,
      aux_sym__quotable_song_title_maybecomment_token1,
  [714] = 1,
    ACTIONS(447), 1,
      sym__sep,
  [718] = 1,
    ACTIONS(116), 1,
      aux_sym__quotable_creator_field_token2,
  [722] = 1,
    ACTIONS(449), 1,
      aux_sym__quotable_creator_name_token1,
  [726] = 1,
    ACTIONS(451), 1,
      aux_sym__quotable_creator_name_token1,
  [730] = 1,
    ACTIONS(453), 1,
      aux_sym__quotable_creator_name_token1,
  [734] = 1,
    ACTIONS(455), 1,
      aux_sym__quotable_creator_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(91)] = 0,
  [SMALL_STATE(92)] = 30,
  [SMALL_STATE(93)] = 59,
  [SMALL_STATE(94)] = 88,
  [SMALL_STATE(95)] = 114,
  [SMALL_STATE(96)] = 140,
  [SMALL_STATE(97)] = 166,
  [SMALL_STATE(98)] = 191,
  [SMALL_STATE(99)] = 214,
  [SMALL_STATE(100)] = 228,
  [SMALL_STATE(101)] = 242,
  [SMALL_STATE(102)] = 261,
  [SMALL_STATE(103)] = 280,
  [SMALL_STATE(104)] = 288,
  [SMALL_STATE(105)] = 296,
  [SMALL_STATE(106)] = 308,
  [SMALL_STATE(107)] = 324,
  [SMALL_STATE(108)] = 340,
  [SMALL_STATE(109)] = 356,
  [SMALL_STATE(110)] = 368,
  [SMALL_STATE(111)] = 384,
  [SMALL_STATE(112)] = 396,
  [SMALL_STATE(113)] = 412,
  [SMALL_STATE(114)] = 428,
  [SMALL_STATE(115)] = 439,
  [SMALL_STATE(116)] = 450,
  [SMALL_STATE(117)] = 461,
  [SMALL_STATE(118)] = 470,
  [SMALL_STATE(119)] = 480,
  [SMALL_STATE(120)] = 490,
  [SMALL_STATE(121)] = 500,
  [SMALL_STATE(122)] = 510,
  [SMALL_STATE(123)] = 516,
  [SMALL_STATE(124)] = 526,
  [SMALL_STATE(125)] = 536,
  [SMALL_STATE(126)] = 542,
  [SMALL_STATE(127)] = 548,
  [SMALL_STATE(128)] = 558,
  [SMALL_STATE(129)] = 566,
  [SMALL_STATE(130)] = 576,
  [SMALL_STATE(131)] = 584,
  [SMALL_STATE(132)] = 594,
  [SMALL_STATE(133)] = 600,
  [SMALL_STATE(134)] = 605,
  [SMALL_STATE(135)] = 610,
  [SMALL_STATE(136)] = 614,
  [SMALL_STATE(137)] = 618,
  [SMALL_STATE(138)] = 622,
  [SMALL_STATE(139)] = 626,
  [SMALL_STATE(140)] = 630,
  [SMALL_STATE(141)] = 634,
  [SMALL_STATE(142)] = 638,
  [SMALL_STATE(143)] = 642,
  [SMALL_STATE(144)] = 646,
  [SMALL_STATE(145)] = 650,
  [SMALL_STATE(146)] = 654,
  [SMALL_STATE(147)] = 658,
  [SMALL_STATE(148)] = 662,
  [SMALL_STATE(149)] = 666,
  [SMALL_STATE(150)] = 670,
  [SMALL_STATE(151)] = 674,
  [SMALL_STATE(152)] = 678,
  [SMALL_STATE(153)] = 682,
  [SMALL_STATE(154)] = 686,
  [SMALL_STATE(155)] = 690,
  [SMALL_STATE(156)] = 694,
  [SMALL_STATE(157)] = 698,
  [SMALL_STATE(158)] = 702,
  [SMALL_STATE(159)] = 706,
  [SMALL_STATE(160)] = 710,
  [SMALL_STATE(161)] = 714,
  [SMALL_STATE(162)] = 718,
  [SMALL_STATE(163)] = 722,
  [SMALL_STATE(164)] = 726,
  [SMALL_STATE(165)] = 730,
  [SMALL_STATE(166)] = 734,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 3, 0, 8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 8),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 9),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 1, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 1, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creator_name, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creator_name, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_block, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_block_maybeparts, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_block_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song_title, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song_title, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 1, 0, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_name, 3, 0, 10),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 1, 0, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 1, 0, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 1, 0, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 1, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title, 3, 0, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 2, 0, 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 2, 0, 8),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 3, 0, 9),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 3, 0, 9),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12), SHIFT_REPEAT(102),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 2, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 12), SHIFT_REPEAT(101),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 11),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_repeat1, 2, 0, 11),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 3, 0, 13),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 3, 0, 13),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_creator_field, 4, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field, 4, 0, 13),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 4, 0, 8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 4, 0, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 9),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 4, 0, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 5, 0, 8),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 5, 0, 8),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 9),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 9),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field, 6, 0, 9),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field, 6, 0, 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 4, 0, 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_song_title_maybecomment, 3, 0, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credit_field_maybeparts_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 5, 0, 8),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 9),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit_field_maybeparts, 6, 0, 9),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(131),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disc, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disc, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(123),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__disc, 2, 0, 0), SHIFT_REPEAT(32),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_song, 2, 0, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_song, 2, 0, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_creator_name_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 12), SHIFT_REPEAT(97),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field_maybeparts, 1, 0, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_song_title_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credit_field_maybeparts_repeat2, 2, 0, 11),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quotable_creator_field_maybeparts, 2, 0, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__role, 1, 0, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
