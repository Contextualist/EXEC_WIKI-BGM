import {
    getPerson,
    getWikiHistoryPersonPIDList,
    getWikiHistorySubjectPersonRelaSIDList,
    getSubjectType,
    getSubjectRelaPIDList
} from '$lib/client';
import { db, type Staff } from '$lib/db';
import { toast, type ToastItemProps } from './Toast.svelte';

export async function importPersonCreated(bgmUID: string, tillPage: number = 10) {
    const pids = await gatherEntries(getWikiHistoryPersonPIDList, bgmUID, tillPage);
    let { tp, rfn } = toast('正在导入最近创建人物...', { progress: true });
    await importPersonBatch(pids, tp, rfn);
}

export async function importRelaHistory(bgmUID: string, tillPage: number = 10) {
    let sids = await gatherEntries(getWikiHistorySubjectPersonRelaSIDList, bgmUID, tillPage);
    let { tp: tp1, rfn: rfn1 } = toast('正在收集最近关联条目...', { progress: true });
    tp1.nTotal = sids.length;
    const results = await Promise.allSettled(
        sids.map(async (sid) => {
            if ((await getSubjectType(sid)) !== 3) {
                // 不是音乐条目
                tp1.nDone++;
                return null;
            }
            const pids = await getSubjectRelaPIDList(sid);
            tp1.nDone++;
            return pids;
        })
    );
    const pids = results
        .map((r) => (r.status === 'fulfilled' ? r.value : null))
        .filter((p) => p !== null)
        .flat() as number[];
    const upids = Array.from(new Set(pids));
    rfn1();

    let { tp: tp2, rfn: rfn2 } = toast('正在导入最近关联人物...', { progress: true });
    await importPersonBatch(upids, tp2, rfn2);
}

async function gatherEntries(
    fn: (username: string, page: number) => Promise<{ ids: number[]; maxPage: number }>,
    bgmUID: string,
    tillPage: number
): Promise<number[]> {
    let { tp, rfn } = toast('正在收集编辑历史...', { progress: true });
    const { ids, maxPage } = await fn(bgmUID, 1);
    tillPage = Math.min(tillPage, maxPage);
    tp.nTotal = tillPage;
    let allIDs = [...ids];
    for (let i = 2; i <= tillPage; i++) {
        const { ids } = await fn(bgmUID, i);
        allIDs.push(...ids);
        tp.nDone = i;
    }
    rfn();
    return Array.from(new Set(allIDs));
}

async function importPersonBatch(pids: number[], tp: ToastItemProps, rfn: () => void) {
    // filter out existing entries in the database
    const existingRec = await db.staff.where('id').anyOf(pids).toArray();
    const existing = new Set(existingRec.map((s) => s.id));
    pids = Array.from(new Set(pids).difference(existing));

    tp.nTotal = pids.length;
    const results = await Promise.allSettled(
        pids.map(async (pid) => {
            let s: Staff, isA: boolean;
            try {
                [s, isA] = await getPerson(pid);
            } finally {
                tp.nDone++;
            }
            return isA ? s : null;
        })
    );
    const staffs = results
        .map((r) => (r.status === 'fulfilled' ? r.value : null))
        .filter((s) => s !== null) as Staff[];
    await db.staff.bulkDelete(staffs.map((s) => s.id));
    await db.staff.bulkAdd(staffs);
    rfn();
}
