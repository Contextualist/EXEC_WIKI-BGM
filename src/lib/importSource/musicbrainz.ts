import type { ImportSource, AutoEditor } from "./common";
import { DefaultDict, warningTemplate3rdPartyWiki } from "./common";

export class MusicBrainz implements ImportSource {
    name = "MusicBrainz";
    match = /^https:\/\/musicbrainz.org\/release\/([0-9a-f-]+)$/;
    warning = warningTemplate3rdPartyWiki("MusicBrainz");
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
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
        let labelVal: string[] = [];
        if (opts.labelSerial) {
            const { "label-info": ls } = await this.releaseInfo!;
            const labels = ls.map((li) => li?.label?.name).filter((x) => x);
            labelVal = Array.from(new Set(labels));
            const serials = ls.map((li) => li["catalog-number"]).filter((x) => x);
            const serialVal = serials.length > 1 ? serials : serials[0] || "";
            if (!editor.setInfoBoxField("品番", serialVal, { editOnly: true })) {
                editor.setInfoBoxField("编号", serialVal);
            }
        }

        if (opts.trackListCredits) {
            const { media, relations } = await this.releaseInfo!;
            const extraRoles = DefaultDict(() => [] as string[]);

            function addArtist(m: Record<string, string[]>, rela: ArtistRelation) {
                let kw = ROLE2KEYWORD[rela.type] || rela.type;
                if (kw === 'EXCLUDE') return;
                let name = rela['target-credit'] || rela.artist.name;
                if (kw === 'vocal') {
                    if (rela.attributes.length > 0 && ['background vocals', 'choir vocals', 'spoken vocals'].includes(rela.attributes[0])) {
                        kw = 'chorus';
                    }
                } else if (kw === 'instrument') {
                    if (rela.attributes.length > 0) {
                        kw = `乐器-${rela.attributes[0]}`;
                    }
                } else if (kw.startsWith('EX-')) {
                    extraRoles[kw].push(name);
                    return;
                }
                m[kw].push(name);
            }

            const relaMap0 = DefaultDict(() => [] as string[]); // relation -> names
            relations.forEach((rela) => {
                if (rela['target-type'] !== 'artist') return;
                addArtist(relaMap0, rela);
            });
            if (labelVal.length > 0) relaMap0["label"] = labelVal;

            const discs = media.map(({ tracks }) => ({
                tracks: tracks.map(({ title, recording: { relations } }) => {
                    const relaMapi = DefaultDict(() => [] as string[]); // relation -> names
                    relations.forEach((rela) => {
                        if (rela['target-type'] === 'artist') {
                            addArtist(relaMapi, rela);
                            return;
                        }
                        if (rela['target-type'] !== 'work') return;
                        rela.work.relations.forEach((rela) => {
                            if (rela['target-type'] !== 'artist') return;
                            addArtist(relaMapi, rela);
                        });
                    });
                    return { title, comment: '', credits: relaMapi };
                })
            }));

            editor.setTrackInfo({ credits: relaMap0, discs });
            Object.entries(extraRoles).forEach(([kw, names]) => {
                editor.setInfoBoxField(kw.slice(3), Array.from(new Set(names)).join("、"));
            });
        }

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

const ROLE2KEYWORD: Record<string, string> = {
    'mix': 'mixing',
    'remixer': 'EX-Remix',
    'design': 'EX-设计',
    'engineer': 'EXCLUDE',
    'conductor': 'EXCLUDE',
    'programming': 'EXCLUDE',
    'translator': 'EXCLUDE',
    'misc': 'EXCLUDE',
}

const ENDPOINT = "https://musicbrainz.org/ws/2";

interface MusicBrainzRelease {
    title: string;
    date: string;
    "label-info": LabelInfo[];
    media: MediaInfo[];
    relations: Relation[];
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
    recording: {
        relations: Relation[];
    };
}

type Relation = ArtistRelation | WorkRelation | { 'target-type': 'recording' };
interface ArtistRelation {
    'target-type': 'artist';
    'target-credit': string; // alias used
    type: string; // role
    attributes: string[]; // more specific role; usually for type=instrument/vocal
    artist: { name: string; };
}
interface WorkRelation {
    'target-type': 'work';
    work: {
        relations: Relation[];
    };
}

interface ReleaseGroupInfo {
    'primary-type': string;
    'secondary-types': string[];
}

async function fetchReleaseInfo(mbid: string): Promise<MusicBrainzRelease> {
    // ref: https://community.metabrainz.org/t/looking-for-api-call-providing-writer-composer-cover-recording-details/478652/6
    const res = await fetch(
        `${ENDPOINT}/release/${mbid}?inc=artist-credits+labels+recordings+release-groups+artist-rels+recording-level-rels+work-level-rels+recording-rels+work-rels`,
        { headers: { "Accept": "application/json" } }
    );
    return res.json();
}