<h2><a href="https://leetcode.com/problems/word-ladder/">127. Word Ladder</a></h2><h3>Hard</h3><hr><div><p>A <strong>transformation sequence</strong> from word <code>beginWord</code> to word <code>endWord</code> using a dictionary <code>wordList</code> is a sequence of words <code>beginWord -&gt; s<sub>1</sub> -&gt; s<sub>2</sub> -&gt; ... -&gt; s<sub>k</sub></code> such that:</p>

<ul>
	<li>Every adjacent pair of words differs by a single letter.</li>
	<li><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">Every </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">s</span><sub><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">i</span></sub></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> for </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">1 &lt;= i &lt;= k</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> is in </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">wordList</span></code>. Note that <code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">beginWord</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2"> does not need to be in </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">wordList</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="2">.</span></li>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">s</span><sub><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">k</span></sub><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> == endWord</span></code></li>
</ul>

<p>Given two words, <code>beginWord</code> and <code>endWord</code>, and a dictionary <code>wordList</code>, return <em>the <strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">number of words</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> in the </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">shortest transformation sequence</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> from</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">beginWord</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> </span><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">to</span></em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">endWord</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, or </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">0</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> if no such sequence exist</span>s.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
<strong>Output:</strong> 5
<strong>Explanation:</strong> One shortest transformation sequence is "hit" -&gt; "hot" -&gt; "dot" -&gt; "dog" -&gt; cog", which is 5 words long.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= beginWord.length &lt;= 10</code></li>
	<li><code>endWord.length == beginWord.length</code></li>
	<li><code>1 &lt;= wordList.length &lt;= 5000</code></li>
	<li><code>wordList[i].length == beginWord.length</code></li>
	<li><code>beginWord</code>, <code>endWord</code>, and <code>wordList[i]</code> consist of lowercase English letters.</li>
	<li><code>beginWord != endWord</code></li>
	<li>All the words in <code>wordList</code> are <strong>unique</strong>.</li>
</ul>
</div>