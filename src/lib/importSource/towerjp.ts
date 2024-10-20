import type { ImportSource, AutoEditor, Track } from "./common";
import { DefaultDict } from "./common";
import { CORS_ENDPOINT } from "../client";

const RE_DATE = /(\d{4})\D+(\d+)\D+(\d+)/u;

export class TowerJp implements ImportSource {
    name = "Tower.jp";
    match = /^https:\/\/tower\.jp\/item\/(\d+)/;
    warning = "";
    options = [
        //{ id: "trackListCredits", text: "曲目列表与制作人员", default: true },
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

        if (opts.labelSerial) {
            if (!editor.setInfoBoxField("品番", info.serialNumber, { editOnly: true })) {
                editor.setInfoBoxField("编号", info.serialNumber);
            }
        }

        if (opts.length) {
            editor.setInfoBoxField("播放时长", info.duration);
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

    return {
        title,
        ...commodityInfoValues,
        description,
        duration,
    };
}

function containsText(el: Element, query: string, text: string): boolean {
    return el.querySelector(query)?.textContent?.trim() === text;
}
