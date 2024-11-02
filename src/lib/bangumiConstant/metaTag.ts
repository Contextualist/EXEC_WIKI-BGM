
export interface MetaTagKind {
    [key: string]: MetaTagClass;
}
export interface MetaTagClass {
    tags: string[];
    index: number;
}

export const MUSIC: MetaTagKind = {
    分类: {
        tags: ['广播剧', '专辑', '有声书', 'ASMR', '电台', '有声剧'],
        index: 30000,
    },
    类型: {
        tags: ['OST', '同人音乐', 'ED', 'OP', '角色歌', 'Vocaloid', 'Drama', 'Remix', 'IN', '印象曲', 'DJCD', 'VOCAL', 'Radio', '单曲', 'TM', '朗读剧', '艺人专辑'],
        index: 30001,
    },
    来源: {
        tags: ['动画', '游戏', '原创', '电影', '小说', '电视剧', '漫画', '有声作品'],
        index: 30002,
    },
    受众: {
        tags: ['BL', '乙女'],
        index: 30003,
    },
    地区: {
        tags: ['日本', '韩国', '中国'],
        index: 30004,
    },
    风格: {
        tags: ['JPOP', '古典', '摇滚', '电子'],
        index: 30005,
    },
    分级: {
        tags: ['R18', '全0'],
        index: 30007,
    },
    介质: {
        tags: ['CD', '8cm', 'DVD', 'Digital', '磁带', '黑胶'],
        index: 30008,
    },
}

export const META_TAG: { [key: string]: MetaTagKind } = {
    音乐: MUSIC,
}