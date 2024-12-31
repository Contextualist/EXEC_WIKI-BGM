<script lang="ts">
	import 'uno.css';
	import { SvelteMap } from 'svelte/reactivity';
	import { onMount, untrack } from 'svelte';

	import TrackInfo from './TrackInfo.svelte';
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
	import SubmitDialog from './SubmitDialog.svelte';
	import ConfirmationDialog from '$lib/ConfirmationDialog.svelte';
	import Title from './Title.svelte';
	import { pushState, type ContentState } from './History.svelte';
	import { type BGMSession, refreshSession } from '$lib/bangumiSession';
	import { importPersonCreated, importRelaHistory, importPersonBatch } from './relaDB.ts';
	import { getUserNickname } from '$lib/client.ts';
	import { getRandomTip } from './dailyTips.ts';
	import {
		type Release as InfoRelease,
		writeTrackInfo,
		fromFormalRelease
	} from './trackInfoWriter.ts';
	import { localStorage$state } from './utils.svelte.ts';

	const associableFields = new Set(Object.values(Role).slice(1));
	const reactiveFields = new Set([...associableFields, '碟片数量']);

	let currentRawRelease: Readonly<RawRelease> = $state.raw({ credits: [], discs: [] });
	let currentRelease: Readonly<Release> = $state.raw(new Release());
	let dupResolution = $state(new SvelteMap<string, number>());
	let dupResolutionEntries = $derived(Array.from(dupResolution.entries()));
	let name2staff = $derived(resolveRelaMap(currentRelease.relaMap, dupResolutionEntries));

	function clear() {
		pushState(
			$state.snapshot({
				sid: sidState.val,
				title: titleState.val,
				metaTags: metaTagsState.val,
				infoBox: infoBox.exportText(),
				trackInfo: trackInfoState.val,
				desc: descState.val
			})
		);
		setState();
		dupResolution.clear();
		setTimeout(() => {
			toast(`<b>嗯……？</b><br/>${getRandomTip()}`, { duration: 8000 });
		}, 400);
	}
	function marshal() {
		infoBox.storeRecentCombo(metaTagsState.val);
		const trackList = currentRelease.tracks.map((disc) => disc.map((tr) => tr.title).join('\n'));
		const trackTable = currentRelease.tracks
			.flatMap((disc, i) => disc.map((tr, j) => `${i + 1}|${j + 1}|${tr.title}|${tr.comment}|`))
			.join('\n');
		const relaTable = currentRelease
			.intoCreatorSummary(name2staff)
			.map(([bid, rt]) => `https://bgm.tv/person/${bid}  ${rt.join('  ')}`)
			.join('\n');
		return {
			sid: sidState.val,
			title: titleState.val,
			infoBox: infoBox.exportText(),
			description: descState.val,
			metaTags: metaTagsState.val,
			trackList: trackList.length > 1 ? trackList : trackList[0],
			trackTable,
			relaTable
		};
	}
	async function pack() {
		const data = marshal();
		const text = shouldPackRelaOnly ? data.relaTable : JSON.stringify(data);
		await navigator.clipboard.writeText(text);
		toast('已复制到剪贴板');
		if (shouldPackThenOpen) {
			setTimeout(() => window.open('https://bgm.tv/new_subject/3'), 700);
		}
	}
	function setState(
		s: ContentState = {
			sid: 0,
			title: '',
			metaTags: '',
			infoBox: settingsState.val.newInfoBox,
			trackInfo: '',
			desc: ''
		}
	) {
		sidState.val = s.sid;
		titleState.val = s.title;
		metaTagsState.val = s.metaTags;
		trackInfoState.val = s.trackInfo;
		setTimeout(() => {
			// workaround: clear infobox after the infobox edit triggered by trackinfo clear
			infoBox.reset(s.infoBox);
		}, 10);
		descState.val = s.desc;
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
	let sidState = localStorage$state('sid', 0);
	let titleState = localStorage$state('title', '');
	let metaTagsState = localStorage$state('metaTags', '');
	let infoBoxState = localStorage$state(
		'infoBox',
		infoBox.toArrayWikiString(settingsState.val.newInfoBox)
	);
	let descState = localStorage$state('desc', '');
	let trackInfoState = localStorage$state('trackInfo', '');
	let session = localStorage$state<BGMSession>(
		'wiki-write-session',
		{ token: '', expiresAt: 0 },
		{ watch: true }
	);
	onMount(() => {
		infoBox.init(infoBoxState.val);
	});

	let showSettings = $state(false);
	let showRelaDB = $state(false);
	let showImportDialog = $state(false);
	let showSubmitDialog = $state(false);
	let showTour = $state(settingsState.val.bgmUID === '');

	let optMode = $state(false);
	let shiftMode = $state(false);
	let hoverPackBtn = $state(false);
	let shouldPackRelaOnly = $derived(hoverPackBtn && optMode);
	let shouldPackThenOpen = $derived(
		(hoverPackBtn && shiftMode) !== settingsState.val.defaultOpenBGMNewAfterPack
	);

	const editor = {
		associableFields,
		editTitleIntro: (title: string, intro: string) => {
			if (title) titleState.val = title;
			if (intro) descState.val = intro;
		},
		setTrackInfo: (info: InfoRelease, style: 'parts' | 'tracks' | 'default' = 'default') => {
			trackInfoState.val = writeTrackInfo(info, style);
		},
		setInfoBox: (content: string, override: boolean) => {
			if (override) {
				infoBox.reset(content);
				infoBox.merge('');
			} else {
				infoBox.merge(content);
			}
		},
		setInfoBoxField: (
			key: string,
			value: string | [string, string][],
			{ editOnly = false } = {}
		): boolean => {
			return infoBox.editField(key, value, { editOnly });
		},
		unlinkInfoBoxField: (key: string) => {
			infoBox.unlinkField(key);
		},
		setMetaTags: (tags: string[]) => {
			metaTagsState.val = tags.join(' ');
		},
		importRela: (pids: number[]) => {
			importPersonBatch(pids).then(() => {
				settingsState.val = { ...settingsState.val }; // trigger Gallery update
			});
		},
		setSID: (sid: number) => {
			sidState.val = sid;
		},
		pushWarning: (warning: string) => {
			toast(warning, { alert: true });
		},
		done: () => {
			showImportDialog = false;
		}
	};
</script>

<head>
	<title>EXEC_WIKI=BGM/.</title>
</head>

<svelte:body
	onkeydown={(e: KeyboardEvent) => {
		if (e.altKey) optMode = true;
		if (e.shiftKey) shiftMode = true;
		if (e.key === 'p' && (e.metaKey || e.ctrlKey) && e.shiftKey) {
			showSubmitDialog = true;
			(async () => {
				session.val = await refreshSession(session.val);
			})();
		}
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
		<TrackInfo
			bind:value={trackInfoState.val}
			{onUpdate}
			writeTrackInfoFromRelease={(style: 'parts' | 'tracks') =>
				writeTrackInfo(fromFormalRelease(currentRelease), style)}
			class="flex-basis-[38%] flex-grow-4 h-full"
		/>
		<div
			class="flex-basis-[24%] flex-grow-3 h-full min-h-[30.5rem] mt-[0.8rem] flex flex-col flex-justify-between gap-row-xs"
		>
			<Title bind:value={titleState.val} {setState} class="flex-basis-[1rem]" />
			<InfoBox
				bind:value={infoBoxState.val}
				bind:valueMetaTags={metaTagsState.val}
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
	<ImportDialog bind:show={showImportDialog} {editor} />
	<SubmitDialog bind:show={showSubmitDialog} getSubjectData={marshal} session={session.val} />
	<ConfirmationDialog />
</main>
