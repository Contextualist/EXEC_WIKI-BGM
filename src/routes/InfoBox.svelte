<script lang="ts" module>
	import { parse, stringify } from '@bgm38/wiki';
	import RichInfoBox, {
		type ArrayWiki,
		wikiUnpack,
		wikiRepack,
		edit as editRich,
		unlinkField,
		resetReactiveFields,
		storeRecentCombo as metaTagStoreRecentCombo
	} from '$lib/richInfoBox/RichInfoBox.svelte';
	import { localStorage$state } from './utils.svelte.ts';

	export { unlinkField };

	let value = $state('');
	let modeRich = $state(false);
	let valueWiki: ArrayWiki = $state({ type: 'Album', data: [] });

	export function init(val: string): void {
		value = val;
		modeRich = !val.startsWith('{{');
		if (modeRich) {
			valueWiki = JSON.parse(val);
		}
	}
	export function reset(text: string): void {
		value = text;
		if (modeRich) {
			valueWiki = wikiUnpack(parse(text));
			resetReactiveFields();
		}
	}
	export function merge(text: string): void {
		try {
			ensureRich();
		} catch (e) {
			return;
		}
		const { data: vw } = wikiUnpack(parse(text));
		editRich(vw, valueWiki.data);
	}

	export function edit(entries: [string, string][]): void {
		if (!modeRich) {
			let lines = value.split('\n');
			entries.forEach(([key, val]) => {
				const i = lines.findIndex((line) => line.startsWith(`|${key}=`));
				if (!val && i === -1) return;
				const editLine = `|${key}= ${val}`;
				if (i === -1) {
					lines.splice(lines.length - 1, 0, editLine);
				} else {
					lines[i] = editLine;
				}
			});
			value = lines.join('\n');
		} else {
			editRich(entries, valueWiki.data);
		}
	}
	export function editField(
		key: string,
		value: string | string[],
		{ editOnly = false } = {}
	): boolean {
		try {
			ensureRich();
		} catch (e) {
			return false;
		}
		if (editOnly && !valueWiki.data.some(([k, _]) => k === key)) {
			return false;
		}
		const val = Array.isArray(value) ? value.map((v) => ['', v] as [string, string]) : value;
		editRich([[key, val]], valueWiki.data);
		return true;
	}

	function ensureRich(): void {
		if (!modeRich) {
			toRich();
			modeRich = true;
		}
	}
	function toRich(): void {
		try {
			valueWiki = wikiUnpack(parse(value));
		} catch (e) {
			toast(`Infobox 格式错误：${e}`, { alert: true, duration: 8000 });
			throw e;
		}
	}

	function _arrWikiEncode(a: ArrayWiki): string {
		return stringify(wikiRepack(a)).replaceAll(' =', '=').replaceAll('= {', '={');
	}
	export function toArrayWikiString(text: string): string {
		return JSON.stringify(wikiUnpack(parse(text)));
	}
	export function exportText(): string {
		return modeRich ? _arrWikiEncode(valueWiki) : value;
	}

	const WIKI2SUBJECT: Record<string, string> = {
		'animanga/Manga': '书籍',
		'animanga/Novel': '书籍',
		'animanga/Book': '书籍',
		'Book/Photobook': '书籍',
		'animanga/TVAnime': '动画',
		'animanga/OVA': '动画',
		'animanga/Movie': '动画',
		'animanga/Anime': '动画',
		Album: '音乐',
		Game: '游戏',
		'real/Television': '三次元',
		'real/Movie': '三次元',
		Crt: '人物角色'
	};
	let subjectType = $derived(WIKI2SUBJECT[valueWiki.type]);
	const metaTagsRecentCombosState = localStorage$state(
		'metaTagsRecentCombos',
		{} as Record<string, string[][]>
	);
	export function storeRecentCombo(combo: string): void {
		if (combo.trim() === '') return;
		metaTagsRecentCombosState.val = {
			...metaTagsRecentCombosState.val,
			[subjectType]: metaTagStoreRecentCombo(
				combo,
				$state.snapshot(metaTagsRecentCombosState.val[subjectType] ?? []),
				subjectType
			)
		};
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { setContext, onMount } from 'svelte';

	import { toast } from './Toast.svelte';
	import { debounce, throttle } from './utils.svelte.ts';

	interface InfoBoxProps {
		value: string;
		reactiveFields: Set<string>;
		wideFormat?: boolean;
		valueMetaTags: string;
		class?: string;
	}
	// NOTE: valueExport is for passing out only; changes should be made with the exported functions
	let {
		value: valueExport = $bindable(),
		reactiveFields,
		wideFormat = false,
		valueMetaTags = $bindable(),
		class: class_ = '',
		...rest
	}: InfoBoxProps = $props();
	setContext('cell-config', {
		keyClass: wideFormat ? 'flex-basis-[5.5rem]' : 'flex-basis-[3.5rem]'
	});
	const update = debounce(() => {
		value = JSON.stringify(valueWiki);
		valueExport = value;
	}, 400);
	const sync = debounce(() => {
		valueExport = value;
	}, 100);
	$effect(() => {
		value && sync();
	});

	onMount(() => {
		// For legacy compatibility
		if (Array.isArray(metaTagsRecentCombosState.val)) {
			metaTagsRecentCombosState.val = { 音乐: $state.snapshot(metaTagsRecentCombosState.val) };
		}
	});
</script>

<div {...rest} class="relative {modeRich ? 'overflow-auto' : ''} {class_}">
	<button
		class={'absolute z-1 top-[4px] right-[calc(6%-17px)] text-bgm-grey hover:text-bgm-darkgrey cursor-pointer ' +
			'border-none border-rd-md bg-bgm-beige w-[30px] h-[30px] p-0'}
		title="切换源码/表格模式"
		onclick={throttle(() => {
			if (!modeRich) {
				toRich();
				update();
			} else {
				value = _arrWikiEncode(valueWiki);
			}
			modeRich = !modeRich;
		}, 400)}
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
			class="pt-[3px]"
		>
			{#if modeRich}
				<text
					x="50%"
					y="55%"
					fill="currentColor"
					stroke="none"
					dominant-baseline="middle"
					text-anchor="middle"
					font-family="monospace"
					font-size="20">{'{}'}</text
				>
			{:else}
				<rect x="3" y="3" width="18" height="18" rx="2" /><path d="M21 12H3M12 3v18" />
			{/if}
		</svg>
	</button>
	{#if modeRich}
		<RichInfoBox
			class="input-bgm border-none focus:drop-shadow-[_] h-[calc(100%-0.2rem)] pr-[0.5rem] text-sm break-all overflow-auto"
			style="width: {wideFormat ? '96.5%' : '97.5%'};"
			bind:value={valueWiki.data}
			{reactiveFields}
			{update}
			bind:valueMetaTags
			{subjectType}
			recentCombos={metaTagsRecentCombosState.val[subjectType]}
		/>
	{:else}
		{#if subjectType !== '人物角色'}
			<input
				type="text"
				placeholder="公共标签"
				spellcheck="false"
				bind:value={valueMetaTags}
				class="input-bgm text-sm mb-[0.75rem] w-[94%] flex-basis-[1rem] p-[0.5rem]"
			/>
		{/if}
		<textarea
			class={'input-bgm w-[94%] p-[0.5rem] text-sm break-all ' +
				(subjectType === '人物角色' ? 'h-[calc(100%-1.2rem)]' : 'h-[calc(100%-4.4rem)] ')}
			spellcheck="false"
			bind:value
		>
		</textarea>
	{/if}
</div>
