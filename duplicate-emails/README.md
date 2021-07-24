<h2>182. Duplicate Emails</h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Write a SQL query to <gistnote class="gistnote-highlight" highlightid="7927626a-ef87-4622-9428-9d067cd36303" colornum="3" style="background-color: rgb(255, 251, 120);" id="7927626a-ef87-4622-9428-9d067cd36303">find all duplicate emails in a table named </gistnote><code><gistnote class="gistnote-highlight" highlightid="7927626a-ef87-4622-9428-9d067cd36303" colornum="3" style="background-color: rgb(255, 251, 120);">Person</gistnote></code>.</p>

<pre style="position: relative;">+----+---------+
| Id | Email   |
+----+---------+
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |
+----+---------+
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p>For example, your query should return the following for the above table:</p>

<pre style="position: relative;">+---------+
| Email   |
+---------+
| a@b.com |
+---------+
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong>Note</strong>: All emails are in lowercase.</p>
</div>