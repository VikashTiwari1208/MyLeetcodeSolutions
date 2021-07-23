<h2>1187. Make Array Strictly Increasing</h2><h3>Hard</h3><hr><div><p>Given two integer arrays&nbsp;<code>arr1</code> and <code>arr2</code>, return the minimum number of operations (possibly zero) needed&nbsp;to make <code><gistnote class="gistnote-highlight" highlightid="7400242e-527b-4dc8-850a-0e4f10b88740" colornum="3" style="background-color: rgb(255, 251, 120);" id="7400242e-527b-4dc8-850a-0e4f10b88740">arr1</gistnote></code><gistnote class="gistnote-highlight" highlightid="7400242e-527b-4dc8-850a-0e4f10b88740" colornum="3" style="background-color: rgb(255, 251, 120);"> strictly increasing.</gistnote></p>

<p>In one operation, you can choose two indices&nbsp;<code>0 &lt;=&nbsp;i &lt; arr1.length</code>&nbsp;and&nbsp;<code>0 &lt;= j &lt; arr2.length</code>&nbsp;and do the assignment&nbsp;<code>arr1[i] = arr2[j]</code>.</p>

<p>If there is no way to make&nbsp;<code>arr1</code>&nbsp;strictly increasing,&nbsp;return&nbsp;<code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> arr1 = [1,5,3,6,7], arr2 = [1,3,2,4]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Replace <code>5</code> with <code>2</code>, then <code>arr1 = [1, 2, 3, 6, 7]</code>.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> arr1 = [1,5,3,6,7], arr2 = [4,3,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Replace <code>5</code> with <code>3</code> and then replace <code>3</code> with <code>4</code>. <code>arr1 = [1, 3, 4, 6, 7]</code>.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> arr1 = [1,5,3,6,7], arr2 = [1,6,3,3]
<strong>Output:</strong> -1
<strong>Explanation:</strong> You can't make <code>arr1</code> strictly increasing.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr1.length, arr2.length &lt;= 2000</code></li>
	<li><code>0 &lt;= arr1[i], arr2[i] &lt;= 10^9</code></li>
</ul>

<p>&nbsp;</p></div>