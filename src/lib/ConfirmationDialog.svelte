<script lang="ts" module>
	export interface ConfirmationOptions {
		title: string;
		message: string;
		confirmText?: string;
		cancelText?: string;
		onConfirm: () => void;
	}

	let activeDialogOpts: ConfirmationOptions | null = $state(null);
	let show = $state(false);

	export function confirm(options: ConfirmationOptions): void {
		activeDialogOpts = options;
		show = true;
	}
</script>

<script lang="ts">
	import Dialog from './Dialog.svelte';
	import Button from '../routes/Button.svelte';
</script>

<Dialog bind:show transitionType="fade" class="w-[300px]">
	<div class="flex flex-col">
		<h2 class="text-xl font-bold">{activeDialogOpts?.title}</h2>
		<div class="text-md mb-6">{activeDialogOpts?.message}</div>
		<div class="flex justify-end gap-3">
			<Button
				onclick={async () => {
					show = false;
				}}
				class="text-lg w-[3.5em]"
			>
				{activeDialogOpts?.cancelText ?? '算了'}
			</Button>
			<Button
				onclick={async () => {
					activeDialogOpts?.onConfirm();
					show = false;
				}}
				spinner={true}
				class="text-lg w-[3.5em] bg-faint-skyish text-bgm-teal"
			>
				{activeDialogOpts?.confirmText ?? '好诶'}
			</Button>
		</div>
	</div>
</Dialog>
