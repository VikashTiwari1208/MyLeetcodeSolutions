<h2><a href="https://leetcode.com/problems/stone-game-iv/">1510. Stone Game IV</a></h2><h3>Hard</h3><hr><div><p>Alice and Bob take turns playing a game, with <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">Alice starting first.</span></p>

<p>Initially, there are <code>n</code> stones in a pile. On each player's turn, that player makes a <em>move</em> consisting of removing <strong>a<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">ny</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> non-zero </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">square number</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> of stones in the pile.</span></p>

<p>Also, if a player cannot make a move, he/she loses the game.</p>

<p>Given a positive integer <code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">n</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, return </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">true</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> if and only if Alice wins</span> the game otherwise return <code>false</code>, assuming both players play optimally.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation: </strong>Alice can remove 1 stone winning the game because Bob doesn't have any moves.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> false
<strong>Explanation: </strong>Alice can only remove 1 stone, after that Bob removes the last one winning the game (2 -&gt; 1 -&gt; 0).
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> true
<strong>Explanation:</strong> n is already a perfect square, Alice can win with one move, removing 4 stones (4 -&gt; 0).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>
</div>