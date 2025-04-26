<script lang="ts">
	import 'uno.css';

	import { submit as submitRequest, type SubjectData, type SubjectRelaPerson } from './submit';

	import Dialog from '$lib/Dialog.svelte';
	import Diff from './Diff.svelte';
	import Button from './Button.svelte';
	import MultiSwitch from '$lib/MultiSwitch.svelte';
	import {
		getWriteSessionState,
		getSubjectInfo,
		getPersonInfo,
		getSubjectEpInfo,
		getSubjectRelaPerson,
		type SubjectInfo
	} from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';
	import { WIKI_COMMIT_OPTIONS } from '$lib/bangumiConstant/wiki';
	import { assembleRelease } from '$lib/bangumiUtils';
	import { type Release, writeTrackInfo } from './trackInfoWriter';

	interface SubmitDialogProps {
		show: boolean;
		getSubjectData: () => SubjectData;
		getTrackData?: () => Release;
		askAuth?: () => void;
		session: BGMSession;
	}
	let {
		show = $bindable(),
		getSubjectData,
		getTrackData,
		askAuth = () => {
			window.open(URL_OAUTH, '_blank');
		},
		session
	}: SubmitDialogProps = $props();
	let isSessionValid = $derived(sessionValid(session));

	let targetURL = $state('');
	$effect(() => {
		const [_, wikiType, sidStr] = /https:\/\/bgm\.tv\/(\w+)\/(\d+)/.exec(targetURL) ?? [];
		const sid = parseInt(sidStr);
		if (!subjectData || (wikiType !== 'subject' && wikiType !== 'person') || isNaN(sid)) return;
		subjectData.sid = sid;
		subjectData.wikiType = wikiType;
	});
	let subjectData = $state<SubjectData | null>(null);
	let currentInfo = $state<SubjectInfo | null>(null);
	let trackData = $state<Release | null>(null);
	let currentTrackInfo = $state<Release | null>(null);
	$effect(() => {
		if (!show) return;
		setTimeout(load, 10);
	});
	let isNew = $derived(subjectData?.sid === 0);
	let quickCommitOptions = $derived(isNew ? ['新条目'] : WIKI_COMMIT_OPTIONS);
	let commitMessage = $state('');
	let trackStyle = $state<'parts' | 'tracks'>('tracks');

	function load() {
		subjectData = getSubjectData();
		subjectData.wikiType = subjectData.wikiType ?? 'subject';
		if (getTrackData) {
			trackData = getTrackData();
		}
		if (subjectData.sid) {
			targetURL = `https://bgm.tv/${subjectData.wikiType}/${subjectData.sid}`;
			(subjectData.wikiType === 'subject' ? getSubjectInfo : getPersonInfo)(subjectData.sid).then(
				(info) => (currentInfo = info)
			);
			if (getTrackData) {
				loadTrackInfo(subjectData.sid).then((trackInfo) => (currentTrackInfo = trackInfo));
			}
		}
	}
	async function loadTrackInfo(sid: number): Promise<Release> {
		const [subjectEpInfo, subjectRelaPerson] = await Promise.all([
			getSubjectEpInfo(sid),
			getSubjectRelaPerson(sid)
		]);
		return assembleRelease(subjectEpInfo, subjectRelaPerson);
	}

	async function submit(subjectData: SubjectData | null, askAuth: () => void): Promise<boolean> {
		if (!subjectData) return true;
		if (!isSessionValid) {
			askAuth();
			return false;
		}
		try {
			await getWriteSessionState(session.token);
		} catch (e) {
			askAuth();
			return false;
		}

		const rsid = await submitRequest(subjectData, session.token, commitMessage);
		if (!rsid) return false;

		const url = `https://bgm.tv/${subjectData.wikiType}/${rsid}`;
		setTimeout(() => {
			window.open(url, '_blank');
		}, 1000);
		return true;
	}

	const diffClass = 'rounded-md bg-bgm-lightgrey text-sm w-[30rem] max-w-[90%] p-2 overflow-y-auto';
</script>

<Dialog bind:show class="w-[80%] h-[85%] overflow-y-auto flex flex-row items-center justify-center">
	<div class="flex flex-col justify-center items-center gap-3">
		<div class="flex gap-2 w-[31rem] max-w-[94%]">
			<label for="sid" class="text-sm line-height-[2rem]">条目链接</label>
			<input
				id="sid"
				type="text"
				bind:value={targetURL}
				class="input-bgm w-[15rem] p-2"
				placeholder="新建条目"
			/>
			<div class="text-sm flex-grow-1"></div>
		</div>
		<Diff
			src={isNew ? '' : (currentInfo?.name ?? subjectData?.title ?? '')}
			dst={subjectData?.title || currentInfo?.name || ''}
			class="{diffClass} flex-shrink-0 h-[1.5em]"
		/>
		{#if subjectData?.wikiType !== 'person'}
			<Diff
				src={isNew ? '' : (currentInfo?.metaTags?.join(' ') ?? subjectData?.metaTags ?? '')}
				dst={subjectData?.metaTags || currentInfo?.metaTags?.join(' ') || ''}
				punctuation={/( )/}
				class="{diffClass} flex-shrink-0 h-[1.5em]"
			/>
		{/if}
		<Diff
			src={isNew ? '' : (currentInfo?.infobox ?? subjectData?.infoBox ?? '')}
			dst={subjectData?.infoBox ?? ''}
			class="{diffClass} h-[26.5em] font-mono"
		/>
		<Diff
			src={isNew ? '' : (currentInfo?.summary ?? subjectData?.description ?? '')}
			dst={subjectData?.description || currentInfo?.summary || ''}
			class="{diffClass} h-[5.5em]"
		/>
		<div class="flex-basis-[1rem] w-[31rem] max-w-[94%] flex gap-xs">
			<select
				bind:value={commitMessage}
				class="input-bgm p-[0.4rem] rounded-md {isNew ? 'cursor-not-allowed' : ''}"
				disabled={isNew}
			>
				{#each quickCommitOptions as option}
					<option value={option}>{option}</option>
				{/each}
			</select>
			<input
				type="text"
				bind:value={commitMessage}
				disabled={isNew}
				class="input-bgm p-[0.5rem] flex-grow-1"
				placeholder={isNew ? '新条目' : '编辑摘要'}
			/>
			<Button
				onclick={async () => {
					const success = await submit(subjectData, askAuth);
					if (success) {
						show = false;
					}
				}}
				class="flex-basis-[4rem]"
				spinner={true}
				disabled={isNew && !subjectData?.title}
			>
				{isSessionValid ? '提交' : '授权'}
			</Button>
		</div>
	</div>
	{#if getTrackData}
		<div class="flex flex-col">
			<div class="w-[30rem] max-w-[93%] px-0 py-2 flex justify-end">
				<MultiSwitch
					choices={{ 收起: 'parts', 展开: 'tracks' }}
					bind:chosen={trackStyle}
					class="w-[fit-content]"
				/>
			</div>
			<Diff
				src={!isNew && currentTrackInfo ? writeTrackInfo(currentTrackInfo, trackStyle) : ''}
				dst={trackData ? writeTrackInfo(trackData, trackStyle) : ''}
				class="{diffClass} h-[30em]"
			/>
		</div>
	{/if}
</Dialog>
