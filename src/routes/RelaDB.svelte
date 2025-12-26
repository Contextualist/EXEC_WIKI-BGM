<script lang="ts" module>
	export async function importBulk(lines: string[]) {
		const data = lines.map((line) => {
			const [id, pfp, name, ...aliases] = line.split('\t');
			return { id: parseInt(id), pfp, name, aliases };
		});
		await db.staff.bulkDelete(data.map((staff) => staff.id));
		await db.staff.bulkAdd(data);
		updateCount();
	}
	export async function persist() {
		let result = await tryPersistWithoutPromtingUser();
		if (result === 'prompt') {
			// Well, Chrome returns 'prompt' even though it never prompts the user.
			if (isFirefox) {
				toast('为了持续使用本地关联库，请授予持久化存储权限', { duration: 8000 });
			}
			result = await tryPersist();
		}
		console.log(`Persist result: ${result}`);
	}
	export async function exportBulk(): Promise<string> {
		const data = await db.staff.toArray();
		return data
			.map((staff) => {
				return [staff.id, staff.pfp, staff.name, ...staff.aliases].join('\t');
			})
			.join('\n');
	}

	let numEntries = $state(0);
	async function updateCount() {
		numEntries = await db.staff.count();
	}
	updateCount();
</script>

<script lang="ts">
	import { db, type Staff } from '$lib/db';
	import { searchPerson, getPerson } from '$lib/client';
	import { importPersonCreated, importRelaHistory } from './relaDB.ts';
	import Button from './Button.svelte';
	import { toast } from './Toast.svelte';
	import { localStorage$state } from './utils.svelte';
	import { isFirefox } from '$lib/utils.ts';
	import { tryPersistWithoutPromtingUser, tryPersist } from '$lib/db.ts';

	interface RelaDBProps {
		bgmUID: string;
		closeRelaDB: () => void;
		class?: string;
	}
	let { bgmUID = $bindable(), closeRelaDB, class: class_ = '' }: RelaDBProps = $props();

	let lastExportTime = localStorage$state('last-export-time', Date.now());
	let exportReminder = $derived.by(() => {
		return Date.now() - lastExportTime.val > 1000 * 60 * 60 * 24 * 30
			? '有一段时间没有备份关联库了，前往设置导出备份吧'
			: '';
	});

	async function addPerson(p: Staff) {
		p.aliases = p.aliases.map((a) => a.replace(/\s*[(（].+[）)]$/, '')); // trim circle names
		p.aliases = p.aliases.flatMap((a) => {
			// split =-joined aliases
			const xs = a.replaceAll('＝', '=').split('=');
			if (xs.length > 1) {
				return xs.map((x) => x.trim()).filter((x) => x !== p.name);
			}
			return [a];
		});
		try {
			await db.staff.add(p);
			updateCount();
			toast(`已在关联库中添加 ${p.name}`);
		} catch {
			await db.staff.delete(p.id);
			await db.staff.add(p);
			toast(`已在关联库中更新 ${p.name}`);
		}
		perturbSettings();
	}

	function perturbSettings() {
		// no-op to trigger reparsing to include updates from relaDB
		bgmUID = $state.snapshot(bgmUID);
	}

	let searchResultPromise: Promise<Staff[]> = $state(Promise.resolve([]));
	async function searchBGM(): Promise<Staff[]> {
		const name = (document.getElementById('search-bgm') as HTMLInputElement).value;
		const result = await searchPerson(name);
		if (result.length === 0) {
			toast('没有找到相关人物', { alert: true });
		}
		return result;
	}
	async function idaddBGM() {
		const id = (document.getElementById('idadd-bgm') as HTMLInputElement).value;
		if (id.includes('character')) {
			toast('虚构角色不能用于关联', { alert: true });
			return;
		}
		let id_num;
		try {
			id_num = parseInt(/(\d+)$/.exec(id)![1]);
		} catch {
			toast('没有识别到 ID', { alert: true });
			return;
		}
		let result;
		try {
			result = (await getPerson(id_num))[0];
		} catch {
			toast('没有找到相关人物', { alert: true });
			return;
		}
		await addPerson(result);
	}

	const relaElClass = 'my-5';
	const labelClass = 'text-bgm-darkgrey my-1';
</script>

<div class={class_}>
	<div class="text-bgm-darkgrey text-sm mb-2">当前有 {numEntries} 个人物条目</div>
	{#if exportReminder}
		<div class="text-bgm-pink text-sm mb-2">{exportReminder}</div>
	{/if}

	<div class={relaElClass}>
		<div class={labelClass}>从我的班古米同步...</div>
		<Button
			onclick={async () => {
				await importPersonCreated(bgmUID, 1);
				await updateCount();
				perturbSettings();
			}}
		>
			同步最近创建人物
		</Button>
		<Button
			onclick={async () => {
				await importRelaHistory(bgmUID, 1);
				await updateCount();
				perturbSettings();
			}}
		>
			同步最近关联编辑
		</Button>
	</div>

	<div class={relaElClass}>
		<label class="{labelClass} block" for="idadd-bgm">用班古米 ID 直接添加人物</label>
		<div class="flex flex-justify-between">
			<input
				id="idadd-bgm"
				type="text"
				spellcheck="false"
				placeholder="55566 或 https://bgm.tv/person/55566"
				class="input-bgm p-1 w-65 text-sm placeholder-[#ccc]"
				onkeypress={(e) => {
					if (e.key === 'Enter') idaddBGM();
				}}
			/>
			<Button id="idadd-bgm-btn" onclick={idaddBGM}>添加</Button>
		</div>
	</div>
	<div class={relaElClass}>
		<label class="{labelClass} block" for="search-bgm">在班古米搜索人物</label>
		<div class="flex flex-justify-between">
			<input
				id="search-bgm"
				type="text"
				spellcheck="false"
				class="input-bgm p-1 w-65 text-sm placeholder-[#ccc]"
				placeholder="をとは"
				onkeypress={(e) => {
					if (e.key === 'Enter') searchResultPromise = searchBGM();
				}}
			/>
			<Button id="search-bgm-btn" onclick={async () => (searchResultPromise = searchBGM())}
				>搜索</Button
			>
		</div>
		<div class="text-bgm-grey italic text-xs mt-2">
			没找到？
			<a
				onclick={() =>
					navigator.clipboard.writeText(
						(document.getElementById('search-bgm') as HTMLInputElement).value
					)}
				href="https://bgm.tv/person/new"
				target="_blank"
				rel="noopener noreferrer"
			>
				复制名字并前往新建人物条目
			</a>
		</div>
	</div>
	<div class={relaElClass}>
		{#await searchResultPromise}
			<img src="/loading.gif" alt="loading" class="w-15 pt-2 opacity-60" />
		{:then searchResult}
			{#each searchResult as { id, pfp, name, aliases }}
				<div
					class="text-bgm-darkgrey text-sm py-3 w-full border-1 border-t-solid border-bgm-grey flex flex-row"
				>
					<div class="flex-basis-15">
						<a
							href={`https://bgm.tv/person/${id}`}
							aria-label={name}
							target="_blank"
							rel="noopener noreferrer"
						>
							<img
								src={pfp === '' ? 'https://lain.bgm.tv/img/no_icon_subject.png' : pfp}
								alt={name}
								class="m-1 mr-2 w-15 h-15 object-cover rounded-md"
							/>
						</a>
					</div>
					<div class="flex-grow-1">
						<a href={`https://bgm.tv/person/${id}`} target="_blank" rel="noopener noreferrer">
							{name}
						</a>
						{#if aliases.length > 0}
							<span class="text-bgm-grey text-xs">
								{aliases.join('、')}
							</span>
						{/if}
					</div>
					<button
						class={'text-bgm-grey hover:text-bgm-darkgrey cursor-pointer ' +
							'border-none bg-transparent ml-1 h-[20px] w-[20px] p-0 flex-basis-[20px] flex-self-center'}
						title="添加/更新这个人物"
						aria-label="添加/更新这个人物"
						onclick={() =>
							addPerson({ id, pfp, name, aliases: aliases.filter((a) => a !== name) }).then(() =>
								closeRelaDB()
							)}
					>
						<svg
							xmlns="http://www.w3.org/2000/svg"
							width="20"
							height="20"
							viewBox="0 0 24 24"
							fill="none"
							stroke="currentColor"
							stroke-width="2"
							stroke-linecap="round"
							stroke-linejoin="round"
						>
							<path d="M3 3h18v18H3zM12 8v8m-4-4h8" />
						</svg>
					</button>
				</div>
			{/each}
		{/await}
	</div>
</div>
