<h2>1770. Maximum Score from Performing Multiplication Operations</h2><h3>Medium</h3><hr><div><p>You are given two integer arrays <code>nums</code> an<gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);" id="f44f51cf-3759-4c4f-b3ff-362f64407c6f">d </gistnote><code><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);">multipliers</gistnote></code><strong><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote></strong><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);">of size </gistnote><code><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></code><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);"> and </gistnote><code><gistnote class="gistnote-highlight" highlightid="f44f51cf-3759-4c4f-b3ff-362f64407c6f" colornum="3" style="background-color: rgb(255, 251, 120);">m</gistnote></code> respectively, where <code>n &gt;= m</code>. The arrays are <strong>1-indexed</strong>.</p>

<p>You beg<gistnote class="gistnote-highlight" highlightid="f0cb6dea-6f57-4dc7-9fb0-2c533cc92021" colornum="3" style="background-color: rgb(255, 251, 120);" id="f0cb6dea-6f57-4dc7-9fb0-2c533cc92021">in with a score of </gistnote><code><gistnote class="gistnote-highlight" highlightid="f0cb6dea-6f57-4dc7-9fb0-2c533cc92021" colornum="3" style="background-color: rgb(255, 251, 120);">0</gistnote></code>. You want to <gistnote class="gistnote-highlight" highlightid="938722c6-01f9-4120-be0a-8e1509905bdb" colornum="3" style="background-color: rgb(255, 251, 120);" id="938722c6-01f9-4120-be0a-8e1509905bdb">perform </gistnote><strong><gistnote class="gistnote-highlight" highlightid="938722c6-01f9-4120-be0a-8e1509905bdb" colornum="3" style="background-color: rgb(255, 251, 120);">exactly</gistnote></strong><gistnote class="gistnote-highlight" highlightid="938722c6-01f9-4120-be0a-8e1509905bdb" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote><code><gistnote class="gistnote-highlight" highlightid="938722c6-01f9-4120-be0a-8e1509905bdb" colornum="3" style="background-color: rgb(255, 251, 120);">m</gistnote></code><gistnote class="gistnote-highlight" highlightid="938722c6-01f9-4120-be0a-8e1509905bdb" colornum="3" style="background-color: rgb(255, 251, 120);"> operations</gistnote>. On the <code>i<sup>th</sup></code> operation <strong>(1-indexed)</strong>, you will:</p>

<ul>
	<li>Choose one <gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);" id="71078de9-88ae-4094-9f25-e971b3830c8a">integer </gistnote><code><gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);">x</gistnote></code><gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);"> from </gistnote><strong><gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);">either the start or the end </gistnote></strong><gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);">of the array </gistnote><code><gistnote class="gistnote-highlight" highlightid="71078de9-88ae-4094-9f25-e971b3830c8a" colornum="3" style="background-color: rgb(255, 251, 120);">nums</gistnote></code>.</li>
	<li>Add <code><gistnote class="gistnote-highlight" highlightid="fd4633e2-9c69-4037-8106-e6a39b8b4f1d" colornum="3" style="background-color: rgb(255, 251, 120);" id="fd4633e2-9c69-4037-8106-e6a39b8b4f1d">multipliers[i] * x</gistnote></code><gistnote class="gistnote-highlight" highlightid="fd4633e2-9c69-4037-8106-e6a39b8b4f1d" colornum="3" style="background-color: rgb(255, 251, 120);"> to your score.</gistnote></li>
	<li>Remov<gistnote class="gistnote-highlight" highlightid="81ec787f-4ae0-4724-a336-8a0dba074f50" colornum="3" style="background-color: rgb(255, 251, 120);" id="81ec787f-4ae0-4724-a336-8a0dba074f50">e </gistnote><code><gistnote class="gistnote-highlight" highlightid="81ec787f-4ae0-4724-a336-8a0dba074f50" colornum="3" style="background-color: rgb(255, 251, 120);">x</gistnote></code><gistnote class="gistnote-highlight" highlightid="81ec787f-4ae0-4724-a336-8a0dba074f50" colornum="3" style="background-color: rgb(255, 251, 120);"> from the array </gistnote><code><gistnote class="gistnote-highlight" highlightid="81ec787f-4ae0-4724-a336-8a0dba074f50" colornum="3" style="background-color: rgb(255, 251, 120);">nums</gistnote></code>.</li>
</ul>

<p>Return <em>the <strong>maximum</strong> score after performing </em><code>m</code> <em>operations.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3], multipliers = [3,2,1]
<strong>Output:</strong> 14
<strong>Explanation:</strong>&nbsp;An optimal solution is as follows:
- Choose from the end, [1,2,<strong><u>3</u></strong>], adding 3 * 3 = 9 to the score.
- Choose from the end, [1,<strong><u>2</u></strong>], adding 2 * 2 = 4 to the score.
- Choose from the end, [<strong><u>1</u></strong>], adding 1 * 1 = 1 to the score.
The total score is 9 + 4 + 1 = 14.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-5,-3,-3,-2,7,1], multipliers = [-10,-5,3,4,6]
<strong>Output:</strong> 102
<strong>Explanation: </strong>An optimal solution is as follows:
- Choose from the start, [<u><strong>-5</strong></u>,-3,-3,-2,7,1], adding -5 * -10 = 50 to the score.
- Choose from the start, [<strong><u>-3</u></strong>,-3,-2,7,1], adding -3 * -5 = 15 to the score.
- Choose from the start, [<strong><u>-3</u></strong>,-2,7,1], adding -3 * 3 = -9 to the score.
- Choose from the end, [-2,7,<strong><u>1</u></strong>], adding 1 * 4 = 4 to the score.
- Choose from the end, [-2,<strong><u>7</u></strong>], adding 7 * 6 = 42 to the score. 
The total score is 50 + 15 - 9 + 4 + 42 = 102.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>m == multipliers.length</code></li>
	<li><code><gistnote class="gistnote-highlight" highlightid="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f" colornum="3" style="background-color: rgb(255, 251, 120);" id="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f">1 &lt;= m &lt;= 10</gistnote><sup><gistnote class="gistnote-highlight" highlightid="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f" colornum="3" style="background-color: rgb(255, 251, 120);">3</gistnote></sup></code></li><gistnote class="gistnote-highlight" highlightid="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f" colornum="3" style="background-color: rgb(255, 251, 120);">
	</gistnote><li><code><gistnote class="gistnote-highlight" highlightid="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f" colornum="3" style="background-color: rgb(255, 251, 120);">m &lt;= n &lt;= 10</gistnote><sup><gistnote class="gistnote-highlight" highlightid="3a1c6c4c-75bf-4e86-aaa2-cf6d1bd8008f" colornum="3" style="background-color: rgb(255, 251, 120);">5</gistnote></sup></code><code> </code></li>
	<li><code>-1000 &lt;= nums[i], multipliers[i] &lt;= 1000</code></li>
</ul>
</div>