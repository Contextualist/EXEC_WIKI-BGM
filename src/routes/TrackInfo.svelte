<script lang="ts" context="module">
	export function clearTrackInfo() {
		textState.val = '';
	}
	let textState = localStorage$state('trackInfo', '');
</script>

<script lang="ts">
	import 'uno.css';
	import CodeMirror from './CodeMirror.svelte';
	import { localStorage$state } from './utils.svelte.ts';
	import { rkgk, type RawDisc } from './lang-rkgk.ts';

	interface TrackInfoProps {
		onUpdate: (disc: RawDisc) => void;
		class?: string;
	}
	let { onUpdate, class: class_ = '', ...rest }: TrackInfoProps = $props();

	const placeholder = '物凄い勢いでけーねが物凄いうた 編曲：sumijun 作詞：いずみん';
	function filterPaste(text: string) {
		return (
			text
				// Replace all leading full-width spaces with ascii spaces for each line
				// This is a workaround for the missing support from the rkgk parser
				.replace(/(^|\n)(　+)/g, (_, nl, sp) => nl + ' '.repeat(sp.length))
				// Remove trailing whitespace
				.replace(/\s+$/g, '')
				// Unicode normalization
				.normalize('NFKC')
		);
	}
</script>

<div {...rest} class="{class_} max-w-130">
	{#await rkgk(onUpdate) then { lang }}
		<CodeMirror
			class="h-[30.5rem] max-w-130 pr-3 py-3 text-sm"
			styles={{
				'&': { height: '30.5rem', border: '1px solid lightgray', borderRadius: '0.25rem' }
			}}
			{placeholder}
			{lang}
			bind:value={textState.val}
			{filterPaste}
		/>
	{/await}
</div>
