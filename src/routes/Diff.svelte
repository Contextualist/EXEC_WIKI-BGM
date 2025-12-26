<script lang="ts" module>
	const segmenter = new Intl.Segmenter('ja-JP', { granularity: 'word' });
</script>

<script lang="ts">
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
		if (punctuation) {
			return text.split(punctuation);
		}
		return Array.from(segmenter.segment(text)).map(({ segment }) => segment);
	}

	function getDiff(src: string, dst: string, punctuation?: RegExp) {
		const srcTokens = tokenize(src.replaceAll('\r\n', '\n'), punctuation);
		const dstTokens = tokenize(dst.replaceAll('\r\n', '\n'), punctuation);
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
