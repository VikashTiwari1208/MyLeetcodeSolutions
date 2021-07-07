<h2>453. Minimum Moves to Equal Array Elements</h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code> of size <code>n</code>, return <em>the minimum number of moves required to make all array elements equal</em>.</p>

<p>In one move, you can in<gistnote class="gistnote-highlight" highlightid="351062f2-4aae-4402-b25c-9f8909a5b7b3" colornum="3" style="background-color: rgb(255, 251, 120);" id="351062f2-4aae-4402-b25c-9f8909a5b7b3">crement </gistnote><code><gistnote class="gistnote-highlight" highlightid="351062f2-4aae-4402-b25c-9f8909a5b7b3" colornum="3" style="background-color: rgb(255, 251, 120);">n - 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="351062f2-4aae-4402-b25c-9f8909a5b7b3" colornum="3" style="background-color: rgb(255, 251, 120);"> elements of the array by </gistnote><code><gistnote class="gistnote-highlight" highlightid="351062f2-4aae-4402-b25c-9f8909a5b7b3" colornum="3" style="background-color: rgb(255, 251, 120);">1</gistnote></code><gistnote class="gistnote-highlight" highlightid="351062f2-4aae-4402-b25c-9f8909a5b7b3" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Only three moves are needed (remember each move increments two elements):
[1,2,3]  =&gt;  [2,3,3]  =&gt;  [3,4,3]  =&gt;  [4,4,4]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li>The answer is guaranteed to fit in a <strong>32-bit</strong> integer.</li>
</ul>
</div>