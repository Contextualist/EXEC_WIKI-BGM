
## 开发文档

### Parser 相关的代码结构

这部分算是最复杂的，记录一下以免以后我自己忘了。

解析器：
- `treeSitterParser.ts`: （通用/业务无关）为 Tree-sitter parser 写的 Lezer parser 接口，简单粗暴地让 CodeMirror 兼容 Tree-sitter parser。每次解析完毕后触发 `onUpdate` 回调，传出一个精简后的语法树。
- `lang-rkgk.ts`: 语法层。 rkgk 的 CodeMirror Language 接口实现，同时也定义了对 `onUpdate` 传出的语法树的反序列化 `intoRawRelease`。
- `postprocess.ts`: 语义层。`Release.fromRawRelease` 生成最终的数据结构。用户配置在这一层介入。

组件：
- `CodeMirror.svelte`: （通用/业务无关）`CodeMirror` 的 Svelte 组件
- `TrackInfo.svelte`: 表层垫片，初始化 Language `rkgk` 然后创建一个 `CodeMirror` 组件实例。`onUpdate` 回调在更外层定义。
