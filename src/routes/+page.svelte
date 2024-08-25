<script lang="ts">
	import 'uno.css';
	import { SvelteMap } from 'svelte/reactivity';
	import { onMount, untrack } from 'svelte';

	import TrackInfo, { setTrackInfo } from './TrackInfo.svelte';
	import InfoBox, * as infoBox from './InfoBox.svelte';
	import Preview from './Preview.svelte';
	import Gallery from './Gallery.svelte';
	import { type RawRelease } from './lang-rkgk.ts';
	import { Release, Role } from './postprocess.ts';
	import { resolveRelaMap } from './disambiguation.ts';

	import Header from '$lib/Header.svelte';
	import Settings, { defaultSettings } from './Settings.svelte';
	import Button from './Button.svelte';
	import LongpressButton from './LongpressButton.svelte';
	import Toast, { toast } from './Toast.svelte';
	import Scenario from '$lib/vn/Scenario.svelte';
	import ImportDialog from './ImportDialog.svelte';
	import { importPersonCreated, importRelaHistory } from './relaDB.ts';
	import { getUserNickname } from '$lib/client.ts';
	import { getRandomTip } from './dailyTips.ts';
	import { type Release as InfoRelease, writeTrackInfo } from './trackInfoWriter.ts';
	import { localStorage$state } from './utils.svelte.ts';

	const associableFields = new Set(Object.values(Role).slice(1));
	const reactiveFields = new Set([...associableFields, '碟片数量']);

	let currentRawRelease: Readonly<RawRelease> = $state.raw({ credits: [], discs: [] });
	let currentRelease: Readonly<Release> = $state.raw(new Release());
	let dupResolution = $state(new SvelteMap<string, number>());
	let dupResolutionEntries = $derived(Array.from(dupResolution.entries()));
	let name2staff = $derived(resolveRelaMap(currentRelease.relaMap, dupResolutionEntries));

	function clear() {
		setTrackInfo('');
		titleState.val = '';
		setTimeout(() => {
			// workaround: clear infobox after the infobox edit triggered by trackinfo clear
			infoBox.reset(settingsState.val.newInfoBox);
		}, 10);
		descState.val = '';
		dupResolution.clear();
		setTimeout(() => {
			toast(`<b>嗯……？</b><br/>${getRandomTip()}`, { duration: 8000 });
		}, 400);
	}
	async function pack() {
		let text;
		const trackList = currentRelease.tracks.map((disc) => disc.map((tr) => tr.title).join('\n'));
		const trackTable = currentRelease.tracks
			.flatMap((disc, i) => disc.map((tr, j) => `${i + 1}|${j + 1}|${tr.title}|${tr.comment}|`))
			.join('\n');
		const relaTable = currentRelease
			.intoCreatorSummary(name2staff)
			.map(([bid, rt]) => `https://bgm.tv/person/${bid}  ${rt.join('  ')}`)
			.join('\n');
		if (shouldPackRelaOnly) {
			text = relaTable;
		} else {
			const data = {
				title: titleState.val,
				infoBox: infoBox.exportText(),
				description: descState.val,
				trackList: trackList.length > 1 ? trackList : trackList[0],
				trackTable,
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

	async function onUpdate(release: RawRelease) {
		currentRawRelease = release;
	}
	$effect(() => {
		// Update currentRelease (for Preview) whenever currentRawRelease or settingsState changes
		Release.fromRawRelease(currentRawRelease, settingsState.val).then((release) => {
			currentRelease = release;
		});
	});
	$effect(() => {
		// Update infoBoxState whenever currentRelease or dupResolution changes
		const summary: [string, string][] = currentRelease
			.intoRoleSummary(name2staff)
			.map(([roleID, creators]) => [roleID, creators.join('、')]);
		const nDiscs = currentRelease.tracks.length;
		if (nDiscs > 1) summary.push(['碟片数量', nDiscs.toString()]);
		untrack(() => infoBox.edit(summary));
	});

	let settingsState = localStorage$state('settings', defaultSettings);
	let titleState = localStorage$state('title', '');
	let infoBoxState = localStorage$state('infoBox', settingsState.val.newInfoBox);
	let descState = localStorage$state('desc', '');
	onMount(() => {
		infoBox.init(infoBoxState.val);
	});

	let showSettings = $state(false);
	let showRelaDB = $state(false);
	let showImportDialog = $state(false);
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
	<Gallery relaMap={currentRelease.relaMap} bind:dupResolution bind:showRelaDB class="h-32" />
</Header>
<main class="w-310 max-w-[95vw] lt-lg:w-200 lt-md:w-150 mx-auto my-4">
	<div class="flex flex-justify-between gap-5">
		<LongpressButton class="w-33 text-lg" onclick={clear}>长按<wbr />再来一张</LongpressButton>
		<Button class="w-20 text-lg" onclick={async () => (showImportDialog = true)}>导入…</Button>
		<div class="flex-grow-1 h-[1rem] mx-3 p-2"></div>
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
	<div class="flex flex-wrap flex-justify-between h-66vh">
		<TrackInfo {onUpdate} class="flex-basis-[38%] flex-grow-4 h-full" />
		<div
			class="flex-basis-[24%] flex-grow-3 h-full min-h-[30.5rem] mt-[0.8rem] flex flex-col flex-justify-between gap-row-xs"
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
				{reactiveFields}
				class="flex-basis-[67%] flex-grow-3"
			/>
			<textarea
				bind:value={descState.val}
				placeholder="简介"
				spellcheck="false"
				class="input-bgm text-sm w-[94%] flex-basis-[18%] flex-grow-2 p-[0.5rem]"
			></textarea>
		</div>
		<Preview
			release={currentRelease}
			{name2staff}
			class="flex-basis-[28%] flex-grow-4 h-full min-h-[30.5rem] overflow-auto"
		/>
	</div>
	<Settings bind:settings={settingsState.val} bind:showSettings bind:showRelaDB />
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
	<ImportDialog
		bind:show={showImportDialog}
		editor={{
			associableFields,
			editTitleIntro: (title: string, intro: string) => {
				if (title) titleState.val = title;
				if (intro) descState.val = intro;
			},
			setTrackInfo: (info: InfoRelease) => {
				setTrackInfo(writeTrackInfo(info));
			},
			setInfoBox: (content: string) => {
				infoBox.merge(content);
			},
			pushWarning: (warning: string) => {
				toast(warning, { alert: true });
			},
			done: () => {
				showImportDialog = false;
			}
		}}
	/>
</main>
