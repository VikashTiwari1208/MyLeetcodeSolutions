<h2>1921. Eliminate Maximum Number of Monsters</h2><h3>Medium</h3><hr><div><p>You are playing a video game where you are defending your city from a group of <code>n</code> monsters. You are given a <strong><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);" id="ddc518ac-8e4f-4137-b11c-865cf7ac77c5">0-indexed</gistnote></strong><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);"> integer array </gistnote><code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">dist</gistnote></code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);"> of size </gistnote><code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">, where </gistnote><code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">dist[i]</gistnote></code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);"> is the </gistnote><strong><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">initial distance</gistnote></strong><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);"> in meters of the </gistnote><code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">i</gistnote><sup><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);">th</gistnote></sup></code><gistnote class="gistnote-highlight" highlightid="ddc518ac-8e4f-4137-b11c-865cf7ac77c5" colornum="3" style="background-color: rgb(255, 251, 120);"> monster from the city.</gistnote></p>

<p>The monsters walk toward the city at a <strong>constant</strong> speed. <gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);" id="463139f9-7c82-4b54-91a5-7365c5f9ad6b">The speed of each monster is given to you in an integer array </gistnote><code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">speed</gistnote></code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);"> of size </gistnote><code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">, where </gistnote><code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">speed[i]</gistnote></code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);"> is the speed of the </gistnote><code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">i</gistnote><sup><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);">th</gistnote></sup></code><gistnote class="gistnote-highlight" highlightid="463139f9-7c82-4b54-91a5-7365c5f9ad6b" colornum="3" style="background-color: rgb(255, 251, 120);"> monster in meters per minute.</gistnote></p>

<p>The monsters start moving at <strong>minute 0</strong>. <gistnote class="gistnote-highlight" highlightid="77481df6-6332-4eca-b10f-ab599aba22e0" colornum="3" style="background-color: rgb(255, 251, 120);" id="77481df6-6332-4eca-b10f-ab599aba22e0">You have a weapon that you can </gistnote><strong><gistnote class="gistnote-highlight" highlightid="77481df6-6332-4eca-b10f-ab599aba22e0" colornum="3" style="background-color: rgb(255, 251, 120);">choose</gistnote></strong><gistnote class="gistnote-highlight" highlightid="77481df6-6332-4eca-b10f-ab599aba22e0" colornum="3" style="background-color: rgb(255, 251, 120);"> to use at the start of every minute, including minute 0</gistnote>. You cannot use the weapon in the middle of a minute. The weapon can eliminate any monster that is still alive. You lose when any monster reaches your city. If a monster reaches the city <strong>exactly</strong> at the start of a minute, it counts as a <strong>loss</strong>, and the game ends before you can use your weapon in that minute.</p>

<p>Return <em>the <strong><gistnote class="gistnote-highlight" highlightid="a373ad7e-f62c-4165-a018-cd85a75e722f" colornum="3" style="background-color: rgb(255, 251, 120);" id="a373ad7e-f62c-4165-a018-cd85a75e722f">maximum</gistnote></strong><gistnote class="gistnote-highlight" highlightid="a373ad7e-f62c-4165-a018-cd85a75e722f" colornum="3" style="background-color: rgb(255, 251, 120);"> number of monsters that you can eliminate before you lose, or </gistnote></em><code><gistnote class="gistnote-highlight" highlightid="a373ad7e-f62c-4165-a018-cd85a75e722f" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></code><em><gistnote class="gistnote-highlight" highlightid="a373ad7e-f62c-4165-a018-cd85a75e722f" colornum="3" style="background-color: rgb(255, 251, 120);"> if you can eliminate all the monsters before they reach the city.</gistnote></em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> dist = [1,3,4], speed = [1,1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
At the start of minute 0, the distances of the monsters are [1,3,4], you eliminate the first monster.
At the start of minute 1, the distances of the monsters are [X,2,3], you don't do anything.
At the start of minute 2, the distances of the monsters are [X,1,2], you eliminate the second monster.
At the start of minute 3, the distances of the monsters are [X,X,1], you eliminate the third monster.
All 3 monsters can be eliminated.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> dist = [1,1,2,3], speed = [1,1,1,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
At the start of minute 0, the distances of the monsters are [1,1,2,3], you eliminate the first monster.
At the start of minute 1, the distances of the monsters are [X,0,1,2], so you lose.
You can only eliminate 1 monster.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> dist = [3,2,4], speed = [5,3,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
At the start of minute 0, the distances of the monsters are [3,2,4], you eliminate the first monster.
At the start of minute 1, the distances of the monsters are [X,0,2], so you lose.
You can only eliminate 1 monster.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == dist.length == speed.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= dist[i], speed[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>