
const separators = ` 　\t&＆:：\/・、；,`;
const strictSeparators = ` 　\t&＆・、；,`;
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
  'Vo',
  'vo',
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
  'ボーカル',
  'アレンジ',
  'イラスト',
  'レーベル',
  '歌唱',
  '作詞作編曲',
  '作詞作曲',
  '作詞曲',
  '作編曲',
  '作曲',
  '編曲',
  '作詞',
  '厂牌',
  '脚本',
  '插图',
  '制作人',
  '出版方',
  '录音',
  '原作',
];

module.exports = grammar({
  name: 'rkgk',

  rules: {
    source_file: $ => seq(
      optional($.credit_block),
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
    _disc: $ => seq(
      repeat($.song),
      choice(
        $.song,
        alias($._quotable_song_title_maybefeat_maybecomment, $.song),
      ),
    ),

    song: $ => seq(
      $._quotable_song_title_maybefeat_maybecomment,
      choice(
        $.credit_block,
        '@',  // empty credit
      ),
    ),

    credit_block: $ => prec(-1, repeat1($.credit_field)),
    credit_field: $ => prec.left(seq(
      repeat1(seq(
        $.role,
        $._sep,
      )),
      $._quotable_creator_name,
      repeat(seq(
        field('creatorSeparator', alias($._sep, $.creator_sep)),
        $._quotable_creator_name,
      )),
      choice($._sep, '\n', seq($._sep, '\n'), seq($._sep, '\n', $._sep))
    )),

    _quotable_song_title_maybefeat_maybecomment: $ => seq(
      $._quotable_song_title_maybefeat,
      optional(choice(
        seq(
          '//',
          alias(/[^\n]+/, $.comment),
        ),
        alias(token(seq('原曲', /[^\n]+/)), $.comment),
      )),
    ),
    _quotable_song_title_maybefeat: $ => choice(
      seq('《', field('title', $._song_title_maybefeat), '》'),  // quoting
      field('title', $._song_title_maybefeat),
    ),
    _song_title_maybefeat: $ => seq(
      $.song_title,
      optional($.feat_field),
    ),
    song_title: _ => repeat1(/./),
    feat_field: $ => seq(
      alias(token(/feat\. ?/), $.feat),
      $._quotable_creator_name,  // CAVEAT: might also match trailing char like ')'
      repeat(seq(
        field('creatorSeparator', alias($._ssep, $.creator_sep)),
        $._quotable_creator_name,
      )),
      optional($._ssep),
    ),

    _quotable_creator_name: $ => choice(
      seq('《', field('creator', alias(/[^》\n]+/, $.creator_name)), '》'),  // quoting
      field('creator', $.creator_name),
    ),
    creator_name: _ => token.immediate(new RegExp(`[^${separators}《》\n]+`)),
    role: _ => choice(...roles.map(r => field('role', r))),
    _sep: _ => token.immediate(new RegExp(`[${separators}]+`)),
    _ssep: _ => token.immediate(new RegExp(`[${strictSeparators}]+`)),
  }
});
