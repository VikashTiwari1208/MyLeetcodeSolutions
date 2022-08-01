<h2><a href="https://leetcode.com/problems/maximum-number-of-eaten-apples/">1705. Maximum Number of Eaten Apples</a></h2><h3>Medium</h3><hr><div><p>There is a special kind of apple tree that grows apples every day for <code>n</code> days. On the <code>i<sup>th</sup></code> day, the tree grows <code>apples[i]</code> apples that will rot after <code>days[i]</code> days, <span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">that is on day </span><code><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;">i + days[i]</span></code><span class="highlighter--highlighted" data-highlight-id="2" style="background-color: rgb(255, 246, 21); color: inherit;"> the apples will be rotten and cannot be eaten.</span> On some days, the apple tree does not grow any apples, which are denoted by <code>apples[i] == 0</code> and <code>days[i] == 0</code>.</p>

<p>You dec<span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">ided to eat </span><strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">at most</span></strong><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;"> one apple a day (t</span>o keep the doctors away). Note that you can keep eating after the first <code>n</code> days.</p>

<p>Given two integer arrays <code>days</code> and <code>apples</code> of length <code>n</code>, <span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">return </span><em><span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">the maximum number of apples you can eat.</span></em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> apples = [1,2,3,5,2], days = [3,2,1,4,2]
<strong>Output:</strong> 7
<strong>Explanation:</strong> You can eat 7 apples:
- On the first day, you eat an apple that grew on the first day.
- On the second day, you eat an apple that grew on the second day.
- On the third day, you eat an apple that grew on the second day. After this day, the apples that grew on the third day rot.
- On the fourth to the seventh days, you eat apples that grew on the fourth day.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> apples = [3,0,0,0,0,2], days = [3,0,0,0,0,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can eat 5 apples:
- On the first to the third day you eat apples that grew on the first day.
- Do nothing on the fouth and fifth days.
- On the sixth and seventh days you eat apples that grew on the sixth day.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == apples.length == days.length</code></li>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= apples[i], days[i] &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>days[i] = 0</code> if and only if <code>apples[i] = 0</code>.</li>
</ul>
</div>