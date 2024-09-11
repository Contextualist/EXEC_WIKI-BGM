<script lang="ts">
	import 'uno.css';

	import Header from '$lib/Header.svelte';
	import Tooltip from '$lib/Tooltip.svelte';
	import { ctrlOrCmd, altOrOpt } from '$lib/utils';
</script>

<head>
	<title>EXEC_WIKI=BGM/. 指南</title>
</head>

<Header>
	<div class="h-full w-30 flex justify-around flex-self-end">
		<a href="https://EXEC-0001.hya.moe">{@render globeSVG()}</a>
		<a href="https://github.com/Contextualist/EXEC_WIKI-BGM">{@render githubSVG()}</a>
		<a href="https://bgm.tv/group/topic/401907">{@render bgmSVG()}</a>
	</div>
</Header>
<article>
	<section>
		<h2 id="intro">这是什么？</h2>
		<p>首先，这是为一个叫班古米的网站准备的、用来写音乐维基条目的工具。对此，你的反应是？</p>
		<details>
			<summary class="text-bgm-teal"
				>“我听不太懂这些名词” / “好，不过班古米现成的维基编辑不好用吗？”
			</summary>
			<p>
				在 <a href="https://bgm.tv">Bangumi</a> 上，用户可以记录和评论感兴趣的动漫、音乐、游戏等作品。而这些作品的条目都是由大家自发创建且完善的，也就是说这是一个维基社区。
				依我拙见，班古米现成的维基编辑主要有两个痛点：
			</p>
			<p><b>难以快速精确地匹配人物</b></p>
			<p>
				维基条目里有大量的链接。创建条目时就需要找出相关人物的链接来添加进去，而这一步骤伴随着大量对人名和别名/艺名的检索。班古米通用的全文搜索并不是针对这个场景的，我们需要的是对人名和别名的批量精确匹配。
			</p>
			<p><b>信息记录方式的差异</b></p>
			<p>
				班古米的维基数据是以作品和人物为中心的：例如<i>某音乐专辑</i>的作词人有……作曲人有……；<i
					>某创作者</i
				>参与了……这几首曲子的作词：
			</p>
			{@render pic('/docs/intro-1.webp', 'Bangumi 音乐专辑制作人员信息', { compact: true })}
			<p>但是，对于多人合作的音乐专辑，发布者常常是以曲目为中心来记录和呈现信息的，例如：</p>
			{@render pic('/docs/intro-2.webp', 'IOSYS 的某音乐专辑曲目列表', { compact: true })}
			<p>
				这样一来，维基编辑者就需要自己重新汇编一次信息。能不能让这个汇编过程变得更容易呢？这就是我想解决的问题。
			</p>
		</details>
		<details>
			<summary class="text-bgm-teal">“哦？让我看看”</summary>
			<p>本项目适用于：</p>
			<ul>
				<li>“<a href="https://bgm.tv/group/topic/4428">关联</a>好麻烦”</li>
				<li>“填<a href="https://bgm.tv/group/topic/382694">参与信息</a>好麻烦”</li>
				<li>
					“<a href="https://bgm.tv/group/topic/389152">自动关联组件</a>真好用啊，もっともっと”
				</li>
				<li>
					<s>“我是维基狂人，我想把专辑上的所有信息都填进来 / 我是维基狂人，今天我要肝一百张碟”</s>
				</li>
			</ul>
			<p>嗯……嗯？那就接着看下面的教程吧。</p>
		</details>
	</section>

	<section>
		<h2 id="tutorial">简明教程</h2>
		<blockquote>注：本教程暂时面向对创建编辑维基音乐条目有基础了解的用户。</blockquote>
		<section>
			<h3>初次使用</h3>
			<ol>
				<li>在<a href="/" target="_blank">主界面</a>跟随引导，导入你的个人关联记录。</li>
				<li>在班古米启用<a href="https://bgm.tv/dev/app/3134" target="_blank">这个组件</a>。</li>
			</ol>
		</section>
		<section>
			<h3>编写音乐条目</h3>
			<ol>
				<li>
					找到可供复制的曲目制作人员信息，一般会在特设网站页面上、YouTube/SoundCloud 上 XFD
					的描述中、Booth/MelonBooks 的商品描述中，例如：
				</li>
				{@render pic('/docs/tutorial-1.webp', 'Booth 上找到的制作人员信息')}
				<li>复制粘贴到左侧的编辑器里，根据高亮和右侧的生成预览做调整：</li>
				<blockquote>
					什么样的信息可以被识别呢？简单来说：<b>可关联的职位</b><sup
						><Tooltip
							title={`目前班古米对音乐专辑支持的可关联职位有：
						艺术家、制作人、作曲、作词、编曲、插图、脚本、录音、厂牌、出版方、原作、声乐、乐器、混音、母带制作
						`}
						/></sup
					>和后面跟着的<b>人名</b>，剩余的部分会被作为<b>曲目名</b>。<br />
					其余的信息需要手动删掉，要不然就会被当成曲目名的一部分。
				</blockquote>
				{@render pic('/docs/tutorial-2.webp', '复制制作人员信息到编辑器')}
				<li>全专辑参与的制作人员信息请加在最前面：</li>
				{@render pic('/docs/tutorial-3.webp', '从特设页面上复制Vocal和插图人员信息')}
				<li>
					处理完这些可关联信息后，其余信息的填法跟原本 BGM 维基的填法一致。哦对了，记得找封面图。
				</li>
				{@render pic('/docs/tutorial-4.webp', '填写其他专辑信息')}
				<li>
					确认所有信息无误后，点“打包带走！”复制生成的信息。到班古米创建/编辑音乐条目的界面，粘贴到右侧标记着“在此处粘贴咏唱”的输入框里：
				</li>
				{@render pic('/docs/tutorial-5.webp', '复制生成的信息，粘贴到 BGM 对应的输入框里')}
				<li class="text-[2rem] text-bgm-pink font-[cursive] italic">
					“添加唱片/提交修改！”<br />
					“添加新曲目——加上去！”<br />
					“关联制作人员——清空——批量添加——保存关联数据！”
				</li>
				<p>这一步就不放图了，毕竟这套连招应该能在十秒内完成。</p>
				<li>
					来看看我的<a href="https://bgm.tv/subject/378771">最终成品</a>吧。
					如果要在曲目列表上看到每条曲目的关联信息展示，请启用<a href="https://bgm.tv/dev/app/3136"
						>这个组件</a
					>。
				</li>
			</ol>
		</section>
	</section>

	<section>
		<h2 id="faq">常见情况</h2>
		<section>
			<h3 id="faq-everyevery">专辑里所有曲目的制作人都是一样的 / 专辑里没有分曲目制作人</h3>
			<p>把制作人员信息加在曲目列表前面就行。</p>
		</section>
		<section>
			<h3 id="faq-editexist">扩充现有的条目</h3>
			<p>
				在「导入…」里用条目链接导入现有的条目。编辑好信息后，在班古米上选择性保存。
				如果只需要更改关联信息，可以在“打包带走！”时按下 <kbd>{altOrOpt}</kbd> 键，只复制关联信息。
			</p>
		</section>
		<section>
			<h3 id="faq-titlekeyword">曲目名/人名里有关键字/分隔符</h3>
			<p>用书名号把曲目名/人名括起来。</p>
			<pre><span class="text-bgm-pink">《</span>室内系なら作曲家<span class="text-bgm-pink">》</span
				> 作編曲：Yunomi　作詞：Yunomi & nicamoq</pre>
			<pre>music : <span class="text-bgm-pink">《</span>ちろ:D<span class="text-bgm-pink">》</span
				> lyric : もちうつね</pre>
		</section>
	</section>

	<section>
		<h2 id="rkgk-grammar-ext">扩展语法</h2>
		<section>
			<h3 id="grammar-multidisc">多张 Disc</h3>
			<p>
				使用 <code>DISC</code> 来标记每张 disc 的开始。
			</p>
			<pre>
producer: ARForest
<span class="text-bgm-pink">DISC</span>
The Unattended        performer: ARForest
An Innocent Breeze    performer: Nego_tiator
<span class="text-bgm-pink">DISC</span>
NORN                  performer: Rigël Theatre</pre>
		</section>
		<blockquote>
			“至此，为了满足维基人对补完信息那无休止的欲望，小小的 rkgk
			语言被缝上了怪诞的语法枝……它蜷缩着……不住地颤抖着……”
		</blockquote>
		<section>
			<h3 id="grammar-comment">曲目注释</h3>
			<p>
				两个半角斜线<s>，原汁原味的C系注释</s
				>，换不换行都可以，但必须在曲目制作人员信息前。生成的内容在「曲目列表-批量修改」里点「填上注释」加上。
				<br />
				另外，出于 Hyary 对车万的私心，“原曲”会被直接识别为注释。
			</p>
			<pre>
欲望煤气灶 <span class="text-bgm-pink">//</span> <span class="text-bgm-grey">Bonus track</span>
飘上月球，不死乒乓
<span class="text-bgm-pink">//</span> <span class="text-bgm-grey">Bonus track</span>
法界之锅 <span class="text-bgm-grey">原曲：法界の火</span></pre>
		</section>
	</section>

	<section>
		<h2 id="shortcut-reference">快捷键列表</h2>
		<section>
			<h3>Infobox 编辑器</h3>
			<table>
				<tbody>
					<tr>
						<td><kbd>enter</kbd></td>
						<td>在下方新增行</td>
					</tr>
					<tr>
						<td><kbd>shift</kbd> + <kbd>enter</kbd></td>
						<td>在上方新增行</td>
					</tr>
					<tr>
						<td><kbd>{ctrlOrCmd}</kbd> + <kbd>shift</kbd> + <kbd>k</kbd></td>
						<td>删除当前行</td>
					</tr>
					<tr>
						<td><kbd>{altOrOpt}</kbd> + <kbd>上/下</kbd></td>
						<td>交换相邻的两行</td>
					</tr>
					<tr>
						<td><kbd>{ctrlOrCmd}</kbd> + <kbd>{'['}</kbd></td>
						<td>在普通字段与列表字段之间切换</td>
					</tr>
				</tbody>
			</table>
		</section>
		<section>
			<h3>曲目列表编辑器（节选）</h3>
			<table>
				<tbody>
					<tr>
						<td><kbd>{ctrlOrCmd}</kbd> + <kbd>f</kbd></td>
						<td>打开查找替换面板</td>
					</tr>
					<tr>
						<td><kbd>{altOrOpt}</kbd> + <kbd>上/下</kbd></td>
						<td>交换相邻的两行</td>
					</tr>
				</tbody>
			</table>
		</section>
	</section>

	<section>
		<h2 id="casestudy">复杂案例</h2>
		<p>🕳️ 待填坑🕳️</p>
	</section>
</article>

{#snippet pic(src: string, alt: string, { compact = false } = {})}
	<div class="overflow-x-hidden">
		<figure class={'flex w-[max-content] lt-md:m-0 ' + (compact ? 'my-0' : '')}>
			<picture>
				<source srcset={src.replace('.webp', '.avif')} type="image/avif" />
				<img {src} {alt} class="block md:w-[32%] sm:w-[24%] w-[20%]" />
			</picture>
		</figure>
	</div>
{/snippet}

{#snippet bgmSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="24"
		height="24"
		viewBox="0 0 24 24"
		fill="none"
		stroke="#000000"
		stroke-width="2.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<rect x="2" y="7" width="20" height="15" rx="2" ry="2"></rect>
		<polyline points="17 2 12 7 7 2"></polyline>
	</svg>
{/snippet}

{#snippet globeSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="24"
		height="24"
		viewBox="0 0 24 24"
		fill="none"
		stroke="#000000"
		stroke-width="2"
	>
		<g id="SVGRepo_bgCarrier" stroke-width="0"></g>
		<g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g>
		<g id="SVGRepo_iconCarrier">
			<path
				d="M21 12C21 16.9706 16.9706 21 12 21C7.02944 21 3 16.9706 3 12C3 7.02944 7.02944 3 12 3C16.9706 3 21 7.02944 21 12Z"
			></path>
			<path
				d="M3.5 11H6C7.10457 11 8 11.8954 8 13V13C8 14.1046 8.89543 15 10 15V15C11.1046 15 12 15.8954 12 17V20.5"
			></path>
			<path
				d="M8 4V5C8 6.10457 8.89543 7 10 7H10.1459C11.1699 7 12 7.83011 12 8.8541V8.8541C12 9.55638 12.3968 10.1984 13.0249 10.5125L13.1056 10.5528C13.6686 10.8343 14.3314 10.8343 14.8944 10.5528L14.9751 10.5125C15.6032 10.1984 16 9.55638 16 8.8541V8.8541C16 7.83011 16.8301 7 17.8541 7H19.5"
			></path>
			<path d="M16 19.5V17C16 15.8954 16.8954 15 18 15H20"></path>
		</g>
	</svg>
{/snippet}

{#snippet githubSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="24"
		height="24"
		viewBox="0 0 24 24"
		fill="none"
		stroke="#000000"
		stroke-width="0.5"
	>
		<g id="SVGRepo_bgCarrier" stroke-width="0"></g>
		<g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g>
		<g id="SVGRepo_iconCarrier">
			<path
				d="M4.0744 2.9938C4.13263 1.96371 4.37869 1.51577 5.08432 1.15606C5.84357 0.768899 7.04106 0.949072 8.45014 1.66261C9.05706 1.97009 9.11886 1.97635 10.1825 1.83998C11.5963 1.65865 13.4164 1.65929 14.7213 1.84164C15.7081 1.97954 15.7729 1.97265 16.3813 1.66453C18.3814 0.651679 19.9605 0.71795 20.5323 1.8387C20.8177 2.39812 20.8707 3.84971 20.6494 5.04695C20.5267 5.71069 20.5397 5.79356 20.8353 6.22912C22.915 9.29385 21.4165 14.2616 17.8528 16.1155C17.5801 16.2574 17.3503 16.3452 17.163 16.4167C16.5879 16.6363 16.4133 16.703 16.6247 17.7138C16.7265 18.2 16.8491 19.4088 16.8973 20.4002C16.9844 22.1922 16.9831 22.2047 16.6688 22.5703C16.241 23.0676 15.6244 23.076 15.2066 22.5902C14.9341 22.2734 14.9075 22.1238 14.9075 20.9015C14.9075 19.0952 14.7095 17.8946 14.2417 16.8658C13.6854 15.6415 14.0978 15.185 15.37 14.9114C17.1383 14.531 18.5194 13.4397 19.2892 11.8146C20.0211 10.2698 20.1314 8.13501 18.8082 6.83668C18.4319 6.3895 18.4057 5.98446 18.6744 4.76309C18.7748 4.3066 18.859 3.71768 18.8615 3.45425C18.8653 3.03823 18.8274 2.97541 18.5719 2.97541C18.4102 2.97541 17.7924 3.21062 17.1992 3.49805L16.2524 3.95695C16.1663 3.99866 16.07 4.0147 15.975 4.0038C13.5675 3.72746 11.2799 3.72319 8.86062 4.00488C8.76526 4.01598 8.66853 3.99994 8.58215 3.95802L7.63585 3.49882C7.04259 3.21087 6.42482 2.97541 6.26317 2.97541C5.88941 2.97541 5.88379 3.25135 6.22447 4.89078C6.43258 5.89203 6.57262 6.11513 5.97101 6.91572C5.06925 8.11576 4.844 9.60592 5.32757 11.1716C5.93704 13.1446 7.4295 14.4775 9.52773 14.9222C10.7926 15.1903 11.1232 15.5401 10.6402 16.9905C10.26 18.1319 10.0196 18.4261 9.46707 18.4261C8.72365 18.4261 8.25796 17.7821 8.51424 17.1082C8.62712 16.8112 8.59354 16.7795 7.89711 16.5255C5.77117 15.7504 4.14514 14.0131 3.40172 11.7223C2.82711 9.95184 3.07994 7.64739 4.00175 6.25453C4.31561 5.78028 4.32047 5.74006 4.174 4.83217C4.09113 4.31822 4.04631 3.49103 4.0744 2.9938Z"
				fill="#0F0F0F"
			>
			</path>
			<path
				d="M3.33203 15.9454C3.02568 15.4859 2.40481 15.3617 1.94528 15.6681C1.48576 15.9744 1.36158 16.5953 1.66793 17.0548C1.8941 17.3941 2.16467 17.6728 2.39444 17.9025C2.4368 17.9449 2.47796 17.9858 2.51815 18.0257C2.71062 18.2169 2.88056 18.3857 3.05124 18.5861C3.42875 19.0292 3.80536 19.626 4.0194 20.6962C4.11474 21.1729 4.45739 21.4297 4.64725 21.5419C4.85315 21.6635 5.07812 21.7352 5.26325 21.7819C5.64196 21.8774 6.10169 21.927 6.53799 21.9559C7.01695 21.9877 7.53592 21.998 7.99999 22.0008C8.00033 22.5527 8.44791 23.0001 8.99998 23.0001C9.55227 23.0001 9.99998 22.5524 9.99998 22.0001V21.0001C9.99998 20.4478 9.55227 20.0001 8.99998 20.0001C8.90571 20.0001 8.80372 20.0004 8.69569 20.0008C8.10883 20.0026 7.34388 20.0049 6.67018 19.9603C6.34531 19.9388 6.07825 19.9083 5.88241 19.871C5.58083 18.6871 5.09362 17.8994 4.57373 17.2891C4.34391 17.0194 4.10593 16.7834 3.91236 16.5914C3.87612 16.5555 3.84144 16.5211 3.80865 16.4883C3.5853 16.265 3.4392 16.1062 3.33203 15.9454Z"
				fill="#0F0F0F"
			>
			</path>
		</g>
	</svg>
{/snippet}

<style>
	article {
		margin: 0 auto;
		max-width: 900px;
		width: 95%;
		padding-top: 20px;
		padding-bottom: 20px;
	}
	section {
		margin-bottom: 3rem;
	}
	section > section {
		margin-bottom: 2rem;
	}
	h2 {
		font-size: 1.5em;
		margin-bottom: 10px;
		background: linear-gradient(0deg, #dbf5ff 10%, #dbf5ff 45%, #ffffff00 45%, #ffffff00 100%);
		width: max-content;
		padding: 0 0.5rem;
		transform: translate3d(-0.5rem, 0, 0);
	}
	p {
		line-height: 1.5;
	}

	details {
		margin-top: 10px;
	}
	summary {
		cursor: pointer;
		font-weight: bold;
	}
	li {
		margin-bottom: 5px;
	}
	blockquote {
		margin: 1rem 0;
		padding: 1rem;
		background: linear-gradient(90deg, rgba(247, 234, 222, 0.93), rgba(247, 234, 222, 0.1));
		border-left: 5px solid rgb(255, 204, 153);
	}
	pre {
		background: rgba(0, 0, 0, 0.04);
		padding: 0.5rem;
		border-radius: 0.5rem;
	}
</style>
