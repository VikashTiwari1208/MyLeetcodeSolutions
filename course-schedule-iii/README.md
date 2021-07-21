<h2>630. Course Schedule III</h2><h3>Hard</h3><hr><div><p>There are <code>n</code> different online courses numbered from <code>1</code> to <code>n</code>. You are given an array <code>courses</code> where <code>courses[i] = [duration<sub>i</sub>, lastDay<sub>i</sub>]</code> indicate that the <code>i<sup>th</sup></code> course s<gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);" id="267d8570-5b55-4f43-9fd1-56611e1755de">hould be <gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);" id="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f">taken </gistnote></gistnote><b><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">continuously</gistnote></gistnote></b><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);"> for </gistnote></gistnote><code><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">duration</gistnote></gistnote><sub><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">i</gistnote></gistnote></sub></code><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);"> days and must be finished before or on </gistnote></gistnote><code><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">lastDay</gistnote></gistnote><sub><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">i</gistnote></gistnote></sub></code><gistnote class="gistnote-highlight" highlightid="267d8570-5b55-4f43-9fd1-56611e1755de" colornum="3" style="background-color: rgb(255, 251, 120);"><gistnote class="gistnote-highlight" highlightid="e761f38a-aa3d-4efa-9d0d-daffb9e9ab7f" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></gistnote></p>

<p>You will start on the <code>1<sup>st</sup></code> day and you cannot take two or more courses simultaneously.</p>

<p>Return <em>the m<gistnote class="gistnote-highlight" highlightid="b518564c-a020-42ee-b701-e0e184e6fabe" colornum="3" style="background-color: rgb(255, 251, 120);" id="b518564c-a020-42ee-b701-e0e184e6fabe">aximum number of courses that you can take</gistnote></em><gistnote class="gistnote-highlight" highlightid="b518564c-a020-42ee-b701-e0e184e6fabe" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> courses = [[100,200],[200,1300],[1000,1250],[2000,3200]]
<strong>Output:</strong> 3
Explanation: 
There are totally 4 courses, but you can take 3 courses at most:
First, take the 1<sup>st</sup> course, it costs 100 days so you will finish it on the 100<sup>th</sup> day, and ready to take the next course on the 101<sup>st</sup> day.
Second, take the 3<sup>rd</sup> course, it costs 1000 days so you will finish it on the 1100<sup>th</sup> day, and ready to take the next course on the 1101<sup>st</sup> day. 
Third, take the 2<sup>nd</sup> course, it costs 200 days so you will finish it on the 1300<sup>th</sup> day. 
The 4<sup>th</sup> course cannot be taken now, since you will finish it on the 3300<sup>th</sup> day, which exceeds the closed date.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> courses = [[1,2]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> courses = [[3,2],[4,3]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= courses.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= duration<sub>i</sub>, lastDay<sub>i</sub> &lt;= 10<sup>4</sup></code></li>
</ul>
</div>