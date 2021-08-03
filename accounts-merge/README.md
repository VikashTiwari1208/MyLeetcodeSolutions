<h2>721. Accounts Merge</h2><h3>Medium</h3><hr><div><p>Given a list of <code><gistnote class="gistnote-highlight" highlightid="08d859e8-daca-4076-86b6-5bca365f5203" colornum="3" style="background-color: rgb(255, 251, 120);" id="08d859e8-daca-4076-86b6-5bca365f5203">accounts</gistnote></code><gistnote class="gistnote-highlight" highlightid="08d859e8-daca-4076-86b6-5bca365f5203" colornum="3" style="background-color: rgb(255, 251, 120);"> where each element </gistnote><code><gistnote class="gistnote-highlight" highlightid="08d859e8-daca-4076-86b6-5bca365f5203" colornum="3" style="background-color: rgb(255, 251, 120);">accounts[i]</gistnote></code><gistnote class="gistnote-highlight" highlightid="08d859e8-daca-4076-86b6-5bca365f5203" colornum="3" style="background-color: rgb(255, 251, 120);"> is a list of strings</gistnote>, where the first element <code>accounts[i][0]</code> is a name, and the rest of the elements are <strong>emails</strong> representing emails of the account.</p>

<p>Now, we would like to merge these accounts. <gistnote class="gistnote-highlight" highlightid="7fb2df1c-ebb4-48c3-ae5c-d5d7b71d2e25" colornum="3" style="background-color: rgb(255, 251, 120);" id="7fb2df1c-ebb4-48c3-ae5c-d5d7b71d2e25">Two accounts definitely belong to the same person if there is some common email to both accounts</gistnote>. Note that even if two accounts <gistnote class="gistnote-highlight" highlightid="10a5bd89-36d9-4d3c-8a25-40641dbfa4ea" colornum="3" style="background-color: rgb(255, 251, 120);" id="10a5bd89-36d9-4d3c-8a25-40641dbfa4ea">have the same name, they may belong to different people as people could have the same name</gistnote>. A person ca<gistnote class="gistnote-highlight" highlightid="5103b867-6a77-41ab-a53c-23e2a9596eb9" colornum="3" style="background-color: rgb(255, 251, 120);" id="5103b867-6a77-41ab-a53c-23e2a9596eb9">n have any number of accounts initially, but all of their accounts definitely have the same name.</gistnote></p>

<p>After merging the <gistnote class="gistnote-highlight" highlightid="cc18e511-6e78-45cf-b061-1702f41df7c5" colornum="3" style="background-color: rgb(255, 251, 120);" id="cc18e511-6e78-45cf-b061-1702f41df7c5">accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails </gistnote><strong><gistnote class="gistnote-highlight" highlightid="cc18e511-6e78-45cf-b061-1702f41df7c5" colornum="3" style="background-color: rgb(255, 251, 120);">in sorted order</gistnote></strong><gistnote class="gistnote-highlight" highlightid="cc18e511-6e78-45cf-b061-1702f41df7c5" colornum="3" style="background-color: rgb(255, 251, 120);">. The accounts themselves can be returned in </gistnote><strong><gistnote class="gistnote-highlight" highlightid="cc18e511-6e78-45cf-b061-1702f41df7c5" colornum="3" style="background-color: rgb(255, 251, 120);">any order</gistnote></strong><gistnote class="gistnote-highlight" highlightid="cc18e511-6e78-45cf-b061-1702f41df7c5" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> accounts = [["John","johnsmith@mail.com","john_newyork@mail.com"],["John","johnsmith@mail.com","john00@mail.com"],["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]
<strong>Output:</strong> [["John","john00@mail.com","john_newyork@mail.com","johnsmith@mail.com"],["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]
<strong>Explanation:</strong>
The first and third John's are the same person as they have the common email "johnsmith@mail.com".
The second John and Mary are different people as none of their email addresses are used by other accounts.
We could return these lists in any order, for example the answer [['Mary', 'mary@mail.com'], ['John', 'johnnybravo@mail.com'], 
['John', 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com']] would still be accepted.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> accounts = [["Gabe","Gabe0@m.co","Gabe3@m.co","Gabe1@m.co"],["Kevin","Kevin3@m.co","Kevin5@m.co","Kevin0@m.co"],["Ethan","Ethan5@m.co","Ethan4@m.co","Ethan0@m.co"],["Hanzo","Hanzo3@m.co","Hanzo1@m.co","Hanzo0@m.co"],["Fern","Fern5@m.co","Fern1@m.co","Fern0@m.co"]]
<strong>Output:</strong> [["Ethan","Ethan0@m.co","Ethan4@m.co","Ethan5@m.co"],["Gabe","Gabe0@m.co","Gabe1@m.co","Gabe3@m.co"],["Hanzo","Hanzo0@m.co","Hanzo1@m.co","Hanzo3@m.co"],["Kevin","Kevin0@m.co","Kevin3@m.co","Kevin5@m.co"],["Fern","Fern0@m.co","Fern1@m.co","Fern5@m.co"]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= accounts.length &lt;= 1000</code></li>
	<li><code>2 &lt;= accounts[i].length &lt;= 10</code></li>
	<li><code>1 &lt;= accounts[i][j] &lt;= 30</code></li>
	<li><code>accounts[i][0]</code> consists of English letters.</li>
	<li><code>accounts[i][j] (for j &gt; 0)</code> is a valid email.</li>
</ul>
</div>