<h2><a href="https://leetcode.com/problems/stone-game-ii/">1140. Stone Game II</a></h2><h3>Medium</h3><hr><div><p>Alice and Bob continue their&nbsp;games with piles of stones.&nbsp; There are a number of&nbsp;piles&nbsp;<strong>arranged in a row</strong>, and each pile has a positive integer number of stones&nbsp;<code>piles[i]</code>.&nbsp; The objective of th<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">e game is to end with the most&nbsp;stones</span>.&nbsp;</p>

<p>Alice&nbsp;and Bob take turns, with Alice starting first.&nbsp; Initially, <code>M = 1</code>.</p>

<p>On each player's turn, t<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">hat player&nbsp;can take </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">all the stones</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> in the </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">first</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">X</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> remaining piles, where </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">1 &lt;= X &lt;= 2M</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">.&nbsp;</span> T<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">hen, we set&nbsp;</span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">M = max(M, X)</span></code>.</p>

<p>The game co<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">ntinues until all the stones have been taken</span>.</p>

<p>Assuming A<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">lice and Bob play optimally, return the maximum number of stones Alice&nbsp;can get.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> piles = [2,7,9,4,4]
<strong>Output:</strong> 10
<strong>Explanation:</strong>  If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get 2 + 4 + 4 = 10 piles in total. If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get 2 + 7 = 9 piles in total. So we return 10 since it's larger. 
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> piles = [1,2,3,4,5,100]
<strong>Output:</strong> 104
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= piles.length &lt;= 100</code></li>
	<li><code>1 &lt;= piles[i]&nbsp;&lt;= 10<sup>4</sup></code></li>
</ul>
</div>