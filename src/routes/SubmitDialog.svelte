<script lang="ts">
	import 'uno.css';

	import Dialog from '$lib/Dialog.svelte';
	import Diff from './Diff.svelte';
	import Button from './Button.svelte';
	import { toast } from './Toast.svelte';
	import { getWriteSessionState, patchSubjectInfo } from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';
	import { localStorage$state } from './utils.svelte.ts';

	interface SubmitDialogProps {
		show: boolean;
		getSubjectData: () => SubjectData;
	}
	interface SubjectData {
		title: string;
		infoBox: string;
		description: string;
		metaTags: string;
	}
	let { show = $bindable(), getSubjectData }: SubmitDialogProps = $props();
	let wikiWriteSession = localStorage$state<BGMSession>('wiki-write-session', {
		token: '',
		expiresAt: 0
	});
	let isSessionValid = $derived(sessionValid(wikiWriteSession.val));

	let sid = $state('');
	let subjectData = $state<SubjectData | null>(null);
	$effect(() => {
		if (!show) return;
		setTimeout(() => {
			subjectData = getSubjectData();
		}, 0);
	});
	let commitMessage = $state('');

	async function handleClick() {
		if (!isSessionValid) {
			window.open(URL_OAUTH, '_blank');
			show = false;
			return;
		}
		// const res = await getWriteSessionState(wikiWriteSession.val.token);
		// console.log(res);
		subjectData = subjectData ?? getSubjectData();
		const subjectInfo = {
			...(subjectData.title ? { name: subjectData.title } : {}),
			...(subjectData.infoBox ? { infobox: subjectData.infoBox } : {}),
			...(subjectData.description ? { summary: subjectData.description } : {}),
			...(subjectData.metaTags ? { metaTags: subjectData.metaTags.split(' ') } : {})
		};
		const r = await patchSubjectInfo(
			wikiWriteSession.val.token,
			parseInt(sid),
			commitMessage,
			subjectInfo
		);
		if (!r) {
			toast('提交成功');
			show = false;
		} else {
			toast(`提交时发生错误: ${r}`, { alert: true });
		}
	}
</script>

<Dialog bind:show class="w-[80%] min-h-100 flex flex-col justify-center items-center gap-4">
	<div class="flex gap-2">
		<label for="sid">Subject ID</label>
		<input id="sid" type="text" bind:value={sid} class="input-bgm p-2" />
	</div>
	<Diff
		src={''}
		dst={subjectData?.infoBox ?? ''}
		punctuation={/([|={}\[\]\n 、])/}
		class="input-bgm h-[24.5rem] w-[30rem] max-w-[90%] p-2 overflow-y-auto font-mono"
	/>
	<div class="flex gap-2">
		<label for="commitMessage">编辑摘要</label>
		<input id="commitMessage" type="text" bind:value={commitMessage} class="input-bgm p-2" />
	</div>
	<Button onclick={handleClick} class="text-lg">
		{isSessionValid ? '提交' : '授权'}
	</Button>
</Dialog>
