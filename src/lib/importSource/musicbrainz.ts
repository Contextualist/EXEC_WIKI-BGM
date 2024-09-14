import type { ImportSource, AutoEditor, Track } from "./common";
import { warningTemplate3rdPartyWiki } from "./common";

export class MusicBrainz implements ImportSource {
    name = "MusicBrainz";
    match = /^https:\/\/musicbrainz.org\/release\/([0-9a-f-]+)$/;
    warning = warningTemplate3rdPartyWiki("MusicBrainz");
    options = [
        //{ id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "title", text: "标题", default: true },
        { id: "length", text: "播放时长", default: true },
        { id: "labelSerial", text: "厂牌与编号/品番", default: true },
        { id: "releaseDate", text: "发售日期", default: true },
        { id: "formatType", text: "版本特性", default: false },
    ];

    private releaseInfo: Promise<MusicBrainzRelease> | null = null;

    async load(url: string): Promise<string> {
        const mbid = this.match.exec(url)![1];
        this.releaseInfo = fetchReleaseInfo(mbid);
        return (await this.releaseInfo).title;
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {

        if (opts.title) {
            const { title } = await this.releaseInfo!;
            editor.editTitleIntro(title, "");
        }

        if (opts.length) {
            const { media } = await this.releaseInfo!;
            const timeMs = media.flatMap(({ tracks }) => tracks.map(({ length }) => length)).reduce((a, b) => a + b, 0);
            const time = new Date(Math.round(timeMs / 1000) * 1000).toISOString().slice(11, 19);
            editor.setInfoBoxField("播放时长", time);
        }

        if (opts.labelSerial) {
            const { "label-info": ls } = await this.releaseInfo!;
            const labels = ls.map(({ label: { name } }) => name)
            const labelVal = Array.from(new Set(labels)).join("、");
            // TODO: write labels
            const serials = ls.map(({ "catalog-number": cat }) => cat);
            const serialVal = serials.length > 1 ? serials : serials[0];
            if (!editor.setInfoBoxField("品番", serialVal, { editOnly: true })) {
                editor.setInfoBoxField("编号", serialVal);
            }
        }

        if (opts.releaseDate) {
            const { date } = await this.releaseInfo!;
            editor.setInfoBoxField("发售日期", date);
        }

        if (opts.formatType) {
            const { media, "release-group": { 'primary-type': primaryType, 'secondary-types': secondaryTypes } } = await this.releaseInfo!;
            const formats = Array.from(new Set(media.map(({ format }) => format)));
            const types = [primaryType, ...secondaryTypes];
            editor.setInfoBoxField("版本特性", [...formats, ...types].join(", "));
        }

        editor.done();
    }
}

const ENDPOINT = "https://musicbrainz.org/ws/2";

interface MusicBrainzRelease {
    title: string;
    date: string;
    "label-info": LabelInfo[];
    media: MediaInfo[];
    "release-group": ReleaseGroupInfo;
}

interface LabelInfo {
    "catalog-number": string;
    label: { name: string };
}

interface MediaInfo {
    format: string;
    tracks: TrackInfo[];
}

interface TrackInfo {
    title: string;
    length: number;
}

interface ReleaseGroupInfo {
    'primary-type': string;
    'secondary-types': string[];
}

async function fetchReleaseInfo(mbid: string): Promise<MusicBrainzRelease> {
    const res = await fetch(
        `${ENDPOINT}/release/${mbid}?inc=artist-credits+labels+recordings+release-groups+artist-rels+recording-level-rels+work-level-rels+recording-rels+work-rels`,
        { headers: { "Accept": "application/json" } }
    );
    return res.json();
}