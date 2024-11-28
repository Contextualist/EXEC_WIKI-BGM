<script lang="ts">
	import 'uno.css';
	import { getPatch } from 'fast-array-diff';

	interface DiffProps {
		src: string;
		dst: string;
		punctuation?: RegExp;
		class?: string;
	}

	let { src, dst, punctuation, class: class_ }: DiffProps = $props();

	interface Diff {
		type: 'keep' | 'add' | 'remove';
		items: string[];
	}

	function tokenize(text: string, punctuation?: RegExp) {
		return punctuation ? text.split(punctuation) : Array.from(text);
	}

	function getDiff(src: string, dst: string, punctuation?: RegExp) {
		const srcTokens = tokenize(src, punctuation);
		const dstTokens = tokenize(dst, punctuation);
		const patch = getPatch(srcTokens, dstTokens);
		let cursor = 0;
		let r: Diff[] = [];
		for (const { type, oldPos, items } of patch) {
			if (cursor < oldPos) {
				r.push({ type: 'keep', items: srcTokens.slice(cursor, oldPos) });
				cursor = oldPos;
			}
			r.push({ type, items });
			if (type === 'remove') {
				cursor = oldPos + items.length;
			}
		}
		if (cursor < srcTokens.length) {
			r.push({ type: 'keep', items: srcTokens.slice(cursor) });
		}
		return r;
	}

	let diffs = $derived(getDiff(src, dst, punctuation));
</script>

<div class={class_}>
	{#each diffs as diff}
		<span
			class={'whitespace-pre-wrap ' +
				(diff.type === 'add' ? 'bg-bgmc-green/30' : diff.type === 'remove' ? 'bg-bgm-pink/30' : '')}
		>
			{diff.items.join('')}
		</span>
	{/each}
</div>
