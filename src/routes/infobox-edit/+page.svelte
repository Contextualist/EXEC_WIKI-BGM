<script lang="ts">
	import 'uno.css';

	import InfoBox, * as infobox from '../InfoBox.svelte';
	import { localStorage$state } from '../utils.svelte';
	import { onMount } from 'svelte';

	const defaultInfoBox = `{{Infobox Album
|中文名=
|别名={
}
|版本特性=
|发售日期=
|价格=
|播放时长=
|录音=
|碟片数量=
}}`.trim();
	let title = $state('');
	let desc = $state('');
	let infoBoxState = localStorage$state(
		'ibedit-infobox',
		infobox.toArrayWikiString(defaultInfoBox)
	);
	onMount(() => {
		infobox.init(infoBoxState.val);
		window.addEventListener('message', (event) => {
			if (event.origin !== 'https://bgm.tv') return;
			interface Message {
				title: string;
				infobox: string;
				desc: string;
			}
			const d = event.data as Message;
			title = d.title;
			infobox.reset(d.infobox);
			desc = d.desc;
		});
	});
</script>

<head>
	<title>编辑 infobox</title>
</head>

<main>
	<div
		class="flex-basis-[24%] flex-grow-3 w-150 h-[calc(100vh-1.6rem)] mx-auto mt-[0.8rem] flex flex-col flex-justify-between gap-row-xs"
	>
		<input
			bind:value={title}
			type="text"
			placeholder="条目名"
			spellcheck="false"
			class="input-bgm text-sm w-[94%] flex-basis-[1rem] p-[0.5rem]"
		/>
		<InfoBox
			bind:value={infoBoxState.val}
			reactiveFields={new Set()}
			wideFormat={true}
			class="flex-basis-[67%] flex-grow-3"
		/>
		<textarea
			bind:value={desc}
			placeholder="简介"
			spellcheck="false"
			class="input-bgm text-sm w-[94%] flex-basis-[18%] flex-grow-2 p-[0.5rem]"
		></textarea>
	</div>
</main>
