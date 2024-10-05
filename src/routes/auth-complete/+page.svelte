<script lang="ts">
	import 'uno.css';
	import { onMount } from 'svelte';
	import { localStorage$state } from '../utils.svelte';
	import { getWriteSessionState } from '$lib/client';
	import { type BGMSession } from '$lib/bangumiSession';

	let message = $state('正在读取授权信息...');
	let wikiWriteSession = localStorage$state<BGMSession>('wiki-write-session', {
		token: '',
		expiresAt: 0
	});

	onMount(async () => {
		const url = new URL(window.location.href);
		const sessionToken = url.searchParams.get('bgm-wiki-write-session');
		if (!sessionToken) {
			message = '未找到授权信息';
			return;
		}
		const res = await getWriteSessionState(sessionToken);
		wikiWriteSession.val = {
			token: sessionToken,
			expiresAt: res.expiresAt
		};
		message = '授权成功，请关闭此标签页';
	});
</script>

<main class="flex items-center justify-center h-screen bg-bgm-lightgrey">
	<div class="bg-white p-6 rounded-lg shadow-md text-center text-xl">
		{message}
	</div>
</main>
