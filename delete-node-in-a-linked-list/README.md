<h2>237. Delete Node in a Linked List</h2><h3>Easy</h3><hr><div><p>Write a function to <strong>delete a node</strong> in a singly-linked list. You will <strong>not</strong> be given access to the <code>head</code> of the list, instead you will be given access to <strong>the node to be deleted</strong> directly.</p>

<p>It is <strong>guaranteed</strong> that the node to <gistnote class="gistnote-highlight" highlightid="6fc9bcef-c8f8-40f4-8a9c-e902db20d2b9" colornum="3" style="background-color: rgb(255, 251, 120);" id="6fc9bcef-c8f8-40f4-8a9c-e902db20d2b9">be deleted is </gistnote><strong><gistnote class="gistnote-highlight" highlightid="6fc9bcef-c8f8-40f4-8a9c-e902db20d2b9" colornum="3" style="background-color: rgb(255, 251, 120);">not a tail node</gistnote></strong><gistnote class="gistnote-highlight" highlightid="6fc9bcef-c8f8-40f4-8a9c-e902db20d2b9" colornum="3" style="background-color: rgb(255, 251, 120);"> in the list</gistnote>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node1.jpg" style="width: 450px; height: 322px;">
<pre style="position: relative;"><strong>Input:</strong> head = [4,5,1,9], node = 5
<strong>Output:</strong> [4,1,9]
<strong>Explanation: </strong>You are given the second node with value 5, the linked list should become 4 -&gt; 1 -&gt; 9 after calling your function.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node2.jpg" style="width: 450px; height: 354px;">
<pre style="position: relative;"><strong>Input:</strong> head = [4,5,1,9], node = 1
<strong>Output:</strong> [4,5,9]
<strong>Explanation: </strong>You are given the third node with value 1, the linked list should become 4 -&gt; 5 -&gt; 9 after calling your function.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> head = [1,2,3,4], node = 3
<strong>Output:</strong> [1,2,4]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 4:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> head = [0,1], node = 0
<strong>Output:</strong> [1]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 5:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> head = [-3,5,-99], node = -3
<strong>Output:</strong> [5,-99]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of the nodes in the given list is in the range <code>[2, 1000]</code>.</li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
	<li>The value of each <gistnote class="gistnote-highlight" highlightid="6af04727-a142-4f1c-976f-f9ca38a9c36f" colornum="3" style="background-color: rgb(255, 251, 120);" id="6af04727-a142-4f1c-976f-f9ca38a9c36f">node in the list is </gistnote><strong><gistnote class="gistnote-highlight" highlightid="6af04727-a142-4f1c-976f-f9ca38a9c36f" colornum="3" style="background-color: rgb(255, 251, 120);">unique</gistnote></strong>.</li>
	<li>The <code>node</code> to be deleted is <strong>in the list</strong> and is <strong>not a tail</strong> node</li>
</ul>
</div>