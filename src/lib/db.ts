import Dexie, { type EntityTable } from "dexie";

export interface Staff {
    id: number;
    pfp: string;
    name: string;
    aliases: string[];
}

export const db = new Dexie("EXECWBDatabase") as Dexie & {
    staff: EntityTable<Staff, 'id'>;
};
db.version(1).stores({
    staff: 'id, pfp, name, *aliases',
});

export async function queryNameOrAliasBulk(names: string[]): Promise<Staff[][]> {
    let r: Staff[][] = [];
    for (const name of names) {
        const matches = await db.staff.where('name').equals(name).or('aliases').equals(name).toArray();
        /*
        if (matches.length > 1) {
            console.warn(`Multiple matches for ${name}: ${matches.map(m => m.id).join(', ')}`);
        }
        */
        r.push(matches);
    }
    return r;
}

// ref: https://dexie.org/docs/StorageManager#summary
export async function tryPersistWithoutPromtingUser() {
    if (!navigator.storage || !navigator.storage.persisted) {
        return "failed";
    }
    let persisted = await navigator.storage.persisted();
    if (persisted) {
        return "persisted";
    }
    if (!navigator.permissions || !navigator.permissions.query) {
        return "prompt"; // It MAY be successful to prompt. Don't know.
    }
    const permission = await navigator.permissions.query({
        name: "persistent-storage"
    });
    if (permission.state === "granted") {
        persisted = await navigator.storage.persist();
        if (persisted) {
            return "persisted";
        } else {
            return "failed";
        }
    }
    if (permission.state === "prompt") {
        return "prompt";
    }
    return "failed";
}

export async function tryPersist() {
    return await navigator.storage.persist() ? "persisted" : "failed";
}
