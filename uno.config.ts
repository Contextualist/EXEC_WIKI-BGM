import { defineConfig } from 'unocss'
import presetUno from '@unocss/preset-uno'
import extractorSvelte from '@unocss/extractor-svelte'

export default defineConfig({
    presets: [
        presetUno(),
    ],
    extractors: [extractorSvelte()],
    theme: {
        fontFamily: {
            hymmnos: 'Hymmnos',
        },
        colors: {
            bgm: {
                pink: '#F09199',  // primary accent
                beige: '#F9F9F5',  // primary background
                lightergrey: '#FBFBFB',  // decorative strips
                lightgrey: '#F8F8F8',  // general background
                grey: '#999',  // secondary tip
                darkgrey: '#666',  // primary tip
                teal: '#0084B4',  // links
            },
            faint: {
                orangish: "rgba(247,234,222,0.93)",
                skyish: "rgba(222,243,247,0.93)",
            },
            bgmc: {
                green: '#70B941',
                blue: '#6BAAE8',
                orange: '#E68E46',
                purple: '#9065ED',
                sky: '#369CF8',
            }
        },
    },
    rules: [
        [/^text-wrap-balance$/, () => ({
            'text-wrap': 'balance',
        })],
    ],
    shortcuts: {
        'input-bgm': 'border-solid border-1 border-light-9 border-rd-md focus:outline-none focus:drop-shadow-sm focus:drop-shadow-color-bgm-pink',
        'rich-infobox-key': 'flex-shrink-0 py-2 text-align-right text-wrap-balance px-2 focus:outline-none',
        'rich-infobox-value': 'flex-grow-1 px-1 py-2 border-b-solid border-bgm-grey border-1 focus:outline-none',
    },
    preflights: [
        {
            getCSS() {
                return `
                    @font-face {
                        font-family: 'Hymmnos';
                        font-style: normal;
                        src: url('/hymmnos.ttf') format('truetype');
                    }
                    
                    a {
                        color: #0084B4;
                        cursor: pointer;
                        text-decoration: none;
                    }
                    a:hover {
                        color: #02A3FB;
                        text-decoration: underline;
                    }
                    
                    @keyframes bounce-vertical {
                        0%, 100% {
                            transform: translateY(-2px);
                        }
                        50% {
                            transform: translateY(3px);
                        }
                    }

                    kbd {
                        background: #f7f7f7;
                        border: 1px solid #ccc;
                        border-radius: 3px;
                        box-shadow: 0 1px 0 rgba(0,0,0,0.2);
                        color: #333;
                        display: inline-block;
                        font-family: Menlo, Monaco, Consolas, "Courier New", monospace;
                        padding: .05rem .3rem;
                    }

                    /* workaround for Firefox contenteditable height issue */
                    /* https://stackoverflow.com/a/23530317 */
                    .rich-infobox-value > [contenteditable='true']:before {
                        content: "\\feff ";
                    }
                `
            },
        },
    ],
})