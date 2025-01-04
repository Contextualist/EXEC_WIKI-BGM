<script lang="ts">
	import 'uno.css';
	import CodeMirror, { HighlightStyle, tags } from './CodeMirror.svelte';
	import {
		partsTracksConverter,
		getHighlightSpecialChars,
		getFullWidthMarker
	} from './codeMirrorExtension.ts';
	import { rkgk, type RawRelease } from './lang-rkgk.ts';
	import { getLinter } from './lint-rkgk.ts';

	interface TrackInfoProps {
		value: string;
		onUpdate: (disc: RawRelease) => void;
		writeTrackInfoFromRelease: (style: 'tracks' | 'parts') => string;
		class?: string;
	}
	let {
		value = $bindable(),
		onUpdate,
		writeTrackInfoFromRelease,
		class: class_ = '',
		...rest
	}: TrackInfoProps = $props();

	const placeholder = '物凄い勢いでけーねが物凄いうた 編曲：sumijun 作詞：いずみん';
	function filterPaste(text: string) {
		return (
			text
				// Remove trailing whitespace
				.replace(/\s+$/g, '')
				// Unicode normalization
				.normalize('NFC')
		);
	}
	// For tag mapping, see `FIELD2NODETYPE` in `lang-rkgk.ts`
	const highlightStyle = HighlightStyle.define([
		{ tag: tags.typeName, color: '#f09199' },
		{ tag: tags.literal, color: '#69c' },
		{ tag: tags.keyword, color: '#9065ed' },
		{ tag: tags.invalid, color: '#f00' },
		{ tag: tags.heading, color: '#333', fontWeight: 'bold' },
		{ tag: tags.comment, color: '#999' },
		{ tag: tags.annotation, color: '#777' },
		{ tag: tags.modifier, color: '#777' }
	]);
	const extensions = [
		getLinter(),
		partsTracksConverter(writeTrackInfoFromRelease),
		getHighlightSpecialChars(),
		getFullWidthMarker()
	];
</script>

<div {...rest} class="{class_} max-w-130">
	{#await rkgk(onUpdate) then { lang }}
		<CodeMirror
			class="h-full min-h-[30.5rem] max-w-130 pr-3 py-3 text-sm"
			styles={{
				'&': { height: '30.5rem', border: '1px solid lightgray', borderRadius: '0.25rem' }
			}}
			{highlightStyle}
			{placeholder}
			{lang}
			bind:value
			{filterPaste}
			{extensions}
		/>
	{/await}
</div>
