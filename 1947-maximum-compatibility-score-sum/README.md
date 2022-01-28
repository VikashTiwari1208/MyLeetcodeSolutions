<h2><a href="https://leetcode.com/problems/maximum-compatibility-score-sum/">1947. Maximum Compatibility Score Sum</a></h2><h3>Medium</h3><hr><div><p>There is a survey that consists of <code>n</code> questions where each<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> question's answer is either </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">0</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> (no) or </span><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0">1</span></code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="0"> (yes).</span></p>

<p>The survey was given to <code>m</code> students numbered from <code>0</code> to <code>m - 1</code> and <code>m</code> mentors numbered from <code>0</code> to <code>m - 1</code>. The answers of the students are represented by a 2D integer array <code>students</code> where <code>students[i]</code> is an integer array that contains the answers of the <code>i<sup>th</sup></code> student (<strong>0-indexed</strong>). The answers of the mentors are represented by a 2D integer array <code>mentors</code> where <code>mentors[j]</code> is an integer array that contains the answers of the <code>j<sup>th</sup></code> mentor (<strong>0-indexed</strong>).</p>

<p>Each student w<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">ill be assigned to </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">one</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> mentor, and each mentor will have </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1">one</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="1"> student assigned to them</span>. T<span class="highlighter--highlighted" style="background-color: cyan;" data-highlight-id="2">he </span><strong><span class="highlighter--highlighted" style="background-color: cyan;" data-highlight-id="2">compatibility score</span></strong><span class="highlighter--highlighted" style="background-color: cyan;" data-highlight-id="2"> of a student-mentor pair is the number of answers that are the same for both the student and the mentor.</span></p>

<ul>
	<li>For example, if the student's answers were <code>[1, <u>0</u>, <u>1</u>]</code> and the mentor's answers were <code>[0, <u>0</u>, <u>1</u>]</code>, then their compatibility score is 2 because only the second and the third answers are the same.</li>
</ul>

<p>You are tasked with finding the opti<span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">mal student-mentor pairings to </span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">maximize</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> the</span><strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3"> sum of the compatibility scores</span></strong><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="3">.</span></p>

<p>Given <code>students</code> and <code>mentors</code>, return <em>the <strong>maximum compatibility score sum</strong> that can be achieved.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> students = [[1,1,0],[1,0,1],[0,0,1]], mentors = [[1,0,0],[0,0,1],[1,1,0]]
<strong>Output:</strong> 8
<strong>Explanation:</strong>&nbsp;We assign students to mentors in the following way:
- student 0 to mentor 2 with a compatibility score of 3.
- student 1 to mentor 0 with a compatibility score of 2.
- student 2 to mentor 1 with a compatibility score of 3.
The compatibility score sum is 3 + 2 + 3 = 8.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> students = [[0,0],[0,0],[0,0]], mentors = [[1,1],[1,1],[1,1]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The compatibility score of any student-mentor pair is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == students.length == mentors.length</code></li>
	<li><code>n == students[i].length == mentors[j].length</code></li>
	<li><code><span class="highlighter--highlighted" style="background-color: yellow;" data-highlight-id="4">1 &lt;= m, n &lt;= 8</span></code></li>
	<li><code>students[i][k]</code> is either <code>0</code> or <code>1</code>.</li>
	<li><code>mentors[j][k]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div>