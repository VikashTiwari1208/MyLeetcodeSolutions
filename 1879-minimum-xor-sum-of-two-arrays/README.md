<h2><a href="https://leetcode.com/problems/minimum-xor-sum-of-two-arrays/">1879. Minimum XOR Sum of Two Arrays</a></h2><h3>Hard</h3><hr><div><p>You are given two integer arrays <code>nums1</code> and <code>nums2</code> of length <code>n</code>.</p>

<p>The <strong>XOR sum</strong> of the two integer arrays is <code>(nums1[0] XOR nums2[0]) + (nums1[1] XOR nums2[1]) + ... + (nums1[n - 1] XOR nums2[n - 1])</code> (<strong>0-indexed</strong>).</p>

<ul>
	<li>For example, the <strong>XOR sum</strong> of <code>[1,2,3]</code> and <code>[3,2,1]</code> is equal to <code>(1 XOR 3) + (2 XOR 2) + (3 XOR 1) = 2 + 0 + 2 = 4</code>.</li>
</ul>

<p>Rearrange th<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">e elements of </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">nums2</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> such that the resulting </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">XOR sum</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> is </span><b><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">minimized</span></b><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">.</span></p>

<p>Return <em>the <strong>X<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">OR sum</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> after the rearrangement</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums1 = [1,2], nums2 = [2,3]
<strong>Output:</strong> 2
<b>Explanation:</b> Rearrange <code>nums2</code> so that it becomes <code>[3,2]</code>.
The XOR sum is (1 XOR 3) + (2 XOR 2) = 2 + 0 = 2.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> nums1 = [1,0,3], nums2 = [5,3,4]
<strong>Output:</strong> 8
<b>Explanation:</b> Rearrange <code>nums2</code> so that it becomes <code>[5,4,3]</code>. 
The XOR sum is (1 XOR 5) + (0 XOR 4) + (3 XOR 3) = 4 + 4 + 0 = 8.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums1.length</code></li>
	<li><code>n == nums2.length</code></li>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">1 &lt;= n &lt;= 14</span></code></li>
	<li><code>0 &lt;= nums1[i], nums2[i] &lt;= 10<sup>7</sup></code></li>
</ul>
</div>