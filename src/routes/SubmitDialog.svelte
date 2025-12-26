<script lang="ts">
	import {
		submit as submitRequest,
		trackDiff,
		relaDiff,
		type SubjectData,
		type SubjectRelaPerson
	} from './submit';

	import SubmitRegion from './SubmitRegion.svelte';
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
		getTrackData?: () => [Release, SubjectRelaPerson[]];
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
	let currentTrackInfo = $state<Release>({ credits: {}, discs: [] });
	let creditsData = $state<SubjectRelaPerson[] | null>(null);
	let currentCredits = $state<SubjectRelaPerson[]>([]);
	$effect(() => {
		if (!show) return;
		setTimeout(load, 10);
	});
	let isNew = $derived(subjectData?.sid === 0);
	let quickCommitOptions = $derived(isNew ? ['新条目'] : WIKI_COMMIT_OPTIONS);
	let commitMessage = $state('');
	let trackStyle = $state<'parts' | 'tracks'>('parts');

	let epActions = $derived(trackData ? trackDiff(currentTrackInfo, trackData) : null);
	let relaActions = $derived(creditsData ? relaDiff(currentCredits, creditsData) : null);
	let epEnabled = $derived((epActions?.append?.length ?? 0) + (epActions?.edit?.length ?? 0) > 0);
	let relaEnabled = $derived(
		(relaActions?.add?.length ?? 0) +
			(relaActions?.edit?.length ?? 0) +
			(relaActions?.delete?.length ?? 0) >
			0
	);
	let epRelaSelected = $state([false, false]);
	let subjectSelected = $state([true]);

	async function load() {
		subjectData = getSubjectData();
		subjectData.wikiType = subjectData.wikiType ?? 'subject';
		if (getTrackData) {
			[trackData, creditsData] = getTrackData();
		}
		if (subjectData.sid) {
			targetURL = `https://bgm.tv/${subjectData.wikiType}/${subjectData.sid}`;
			(subjectData.wikiType === 'subject' ? getSubjectInfo : getPersonInfo)(subjectData.sid).then(
				(info) => (currentInfo = info)
			);
			if (getTrackData) {
				await loadTrackInfo(subjectData.sid);
			}
		}
		if (getTrackData) {
			epRelaSelected = [epEnabled, relaEnabled];
		}
	}
	async function loadTrackInfo(sid: number): Promise<void> {
		const [subjectEpInfo, subjectRelaPerson] = await Promise.all([
			getSubjectEpInfo(sid),
			getSubjectRelaPerson(sid)
		]);
		currentCredits = subjectRelaPerson;
		currentTrackInfo = assembleRelease(subjectEpInfo, subjectRelaPerson);
	}

	async function submit(): Promise<boolean> {
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

		const rsid = await submitRequest(
			subjectData,
			epActions,
			relaActions,
			session.token,
			commitMessage
		);
		if (!rsid) return false;

		const url = `https://bgm.tv/${subjectData.wikiType}/${rsid}`;
		setTimeout(() => {
			window.open(url, '_blank');
		}, 1000);
		return true;
	}

	const diffClass =
		'rounded-md bg-bgm-lightgrey text-sm w-[30rem] max-w-[93%] p-2 mx-auto overflow-y-auto';
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
		<SubmitRegion
			name={['条目信息']}
			bind:selected={subjectSelected}
			enabled={[true]}
			class="flex flex-col justify-center items-center gap-3"
		>
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
		</SubmitRegion>
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
					const success = await submit();
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
		<SubmitRegion
			name={['曲目列表', '关联人物']}
			bind:selected={epRelaSelected}
			enabled={[epEnabled, relaEnabled]}
			class="flex flex-col"
		>
			<div class="w-[30.5rem] flex justify-end">
				<MultiSwitch
					choices={{ 收起: 'parts', 展开: 'tracks' }}
					bind:chosen={trackStyle}
					class="w-[fit-content]"
				/>
			</div>
			<Diff
				src={!isNew && currentTrackInfo ? writeTrackInfo(currentTrackInfo, trackStyle) : ''}
				dst={trackData ? writeTrackInfo(trackData, trackStyle) : ''}
				class="{diffClass} h-[38.3em]"
			/>
		</SubmitRegion>
	{/if}
</Dialog>
