<h2><a href="https://leetcode.com/problems/shortest-bridge/">934. Shortest Bridge</a></h2><h3>Medium</h3><hr><div><p>You are given an <code>n x n</code> binary matrix <code>grid</code> where <code>1</code> represents land and <code>0</code> represents water.</p>

<p>An <strong>island</strong> is a 4-directionally connected group of <code>1</code>'s not connected to any other <code>1</code>'s. <span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">There are </span><strong><span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">exactly two islands</span></strong><span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;"> in </span><code><span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">grid</span></code><span class="highlighter--highlighted" data-highlight-id="1" style="background-color: rgb(255, 246, 21); color: inherit;">.</span></p>

<p>You may change <code>0</code>'s to <code>1</code>'s to connect the two islands to form <strong>one island</strong>.</p>

<p>Return <em>the sm<span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">allest number of </span></em><code><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">0</span></code><em><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">'s you must flip to connect the two islands</span></em><span class="highlighter--highlighted" data-highlight-id="0" style="background-color: rgb(255, 246, 21); color: inherit;">.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> grid = [[0,1],[1,0]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [[0,1,0],[0,0,0],[0,0,1]]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> grid = [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length == grid[i].length</code></li>
	<li><code>2 &lt;= n &lt;= 100</code></li>
	<li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
	<li>There are exactly two islands in <code>grid</code>.</li>
</ul>
</div>