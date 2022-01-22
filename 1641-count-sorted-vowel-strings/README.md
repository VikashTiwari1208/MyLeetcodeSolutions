<h2><a href="https://leetcode.com/problems/count-sorted-vowel-strings/">1641. Count Sorted Vowel Strings</a></h2><h3>Medium</h3><hr><div><p>Given an integer <code>n</code>, return <em>the n<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">umber of strings of length </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">n</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> that consist only of vowels (</span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">a</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">e</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">i</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">o</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">, </span></em><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">u</span></code><em><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">) and are </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">lexicographically sorted</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">.</span></em></p>

<p>A string <code>s</code> is <strong>lexicographically sorted</strong> if for all valid <code>i</code>, <code>s[i]</code> is the same as or comes before <code>s[i+1]</code> in the alphabet.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 1
<strong>Output:</strong> 5
<strong>Explanation:</strong> The 5 sorted strings that consist of vowels only are <code>["a","e","i","o","u"].</code>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 2:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 2
<strong>Output:</strong> 15
<strong>Explanation:</strong> The 15 sorted strings that consist of vowels only are
["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].
Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Example 3:</strong></p>

<pre style="position: relative;"><strong>Input:</strong> n = 33
<strong>Output:</strong> 66045
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 50</code>&nbsp;</li>
</ul>
</div>