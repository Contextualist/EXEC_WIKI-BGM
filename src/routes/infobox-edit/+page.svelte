<script lang="ts">
	import 'uno.css';

	import InfoBox, * as infobox from '../InfoBox.svelte';
	import Button from '../Button.svelte';
	import Toast, { toast } from '../Toast.svelte';
	import {
		getSubjectInfo,
		getPersonInfo,
		patchSubjectInfo,
		patchPersonInfo,
		postSubjectInfo,
		getWriteSessionState
	} from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';
	import { onMount } from 'svelte';

	const defaultInfoBox = `{{Infobox Album
}}`.trim();
	const wikiCommitOptions = [
		'',
		'新条目',
		'修饰语句',
		'修正笔误',
		'内容扩充',
		'排版',
		'段落章节',
		'分类',
		'字词转换',
		'消歧义',
		'维基化',
		'标识删除',
		'侵权',
		'欢迎',
		'警告'
	];

	let title = $state('');
	let desc = $state('');
	let infoBox = $state(infobox.toArrayWikiString(defaultInfoBox));
	let commitMessage = $state('');
	let wtype = $state<'subject' | 'person'>('subject');
	let sid = $state(0);
	let isNew = $derived(sid === 0);
	let quickCommitOptions = $derived(isNew ? ['新条目'] : wikiCommitOptions);
	let session = $state<BGMSession>({ token: '', expiresAt: 0 });

	onMount(() => {
		infobox.init(infoBox);
		window.addEventListener('message', async (event) => {
			if (event.origin !== 'https://bgm.tv') return;
			interface Message {
				wtype: 'subject' | 'person';
				sid: number;
				session: BGMSession;
				infobox: string;
			}
			const d = event.data as Message;
			session = d.session;
			wtype = d.wtype;
			if (d.sid) {
				// edit
				sid = d.sid;
				const subjectInfo = await (d.wtype === 'subject' ? getSubjectInfo : getPersonInfo)(d.sid);
				title = subjectInfo.name;
				infobox.reset(subjectInfo.infobox);
				desc = subjectInfo.summary;
			} else {
				// new
				infobox.reset(d.infobox);
			}
			if (!sessionValid(session)) {
				askAuth();
			}
		});
	});

	async function submit() {
		if (!sessionValid(session)) {
			askAuth();
			return;
		}
		const { rfn, tp } = toast('提交中...', { progress: true });
		try {
			await getWriteSessionState(session.token);
		} catch (e) {
			askAuth();
			return;
		}
		const subjectInfo = {
			name: title,
			infobox: infobox.exportText(),
			summary: desc
		};
		let r: number | string | void;
		let rsid = sid;
		if (sid) {
			if (wtype === 'subject') {
				r = await patchSubjectInfo(session.token, sid, commitMessage, subjectInfo);
			} else {
				r = await patchPersonInfo(session.token, sid, commitMessage, subjectInfo);
			}
		} else {
			r = await postSubjectInfo(session.token, subjectInfo);
			if (typeof r === 'number') {
				rsid = r;
			}
		}
		if (typeof r === 'string') {
			toast(`提交失败: ${r}`, { alert: true });
		} else {
			tp.nDone = 1;
			toast('提交成功');
		}
		setTimeout(() => {
			rfn();
			window.open(`https://bgm.tv/${wtype}/${rsid}`, '_blank');
		}, 1000);
	}

	function askAuth() {
		toast(`请先<a href="${URL_OAUTH}" target="_blank">点击这里授权</a>。授权后需要刷新本页面。`, {
			alert: true,
			duration: 10000
		});
	}
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
			bind:value={infoBox}
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
		<div class="flex-basis-[1rem] w-[97%] flex gap-xs">
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
			<Button onclick={submit} class="flex-basis-[4rem]" spinner={true}>提交</Button>
		</div>
	</div>
	<Toast />
</main>
