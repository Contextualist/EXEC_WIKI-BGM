<script lang="ts">
	import 'uno.css';
	import { onMount } from 'svelte';

	import InfoBox, * as infobox from '../InfoBox.svelte';
	import SubmitDialog from '../SubmitDialog.svelte';
	import Button from '../Button.svelte';
	import Toast, { toast } from '../Toast.svelte';
	import { type SubjectData } from '../submit';
	import { getSubjectInfo, getPersonInfo } from '$lib/client';
	import { URL_OAUTH, sessionValid, type BGMSession } from '$lib/bangumiSession';

	const defaultInfoBox = `
{{Infobox Album
}}
`.trim();

	let title = $state('');
	let desc = $state('');
	let metaTags = $state('');
	let infoBox = $state(infobox.toArrayWikiString(defaultInfoBox));
	let showSubmitDialog = $state(false);
	let wtype = $state<'subject' | 'person'>('subject');
	let sid = $state(0);
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
				if (d.wtype === 'subject') {
					metaTags = subjectInfo.metaTags.join(' ');
				}
			} else {
				// new
				infobox.reset(d.infobox);
			}
			if (!sessionValid(session)) {
				askAuth();
			}
		});
	});

	function marshal(): SubjectData {
		return {
			sid,
			wikiType: wtype,
			title,
			infoBox: infobox.exportText(),
			description: desc,
			...(wtype === 'subject' ? { metaTags } : {})
		};
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
			bind:valueMetaTags={metaTags}
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
		<Button onclick={async () => (showSubmitDialog = true)} class="w-[96.7%] text-lg">
			写好了
		</Button>
	</div>
	<SubmitDialog bind:show={showSubmitDialog} getSubjectData={marshal} {askAuth} {session} />
	<Toast />
</main>
