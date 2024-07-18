
const separators = ` 　\t&＆:：\/・、；,`;
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
      repeat($.song),
      choice(
        $.song,
        alias($._song, $.song),
      ),
    ),

    _song: $ => choice(
      seq('《', field('title', $._song_title), '》'),  // quoting
      field('title', $._song_title),
    ),
    song: $ => seq(
      $._song,
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
      $._creator,
      repeat(seq(
        field('creatorSeparator', alias($._sep, $.creator_sep)),
        $._creator,
      )),
      choice($._sep, '\n', seq($._sep, '\n'), seq($._sep, '\n', $._sep))
    )),

    _song_title: $ => seq(
      $.song_title,
      optional($.feat_field),
    ),
    song_title: _ => repeat1(/./),
    feat_field: $ => seq(
      alias(token(/feat\. ?/), $.feat),
      $._creator,  // CAVEAT: might also match trailing char like ')'
      repeat(seq(
        field('creatorSeparator', alias($._sep, $.creator_sep)),
        $._creator,
      )),
    ),

    _creator: $ => choice(
      seq('《', field('creator', alias(repeat1(/./), $.creator_name)), '》'),  // quoting
      field('creator', $.creator_name),
    ),
    creator_name: _ => token.immediate(new RegExp(`[^${separators}《》\n]+`)),
    role: _ => choice(...roles.map(r => field('role', r))),
    _sep: _ => token.immediate(new RegExp(`[${separators}]+`)),
  }
});
