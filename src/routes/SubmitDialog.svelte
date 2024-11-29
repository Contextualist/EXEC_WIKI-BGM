<script lang="ts" module>
	export interface SubjectData {
		sid: number;
		wikiType?: 'subject' | 'person';
		title: string;
		infoBox: string;
		description: string;
		metaTags?: string;
	}
</script>

<script lang="ts">
	import 'uno.css';

	import Dialog from '$lib/Dialog.svelte';
	import Diff from './Diff.svelte';
	import Button from './Button.svelte';
	import { toast } from './Toast.svelte';
	import {
		getWriteSessionState,
		patchSubjectInfo,
		patchPersonInfo,
		postSubjectInfo
	} from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';
	import { WIKI_COMMIT_OPTIONS } from '$lib/bangumiConstant/wiki';

	interface SubmitDialogProps {
		show: boolean;
		getSubjectData: () => SubjectData;
		askAuth?: () => void;
		session: BGMSession;
	}
	let {
		show = $bindable(),
		getSubjectData,
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
	$effect(() => {
		if (!show) return;
		setTimeout(() => {
			subjectData = getSubjectData();
			subjectData.wikiType = subjectData.wikiType ?? 'subject';
			if (subjectData.sid) {
				targetURL = `https://bgm.tv/${subjectData.wikiType}/${subjectData.sid}`;
			}
		}, 10);
	});
	let isNew = $derived(subjectData?.sid === 0);
	let quickCommitOptions = $derived(isNew ? ['新条目'] : WIKI_COMMIT_OPTIONS);
	let commitMessage = $state('');

	async function submit() {
		if (!isSessionValid) {
			askAuth();
			show = false;
			return;
		}
		try {
			await getWriteSessionState(session.token);
		} catch (e) {
			askAuth();
			show = false;
			return;
		}
		const { rfn, tp } = toast('提交中...', { progress: true });

		if (!subjectData) return;
		const subjectInfo = {
			...(subjectData.title ? { name: subjectData.title } : {}),
			...(subjectData.infoBox ? { infobox: subjectData.infoBox } : {}),
			...(subjectData.description ? { summary: subjectData.description } : {}),
			...(subjectData.metaTags ? { metaTags: subjectData.metaTags.split(' ') } : {})
		};
		let r: number | string | void;
		let rsid = subjectData.sid;
		if (!isNew) {
			const patchFn = subjectData.wikiType === 'subject' ? patchSubjectInfo : patchPersonInfo;
			r = await patchFn(session.token, subjectData.sid, commitMessage, subjectInfo);
		} else {
			if (subjectData.wikiType === 'person') {
				toast('尚不支持创建人物条目', { alert: true });
				return;
			}
			r = await postSubjectInfo(session.token, subjectInfo);
			if (typeof r === 'number') {
				rsid = r;
			}
		}

		if (!r) {
			tp.nDone = 1;
			toast('提交成功');
			show = false;
		} else {
			toast(`提交时发生错误: ${r}`, { alert: true });
		}
		const url = `https://bgm.tv/${subjectData.wikiType}/${rsid}`;
		setTimeout(() => {
			rfn();
			window.open(url, '_blank');
		}, 1000);
	}
</script>

<Dialog bind:show class="w-[80%] h-[80%] flex flex-col justify-center items-center gap-4">
	<div class="flex gap-2">
		<label for="sid" class="text-sm line-height-[2rem]">条目链接</label>
		<input
			id="sid"
			type="text"
			bind:value={targetURL}
			class="input-bgm w-[15rem] p-2"
			placeholder="新建条目"
		/>
		<div class="text-sm w-[10rem]"></div>
	</div>
	<Diff
		src={''}
		dst={subjectData?.infoBox ?? ''}
		punctuation={/([|={}\[\]\n 、])/}
		class="input-bgm h-[24.5rem] w-[30rem] max-w-[90%] p-2 overflow-y-auto font-mono"
	/>
	<div class="flex-basis-[1rem] w-[97%] max-w-[30rem] flex gap-xs">
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
		<Button onclick={submit} class="flex-basis-[4rem]" spinner={true}>
			{isSessionValid ? '提交' : '授权'}
		</Button>
	</div>
</Dialog>
