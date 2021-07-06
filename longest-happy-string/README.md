<h2>1405. Longest Happy String</h2><h3>Medium</h3><hr><div><p>A string is called <em>happy</em> if it does&nbsp;not have any of the strings <code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);" id="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f">'aaa'</gistnote></code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);">, </gistnote><code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);">'bbb'</gistnote></code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);">&nbsp;or </gistnote><code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);">'ccc'</gistnote></code><gistnote class="gistnote-highlight" highlightid="fb6bcda1-eda4-4a4e-bfe2-d8f2eadeeb7f" colornum="3" style="background-color: rgb(255, 251, 120);">&nbsp;as a substring.</gistnote></p>

<p>Given three integers <code>a</code>, <code>b</code> and <code>c</code>, return <strong>any</strong> string <code>s</code>,&nbsp;which satisfies following conditions:</p>

<ul>
	<li><code><gistnote class="gistnote-highlight" highlightid="1ca1c90f-7ed9-4e2b-95a9-2702649f30c5" colornum="3" style="background-color: rgb(255, 251, 120);" id="1ca1c90f-7ed9-4e2b-95a9-2702649f30c5">s</gistnote></code><gistnote class="gistnote-highlight" highlightid="1ca1c90f-7ed9-4e2b-95a9-2702649f30c5" colornum="3" style="background-color: rgb(255, 251, 120);"> is </gistnote><em><gistnote class="gistnote-highlight" highlightid="1ca1c90f-7ed9-4e2b-95a9-2702649f30c5" colornum="3" style="background-color: rgb(255, 251, 120);">happy&nbsp;</gistnote></em><gistnote class="gistnote-highlight" highlightid="1ca1c90f-7ed9-4e2b-95a9-2702649f30c5" colornum="3" style="background-color: rgb(255, 251, 120);">and longest possible.</gistnote></li>
	<li><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);" id="061dbcd7-0dde-4e93-91bf-6b71c9370736">s</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> contains </gistnote><strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">at most</gistnote></strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">a</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">&nbsp;occurrences of the letter&nbsp;</gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">'a'</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">, </gistnote><strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">at most</gistnote></strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">b</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">&nbsp;occurrences of the letter </gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">'b'</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> and </gistnote><strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">at most</gistnote></strong><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> </gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">c</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);"> occurrences of the letter </gistnote><code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">'c'</gistnote></code><gistnote class="gistnote-highlight" highlightid="061dbcd7-0dde-4e93-91bf-6b71c9370736" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></li>
	<li><code>s&nbsp;</code>will only contain <code>'a'</code>, <code>'b'</code> and <code>'c'</code>&nbsp;letters.</li>
</ul>

<p>If there is no such string <code>s</code>&nbsp;return the empty string <code>""</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> a = 1, b = 1, c = 7
<strong>Output:</strong> "ccaccbcc"
<strong>Explanation:</strong> "ccbccacc" would also be a correct answer.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> a = 2, b = 2, c = 1
<strong>Output:</strong> "aabbc"
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> a = 7, b = 1, c = 0
<strong>Output:</strong> "aabaa"
<strong>Explanation:</strong> It's the only correct answer in this case.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= a, b, c &lt;= 100</code></li>
	<li><code>a + b + c &gt; 0</code></li>
</ul>
</div>