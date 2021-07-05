<h2>1690. Stone Game VII</h2><h3>Medium</h3><hr><div><p>Alice and Bob take turns playing a game, with <strong>Alice starting first</strong>.</p>

<p>There are <code>n</code> stones arranged in a row. On each player's turn, they ca<gistnote class="gistnote-highlight" highlightid="7759a662-e792-4985-a717-ad35ede53cbd" colornum="3" style="background-color: rgb(255, 251, 120);" id="7759a662-e792-4985-a717-ad35ede53cbd">n </gistnote><strong><gistnote class="gistnote-highlight" highlightid="7759a662-e792-4985-a717-ad35ede53cbd" colornum="3" style="background-color: rgb(255, 251, 120);">remove</gistnote></strong><gistnote class="gistnote-highlight" highlightid="7759a662-e792-4985-a717-ad35ede53cbd" colornum="3" style="background-color: rgb(255, 251, 120);"> either the leftmost stone or the rightmost stone from the row and receive points equal to the </gistnote><strong><gistnote class="gistnote-highlight" highlightid="7759a662-e792-4985-a717-ad35ede53cbd" colornum="3" style="background-color: rgb(255, 251, 120);">sum</gistnote></strong><gistnote class="gistnote-highlight" highlightid="7759a662-e792-4985-a717-ad35ede53cbd" colornum="3" style="background-color: rgb(255, 251, 120);"> of the remaining stones' values in the row.</gistnote> Th<gistnote class="gistnote-highlight" highlightid="4181df26-996f-443c-a6eb-b48af1df8569" colornum="1" style="background-color: rgb(255, 202, 215);" id="4181df26-996f-443c-a6eb-b48af1df8569">e winner is the one with the higher score when there are no stones left to remove.</gistnote></p>

<p>Bob found that he will always lose this game (poor Bob, he always loses), so he decided to <strong>minimize the score's difference</strong>. Alice's goal is to <strong>maximize the difference</strong> in the score.</p>

<p>Given an array of integers <code>stones</code> where <code>stones[i]</code> represents the value of the <code>i<sup>th</sup></code> stone <strong>from the left</strong>, return <em>the <strong><gistnote class="gistnote-highlight" highlightid="537d9f3a-92b2-470e-9440-6bc08818d401" colornum="3" style="background-color: rgb(255, 251, 120);" id="537d9f3a-92b2-470e-9440-6bc08818d401">difference</gistnote></strong><gistnote class="gistnote-highlight" highlightid="537d9f3a-92b2-470e-9440-6bc08818d401" colornum="3" style="background-color: rgb(255, 251, 120);"> in Alice and Bob's score if they both play </gistnote><strong><gistnote class="gistnote-highlight" highlightid="537d9f3a-92b2-470e-9440-6bc08818d401" colornum="3" style="background-color: rgb(255, 251, 120);">optimally</gistnote></strong><gistnote class="gistnote-highlight" highlightid="537d9f3a-92b2-470e-9440-6bc08818d401" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> stones = [5,3,1,4,2]
<strong>Output:</strong> 6
<strong>Explanation:</strong> 
- Alice removes 2 and gets 5 + 3 + 1 + 4 = 13 points. Alice = 13, Bob = 0, stones = [5,3,1,4].
- Bob removes 5 and gets 3 + 1 + 4 = 8 points. Alice = 13, Bob = 8, stones = [3,1,4].
- Alice removes 3 and gets 1 + 4 = 5 points. Alice = 18, Bob = 8, stones = [1,4].
- Bob removes 1 and gets 4 points. Alice = 18, Bob = 12, stones = [4].
- Alice removes 4 and gets 0 points. Alice = 18, Bob = 12, stones = [].
The score difference is 18 - 12 = 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> stones = [7,90,5,1,100,10,10,2]
<strong>Output:</strong> 122</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == stones.length</code></li>
	<li><code>2 &lt;= n &lt;= 1000</code></li>
	<li><code>1 &lt;= stones[i] &lt;= 1000</code></li>
</ul>
</div>