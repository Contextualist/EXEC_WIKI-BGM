import { ctrlOrCmd, altOrOpt } from "$lib/utils"

const TIPS = [
    "有想在这里对别的维基人说的话吗？私信投稿给 Hyary 吧～",
    '左侧编辑器可以通过自动补全来快速输入职位，支持英文和拼音，试试看输入"zuo"吧',
    `左侧编辑器中按下 <kbd>${ctrlOrCmd}</kbd>+<kbd>f</kbd> 可打开查找替换`,
    `左侧编辑器中按 <kbd>${altOrOpt}</kbd>+方向键 可以交换相邻两行`,
    `如果只需要修改关联信息，可以在「打包带走！」时按下 <kbd>${altOrOpt}</kbd> 键，只复制关联信息`,
    '想了解编辑器的进阶用法吗？<br/>请阅读<a href="/docs#rkgk-grammar-ext">指南·闇の魔法</a>章节',
    "如何像程序员一样优雅地输入引号/括号？<br/>试试看选中文字后再按下“《”",
    `Infobox 编辑器中，用 <kbd>${ctrlOrCmd}</kbd>+<kbd>[</kbd> 在普通字段与列表字段之间切换`,
    `Infobox 编辑器中，按 <kbd>${ctrlOrCmd}</kbd>+<kbd>shift</kbd>+<kbd>k</kbd> 删除当前行`,
    "又写完一个条目啦，休息一下吧，去看个书好不好？",
    "您还有许多条目需要写，现在还不能休息哦～",
    '<a href="https://zh.wikipedia.org/wiki/刺猬"><b>刺猬</b></a>不能喝<a href="https://zh.wikipedia.org/wiki/牛奶">牛奶</a>。<a href="https://zh.wikipedia.org/wiki/柠檬"><b>柠檬</b></a>富含<a href="https://zh.wikipedia.org/wiki/维生素C">维生素C</a>。',
    '「M3」とは「Music Media-Mix Market」の略<sup><a href="https://ja.wikipedia.org/wiki/M3_(同人)">[1]</a></sup>。',
    '大家好，我是本群的“提醒备份小助手”，希望此刻看到消息的人可以前往设置导出关联库备份。下一次清理浏览器缓存时，就用得上啦'
]

export function getRandomTip() {
    return TIPS[Math.floor(Math.random() * TIPS.length)]
}
