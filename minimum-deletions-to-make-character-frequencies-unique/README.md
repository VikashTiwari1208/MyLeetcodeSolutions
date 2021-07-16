<h2>1647. Minimum Deletions to Make Character Frequencies Unique</h2><h3>Medium</h3><hr><div><p>A string <code>s</code> is called <strong><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);" id="4174df40-009c-4ced-a808-c76324753faf">good</gistnote></strong><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);"> if there are no two different characters in </gistnote><code><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);">s</gistnote></code><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);"> that have the same </gistnote><strong><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);">frequency</gistnote></strong><gistnote class="gistnote-highlight" highlightid="4174df40-009c-4ced-a808-c76324753faf" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>Given a string <code>s</code>, ret<gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);" id="4f74adad-aa48-4572-ba2f-07fe4d344131">urn</gistnote><em><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);"> the </gistnote><strong><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);">minimum</gistnote></strong><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);"> number of characters you need to delete to make </gistnote></em><code><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);">s</gistnote></code><em><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote><strong><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);">good</gistnote></strong><gistnote class="gistnote-highlight" highlightid="4f74adad-aa48-4572-ba2f-07fe4d344131" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></em></p>

<p>The <strong>frequency</strong> of a character in a string is the number of times it appears in the string. For example, in the string <code>"aab"</code>, the <strong>frequency</strong> of <code>'a'</code> is <code>2</code>, while the <strong>frequency</strong> of <code>'b'</code> is <code>1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aab"
<strong>Output:</strong> 0
<strong>Explanation:</strong> <code>s</code> is already good.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aaabbbcc"
<strong>Output:</strong> 2
<strong>Explanation:</strong> You can delete two 'b's resulting in the good string "aaabcc".
Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "ceabaacb"
<strong>Output:</strong> 2
<strong>Explanation:</strong> You can delete both 'c's resulting in the good string "eabaab".
Note that we only care about characters that are still in the string at the end (i.e. frequency of 0 is ignored).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code>&nbsp;contains only lowercase English letters.</li>
</ul>
</div>