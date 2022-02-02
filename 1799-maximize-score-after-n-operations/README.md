<h2><a href="https://leetcode.com/problems/maximize-score-after-n-operations/">1799. Maximize Score After N Operations</a></h2><h3>Hard</h3><hr><div><p>You are given <code>nums</code>, an array of positive integers of size <code>2 * n</code>. You must perform <code>n</code> operations on this array.</p>

<p>In the <code>i<sup>th</sup></code> operation <strong>(1-indexed)</strong>, you will:</p>

<ul>
	<li>Choose two elements, <code>x</code> and <code>y</code>.</li>
	<li>Receive a score of <code>i * gcd(x, y)</code>.</li>
	<li>Remove <code>x</code> and <code>y</code> from <code>nums</code>.</li>
</ul>

<p>Return <em>the <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">maximum score you can receive after performing </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">n</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> operations.</span></em></p>

<p>The function <code>gcd(x, y)</code> is the greatest common divisor of <code>x</code> and <code>y</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong>&nbsp;The optimal choice of operations is:
(1 * gcd(1, 2)) = 1
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [3,4,6,8]
<strong>Output:</strong> 11
<strong>Explanation:</strong>&nbsp;The optimal choice of operations is:
(1 * gcd(3, 6)) + (2 * gcd(4, 8)) = 3 + 8 = 11
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [1,2,3,4,5,6]
<strong>Output:</strong> 14
<strong>Explanation:</strong>&nbsp;The optimal choice of operations is:
(1 * gcd(1, 5)) + (2 * gcd(2, 4)) + (3 * gcd(3, 6)) = 1 + 4 + 9 = 14
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">1 &lt;= n &lt;= 7</span></code></li>
	<li><code>nums.length == 2 * n</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>