<script lang="ts">
	import 'uno.css';
	import { Release } from './postprocess';
	import { type Staff } from '$lib/db';
	import { Match, type ResolvedRelaMap } from './disambiguation';

	interface TrackInfoProps {
		release: Readonly<Release>;
		name2staff: ResolvedRelaMap;
		class?: string;
	}
	let { release, name2staff, class: class_ = '', ...rest }: TrackInfoProps = $props();

	let creditTopFormatted = $derived(
		mergeKeys(Object.entries(release.credits), (ps) => ps.join('、'))
	);
	let creditFormatted = $derived(
		release.tracks.map((disc) =>
			disc.map((tr) => mergeKeys(Object.entries(tr.credits), (ps) => ps.join('、')))
		)
	);

	/// Merge keys with the same value
	function mergeKeys<V>(objEntries: [string, V][], keyFn: (v: V) => string): [string, V][] {
		const d = objEntries.reduce(
			(acc, [k, v]) => {
				const sk = keyFn(v);
				acc[sk] = [sk in acc ? acc[sk][0] + '、' + k : k, v];
				return acc;
			},
			{} as { [sk: string]: [string, V] }
		);
		return Object.entries(d).map(([sk, kv]) => kv);
	}
</script>

{#snippet formattedStaff(name: string, staff: Staff | undefined, m: Match)}
	{#if m === Match.None}
		{name}
	{:else if m === Match.Conflict}
		<span class="text-bgm-pink">{name}</span>
	{:else}
		{#if name !== staff!.name}{name} ({/if}<a href="https://bgm.tv/person/{staff!.id}"
			>{staff!.name}</a
		>{#if name !== staff!.name}){/if}
	{/if}
{/snippet}

{#snippet formattedCredits(c: [string, string[]][])}
	{#each c as [roleID, staffs]}
		{#if roleID}
			<div class="font-size-xs">
				<span class="color-bgm-darkgrey">&#x3000;&#x3000;&#x3000;&#x3000;{roleID}：</span>
				{#each staffs as name, i}
					{@const [staff, m] = name2staff.get(name)!}
					{@render formattedStaff(name, staff, m)}{i === staffs.length - 1 ? '' : '、'}
				{/each}
			</div>
		{/if}
	{/each}
{/snippet}

<div
	{...rest}
	class="min-w-85 max-w-180 ml-4 my-2.8 {class_} border-b-solid border-[#efefef] border-3"
>
	{#if release.tracks.length > 0 && release.tracks[0].length > 0}
		<div class="py-2 px-1">
			{@render formattedCredits(creditTopFormatted)}
		</div>
		{#each release.tracks as disc, i}
			<div class="p-1 font-size-xs color-bgm-grey border-b-solid border-1 border-color-gray">
				Disc {i + 1}
			</div>
			{#each disc as track, j}
				<div class={'py-2 px-1 ' + (j % 2 !== 0 ? 'bg-bgm-lightgrey' : '')}>
					<div class="font-size-sm break-words hyphens-auto">
						{j + 1}
						{track.title}
						{#if track.comment}
							<span class="font-size-xs color-bgm-darkgrey">/ {track.comment}</span>
						{/if}
					</div>
					{@render formattedCredits(creditFormatted[i][j])}
				</div>
			{/each}
		{/each}
	{:else}
		<div class="flex flex-col h-full">
			<div class="text-[6em] color-[#F0919933] font-serif mx-auto">空</div>
			<svg
				height="150"
				class="mt-auto"
				viewBox="0 0 145 145"
				fill="none"
				xmlns="http://www.w3.org/2000/svg"
			>
				<mask
					id="mask0_1_16"
					style="mask-type:alpha"
					maskUnits="userSpaceOnUse"
					x="0"
					y="0"
					width="145"
					height="145"
				>
					<path
						d="M137 0H8C3.58172 0 0 3.58172 0 8V137C0 141.418 3.58172 145 8 145H137C141.418 145 145 141.418 145 137V8C145 3.58172 141.418 0 137 0Z"
						fill="#C4C4C4"
					/>
				</mask>
				<g mask="url(#mask0_1_16)">
					<path
						fill-rule="evenodd"
						clip-rule="evenodd"
						d="M85.803 38.7817C85.803 38.7817 73.5 34.332 61.197 38.7817C61.197 38.7817 62.0758 40.5616 62.9545 46.3463C61.197 40.5616 49.7727 20.9828 35.7121 12.0833C35.7121 42.5005 50.879 49.3166 53.38 50.2338L45.8182 47.6812C35.7121 50.351 22.9697 83.2791 15.5 152.25L55.9242 152.096C55.9242 152.096 55.9242 128.666 68.2272 128.666V123.772C68.2272 123.772 51.0909 123.772 46.2575 111.312L46.7234 139.791C44.9394 128.666 44.9394 108.198 44.9394 108.198C44.9394 107.916 44.9369 107.563 44.934 107.146C44.8821 99.6739 44.6875 71.6845 55.9242 63.2553C50.4318 69.7074 49.3333 83.2791 49.3333 83.2791C50.4318 85.9489 54.3863 86.6164 54.3863 86.6164C54.3863 86.6164 55.2651 83.0566 57.6818 80.1643C57.6818 80.1643 57.0227 89.9537 71.7424 89.9537C71.7424 89.9537 70.4242 86.8389 71.303 83.7241C71.303 83.7241 73.9394 88.6188 81.4091 88.1738C81.4091 88.1738 82.9469 85.504 82.7272 83.2791C82.7272 83.2791 85.5833 86.6164 90.6363 86.8389C90.6363 86.8389 91.0757 84.3915 91.0757 82.3891C91.0757 82.3891 93.9318 86.6164 98.5454 86.6164C97.8863 77.7169 95.0303 70.8198 91.0757 63.2553C102.141 74.4611 102.096 93.1011 102.064 106.191C102.062 106.876 102.061 107.545 102.061 108.198C102.061 108.198 102.061 128.666 100.303 139.791L100.742 111.312C95.909 123.772 78.7727 123.772 78.7727 123.772V128.666C91.0757 128.666 91.0757 152.25 91.0757 152.25H131.5C124.03 83.2791 111.288 50.351 101.182 47.6812L93.7731 50.1821C96.6821 49.0938 111.288 42.1329 111.288 12.0833C97.2273 20.9828 85.803 40.5616 83.6061 46.3463C84.9242 40.5616 85.803 38.7817 85.803 38.7817ZM93.2727 50.351C93.2727 50.351 93.4514 50.3025 93.7731 50.1821L93.2727 50.351ZM53.7273 50.351L53.38 50.2338C53.6048 50.3162 53.7273 50.351 53.7273 50.351Z"
						fill="#F0919933"
					/>
					<path
						d="M96 99.5C96 103.366 92.866 106.5 89 106.5C85.134 106.5 82 103.366 82 99.5C82 95.634 85.134 92.5 89 92.5C92.866 92.5 96 95.634 96 99.5Z"
						stroke="#F0919933"
						stroke-width="3"
					/>
					<circle cx="56.5" cy="99.5" r="7" stroke="#F0919933" stroke-width="3" />
				</g>
			</svg>
		</div>
	{/if}
</div>
