<h2><a href="https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/">1130. Minimum Cost Tree From Leaf Values</a></h2><h3>Medium</h3><hr><div><p>Given an array <code>arr</code> of positive integers, consider all binary trees such that:</p>

<ul>
	<li>Each node has either <code>0</code> or <code>2</code> children;</li>
	<li>The<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> values of </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">arr</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> correspond to the values of each </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">leaf</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> in an in-order traversal of the tree.</span></li>
	<li>The <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">value of each non-leaf node is equal to the product of the largest leaf value in its left and right subtree, respectively.</span></li>
</ul>

<p>Among all possible binary trees considered, return <em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">the smallest possible sum of the values of each non-leaf node</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">. It is guaranteed this sum fits into a </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">32-bit</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> integer.</span></p>

<p>A node is a <strong>leaf</strong> if and only if it has zero children.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/tree1.jpg" style="width: 500px; height: 169px;">
<pre style="position: relative;"><strong>Input:</strong> arr = [6,2,4]
<strong>Output:</strong> 32
<strong>Explanation:</strong> There are two possible trees shown.
The first has a non-leaf node sum 36, and the second has non-leaf node sum 32.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/tree2.jpg" style="width: 224px; height: 145px;">
<pre style="position: relative;"><strong>Input:</strong> arr = [4,11]
<strong>Output:</strong> 44
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 40</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 15</code></li>
	<li>It is guaranteed that the answer fits into a <strong>32-bit</strong> signed integer (i.e., it is less than 2<sup>31</sup>).</li>
</ul>
</div>