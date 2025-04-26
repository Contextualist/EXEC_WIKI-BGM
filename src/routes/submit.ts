import {
    patchSubjectInfo,
    patchPersonInfo,
    postSubjectInfo,
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
    token: string,
    commitMessage: string
): Promise<number | null> {
    if (!subjectData) return null;
    const { rfn, tp } = toast('提交中...', { progress: true });
    const rsid = await submitSubject(subjectData, token, commitMessage, tp);
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
