
const separators = ` 　\t&＆:：\/／・、；,`;
const roles = [
  'Music',
  'music',
  'Composition',
  'composition',
  'Composer',
  'composer',
  'Compose',
  'compose',
  'Lyrics',
  'lyrics',
  'Lyricist',
  'lyricist',
  'Lyric',
  'lyric',
  'Arrangement',
  'arrangement',
  'Arranger',
  'arranger',
  'Arrange',
  'arrange',
  'Vocal',
  'vocal',
  'Performer',
  'performer',
  'Illustration',
  'illustration',
  'Illust',
  'illust',
  'Label',
  'label',
  'Circle',
  'circle',
  'Producer',
  'producer',
  'Recording',
  'recording',
  'Guest Vocal',
  'Guest vocal',
  'guest vocal',
  'Chorus',
  'chorus',
  'Mixing',
  'mixing',
  'Mastering',
  'mastering',
  'ボーカル',
  'アレンジ',
  'イラスト',
  'レーベル',
  'マスタリング',
  '艺术家',
  '歌唱',
  '歌',
  '作詞作編曲',
  '作词作编曲',
  '作詞作曲',
  '作词作曲',
  '作詞曲',
  '作词曲',
  '作編曲',
  '作编曲',
  '作曲',
  '編曲',
  '编曲',
  '作詞',
  '作词',
  '厂牌',
  '脚本',
  '插图',
  '制作人',
  '出版方',
  '录音',
  '原作',
  '声乐',
  '乐器',
  '混音',
  '母带制作',
];

module.exports = grammar({
  name: 'rkgk',

  rules: {
    source_file: $ => seq(
      optional(alias($.credit_block_maybeparts, $.credit_block)),
      choice(
        repeat1($.disc),
        $._disc,
      ),
    ),

    disc: $ => seq(
      'DISC',
      '\n',
      $._disc,
    ),
    _disc: $ => repeat1($.song),

    song: $ => seq(
      $._quotable_song_title_maybecomment,
      optional('\n'),
      optional($.credit_block),
    ),

    credit_block_maybeparts: $ => prec(-1, repeat1(alias($.credit_field_maybeparts, $.credit_field))),
    credit_field_maybeparts: $ => prec.left(seq(
      repeat1(seq(
        $.role,
        $._sep,
      )),
      $._quotable_creator_field_maybeparts,
      repeat(seq(
        field('creatorSeparator', alias($._sep, $.creator_sep)),
        $._quotable_creator_field_maybeparts,
      )),
      choice($._sep, '\n', seq($._sep, '\n'), seq($._sep, '\n', $._sep))
    )),
    credit_block: $ => prec(-1, repeat1($.credit_field)),
    credit_field: $ => prec.left(seq(
      repeat1(seq(
        $.role,
        $._sep,
      )),
      $._quotable_creator_field,
      repeat(seq(
        field('creatorSeparator', alias($._sep, $.creator_sep)),
        $._quotable_creator_field,
      )),
      optional(choice($._sep, '\n', seq($._sep, '\n'), seq($._sep, '\n', $._sep)))
    )),

    _quotable_song_title_maybecomment: $ => prec.right(seq(
      $._quotable_song_title,
      optional('\n'),
      optional(choice(
        seq(
          '//',
          alias(/[^\n]+/, $.comment),
        ),
        alias(token(seq('原曲', /[^\n]+/)), $.comment),
      )),
    )),
    _quotable_song_title: $ => choice(
      seq('《', field('title', $.song_title), '》'),  // quoting
      field('title', $.song_title),
    ),
    song_title: _ => prec.right(repeat1(
      // lexically, creator_name > song_title
      token(prec(-1, /[^\n]/))
    )),

    _quotable_creator_field_maybeparts: $ => choice(
      seq($._quotable_creator_field, optional($.parts)),
      $.parts,
    ),

    _quotable_creator_field: $ => seq(
      $._quotable_creator_name,
      optional(choice(
        // CAVEAT: this lexical precedence will lead to "implicit space > _seq" for cases like "name (circle..."
        seq(alias(token(prec(1, /[(（]CV[：:.]/)), $.cv_conj), $._quotable_creator_name, alias(/[)）]/, $.cv_conj)),
        seq(alias(/[|｜]/, $.cv_conj), $._quotable_creator_name),
      )),
    ),

    _quotable_creator_name: $ => choice(
      // lexically, 《creator_name》 > 《song_title》
      seq(token(prec(1, '《')), field('creator', alias(/[^》\n]+/, $.creator_name)), '》'),  // quoting
      field('creator', $.creator_name),
    ),
    creator_name: _ => prec.right(repeat1(
      // lexically, creator_name > song_title
      token(prec(0, new RegExp(`[^${separators}《》\n]`)))
    )),

    role: $ => choice(
      $._role_instrument,
      $._role,
    ),
    _role_instrument: _ => token.immediate(prec(1, new RegExp(`乐器-([^${separators}]| )+`))),
    _role: _ => choice(...roles.map(r => field('role', r))),

    parts: _ => /\((Tr|tr|M|m)?\.? ?[0-9,-. ]+\)/,

    _sep: _ => token(new RegExp(`[${separators}]+`)),
  }
});
