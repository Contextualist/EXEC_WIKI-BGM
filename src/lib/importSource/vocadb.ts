// See https://wiki.vocadb.net/docs/development/public-api
// TouhouDB and UtaiteDB are using the same API.
import type { ImportSource, AutoEditor, Disc } from "./common";
import { DefaultDict, warningTemplate3rdPartyWiki, formatDuration } from "./common";

export class VocaDB implements ImportSource {
    name = "VocaDB / UtaiteDB / TouhouDB";
    match = /^https:\/\/(vocadb\.net|utaitedb\.net|touhoudb\.com)\/Al\/(\d+)$/;
    warning = warningTemplate3rdPartyWiki("VocaDB / UtaiteDB / TouhouDB");
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        { id: "length", text: "播放时长", default: true },
        { id: "labelSerial", text: "厂牌与编号/品番", default: true },
        { id: "releaseDateEvent", text: "发售日期与展会", default: true },
        { id: "url", text: "官方网站", default: true },
        { id: "xfd", text: "试听链接", default: false },
        { id: "formatType", text: "版本特性", default: false },
    ];

    private albumInfo: Promise<VocaDBAlbum> | null = null;

    async load(url: string): Promise<string> {
        const [domain, id] = this.match.exec(url)!.slice(1);
        this.albumInfo = fetchAlbumInfo(domain, id);
        return (await this.albumInfo).name;
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {
        if (opts.trackListCredits) {
            const { artists, tracks } = (await this.albumInfo)!;

            function addArtist(m: Record<string, string[]>, artist: ArtistInfo) {
                const roles = artist.effectiveRoles === 'Default' ? artist.categories : artist.effectiveRoles;
                roles.split(', ').forEach((role) => {
                    const kw = ROLE2KEYWORD[role] || role;
                    if (kw === 'EXCLUDE') return;
                    m[kw].push(artist.name);
                });
            }
            const relaMap0 = DefaultDict(() => [] as string[]); // relation -> names
            artists.forEach((artist) => addArtist(relaMap0, artist));

            tracks.sort((a, b) => a.discNumber - b.discNumber || a.trackNumber - b.trackNumber);
            const discs: Disc[] = [];
            tracks.forEach((track) => {
                if (track.discNumber !== discs.length) {
                    discs.push({ tracks: [] });
                }
                discs[track.discNumber - 1].tracks.push({ title: track.name, comment: track.song.artistString, credits: {} });
            });
            editor.setTrackInfo({ credits: relaMap0, discs }, 'tracks');
        }

        if (opts.labelSerial) {
            // NOTE: label, if present, is set in the `trackListCredits` part above
            const { catalogNumber } = (await this.albumInfo)!;
            if (!editor.setInfoBoxField("品番", catalogNumber, { editOnly: true })) {
                editor.setInfoBoxField("编号", catalogNumber);
            }
        }

        if (opts.titleIntro) {
            const { name, description } = (await this.albumInfo)!;
            editor.editTitleIntro(name, description);
        }

        if (opts.length) {
            const { tracks } = (await this.albumInfo)!;
            const timeSecs = tracks.flatMap(({ song }) => song.lengthSeconds).reduce((a, b) => a + b, 0);
            editor.setInfoBoxField("播放时长", formatDuration(timeSecs));
        }

        if (opts.releaseDateEvent) {
            const { releaseDate, releaseEvent } = (await this.albumInfo)!;
            const { year, month, day } = releaseDate;
            let dateStr = (new Date(year, month - 1, day)).toISOString().slice(0, 10);
            const eventStr = eventMap(releaseEvent);
            if (eventStr) {
                dateStr += ` (${eventStr})`;
            }
            editor.setInfoBoxField("发售日期", dateStr);
        }

        if (opts.url) {
            const { webLinks } = (await this.albumInfo)!;
            const officialLinks = webLinks.filter(({ category }) => category === 'Official').map(({ url }) => url);
            if (officialLinks.length > 0) {
                editor.setInfoBoxField("官方网站", officialLinks.length == 1 ? officialLinks[0] : officialLinks.map((url) => ["", url]));
            }
        }

        if (opts.xfd) {
            const { pvs } = (await this.albumInfo)!;
            const xfdLinks = pvs.map(({ url }) => url);
            if (xfdLinks.length > 0) {
                editor.setInfoBoxField("链接", xfdLinks.map((url) => ["试听", url]));
            }
        }

        if (opts.formatType) {
            const discType = (await this.albumInfo!).discType;
            editor.setInfoBoxField("版本特性", discType);
        }

        editor.done();
    }
}

const ROLE2KEYWORD: Record<string, string> = {
    'Circle': 'EXCLUDE',
    'Band': 'EXCLUDE',
    'Animator': 'EXCLUDE',
    'Subject': 'EXCLUDE',
    'Other': 'EXCLUDE',
    'Nothing': 'EXCLUDE',
    'Encoder': 'EXCLUDE',
    'VoiceManipulator': 'Vocal',
    'VocalDataProvider': 'Vocal',
    'Mixer': 'Mixing',
    'Publisher': '出版方',
    'Distributor': 'EXCLUDE',
}

interface VocaDBAlbum {
    name: string;
    description: string;
    releaseDate: { year: number, month: number, day: number };
    releaseEvent?: ReleaseEventInfo;
    discType: string; // "Single", "Album", "EP", "Compilation", etc.
    catalogNumber: string;
    artists: ArtistInfo[];
    tracks: TrackInfo[];
    webLinks: LinkInfo[];
    pvs: PVInfo[]; // could be XFD
    mainPicture: PictureInfo;
}

interface ArtistInfo {
    name: string;
    categories: string;
    effectiveRoles: string;
}

interface TrackInfo {
    name: string;
    discNumber: number;
    trackNumber: number;
    song: {
        artistString: string;
        lengthSeconds: number;
    }
}

interface LinkInfo {
    url: string;
    description: string;
    category: 'Official' | 'Commercial' | 'Reference' | 'Other';
}

interface PVInfo {
    url: string;
    service: 'NicoNicoDouga' | 'Youtube' | 'Bilibili' | 'SoundCloud';
    name: string;
}

interface PictureInfo {
    urlOriginal: string;
    urlThumb: string;
}

interface ReleaseEventInfo {
    name: string;
}

async function fetchAlbumInfo(domain: string, id: string): Promise<VocaDBAlbum> {
    // ref: https://vocadb.net/swagger/index.html
    const res = await fetch(
        `https://${domain}/api/albums/${id}?fields=Artists,Description,Discs,MainPicture,PVs,ReleaseEvent,Tracks,WebLinks`,
        { mode: "cors", headers: { "Accept": "application/json" } }
    );
    return res.json();
}

function eventMap(event?: ReleaseEventInfo): string {
    if (!event) return "";
    if (event.name.startsWith("Comiket")) {
        return `C${event.name.slice("Comiket ".length)}`;
    }
    if (event.name.startsWith("M3")) {
        return `M3-${event.name.split(" ")[1]}`;
    }
    if (event.name.startsWith("博麗神社")) {
        return event.name.slice("博麗神社".length);
    }
    return event.name;
}
