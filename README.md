<img align="right" src="https://static.hya.moe/execwb/jacket.avif" width="320" />

# EXEC_WIKI=BGM/.

Bangumi 维基音乐条目可视化编辑套件 · 「[指南](https://EXEC-WIKI-BGM.hya.moe/docs)」

~~今天就为你喜欢的音乐人加上语法高亮~~

主要功能：

- 解析大多数专辑的曲目制作人员信息（track info）并生成 Bangumi 格式的维基信息（infobox、曲目列表、关联人物）
- 实时预览条目页面
- 人物关联库管理

### 相关 Bangumi 超合金组件

[维基音乐条目可视化编辑套件 · 接收端](https://bgm.tv/dev/app/3134)
- 在新建/编辑页面接收信息，自动填充 infobox、曲目、关联人物
- **本项目必须配合这个接收端组件使用**

[音乐条目显示各曲目参与制作人员信息](https://bgm.tv/dev/app/3136)
- 将关联信息展示在曲目列表上
- 如果要直观看到用本项目添加的关联信息，请启用

### 关于曲目制作人员信息录入

输入的信息需要遵照一种被称为 rkgk 的文本标记语言格式……等等，你或许早就会使用这个标记语言了——

rkgk（落書き）是一种极为灵活的标记方式，它存在的目的是尽可能适配任何同人音乐专辑展示的曲目制作人员信息。只需要从特设网站上把“曲目名–职位–人名”格式的信息复制下来，很可能就是符合 rkgk 语法、可以直接被解析的。对于一开始解析不正确的情况（一般是因为多余的内容），大多删改一下就能正确解析。

需要特殊处理的情况：

1. 歌名里有职位关键字，需要用书名号括起来
```diff
- 室内系なら作曲家 作編曲：Yunomi　作詞：Yunomi & nicamoq
+ 《室内系なら作曲家》 作編曲：Yunomi　作詞：Yunomi & nicamoq
```

2. 用`@`分隔没有制作人员的曲目名
```diff
  なんでもない
+ @
  なんでもね
```

本项目的编辑器另提供职位关键字和关联库内人名的**自动补全**（目前仅支持职位关键字），所以手打曲目制作人员信息也不会太费劲。


### 致谢 / 借物列表

- 感谢 [@SilenceAkarin](https://bgm.tv/user/sakarin)、[@豆沙包罐头](https://bgm.tv/user/36176) 和 [@Mikeneko](https://bgm.tv/user/mercurylampe) 参与封闭测试，帮忙 debug，屡次阻止我往 App 里加反人类 feature，为项目的初期发展提供了宝贵建议。

- 特别感谢 [@ウィキ専用垢](https://bgm.tv/user/wikiaka) 的组件[自动关联 infobox 制作人员](https://bgm.tv/group/topic/389152)，本项目的许多机制受其启发。
- 人物搜索用了 [@wattlebird](https://github.com/wattlebird)（[@小乖](https://bgm.tv/user/wattlebird)）的 [Bangumi Research](https://bgm.tv/group/topic/390220) 的私有 API（不要打我不要打我不要打我，我用得很节制的！
- Bangumi 娘的 SVG 魔改自 [Bangumi 正在开发中的新前端](https://next.bgm.tv)
- 在新用户向导中，立绘：[かにビーム](https://x.com/kani_biimu)；背景：[みんちりえ](https://min-chi.material.jp/)；背景音乐：[音楽の卵](http://ontama-m.com/index.html)；音效：[びたちー素材館](http://www.vita-chi.net/sozai1.htm)
