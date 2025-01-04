import type { ImportSource, AutoEditor, Disc, Credits } from "./common";
import { CORS_ENDPOINT } from "../client";

const RE_DATE = /(\d{4})\D+(\d+)\D+(\d+)/u;
const ROLE_WHITELIST = new Set(["歌", "作詞", "作曲", "編曲"]);

export class TowerJp implements ImportSource {
    name = "Tower.jp";
    match = /^https:\/\/tower\.jp\/item\/(\d+)/;
    warning = "";
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        { id: "releaseDate", text: "发售日期", default: true },
        { id: "labelSerial", text: "厂牌与编号/品番", default: true },
        { id: "length", text: "播放时长", default: true },
    ];

    private itemInfo: Promise<ItemInfo> | null = null;

    async load(url: string): Promise<string> {
        const tid = parseInt(this.match.exec(url)![1]);
        this.itemInfo = fetchItem(tid);
        return (await this.itemInfo).title;
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {
        const info = await this.itemInfo!;

        if (opts.titleIntro) {
            editor.editTitleIntro(info.title, info.description);
        }

        if (opts.releaseDate) {
            const [_, year, month, day] = info.releaseDate.match(RE_DATE)!;
            editor.setInfoBoxField("发售日期", `${year}-${month}-${day}`);
        }

        let labelVal = "";
        if (opts.labelSerial) {
            if (!editor.setInfoBoxField("品番", info.serialNumber, { editOnly: true })) {
                editor.setInfoBoxField("编号", info.serialNumber);
            }
            labelVal = info.label;
        }

        if (opts.length) {
            editor.setInfoBoxField("播放时长", info.duration);
        }

        if (opts.trackListCredits) {
            const credit0: Credits = {};
            if (labelVal.length > 0) {
                credit0["レーベル"] = [labelVal];
            }
            editor.setTrackInfo({ credits: credit0, discs: info.discs }, "tracks");
        }

        editor.done();
    }
}

interface ItemInfo {
    title: string;
    releaseDate: string;
    serialNumber: string;
    label: string;
    description: string;
    duration: string;
    discs: Disc[];
}

async function fetchItem(tid: number): Promise<ItemInfo> {
    const res = await fetch(`${CORS_ENDPOINT}/item/${tid}`);
    return parseItem(await res.text());
}

function parseItem(raw: string): ItemInfo {
    const content = new DOMParser().parseFromString(raw, "text/html");

    const title = content.querySelector(".PC-item-info-title")?.textContent?.trim() ?? "";

    const commodityInfo = content.querySelector("#BasicInfoContent");
    const commodityInfoRows = Array.from(commodityInfo?.querySelectorAll("tr") ?? []);
    let commodityInfoValues = { releaseDate: "", serialNumber: "", label: "" };
    if (commodityInfoRows.length > 0) {
        function extractTableValue(key: string) {
            return commodityInfoRows.find((row) => containsText(row, "td.TOL-item-info-PC-tab-basic-info-table-column", key))?.querySelector("td.TOL-item-info-PC-tab-basic-info-table-field")?.textContent?.trim() ?? "";
        }
        commodityInfoValues = {
            releaseDate: extractTableValue("発売日"),
            serialNumber: extractTableValue("規格品番"),
            label: extractTableValue("レーベル"),
        };
    }

    const longInfo = content.querySelector("#ProductIntroductionContent");
    const longInfoSections = Array.from(longInfo?.querySelectorAll("section") ?? []);
    const descriptionInfo = longInfoSections.find((section) => containsText(section, "h3 > span", "商品の紹介"));
    const description = Array.from(descriptionInfo?.querySelectorAll(".TOL-item-info-PC-tab-product-introduction-text") ?? []).map(p => p.textContent?.trim()).join("\n\n") ?? "";

    const contentInfo = content.querySelector("#RecordedContent");
    const contentIndices = contentInfo?.querySelectorAll(".TOL-item-info-PC-tab-recorded-contents-text > p")[0]?.textContent?.trim() ?? "";
    const duration = contentIndices.match(/合計収録時間 : (\d+:\d+:\d+)/)?.[1] ?? "";
    const discs = contentInfo ? parseDiscInfo(contentInfo) : [];

    return {
        title,
        ...commodityInfoValues,
        description,
        duration,
        discs,
    };
}

function parseDiscInfo(contentInfo: Element): Disc[] {
    const discEls = Array.from(contentInfo.querySelectorAll("li.TOL-item-info-PC-tab-recorded-contents-list-item > ol"));
    return discEls.map((disc) => {
        const trackEls = Array.from(disc.querySelectorAll("li"));
        return {
            tracks: trackEls.map((track) => {
                const title = track.querySelector(".TOL-item-info-PC-tab-recorded-contents-list-track-title")?.textContent?.trim() ?? "";
                const creditEls = Array.from(track.querySelectorAll("div.TOL-item-info-PC-tab-recorded-contents-list-track-hidden-contents-area > div"));
                const credits = Object.fromEntries(creditEls.flatMap((credit) => {
                    const spans = Array.from(credit.querySelectorAll("span"));
                    const role = spans[0]?.textContent?.trim()?.replace("：", "");
                    const names = spans.slice(1).map(span => span.textContent?.trim()).filter((n): n is string => !!n);
                    return role && names.length > 0 && ROLE_WHITELIST.has(role) ? [[role, names]] : [];
                }));
                return { title, comment: "", credits };
            }),
        };
    });
}

function containsText(el: Element, query: string, text: string): boolean {
    return el.querySelector(query)?.textContent?.trim() === text;
}
