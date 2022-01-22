<h2><a href="https://leetcode.com/problems/number-of-good-ways-to-split-a-string/">1525. Number of Good Ways to Split a String</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code>s</code>.</p>

<p>A split is called <strong>good</strong> if you can split <code>s</code> into two non-empty strings <code>s<sub>left</sub></code> and <code>s<sub>right</sub></code> where their concatenation is equal to <code>s</code> (i.e., <code>s<sub>left</sub> + s<sub>right</sub> = s</code>) and<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> the number of distinct letters in </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">s</span><sub><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">left</span></sub></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> and </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">s</span><sub><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">right</span></sub></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> is the same.</span></p>

<p>Return <em>the nu<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">mber of </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">good splits</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> you can make in </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">s</span></code></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> s = "aacaba"
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 5 ways to split <code>"aacaba"</code> and 2 of them are good. 
("a", "acaba") Left string and right string contains 1 and 3 different letters respectively.
("aa", "caba") Left string and right string contains 1 and 3 different letters respectively.
("aac", "aba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aaca", "ba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aacab", "a") Left string and right string contains 3 and 1 different letters respectively.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> s = "abcd"
<strong>Output:</strong> 1
<strong>Explanation:</strong> Split the string as follows ("ab", "cd").
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>
</div>