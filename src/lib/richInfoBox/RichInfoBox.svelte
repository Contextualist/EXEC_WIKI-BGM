<script lang="ts" context="module">
	import { type Wiki, WikiItem, WikiArrayItem } from '@bgm38/wiki';

	type KV<T> = [string, T];
	export type ArrayWiki = KV<string | KV<string>[]>[];

	export function wikiUnpack(w: Wiki): ArrayWiki {
		return w.data.map((item) => {
			if (item.array) {
				return [item.key, item.values!.map((v) => [v.k ?? '', v.v ?? ''])];
			} else {
				return [item.key, item.value!];
			}
		});
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
			type: 'Album',
			data: w.map(([key, value]) =>
				Array.isArray(value) ? arr(key, value) : new WikiItem(key, cleanValue(value), 'object')
			)
		};
	}
</script>

<script lang="ts">
	import 'uno.css';
	import Plain from './Plain.svelte';
	import PlainArray from './PlainArray.svelte';

	interface RichInfoBoxProps {
		value: ArrayWiki;
		update: () => void;
		class?: string;
	}
	let { value = $bindable(), class: class_ = '', update }: RichInfoBoxProps = $props();
</script>

<div class="flex flex-col {class_}">
	{#each value as _, i (i)}
		{#if typeof value[i][1] === 'string'}
			<Plain bind:value={value[i] as [string, string]} {update} />
		{:else}
			<PlainArray bind:value={value[i] as [string, [string, string][]]} {update} />
		{/if}
	{/each}
</div>
