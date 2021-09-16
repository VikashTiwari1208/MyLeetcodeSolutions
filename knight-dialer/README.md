<h2>935. Knight Dialer</h2><h3>Medium</h3><hr><div><p>The chess knight has a <strong>unique movement</strong>,&nbsp;it may move two squares vertically and one square horizontally, or two squares horizontally and one square vertically (with both forming the shape of an <strong>L</strong>). The possible movements of chess knight are shown in this diagaram:</p>

<p>A chess knight can move as indicated in the chess diagram below:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/18/chess.jpg" style="width: 402px; height: 402px;">
<p>We have a chess knight and a phone pad as shown below, the <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">knight </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">can only stand on a numeric cell</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">&nbsp;(i.e. blue cell)</span>.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/18/phone.jpg" style="width: 242px; height: 322px;">
<p>Given an integer <code>n</code>, <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">return how many distinct phone numbers of length </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">n</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> we can dial.</span></p>

<p>You are allowed to place the knight <strong>on any numeric cell</strong> initially and then you should <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">perform </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">n - 1</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> jumps to dial a number of length </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">n</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">. All jumps should be </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">valid</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> knight jumps.</span></p>

<p>As the answer may be very large, <strong>return the answer modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 10
<strong>Explanation:</strong> We need to dial a number of length 1, so placing the knight over any numeric cell of the 10 cells is sufficient.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 20
<strong>Explanation:</strong> All the valid number we can dial are [04, 06, 16, 18, 27, 29, 34, 38, 40, 43, 49, 60, 61, 67, 72, 76, 81, 83, 92, 94]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> 46
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> 104
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> n = 3131
<strong>Output:</strong> 136006598
<strong>Explanation:</strong> Please take care of the mod.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 5000</code></li>
</ul>
</div>