<h2><a href="https://leetcode.com/problems/stone-game-ix/">2029. Stone Game IX</a></h2><h3>Medium</h3><hr><div><p>Alice and Bob continue their games with stones. There is a row of n stones, and each stone has an associated value. You are given an integer array <code>stones</code>, where <code>stones[i]</code> is the <strong>value</strong> of the <code>i<sup>th</sup></code> stone.</p>

<p>Alice and Bob take turns, with <strong>Alice</strong> starting first. On each turn, the player may remove any stone from <code>stones</code>. <span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">The player who removes a stone </span><strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">loses</span></strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;"> if the </span><strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">sum</span></strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;"> of the values of </span><strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">all removed stones</span></strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;"> is divisible by </span><code><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">3</span></code>. B<span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">ob will win automatically if there are no remaining stones (even if it is Alice's turn)</span>.</p>

<p>Assuming both players play <strong>optim<span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">ally</span></strong><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">, return </span><code><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">true</span></code> <em><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">if Alice wins and</span></em> <code><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">false</span></code> <em><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">if Bob wins</span></em><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> stones = [2,1]
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;The game will be played as follows:
- Turn 1: Alice can remove either stone.
- Turn 2: Bob removes the remaining stone. 
The sum of the removed stones is 1 + 2 = 3 and is divisible by 3. Therefore, Bob loses and Alice wins the game.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> stones = [2]
<strong>Output:</strong> false
<strong>Explanation:</strong>&nbsp;Alice will remove the only stone, and the sum of the values on the removed stones is 2. 
Since all the stones are removed and the sum of values is not divisible by 3, Bob wins the game.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> stones = [5,1,2,4,3]
<strong>Output:</strong> false
<strong>Explanation:</strong> Bob will always win. One possible way for Bob to win is shown below:
- Turn 1: Alice can remove the second stone with value 1. Sum of removed stones = 1.
- Turn 2: Bob removes the fifth stone with value 3. Sum of removed stones = 1 + 3 = 4.
- Turn 3: Alices removes the fourth stone with value 4. Sum of removed stones = 1 + 3 + 4 = 8.
- Turn 4: Bob removes the third stone with value 2. Sum of removed stones = 1 + 3 + 4 + 2 = 10.
- Turn 5: Alice removes the first stone with value 5. Sum of removed stones = 1 + 3 + 4 + 2 + 5 = 15.
Alice loses the game because the sum of the removed stones (15) is divisible by 3. Bob wins the game.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= stones.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= stones[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>