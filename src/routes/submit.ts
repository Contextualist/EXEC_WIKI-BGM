import { type Release } from "./trackInfoWriter";
import {
    patchSubjectInfo,
    patchPersonInfo,
    postSubjectInfo,
    type SubjectEpInfoWrite,
} from '$lib/client';
import { toast, type ToastItemProps } from './Toast.svelte';

export interface SubjectData {
    sid: number;
    wikiType?: 'subject' | 'person';
    title: string;
    infoBox: string;
    description: string;
    metaTags?: string;
}

export async function submit(
    subjectData: SubjectData | null,
    epActions: SubjectEpAction | null,
    relaActions: SubjectRelaAction | null,
    token: string,
    commitMessage: string
): Promise<number | null> {
    if (!subjectData) return null;
    const { rfn, tp } = toast('提交中...', { progress: true });
    const rsid = await submitSubject(subjectData, token, commitMessage, tp);
    if (epActions) {
        await submitEps(epActions, token, commitMessage, tp);
    }
    if (relaActions) {
        await submitRela(relaActions, token, commitMessage, tp);
    }
    setTimeout(() => rfn(), 1000);
    return rsid;
}

async function submitSubject(subjectData: SubjectData, token: string, commitMessage: string, tp: ToastItemProps): Promise<number | null> {
    const subjectInfo = {
        ...(subjectData.title ? { name: subjectData.title } : {}),
        ...(subjectData.infoBox ? { infobox: subjectData.infoBox } : {}),
        ...(subjectData.description ? { summary: subjectData.description } : {}),
        ...(subjectData.metaTags ? { metaTags: subjectData.metaTags.split(' ') } : {})
    };
    let r: number | string | void;
    let rsid = subjectData.sid;
    if (rsid !== 0) {
        const patchFn = subjectData.wikiType === 'subject' ? patchSubjectInfo : patchPersonInfo;
        r = await patchFn(token, subjectData.sid, commitMessage, subjectInfo);
    } else {
        if (subjectData.wikiType === 'person') {
            toast('尚不支持创建人物条目', { alert: true });
            return null;
        }
        r = await postSubjectInfo(token, subjectInfo);
        if (typeof r === 'number') {
            rsid = r;
            r = undefined;
        }
    }
    if (!r) {
        tp.nDone = 1;
        toast('条目信息提交成功');
        return rsid;
    } else {
        toast(`提交条目信息时发生错误: ${r}`, { alert: true });
        return null;
    }
}

async function submitEps(epActions: SubjectEpAction, token: string, commitMessage: string, tp: ToastItemProps): Promise<number | null> {
    // TODO: implement
    return null;
}

async function submitRela(relaActions: SubjectRelaAction, token: string, commitMessage: string, tp: ToastItemProps): Promise<number | null> {
    // TODO: implement
    return null;
}

// existing tracks: assembleRelease(getSubjectEpInfo(sid), getSubjectRelaPerson(sid))
// target tracks: fromFormalRelease(currentRelease, name2staff)
// existing credits: getSubjectRelaPerson(sid)
// target credits: currentRelease.intoCreatorSummary(name2staff)

export interface SubjectEpAction {
    edit: SubjectEpInfoWrite[];
    append: SubjectEpInfoWrite[];
}

export function trackDiff(from: Release, to: Release): SubjectEpAction {
    const fromTrs = from.discs.flatMap((d, i) => d.tracks.map((t, j) => ({ disc: i, ep: j, name: t.title, nameCN: t.comment })));
    const toTrs = to.discs.flatMap((d, i) => d.tracks.map((t, j) => ({ disc: i, ep: j, name: t.title, nameCN: t.comment })));
    const actions: SubjectEpAction = { edit: [], append: [] };
    for (let i = 0; i < Math.min(fromTrs.length, toTrs.length); i++) {
        const a: SubjectEpInfoWrite = { disc: toTrs[i].disc, ep: toTrs[i].ep }
        if (fromTrs[i].name !== toTrs[i].name) {
            a.name = toTrs[i].name;
        }
        if (fromTrs[i].nameCN !== toTrs[i].nameCN) {
            a.nameCN = toTrs[i].nameCN;
        }
        if (a.name || a.nameCN) {
            actions.edit.push(a);
        }
    }
    for (let i = toTrs.length; i < fromTrs.length; i++) {
        actions.edit.push({ disc: fromTrs[i].disc, ep: fromTrs[i].ep, name: "", nameCN: "" });
    }
    for (let i = fromTrs.length; i < toTrs.length; i++) {
        actions.append.push(toTrs[i]);
    }
    return actions;
}

export interface SubjectRelaPerson {
    id: number;
    relation: string;
    eps: string;
}

export interface SubjectRelaAction {
    delete: SubjectRelaPerson[];
    edit: SubjectRelaPerson[];
    add: SubjectRelaPerson[];
}

export function relaDiff(from: SubjectRelaPerson[], to: SubjectRelaPerson[]): SubjectRelaAction {
    const actions: SubjectRelaAction = { delete: [], edit: [], add: [] };
    // convert `from` to SubjectRelaPerson[id][relation]
    const existingMap = new Map<number, Map<string, SubjectRelaPerson>>();
    for (const r of from) {
        if (!existingMap.has(r.id)) {
            existingMap.set(r.id, new Map());
        }
        existingMap.get(r.id)!.set(r.relation, r);
    }
    // Figure out edit and add
    for (const r of to) {
        const q = existingMap.get(r.id)?.get(r.relation);
        if (q) {
            if (q.eps !== r.eps) {
                actions.edit.push(r);
            }
            existingMap.get(r.id)!.delete(r.relation);
        } else {
            actions.add.push(r);
        }
    }
    // Figure out delete
    for (const r of existingMap.values()) {
        actions.delete.push(...r.values());
    }
    return actions;
}