<h2>581. Shortest Unsorted Continuous Subarray</h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, you need to find one <b>continuous subarray</b> that if you only sort this subarray in ascending order, <gistnote class="gistnote-highlight" highlightid="c75dc265-a4db-4717-a77e-5bc15c28efe8" colornum="3" style="background-color: rgb(255, 251, 120);" id="c75dc265-a4db-4717-a77e-5bc15c28efe8">then the whole array will be sorted in ascending ord</gistnote>er.</p>

<p>Return <em>the shortest such subarray and output its length</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [2,6,4,8,10,9,15]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 0
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 0
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Can you solve it in <code>O(n)</code> time complexity?</div>