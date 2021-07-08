<h2>309. Best Time to Buy and Sell Stock with Cooldown</h2><h3>Medium</h3><hr><div><p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>Find the maximum profit you can achieve. <gistnote class="gistnote-highlight" highlightid="38cb7926-780c-489f-9dd5-8095aa4ab3d9" colornum="3" style="background-color: rgb(255, 251, 120);" id="38cb7926-780c-489f-9dd5-8095aa4ab3d9">You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times)</gistnote> with the following restrictions:</p>

<ul>
	<li><gistnote class="gistnote-highlight" highlightid="5cda2e4c-c74e-49c6-a9f1-d7f999668d20" colornum="3" style="background-color: rgb(255, 251, 120);" id="5cda2e4c-c74e-49c6-a9f1-d7f999668d20">After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).</gistnote></li>
</ul>

<p><strong>Note:</strong> You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> prices = [1,2,3,0,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> transactions = [buy, sell, cooldown, buy, sell]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> prices = [1]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= prices.length &lt;= 5000</code></li>
	<li><code>0 &lt;= prices[i] &lt;= 1000</code></li>
</ul>
</div>