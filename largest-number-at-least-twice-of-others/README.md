<h2>747. Largest Number At Least Twice of Others</h2><h3>Easy</h3><hr><div><p>You are given an integer array <code>nums</code> where the largest integer is <strong>unique</strong>.</p>

<p>Determine whether the <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">largest element in the array is </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">at least twice</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> as much as every other number in the array.</span> If it is, r<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">eturn </span><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">the </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">index</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> of the largest element, or return </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">-1</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> otherwise</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,6,1,0]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> -1
<strong>Explanation:</strong> 4 is less than twice the value of 3, so we return -1.</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> 1 is trivially at least twice the value as any other number because there are no other numbers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 50</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
	<li>The largest element in <code>nums</code> is unique.</li>
</ul>
</div>