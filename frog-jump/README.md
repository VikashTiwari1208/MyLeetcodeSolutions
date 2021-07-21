<h2>403. Frog Jump</h2><h3>Hard</h3><hr><div><p>A frog is crossing a river. The <gistnote class="gistnote-highlight" highlightid="98059089-ab08-4775-af74-da4f173c8e28" colornum="3" style="background-color: rgb(255, 251, 120);" id="98059089-ab08-4775-af74-da4f173c8e28">river is divided into some number of units</gistnote>, and at each unit, there may or may not exist a stone. The frog can jump on a stone, but it must not jump into the water.</p>

<p>Given a list of <code>stones</code>' positions (in units) in sorted <strong>ascending order</strong>, determine if the frog can cross the river by landing on the last stone. Initially, the frog is on <gistnote class="gistnote-highlight" highlightid="58dc6311-efc1-4b04-bf11-f42dbe627c67" colornum="3" style="background-color: rgb(255, 251, 120);" id="58dc6311-efc1-4b04-bf11-f42dbe627c67">the first stone and assumes the first jump must be </gistnote><code><gistnote class="gistnote-highlight" highlightid="58dc6311-efc1-4b04-bf11-f42dbe627c67" colornum="3" style="background-color: rgb(255, 251, 120);">1</gistnote></code><gistnote class="gistnote-highlight" highlightid="58dc6311-efc1-4b04-bf11-f42dbe627c67" colornum="3" style="background-color: rgb(255, 251, 120);"> unit.</gistnote></p>

<p>If the <gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);" id="bbc91119-ca93-4876-bb10-2137edf08b5d">frog's last jump was </gistnote><code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">k</gistnote></code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);"> units, its next jump must be either </gistnote><code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">k - 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">, </gistnote><code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">k</gistnote></code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">, or </gistnote><code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);">k + 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="bbc91119-ca93-4876-bb10-2137edf08b5d" colornum="3" style="background-color: rgb(255, 251, 120);"> units.</gistnote> The frog can only jump in the forward direction.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> stones = [0,1,3,5,6,8,12,17]
<strong>Output:</strong> true
<strong>Explanation:</strong> The frog can jump to the last stone by jumping 1 unit to the 2nd stone, then 2 units to the 3rd stone, then 2 units to the 4th stone, then 3 units to the 6th stone, 4 units to the 7th stone, and 5 units to the 8th stone.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> stones = [0,1,2,3,4,8,9,11]
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no way to jump to the last stone as the gap between the 5th and 6th stone is too large.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= stones.length &lt;= 2000</code></li>
	<li><code>0 &lt;= stones[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>stones[0] == 0</code></li>
	<li><code>stones</code>&nbsp;is sorted in a strictly increasing order.</li>
</ul>
</div>