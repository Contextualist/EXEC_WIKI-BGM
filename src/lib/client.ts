export const CORS_ENDPOINT = 'https://exec-wiki-bgm-cors.hya.moe';
const BGMAPI_ENDPOINT = 'https://api.bgm.tv';
export const WRITE_GATEWAY_ENDPOINT = 'https://exec-wiki-bgm-write-gateway.hya.moe';

import { type Staff } from './db';

export interface SubjectInfo {
    name: string;
    typeID: number;
    infobox: string;
    summary: string;
    metaTags: string[];
}
export interface SubjectEpInfo {
    name: string;
    name_cn: string;
    disc: number;
    ep: number;
}
export interface SubjectRelaPerson {
    id: number;
    name: string;
    relation: string;
    eps: string;
}

const RELEVANT_CAREERS = new Set(['artist', 'illustrator']);

export async function searchPerson(name: string): Promise<Staff[]> {
    if (name === '') {
        return [];
    }
    const request = new Request(`${CORS_ENDPOINT}/graphql`, {
        method: 'POST',
        // headers: { 'Content-Type': 'application/json' }, // seems like that we can make a CORS simple request here
        mode: 'cors',
        body: getBGMRGraphQLQuery(name),
    });
    const response = await FETCHERS.ChiiAi.dispatch(request);
    const result = (await response.json()).data.queryCelebritySearch.result;
    if (result.length === 0) {
        return [];
    }
    const pids = result.map((r: any) => parseInt(r.id.slice(7)));
    const namePfpList = await getPersonPfpList(pids);
    return result.map((r: any, i: number) => ({
        id: pids[i],
        pfp: namePfpList[i].pfp,
        name: entityUnescape(r.name),
        aliases: r.alias.map(entityUnescape)
    }));
}

async function getPersonPfpList(pids: number[]): Promise<{ name: string, pfp: string }[]> {
    const request = new Request(`${CORS_ENDPOINT}/json/search-person/bgm_id=${pids.join(',')}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMRaw.dispatch(request);
    const result = await response.json();
    return pids.map((pid: number) => {
        const person = result[pid];
        if (person === undefined) {
            return { name: 'Unknown', pfp: 'https://lain.bgm.tv/img/no_icon_subject.png' };
        }
        return { name: entityUnescape(person.name), pfp: normalizePfpUrl(`https://lain.bgm.tv${person.img}`) };
    });
}

export async function getPerson(pid: number): Promise<[Staff, boolean]> {
    const request = new Request(`${BGMAPI_ENDPOINT}/v0/persons/${pid}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMAPI.dispatch(request);
    const result = await response.json();
    const aliasBlock = result.infobox.find((block: any) => block.key === '别名')?.value;
    return [
        {
            id: pid,
            pfp: normalizePfpUrl(result.images.large),
            name: entityUnescape(result.name),
            aliases: aliasBlock ? aliasBlock.map((a: any) => entityUnescape(a.v)) : [],
        },
        (new Set(result.career).intersection(RELEVANT_CAREERS).size > 0) // 顺带判断是否是音乐相关人物
    ];
}

export async function getSubjectInfo(sid: number): Promise<SubjectInfo> {
    const request = new Request(`${CORS_ENDPOINT}/p1/wiki/subjects/${sid}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const result = await response.json();
    return result as SubjectInfo;
}

export async function getPersonInfo(pid: number): Promise<SubjectInfo> {
    const request = new Request(`${CORS_ENDPOINT}/p1/wiki/persons/${pid}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const result = await response.json();
    return result as SubjectInfo;
}

export async function getSubjectType(sid: number): Promise<number> {
    const request = new Request(`${BGMAPI_ENDPOINT}/v0/subjects/${sid}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMAPI.dispatch(request);
    const result = await response.json();
    return result.type;
}

export async function getSubjectEpInfo(sid: number): Promise<SubjectEpInfo[]> {
    const request = new Request(`${BGMAPI_ENDPOINT}/v0/episodes?subject_id=${sid}&limit=1000`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMAPI.dispatch(request);
    const result = await response.json();
    (result.data as SubjectEpInfo[]).forEach((ep) => {
        ep.name = entityUnescape(ep.name);
        ep.name_cn = entityUnescape(ep.name_cn);
    }); // workaround for the HTML entities bug
    return result.data as SubjectEpInfo[];
}

export async function getSubjectRelaPerson(sid: number): Promise<SubjectRelaPerson[]> {
    const request = new Request(`${BGMAPI_ENDPOINT}/v0/subjects/${sid}/persons`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMAPI.dispatch(request);
    const result = await response.json();
    return result as SubjectRelaPerson[];
}

export async function getSubjectRelaPIDList(sid: number): Promise<number[]> {
    const result = await getSubjectRelaPerson(sid);
    return Array.from(new Set(result.map((r) => r.id)));
}

async function getWikiHistory(cat: string, username: string, page: number): Promise<{ ids: number[], maxPage: number }> {
    const url = `${CORS_ENDPOINT}/user/${username}/${cat}${page > 1 ? `?page=${page}` : ''}`;
    const request = new Request(url, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMWeb.dispatch(request);
    const text = await response.text();
    const dom = new DOMParser().parseFromString(text, 'text/html');
    const els = dom.querySelectorAll('#columnA li > h6 > a')
    const pageEls = dom.querySelectorAll('#columnA .page_inner > a[href]');
    return {
        ids: Array.from(els).map((el) => parseInt(el.getAttribute('href')!.split('/').pop()!)),
        maxPage: Math.max(...Array.from(pageEls).map((el) => parseInt(el.getAttribute('href')!.split('=').pop()!))) || 1
    };
}

export async function getWikiHistorySubjectPersonRelaSIDList(username: string, page: number): Promise<{ ids: number[], maxPage: number }> {
    return await getWikiHistory('wiki/subject_person_relation', username, page);
}

export async function getWikiHistoryPersonPIDList(username: string, page: number): Promise<{ ids: number[], maxPage: number }> {
    return await getWikiHistory('wiki/person', username, page);
}

export async function getUserNickname(username: string): Promise<string> {
    const request = new Request(`${BGMAPI_ENDPOINT}/v0/users/${username}`, { method: 'GET', mode: 'cors' });
    const response = await FETCHERS.BGMAPI.dispatch(request);
    const result = await response.json();
    return result.nickname;
}


interface WriteSessionState {
    nickname: string;
    userID: number;
    expiresAt: number;
    isWikiEditor: boolean;
}

export interface SubjectInfoWrite {
    type?: number;
    platform?: number;
    name?: string;
    infobox?: string;
    summary?: string;
    nsfw?: boolean;
    metaTags?: string[];
}

export interface SubjectEpInfoWrite {
    disc?: number;
    ep?: number;
    name?: string;
    nameCN?: string;
}

export interface PersonInfoWrite {
    name?: string;
    infobox?: string;
    summary?: string;
}

export async function getWriteSessionState(token: string): Promise<WriteSessionState> {
    const request = new Request(`${WRITE_GATEWAY_ENDPOINT}/client_hello`, auth(token, { method: 'GET', mode: 'cors' }));
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const result = await response.json();
    return result as WriteSessionState;
}

export async function postSubjectInfo(token: string, subjectInfo: SubjectInfoWrite): Promise<number | string> {
    const body = JSON.stringify(Object.assign({ summary: '', nsfw: false, platform: 0 }, subjectInfo));
    const request = new Request(`${WRITE_GATEWAY_ENDPOINT}/p1/wiki/subjects`, auth(token, {
        method: 'POST', mode: 'cors', body: body, headers: { 'Content-Type': 'application/json' }
    }));
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const error = await handleEditError(response);
    if (error) { return error; }
    const result = await response.json();
    return result.subjectID;
}

export async function patchSubjectInfo(token: string, subjectID: number, commitMessage: string, subjectInfo: SubjectInfoWrite): Promise<void | string> {
    const body = JSON.stringify({
        commitMessage,
        subject: subjectInfo
    });
    const request = new Request(`${WRITE_GATEWAY_ENDPOINT}/p1/wiki/subjects/${subjectID}`, auth(token, {
        method: 'PATCH', mode: 'cors', body: body, headers: { 'Content-Type': 'application/json' }
    }));
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const error = await handleEditError(response);
    if (error) { return error; }
}

export async function patchPersonInfo(token: string, personID: number, commitMessage: string, personInfo: PersonInfoWrite): Promise<void | string> {
    const body = JSON.stringify({
        commitMessage,
        person: personInfo
    });
    const request = new Request(`${WRITE_GATEWAY_ENDPOINT}/p1/wiki/persons/${personID}`, auth(token, {
        method: 'PATCH', mode: 'cors', body: body, headers: { 'Content-Type': 'application/json' }
    }));
    const response = await FETCHERS.BGMPrivateAPI.dispatch(request);
    const error = await handleEditError(response);
    if (error) { return error; }
}

async function handleEditError(response: Response): Promise<string> {
    if (response.status === 401 || response.status === 500) {
        const result = await response.json();
        return `[${result.code}] ${result.message}`;
    }
    return '';
}


function getBGMRGraphQLQuery(q: string): string {
    return JSON.stringify({
        "operationName": "CelebritySearch",
        "variables": {
            "q": q,
            "type": "person"
        },
        "query": `
    query CelebritySearch($q: String, $type: String) {
        queryCelebritySearch(q: $q, type: $type) {
            result {
                ... on Celebrity {
                    id
                    name
                    alias
                }
            }
        }
    }`
    });
}

function normalizePfpUrl(url: string): string {
    return url.replace(/\?r=\d+$/, '').replace('/pic/crt/s', '/pic/crt/l');
}

const ENTITY_MAP: Record<string, string> = { '&amp;': '&', '&lt;': '<', '&gt;': '>', '&quot;': '"' };
const RE_ENTITY = new RegExp(Object.keys(ENTITY_MAP).join('|'), 'g');
function entityUnescape(str: string): string {
    return str.replaceAll(RE_ENTITY, (match) => ENTITY_MAP[match]);
}

function auth(token: string, req: RequestInit = {}): RequestInit {
    const headers = req.headers ?? {};
    return {
        ...req,
        headers: {
            ...headers,
            Authorization: `Bearer ${token}`
        }
    };
}

/**
 * Fetcher class to limit the number of concurrent requests for a single endpoint.
 */
class Fetcher {
    private queue: [Request, (response: Response) => void][] = [];
    private running = false;
    constructor(private waitTime: number) { }

    async dispatch(request: Request): Promise<Response> {
        return new Promise((resolve) => {
            this.queue.push([request, resolve]);
            this.try_process();
        });
    }
    async try_process() {
        if (this.running) {
            return;
        }
        this.running = true;
        while (true) {
            const rr = this.queue.shift();
            if (rr === undefined) {
                break;
            }
            const [request, resolve] = rr;
            const startTime = Date.now();
            resolve(await fetch(request));
            const elapsedTime = Date.now() - startTime;
            if (elapsedTime < this.waitTime) {
                await new Promise((r) => setTimeout(r, this.waitTime - elapsedTime));
            }
        }
        this.running = false;
    }
}

const FETCHERS = {
    ChiiAi: new Fetcher(300),
    BGMRaw: new Fetcher(300),
    BGMAPI: new Fetcher(300),
    BGMPrivateAPI: new Fetcher(300),
    BGMWeb: new Fetcher(500),
}