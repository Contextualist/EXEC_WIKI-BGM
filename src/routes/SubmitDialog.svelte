<script lang="ts">
	import Dialog from './Dialog.svelte';
	import Button from './Button.svelte';
	import { toast } from './Toast.svelte';
	import { getWriteSessionState, patchSubjectInfo } from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';
	import { localStorage$state } from './utils.svelte';

	interface SubmitDialogProps {
		show: boolean;
		getSubjectData: () => SubjectData;
	}
	interface SubjectData {
		title: string;
		infoBox: string;
		description: string;
	}
	let { show = $bindable(), getSubjectData }: SubmitDialogProps = $props();
	let wikiWriteSession = localStorage$state<BGMSession>('wiki-write-session', {
		token: '',
		expiresAt: 0
	});
	let isSessionValid = $derived(sessionValid(wikiWriteSession.val));

	let sid = $state('');
	let commitMessage = $state('');

	async function handleClick() {
		if (!isSessionValid) {
			window.open(URL_OAUTH, '_blank');
			show = false;
		} else {
			// const res = await getWriteSessionState(wikiWriteSession.val.token);
			// console.log(res);
			const subjectData = getSubjectData();
			const r = await patchSubjectInfo(wikiWriteSession.val.token, parseInt(sid), commitMessage, {
				...(subjectData.title ? { name: subjectData.title } : {}),
				...(subjectData.infoBox ? { infobox: subjectData.infoBox } : {}),
				...(subjectData.description ? { summary: subjectData.description } : {})
			});
			if (!r) {
				toast('提交成功');
				show = false;
			} else {
				toast(`提交时发生错误: ${r}`, { alert: true });
			}
		}
	}
</script>

<Dialog bind:show class="w-96 min-h-100 flex flex-col justify-center items-center gap-4">
	<div class="flex gap-2">
		<label for="sid">Subject ID</label>
		<input id="sid" type="text" bind:value={sid} class="input-bgm p-2" />
	</div>
	<div class="flex gap-2">
		<label for="commitMessage">编辑摘要</label>
		<input id="commitMessage" type="text" bind:value={commitMessage} class="input-bgm p-2" />
	</div>
	<Button onclick={handleClick} class="text-lg">
		{isSessionValid ? '提交' : '授权'}
	</Button>
</Dialog>
