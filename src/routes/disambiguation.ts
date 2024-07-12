
import { type Staff } from "$lib/db";

export enum Match {
    None,
    OK,
    Conflict,
    ConflictResolved
}

export type StaffMatch = [undefined, Match.None] | [Staff, Match.OK] | [undefined, Match.Conflict] | [Staff, Match.ConflictResolved];
export type ResolvedRelaMap = Map<string, StaffMatch>

export function resolveRelaMap(relaMap: Map<string, Staff[]>, dupResolutionEnt: Array<[string, number]>): ResolvedRelaMap {
    const dupResolution = new Map(dupResolutionEnt);
    return new Map(Array.from(relaMap.entries()).map(([name, staffs]) => {
        if (!staffs || staffs.length === 0) return [name, [undefined, Match.None]] as [string, StaffMatch];
        if (staffs.length === 1) return [name, [staffs[0], Match.OK]];
        let idx = dupResolution.get(name);
        if (idx === undefined) return [name, [undefined, Match.Conflict]];
        return [name, [staffs[idx], Match.ConflictResolved]];
    }));
}