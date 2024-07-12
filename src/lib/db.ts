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