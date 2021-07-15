<h2>1326. Minimum Number of Taps to Open to Water a Garden</h2><h3>Hard</h3><hr><div><p>There is a one-dimensional garden on the x-axis. The garden starts at the point <code>0</code> and ends at the point <code>n</code>. (i.e The length of the garden is <code>n</code>).</p>

<p>There are&nbsp;<code><gistnote class="gistnote-highlight" highlightid="7e0fae29-7f50-406a-8244-e78306c06bdc" colornum="3" style="background-color: rgb(255, 251, 120);" id="7e0fae29-7f50-406a-8244-e78306c06bdc">n + 1</gistnote></code><gistnote class="gistnote-highlight" highlightid="7e0fae29-7f50-406a-8244-e78306c06bdc" colornum="3" style="background-color: rgb(255, 251, 120);"> taps located&nbsp;at points </gistnote><code><gistnote class="gistnote-highlight" highlightid="7e0fae29-7f50-406a-8244-e78306c06bdc" colornum="3" style="background-color: rgb(255, 251, 120);">[0, 1, ..., n]</gistnote></code><gistnote class="gistnote-highlight" highlightid="7e0fae29-7f50-406a-8244-e78306c06bdc" colornum="3" style="background-color: rgb(255, 251, 120);"> in the garden.</gistnote></p>

<p>Given an integer <code>n</code> and an integer array <code>ranges</code> of length <code>n + 1</code> where <code>ranges[i]</code> <gistnote class="gistnote-highlight" highlightid="5930ca8c-4161-4044-9660-7775c60ac96c" colornum="3" style="background-color: rgb(255, 251, 120);" id="5930ca8c-4161-4044-9660-7775c60ac96c">(0-indexed) means the </gistnote><code><gistnote class="gistnote-highlight" highlightid="5930ca8c-4161-4044-9660-7775c60ac96c" colornum="3" style="background-color: rgb(255, 251, 120);">i-th</gistnote></code><gistnote class="gistnote-highlight" highlightid="5930ca8c-4161-4044-9660-7775c60ac96c" colornum="3" style="background-color: rgb(255, 251, 120);"> tap can water the area </gistnote><code><gistnote class="gistnote-highlight" highlightid="5930ca8c-4161-4044-9660-7775c60ac96c" colornum="3" style="background-color: rgb(255, 251, 120);">[i - ranges[i], i + ranges[i]]</gistnote></code><gistnote class="gistnote-highlight" highlightid="5930ca8c-4161-4044-9660-7775c60ac96c" colornum="3" style="background-color: rgb(255, 251, 120);"> if it was open.</gistnote></p>

<p>Return <em>the <gistnote class="gistnote-highlight" highlightid="fa7af4c9-f08e-423b-a0f0-6e8f00b522f6" colornum="4" style="background-color: rgb(209, 255, 97);" id="fa7af4c9-f08e-423b-a0f0-6e8f00b522f6">minimum number of taps</gistnote></em><gistnote class="gistnote-highlight" highlightid="fa7af4c9-f08e-423b-a0f0-6e8f00b522f6" colornum="4" style="background-color: rgb(209, 255, 97);"> that should be open to water the whole garden,</gistnote> If the garden cannot be watered return <strong>-1</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/1685_example_1.png" style="width: 525px; height: 255px;">
<pre style="position: relative;"><strong>Input:</strong> n = 5, ranges = [3,4,1,1,0,0]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The tap at point 0 can cover the interval [-3,3]
The tap at point 1 can cover the interval [-3,5]
The tap at point 2 can cover the interval [1,3]
The tap at point 3 can cover the interval [2,4]
The tap at point 4 can cover the interval [4,4]
The tap at point 5 can cover the interval [5,5]
Opening Only the second tap will water the whole garden [0,5]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 3, ranges = [0,0,0,0]
<strong>Output:</strong> -1
<strong>Explanation:</strong> Even if you activate all the four taps you cannot water the whole garden.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 7, ranges = [1,2,1,0,2,1,0,1]
<strong>Output:</strong> 3
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 4:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 8, ranges = [4,0,0,0,0,0,0,0,4]
<strong>Output:</strong> 2
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 5:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 8, ranges = [4,0,0,0,4,0,0,0,4]
<strong>Output:</strong> 1
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10^4</code></li>
	<li><code>ranges.length == n + 1</code></li>
	<li><code>0 &lt;= ranges[i] &lt;= 100</code></li>
</ul>
</div>