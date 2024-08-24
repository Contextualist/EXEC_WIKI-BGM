import type { ImportSource, AutoEditor } from "./common";
import { getSubjectInfo, getSubjectEpInfo, type SubjectInfo, type SubjectEpInfo } from "$lib/client";

export class Bangumi implements ImportSource {
    name = "Bangumi";
    match = /^https:\/\/bgm.tv\/subject\/(\d+)$/;
    warning = "最近新增的可关联职位还在等班古米的API支持";
    options = [
        //{ id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        //{ id: "importRela", text: "导入关联的人物", default: true },
        //{ id: "infobox", text: "Infobox", default: true },
        //{ id: "infoboxKeepRelaField", text: "保留 infobox 可关联字段的内容", default: false },
    ];

    subjectInfo: Promise<SubjectInfo> | null = null;
    subjectEpInfo: Promise<SubjectEpInfo> | null = null;

    async load(url: string): Promise<string> {
        const sid = parseInt(this.match.exec(url)![1]);
        this.subjectInfo = getSubjectInfo(sid);
        return (await this.subjectInfo).name;
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {
        if (opts.trackListCredits) {
            //this.subjectEpInfo = getSubjectEpInfo(sid);
        }
        if (opts.titleIntro) {
            const { name, summary } = await this.subjectInfo!;
            editor.editTitleIntro(name, summary);
        }
        editor.done();
    }
}
