<h2>85. Maximal Rectangle</h2><h3>Hard</h3><hr><div><p>Given a <code>rows x cols</code>&nbsp;binary <code>matrix</code> filled with <code>0</code>'s and <code>1</code>'s, find the lar<gistnote class="gistnote-highlight" highlightid="38261f87-a247-4208-90e8-60ca58268d60" colornum="3" style="background-color: rgb(255, 251, 120);" id="38261f87-a247-4208-90e8-60ca58268d60">gest rectangle containing only </gistnote><code><gistnote class="gistnote-highlight" highlightid="38261f87-a247-4208-90e8-60ca58268d60" colornum="3" style="background-color: rgb(255, 251, 120);">1</gistnote></code><gistnote class="gistnote-highlight" highlightid="38261f87-a247-4208-90e8-60ca58268d60" colornum="3" style="background-color: rgb(255, 251, 120);">'s and return </gistnote><em><gistnote class="gistnote-highlight" highlightid="38261f87-a247-4208-90e8-60ca58268d60" colornum="3" style="background-color: rgb(255, 251, 120);">its area</gistnote></em><gistnote class="gistnote-highlight" highlightid="38261f87-a247-4208-90e8-60ca58268d60" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/14/maximal.jpg" style="width: 402px; height: 322px;">
<pre><strong>Input:</strong> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The maximal rectangle is shown in the above picture.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> matrix = []
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> matrix = [["0"]]
<strong>Output:</strong> 0
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> matrix = [["1"]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> matrix = [["0","0"]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>rows == matrix.length</code></li>
	<li><code>cols == matrix[i].length</code></li>
	<li><code>0 &lt;= row, cols &lt;= 200</code></li>
	<li><code>matrix[i][j]</code> is <code>'0'</code> or <code>'1'</code>.</li>
</ul>
</div>