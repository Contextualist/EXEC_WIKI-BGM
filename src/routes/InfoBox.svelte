<script lang="ts" module>
	import { parse, stringify } from '@bgm38/wiki';
	import RichInfoBox, {
		type ArrayWiki,
		wikiUnpack,
		wikiRepack,
		edit as editRich,
		unlinkField,
		resetReactiveFields
	} from '$lib/richInfoBox/RichInfoBox.svelte';

	export { unlinkField };

	let value = $state('');
	let modeRich = $state(false);
	let valueWiki: ArrayWiki = $state({ type: 'Album', data: [] });

	export function init(val: string): void {
		value = val;
		modeRich = val.startsWith('{"');
		if (modeRich) {
			const valueWikiMaybeOld = JSON.parse(val);
			valueWiki = valueWikiMaybeOld.type
				? valueWikiMaybeOld
				: { type: 'Album', data: valueWikiMaybeOld };
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
		return stringify(wikiRepack(a)).replaceAll(' =', '=');
	}
	export function toArrayWikiString(text: string): string {
		return JSON.stringify(wikiUnpack(parse(text)));
	}
	export function exportText(): string {
		return modeRich ? _arrWikiEncode(valueWiki) : value;
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { setContext } from 'svelte';

	import { toast } from './Toast.svelte';
	import { debounce, throttle } from './utils.svelte.ts';

	interface InfoBoxProps {
		value: string;
		reactiveFields: Set<string>;
		wideFormat?: boolean;
		class?: string;
	}
	// NOTE: valueExport is for passing out only; changes should be made with the exported functions
	let {
		value: valueExport = $bindable(),
		reactiveFields,
		wideFormat = false,
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
</script>

<div {...rest} class="relative {modeRich ? 'overflow-auto' : ''} {class_}">
	<button
		class={'absolute z-1 top-[1px] right-[calc(6%-17px)] text-bgm-grey hover:text-bgm-darkgrey cursor-pointer ' +
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
			class="input-bgm border-none focus:drop-shadow-[_] w-[96.5%] h-[calc(100%-1.2rem)] pr-[0.5rem] py-[0.5rem] text-sm break-all overflow-auto"
			bind:value={valueWiki.data}
			{reactiveFields}
			{update}
		/>
	{:else}
		<textarea
			class="input-bgm w-[94%] h-[calc(100%-1.2rem)] p-[0.5rem] text-sm break-all"
			spellcheck="false"
			bind:value
		>
		</textarea>
	{/if}
</div>
