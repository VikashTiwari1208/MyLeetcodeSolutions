<h2><a href="https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/">1884. Egg Drop With 2 Eggs and N Floors</a></h2><h3>Medium</h3><hr><div><p>You are given <strong>two identical</strong> eggs and you have access to a building with <code>n</code> floors labeled from <code>1</code> to <code>n</code>.</p>

<p>You know that there exists a floor <code>f</code> where <code>0 &lt;= f &lt;= n</code> such that any egg dropped at a floor <strong>higher</strong> than <code>f</code> will <strong>break</strong>, and any egg dropped <strong>at or below</strong> floor <code>f</code> will <strong>not break</strong>.</p>

<p>In each move, you may take an <strong>unbroken</strong> egg and drop it from any floor <code>x</code> (where <code>1 &lt;= x &lt;= n</code>). <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">If the egg breaks, you can no longer use it.</span> However, <span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">if the egg does not break, you may </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">reuse</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> it in future moves.</span></p>

<p>Return <em>the <strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">minimum number of moves</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> that you need to determine </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">with certainty</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> what the value of </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">f</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> is.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> We can drop the first egg from floor 1 and the second egg from floor 2.
If the first egg breaks, we know that f = 0.
If the second egg breaks but the first egg didn't, we know that f = 1.
Otherwise, if both eggs survive, we know that f = 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 100
<strong>Output:</strong> 14
<strong>Explanation:</strong> One optimal strategy is:
- Drop the 1st egg at floor 9. If it breaks, we know f is between 0 and 8. Drop the 2nd egg starting from floor 1 and going up one at a time to find f within 8 more drops. Total drops is 1 + 8 = 9.
- If the 1st egg does not break, drop the 1st egg again at floor 22. If it breaks, we know f is between 9 and 21. Drop the 2nd egg starting from floor 10 and going up one at a time to find f within 12 more drops. Total drops is 2 + 12 = 14.
- If the 1st egg does not break again, follow a similar process dropping the 1st egg from floors 34, 45, 55, 64, 72, 79, 85, 90, 94, 97, 99, and 100.
Regardless of the outcome, it takes at most 14 drops to determine f.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>