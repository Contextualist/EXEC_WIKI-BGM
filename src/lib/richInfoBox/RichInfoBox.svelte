<script lang="ts" module>
	import { type Wiki, WikiItem, WikiArrayItem } from '@bgm38/wiki';
	import MetaTag, * as MetaTagModule from './MetaTag.svelte';

	export const storeRecentCombo = MetaTagModule.storeRecentCombo;

	type KV<T> = [string, T];
	export type ArrayWikiData = KV<string | KV<string>[]>[];
	export interface ArrayWiki {
		type: string;
		data: ArrayWikiData;
	}

	export function wikiUnpack(w: Wiki): ArrayWiki {
		return {
			type: w.type,
			data: w.data.map((item) => {
				if (item.array) {
					return [item.key, item.values!.map((v) => [v.k ?? '', v.v ?? ''])];
				} else {
					return [item.key, item.value!];
				}
			})
		};
	}
	export function wikiRepack(w: ArrayWiki): Wiki {
		function cleanValue(v: string): string {
			return v.replaceAll('\n', ' ').trim();
		}
		function arr(key: string, values: KV<string>[]): WikiItem {
			const r = new WikiItem(key, '', 'array');
			r.values = values.map(([k, v]) => new WikiArrayItem(k, cleanValue(v)));
			return r;
		}
		return {
			type: w.type,
			data: w.data.map(([key, value]) =>
				Array.isArray(value) ? arr(key, value) : new WikiItem(key, cleanValue(value), 'object')
			)
		};
	}

	let reactiveFieldsUnlinked: Record<string, boolean> = $state({});

	export function edit(entries: ArrayWikiData, valueWiki: ArrayWikiData): void {
		entries.forEach(([key, val]) => {
			if (reactiveFieldsUnlinked[key]) return;
			const i = valueWiki.findIndex(([k, _]) => k === key);
			if (!val && i === -1) return;
			const v = val;
			if (i === -1) {
				valueWiki.push([key, v]);
			} else {
				valueWiki[i][1] = v;
			}
		});
	}

	export function unlinkField(key: string): void {
		reactiveFieldsUnlinked[key] = true;
	}
	export function resetReactiveFields(): void {
		Object.keys(reactiveFieldsUnlinked).forEach((key) => {
			reactiveFieldsUnlinked[key] = false;
		});
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { flip } from 'svelte/animate';
	import Plain from './Plain.svelte';
	import PlainArray from './PlainArray.svelte';
	import Reactive from './Reactive.svelte';
	import ComboBox from './ComboBox.svelte';
	import { COMBO_CONFIG } from './comboConfig.ts';
	import { Direction, type DirectionKey } from './Cell.svelte';
	import { moveCursorTo, altOrOpt } from '../utils.ts';

	interface RichInfoBoxProps {
		value: ArrayWikiData;
		reactiveFields: Set<string>;
		update: () => void;
		valueMetaTags: string;
		subjectType: string;
		recentCombos: string[][];
		class?: string;
		style?: string;
	}
	let {
		value = $bindable(),
		reactiveFields,
		class: class_ = '',
		style = '',
		update,
		valueMetaTags = $bindable(),
		subjectType,
		recentCombos
	}: RichInfoBoxProps = $props();

	function selectElementContents(el: HTMLElement) {
		const sel = document.getSelection();
		sel?.removeAllRanges();
		const range = document.createRange();
		range.selectNodeContents(el);
		sel?.addRange(range);
	}

	function focusIth(i: number) {
		let valEl = document.querySelectorAll('#rich-infobox .rich-infobox-value')[i];
		if (Array.isArray(value[i][1])) {
			valEl = valEl.children[1].children[0];
		}
		(valEl as HTMLElement).focus();
	}

	function actAs(value: ArrayWikiData, i: number) {
		return {
			insert: (before: boolean) => {
				const newI = before ? i : i + 1;
				value.splice(newI, 0, ['未命名项', '']);
				update();
				setTimeout(() => {
					const keyEl = document.querySelectorAll('#rich-infobox .rich-infobox-key:not(.p-0)')[
						newI
					];
					(keyEl as HTMLElement).focus();
					setTimeout(() => selectElementContents(keyEl as HTMLElement), 0);
				}, 250);
			},
			swap: (updown: DirectionKey, el: HTMLElement) => {
				if (updown === Direction.Up) {
					if (i === 0) return;
					value.splice(i - 1, 2, value[i], value[i - 1]);
				} else {
					if (i === value.length - 1) return;
					value.splice(i, 2, value[i + 1], value[i]);
				}
				setTimeout(() => el.focus(), 0);
				update();
			},
			arraySwitch: () => {
				if (!Array.isArray(value[i][1])) {
					value[i][1] = value[i][1]
						.split('、')
						.map((v) => /([^\s]+?)\s*[（(](.+)[）)]/.exec(v) ?? ['', v, ''])
						.map(([, v, k]) => [k, v]);
				} else {
					value[i][1] = value[i][1].map(([k, v]) => (k ? `${v} (${k})` : v)).join('、');
				}
				update();
				setTimeout(() => focusIth(i), 0);
			},
			delete: (hard: boolean) => {
				if (!hard) return;
				value.splice(i, 1);
				update();
				setTimeout(() => focusIth(Math.min(i, value.length - 1)), 0);
			}
		};
	}
	function navigate(direction: DirectionKey, el: HTMLElement, offset: number) {
		let query = "#rich-infobox [tabindex='0']";
		if (direction === Direction.Up || direction === Direction.Down) {
			if (el.classList.contains('rich-infobox-key')) {
				query = '#rich-infobox .rich-infobox-key';
			} else {
				query = '#rich-infobox [tabindex="0"]:not(.rich-infobox-key)';
			}
		}
		const focusable = Array.from(document.querySelectorAll(query)) as HTMLElement[];
		const idx = focusable.indexOf(el);
		const move = direction === Direction.Up || direction === Direction.Left ? -1 : 1;
		focusable[idx + move]?.focus();
		moveCursorTo(document.activeElement as HTMLElement, offset);
	}
</script>

<div id="rich-infobox" class="flex flex-col {class_}" style="scrollbar-width: none; {style}">
	{#if subjectType !== '人物角色'}
		<MetaTag bind:value={valueMetaTags} {subjectType} {recentCombos} />
	{/if}
	<div class="flex-basis-[1.0rem] flex-shrink-0 text-bgm-grey/65 text-xs font-sans">
		&#x3000;↵ 新项&#x3000;&#x3000;←↑↓→穿梭&#x3000;&#x3000;{altOrOpt}↑↓排序
	</div>
	{#each value as val_i, i (val_i)}
		{@const action = {
			update,
			...actAs(value, i),
			navigate
		}}
		<div animate:flip={{ duration: 200 }}>
			{#if value[i][0] in COMBO_CONFIG}
				<ComboBox bind:value={value[i] as [string, any]} {action} {entryMod} />
			{:else if typeof value[i][1] === 'string'}
				{#if reactiveFields.has(value[i][0])}
					<Reactive
						bind:unlinked={reactiveFieldsUnlinked[value[i][0]]}
						bind:value={value[i] as [string, string]}
						{action}
						{entryMod}
					/>
				{:else}
					<Plain bind:value={value[i] as [string, string]} {action} {entryMod} />
				{/if}
			{:else}
				<PlainArray bind:value={value[i] as [string, [string, string][]]} {action} {entryMod} />
			{/if}

			{#snippet entryMod()}
				<button
					title="删除项"
					class="absolute right-0 top-[calc(50%-0.5rem)] color-bgm-teal border-none bg-transparent p-0 cursor-pointer"
					tabindex="-1"
					onclick={() => {
						value.splice(i, 1);
						update();
					}}
				>
					{@render delSVG()}
				</button>
			{/snippet}
		</div>
	{/each}
</div>

{#snippet delSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="16"
		height="16"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="2.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<line x1="18" y1="6" x2="6" y2="18"></line>
		<line x1="6" y1="6" x2="18" y2="18"></line>
	</svg>
{/snippet}

<style>
	:global(#rich-infobox > div > div > button) {
		display: none;
	}
	:global(#rich-infobox > div > div:focus-within > button) {
		display: block;
	}
</style>
