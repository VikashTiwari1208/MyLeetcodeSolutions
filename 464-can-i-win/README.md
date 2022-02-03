<h2><a href="https://leetcode.com/problems/can-i-win/">464. Can I Win</a></h2><h3>Medium</h3><hr><div><p>In the "100 game" two players take turns adding, to a running total, any integer from <code>1</code> to <code>10</code>.<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> The player who first causes the running total to </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">reach or exceed</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> 100 wins.</span></p>

<p>What if we change th<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">e game so that players </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">cannot</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> re-use integers?</span></p>

<p>For example, two players might take turns drawing from a common pool of numbers from 1 to 15 without replacement until they reach a total &gt;= 100.</p>

<p>Given two integers <code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">maxChoosableInteger</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> and </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">desiredTotal</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">, return </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">true</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> if the first player to move can force a win, otherwise, return </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">false</span></code>. Assume both players play <strong>optimally</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> maxChoosableInteger = 10, desiredTotal = 11
<strong>Output:</strong> false
<strong>Explanation:</strong>
No matter which integer the first player choose, the first player will lose.
The first player can choose an integer from 1 up to 10.
If the first player choose 1, the second player can only choose integers from 2 up to 10.
The second player will win by choosing 10 and get a total = 11, which is &gt;= desiredTotal.
Same with other integers chosen by the first player, the second player will always win.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> maxChoosableInteger = 10, desiredTotal = 0
<strong>Output:</strong> true
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> maxChoosableInteger = 10, desiredTotal = 1
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">1 &lt;= maxChoosableInteger &lt;= 20</span></code></li>
	<li><code>0 &lt;= desiredTotal &lt;= 300</code></li>
</ul>
</div>