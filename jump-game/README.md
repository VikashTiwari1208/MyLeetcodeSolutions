<h2>55. Jump Game</h2><h3>Medium</h3><hr><div><p>You are given an integer array <code>nums</code>. You are initially positioned at the array's <strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">first index</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, and each element in the array represents your maximum jump length at that position.</span></p>

<p>Return <code>t<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">rue</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> if you can reach the last index, or </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">false</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> otherwise</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [2,3,1,1,4]
<strong>Output:</strong> true
<strong>Explanation:</strong> Jump 1 step from index 0 to 1, then 3 steps to the last index.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [3,2,1,0,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>