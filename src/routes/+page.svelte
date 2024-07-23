<script lang="ts">
	import 'uno.css';
	import { SvelteMap } from 'svelte/reactivity';

	import TrackInfo, { clearTrackInfo } from './TrackInfo.svelte';
	import InfoBox, { edit as editInfoBox } from './InfoBox.svelte';
	import Preview from './Preview.svelte';
	import Gallery from './Gallery.svelte';
	import { type RawDisc } from './lang-rkgk.ts';
	import { Disc } from './postprocess.ts';
	import { resolveRelaMap } from './disambiguation.ts';

	import Header from '$lib/Header.svelte';
	import Settings, { defaultSettings } from './Settings.svelte';
	import Button from './Button.svelte';
	import LongpressButton from './LongpressButton.svelte';
	import Toast, { toast } from './Toast.svelte';
	import Scenario from '$lib/vn/Scenario.svelte';
	import { importPersonCreated, importRelaHistory } from './relaDB.ts';
	import { getUserNickname } from '$lib/client.ts';
	import { getRandomTip } from './dailyTips.ts';
	import { localStorage$state } from './utils.svelte.ts';

	let currentRawDisc: Readonly<RawDisc> = $state.frozen({ tracks: [] });
	let currentDisc: Readonly<Disc> = $state.frozen(new Disc());
	let dupResolution = $state(new SvelteMap<string, number>());
	let dupResolutionEntries = $derived(Array.from(dupResolution.entries()));
	let name2staff = $derived(resolveRelaMap(currentDisc.relaMap, dupResolutionEntries));

	function clear() {
		clearTrackInfo();
		titleState.val = '';
		setTimeout(() => {
			// workaround: clear infobox after the infobox edit triggered by trackinfo clear
			infoBoxState.val = settingsState.val.newInfoBox;
		}, 10);
		descState.val = '';
		dupResolution.clear();
		setTimeout(() => {
			toast(`<b>嗯……？</b><br/>${getRandomTip()}`, { duration: 8000 });
		}, 400);
	}
	async function pack() {
		let text;
		const relaTable = currentDisc
			.intoCreatorSummary(name2staff)
			.map(([bid, rt]) => `https://bgm.tv/person/${bid}  ${rt.join('  ')}`)
			.join('\n');
		if (shouldPackRelaOnly) {
			text = relaTable;
		} else {
			const data = {
				title: titleState.val,
				infoBox: infoBoxState.val,
				description: descState.val,
				trackList: currentDisc.tracks
					.slice(1)
					.map((tr) => tr.title)
					.join('\n'),
				trackTable: currentDisc.tracks
					.slice(1)
					.entries()
					.map(([i, tr]) => `1|${i + 1}|${tr.title}|${tr.comment}|`)
					.toArray()
					.join('\n'),
				relaTable
			};
			text = JSON.stringify(data);
		}
		await navigator.clipboard.writeText(text);
		toast('已复制到剪贴板');
		if (shouldPackThenOpen) {
			setTimeout(() => window.open('https://bgm.tv/new_subject/3'), 700);
		}
	}

	async function onUpdate(disc: RawDisc) {
		currentRawDisc = disc;
	}
	$effect(() => {
		// Update currentDisc (for Preview) whenever currentRawDisc or settingsState changes
		Disc.fromRawDisc(currentRawDisc, settingsState.val).then((disc) => {
			currentDisc = disc;
		});
	});
	$effect(() => {
		// Update infoBoxState whenever currentDisc or dupResolution changes
		infoBoxState.evolve((ib) => editInfoBox(ib, currentDisc.intoRoleSummary(name2staff)));
	});

	let settingsState = localStorage$state('settings', defaultSettings);
	let titleState = localStorage$state('title', '');
	let infoBoxState = localStorage$state('infoBox', settingsState.val.newInfoBox);
	let descState = localStorage$state('desc', '');

	let showSettings = $state(false);
	let showTour = $state(settingsState.val.bgmUID === '');

	let optMode = $state(false);
	let shiftMode = $state(false);
	let hoverPackBtn = $state(false);
	let shouldPackRelaOnly = $derived(hoverPackBtn && optMode);
	let shouldPackThenOpen = $derived(
		(hoverPackBtn && shiftMode) !== settingsState.val.defaultOpenBGMNewAfterPack
	);
</script>

<head>
	<title>EXEC_WIKI=BGM/.</title>
</head>

<svelte:body
	onkeydown={(e: KeyboardEvent) => {
		if (e.altKey) optMode = true;
		if (e.shiftKey) shiftMode = true;
	}}
	onkeyup={(e: KeyboardEvent) => {
		if (!e.altKey) optMode = false;
		if (!e.shiftKey) shiftMode = false;
	}}
/>
<Header edgefade>
	<Gallery relaMap={currentDisc.relaMap} bind:dupResolution class="h-32" />
</Header>
<main class="w-310 max-w-[95vw] lt-lg:w-200 lt-md:w-150 mx-auto my-4">
	<div class="flex flex-justify-between">
		<LongpressButton class="w-33 text-lg" onclick={clear}>长按<wbr />再来一张</LongpressButton>
		<div class="w-96 h-[1rem] mx-3 p-2"></div>
		<Button
			class="{!shouldPackRelaOnly && shouldPackThenOpen ? '' : 'w-31'} text-lg"
			onclick={pack}
			onmouseenter={() => (hoverPackBtn = true)}
			onmouseleave={() => (hoverPackBtn = false)}
		>
			{@html shouldPackRelaOnly
				? '仅复制<wbr/>关联'
				: shouldPackThenOpen
					? '打包带走<wbr/>添加新音乐<wbr/>二连击'
					: '打包<wbr/>带走！'}
		</Button>
	</div>
	<div class="flex flex-wrap flex-justify-between">
		<TrackInfo {onUpdate} class="flex-basis-[38%] flex-grow-4" />
		<div
			class="flex-basis-[24%] flex-grow-3 h-[30.5rem] my-[0.8rem] flex flex-col flex-justify-between"
		>
			<input
				bind:value={titleState.val}
				type="text"
				placeholder="唱片名"
				spellcheck="false"
				class="input-bgm text-sm w-[94%] flex-basis-[1rem] p-[0.5rem]"
			/>
			<InfoBox
				bind:value={infoBoxState.val}
				defaultValue={settingsState.val.newInfoBox}
				class="flex-basis-[67%]"
			/>
			<textarea
				bind:value={descState.val}
				placeholder="简介"
				spellcheck="false"
				class="input-bgm text-sm w-[94%] h-[94%] flex-basis-[18%] p-[0.5rem]"
			></textarea>
		</div>
		<Preview disc={currentDisc} {name2staff} class="flex-basis-[28%] flex-grow-4" />
	</div>
	<Settings bind:settings={settingsState.val} bind:showSettings showRelaDB={false} />
	<Toast />
	<Scenario
		bind:show={showTour}
		fn={{
			toSettings: () => {
				setTimeout(() => (showSettings = true), 450);
				setTimeout(() => {
					document.getElementById('settings-import-backup')?.scrollIntoView({ behavior: 'smooth' });
				}, 600);
				setTimeout(() => toast('请导入你的配置备份文件'), 1200);
			},
			trySetBGMUID: async (url: string): Promise<string> => {
				const match = url.match(/bgm\.tv\/user\/(.+)/);
				const uid = match ? match[1] : '';
				if (!uid) {
					toast('唔……我看不太明白呢？你的链接大概应该长这样：https://bgm.tv/user/sai', {
						alert: true
					});
					return '';
				}
				settingsState.val = { ...settingsState.val, bgmUID: uid };
				return await getUserNickname(uid);
			},
			startImport: () => {
				Promise.allSettled([
					importPersonCreated(settingsState.val.bgmUID, 10),
					importRelaHistory(settingsState.val.bgmUID, 10)
				]).then(() => {
					toast('导入完成！记得常备份你的关联库哦～');
				});
			},
			exit: () => {
				showTour = false;
			}
		}}
	/>
</main>
