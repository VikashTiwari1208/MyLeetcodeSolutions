<h2><a href="https://leetcode.com/problems/find-good-days-to-rob-the-bank/">2100. Find Good Days to Rob the Bank</a></h2><h3>Medium</h3><hr><div><p>You and a gang of thieves are planning on robbing a bank. You are given a <strong>0-indexed</strong> integer array <code>security</code>, where <code>se<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">curity[i]</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> is the number of guards on duty on the </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">i</span><sup><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">th</span></sup></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> day.</span> The days are numbered starting from <code>0</code>. You are also given an integer <code>time</code>.</p>

<p>The <code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">i</span><sup><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">th</span></sup></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> day is a good day to rob</span> the bank if:</p>

<ul>
	<li>There are at<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> least </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">time</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> days before and after the </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">i</span><sup><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">th</span></sup></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> day,</span></li>
	<li>The number of g<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">uards at the bank for the </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">time</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> days </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">before</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">i</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> are </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">non-increasing</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">, and</span></li>
	<li>The number o<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">f guards at the bank for the </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">time</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4"> days </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">after</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4"> </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">i</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4"> are </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">non-decreasing</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">.</span></li>
</ul>

<p>More formally, this means day <code>i</code> is a good day to rob the bank if and only if <code>security[i - time] &gt;= security[i - time + 1] &gt;= ... &gt;= security[i] &lt;= ... &lt;= security[i + time - 1] &lt;= security[i + time]</code>.</p>

<p>Return <em>a list of <strong>all</strong> days <strong>(0-indexed) </strong>that are good days to rob the bank</em>.<em> The order that the days are returned in does<strong> </strong><strong>not</strong> matter.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> security = [5,3,3,3,5,6,2], time = 2
<strong>Output:</strong> [2,3]
<strong>Explanation:</strong>
On day 2, we have security[0] &gt;= security[1] &gt;= security[2] &lt;= security[3] &lt;= security[4].
On day 3, we have security[1] &gt;= security[2] &gt;= security[3] &lt;= security[4] &lt;= security[5].
No other days satisfy this condition, so days 2 and 3 are the only good days to rob the bank.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> security = [1,1,1,1,1], time = 0
<strong>Output:</strong> [0,1,2,3,4]
<strong>Explanation:</strong>
Since time equals 0, every day is a good day to rob the bank, so return every day.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> security = [1,2,3,4,5,6], time = 2
<strong>Output:</strong> []
<strong>Explanation:</strong>
No day has 2 days before it that have a non-increasing number of guards.
Thus, no day is a good day to rob the bank, so return an empty list.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= security.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= security[i], time &lt;= 10<sup>5</sup></code></li>
</ul>
</div>