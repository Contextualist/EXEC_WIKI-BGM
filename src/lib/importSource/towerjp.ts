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

    const title = content.querySelector(".product-title")?.textContent?.trim() ?? "";

    const infoBlocks = Array.from(content.querySelectorAll(".item-description"));
    function findBlock(label: string) {
        return infoBlocks.find((block) => containsText(block, ".item-description-label", label));
    }

    const commodityInfo = findBlock("商品の情報");
    const commodityInfoRows = Array.from(commodityInfo?.querySelectorAll("tr") ?? []);
    let commodityInfoValues = { releaseDate: "", serialNumber: "", label: "" };
    if (commodityInfoRows.length > 0) {
        function extractTableValue(key: string) {
            return commodityInfoRows.find((row) => containsText(row, ".item-item-info-label", key))?.querySelector("td p")?.textContent?.trim() ?? "";
        }
        commodityInfoValues = {
            releaseDate: extractTableValue("発売日"),
            serialNumber: extractTableValue("規格品番"),
            label: extractTableValue("レーベル"),
        };
    }

    const descriptionInfo = findBlock("商品の紹介");
    const description = descriptionInfo?.querySelectorAll(".item-introduction > div > div")[0]?.textContent?.trim() ?? "";

    const contentInfo = findBlock("収録内容");
    const contentIndices = Array.from(contentInfo?.querySelectorAll(".contens-index > p") ?? []);
    const duration = contentIndices.find((p) => p.textContent?.startsWith("合計収録時間"))?.textContent?.split("|")[1].trim() ?? "";
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
    const discEls = Array.from(contentInfo.querySelectorAll(".track-list"));
    return discEls.map((disc) => {
        const trackEls = Array.from(disc.querySelectorAll("li > div"));
        return {
            tracks: trackEls.map((track) => {
                const title = track.querySelector("div:nth-child(1) > div:nth-child(2) > div:nth-child(2)")?.textContent?.trim() ?? "";
                const creditEls = Array.from(track.querySelectorAll("div:nth-child(2) > div > div")).slice(1);
                const credits = Object.fromEntries(creditEls.flatMap((credit) => {
                    const [role, name] = Array.from(credit.querySelectorAll("div")).map((div) => div.textContent?.trim());
                    return role && name && ROLE_WHITELIST.has(role) ? [[role, name.split("、").map(n => n.trim())]] : [];
                }));
                return { title, comment: "", credits };
            }),
        };
    });
}

function containsText(el: Element, query: string, text: string): boolean {
    return el.querySelector(query)?.textContent?.trim() === text;
}
