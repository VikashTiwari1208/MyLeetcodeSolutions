<h2>1217. Minimum Cost to Move Chips to The Same Position</h2><h3>Easy</h3><hr><div><p>We have <code>n</code> chips, where the position of the <code>i<sup>th</sup></code> chip is <code>position[i]</code>.</p>

<p>We need to <gistnote class="gistnote-highlight" highlightid="8a08fc31-2065-4f9a-b27b-873cf2e797c6" colornum="3" style="background-color: rgb(255, 251, 120);" id="8a08fc31-2065-4f9a-b27b-873cf2e797c6">move all the chips to </gistnote><strong><gistnote class="gistnote-highlight" highlightid="8a08fc31-2065-4f9a-b27b-873cf2e797c6" colornum="3" style="background-color: rgb(255, 251, 120);">the same position</gistnote></strong>. In one step, we can change the position of the <code>i<sup>th</sup></code> chip from <code>position[i]</code> to:</p>

<ul>
	<li><code><gistnote class="gistnote-highlight" highlightid="19d61a02-af81-4827-994c-c47e438b118f" colornum="3" style="background-color: rgb(255, 251, 120);" id="19d61a02-af81-4827-994c-c47e438b118f">position[i] + 2</gistnote></code><gistnote class="gistnote-highlight" highlightid="19d61a02-af81-4827-994c-c47e438b118f" colornum="3" style="background-color: rgb(255, 251, 120);"> or </gistnote><code><gistnote class="gistnote-highlight" highlightid="19d61a02-af81-4827-994c-c47e438b118f" colornum="3" style="background-color: rgb(255, 251, 120);">position[i] - 2</gistnote></code><gistnote class="gistnote-highlight" highlightid="19d61a02-af81-4827-994c-c47e438b118f" colornum="3" style="background-color: rgb(255, 251, 120);"> with </gistnote><code><gistnote class="gistnote-highlight" highlightid="19d61a02-af81-4827-994c-c47e438b118f" colornum="3" style="background-color: rgb(255, 251, 120);">cost = 0</gistnote></code>.</li>
	<li><code><gistnote class="gistnote-highlight" highlightid="888faf1c-ba8f-46cd-b958-df9339f4909e" colornum="3" style="background-color: rgb(255, 251, 120);" id="888faf1c-ba8f-46cd-b958-df9339f4909e">position[i] + 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="888faf1c-ba8f-46cd-b958-df9339f4909e" colornum="3" style="background-color: rgb(255, 251, 120);"> or </gistnote><code><gistnote class="gistnote-highlight" highlightid="888faf1c-ba8f-46cd-b958-df9339f4909e" colornum="3" style="background-color: rgb(255, 251, 120);">position[i] - 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="888faf1c-ba8f-46cd-b958-df9339f4909e" colornum="3" style="background-color: rgb(255, 251, 120);"> with </gistnote><code><gistnote class="gistnote-highlight" highlightid="888faf1c-ba8f-46cd-b958-df9339f4909e" colornum="3" style="background-color: rgb(255, 251, 120);">cost = 1</gistnote></code>.</li>
</ul>

<p>Return <em>the minimum cost</em> needed to move all the chips to the same position.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/15/chips_e1.jpg" style="width: 750px; height: 217px;">
<pre style="position: relative;"><strong>Input:</strong> position = [1,2,3]
<strong>Output:</strong> 1
<strong>Explanation:</strong> First step: Move the chip at position 3 to position 1 with cost = 0.
Second step: Move the chip at position 2 to position 1 with cost = 1.
Total cost is 1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/15/chip_e2.jpg" style="width: 750px; height: 306px;">
<pre style="position: relative;"><strong>Input:</strong> position = [2,2,2,3,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> We can move the two chips at position  3 to position 2. Each move has cost = 1. The total cost = 2.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> position = [1,1000000000]
<strong>Output:</strong> 1
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= position.length &lt;= 100</code></li>
	<li><code>1 &lt;= position[i] &lt;= 10^9</code></li>
</ul>
</div>