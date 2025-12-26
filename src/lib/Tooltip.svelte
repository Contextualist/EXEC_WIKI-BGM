<script lang="ts" module>
	interface TooltipOptions {
		title: string;
		safeHTML?: boolean;
		attachment?: 'top' | 'bottom' | 'left' | 'right';
		widthUnbound?: boolean;
	}

	export function tooltip(element: HTMLElement, options: TooltipOptions): { destroy: () => void } {
		let div: HTMLDivElement;
		options.widthUnbound = options.widthUnbound ?? true;
		const fontSize = window.getComputedStyle(element).fontSize;
		function mouseEnter(event: MouseEvent) {
			if (event.target !== element) return;
			div = document.createElement('div');
			if (options.safeHTML) div.innerHTML = options.title;
			else div.textContent = options.title;
			document.body.appendChild(div);
			const anchor = () => {
				const view = { height: window.innerHeight, width: window.innerWidth };
				const dock = element.getBoundingClientRect();
				const self = div.getBoundingClientRect();
				const scrollY = window.scrollY;
				switch (options.attachment ?? 'right') {
					case 'top':
						return {
							left: `${(dock.left + dock.right - self.width) / 2}px`,
							bottom: `${view.height - dock.top + 4}px`
						};
					case 'bottom':
						return {
							left: `${(dock.left + dock.right - self.width) / 2}px`,
							top: `${dock.bottom + 4}px`
						};
					case 'left':
						return {
							right: `${view.width - dock.left + 4}px`,
							top: `${(dock.top + dock.bottom - self.height) / 2 + scrollY}px`
						};
					case 'right':
						return {
							left: `${dock.right + 4}px`,
							top: `${(dock.top + dock.bottom - self.height) / 2 + scrollY}px`
						};
				}
			};
			Object.assign(div.style, {
				'font-size': fontSize,
				'box-shadow':
					'0px 0.3px 1.4px #aaaaaa11, 0px 1.4px 3px -0.1px #aaaaaa22, 0px 2.9px 6.2px -0.2px #aaaaaa44, 0.1px 6.1px 10.8px -0.4px #aaaaaa55',
				background: 'white',
				'border-radius': '0.5rem',
				padding: '0.5rem',
				position: 'absolute',
				'z-index': '100',
				'max-width': '30em',
				'margin-right': '0.5rem',
				...(options.widthUnbound ? { width: 'max-content' } : {})
			});
			Object.assign(div.style, anchor());
		}
		function mouseLeave(event: MouseEvent) {
			if (event.target !== element) return;
			document.body.removeChild(div);
		}

		element.addEventListener('mouseenter', mouseEnter);
		element.addEventListener('mouseleave', mouseLeave);

		return {
			destroy() {
				element.removeEventListener('mouseenter', mouseEnter);
				element.removeEventListener('mouseleave', mouseLeave);
			}
		};
	}
</script>

<script lang="ts">
	interface TooltipProps {
		title: string;
		safeHTML?: boolean;
		class?: string;
	}
	let { title, safeHTML = false, class: class_ = '' }: TooltipProps = $props();
</script>

<span
	class="{class_} inline-block w-[18px] h-[18px] vertical-middle cursor-help"
	use:tooltip={{ title, safeHTML, widthUnbound: false }}
>
	<svg
		class="cursor-help"
		xmlns="http://www.w3.org/2000/svg"
		width="18"
		height="18"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="1.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<circle cx="12" cy="12" r="10"></circle>
		<path d="M9.09 9a3 3 0 0 1 5.83 1c0 2-3 3-3 3"></path>
		<line x1="12" y1="17" x2="12.01" y2="17"></line>
	</svg>
</span>
