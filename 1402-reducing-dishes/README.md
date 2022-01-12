<h2><a href="https://leetcode.com/problems/reducing-dishes/">1402. Reducing Dishes</a></h2><h3>Hard</h3><hr><div><p>A chef has collected data on the <code>satisfaction</code> level of his <code>n</code> dishes. Chef can co<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">ok any dish in 1 unit of time</span>.</p>

<p><strong>Like-time coefficient</strong> of a dish is defined as the time taken to cook that dish including previous dishes m<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">ultiplied by its satisfaction level i.e. </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">time[i] * satisfaction[i]</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">.</span></p>

<p>Return <em>t<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">he maximum sum of </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">like-time coefficient</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> that the chef can obtain after dishes preparation</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">.</span></p>

<p>Dishes can <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">be prepared in </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">any </span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">order and the chef can discard some dishes to get this maximum value.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> satisfaction = [-1,-8,0,5,-9]
<strong>Output:</strong> 14
<strong>Explanation:</strong> After Removing the second and last dish, the maximum total <strong>like-time coefficient</strong> will be equal to (-1*1 + 0*2 + 5*3 = 14).
Each dish is prepared in one unit of time.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> satisfaction = [4,3,2]
<strong>Output:</strong> 20
<strong>Explanation:</strong> Dishes can be prepared in any order, (2*1 + 3*2 + 4*3 = 20)
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> satisfaction = [-1,-4,-5]
<strong>Output:</strong> 0
<strong>Explanation:</strong> People do not like the dishes. No dish is prepared.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == satisfaction.length</code></li>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">1 &lt;= n &lt;= 500</span></code></li>
	<li><code>-1000 &lt;= satisfaction[i] &lt;= 1000</code></li>
</ul>
</div>