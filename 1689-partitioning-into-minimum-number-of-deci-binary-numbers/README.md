<h2><a href="https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/">1689. Partitioning Into Minimum Number Of Deci-Binary Numbers</a></h2><h3>Medium</h3><hr><div><p>A decimal number is called <strong>deci-binary</strong> if each of its digits is either <code>0</code> or <code>1</code> without any leading zeros. For example, <code>101</code> and <code>1100</code> are <strong>deci-binary</strong>, while <code>112</code> and <code>3001</code> are not.</p>

<p>Given a string <code>n</code> that represents a positive decimal integer, return <em>the <strong>minimum</strong> number of positive <strong>deci-binary</strong> numbers needed so that they sum up to </em><code>n</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = "32"
<strong>Output:</strong> 3
<strong>Explanation:</strong> 10 + 11 + 11 = 32
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = "82734"
<strong>Output:</strong> 8
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = "27346209830709182346"
<strong>Output:</strong> 9
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n.length &lt;= 10<sup>5</sup></code></li>
	<li><code>n</code> consists of only digits.</li>
	<li><code>n</code> does not contain any leading zeros and represents a positive integer.</li>
</ul>
</div>

---

## Review

#### One Line Code (Time : O(len), Space : O(1))
```python
class Solution:
    def minPartitions(self, n: str) -> int:
        return int(max(n))      
```

#### More Fast Code (not using Max)
```python
class Solution:
    def minPartitions(self, n: str) -> int:
        for i in range(9, -1, -1):
            if str(i) in n:
                return int(i)
```

### 배운점 : Python에서는 Max라는 간단한 함수가 있지만 for문보다 효율이 떨어진다. <br>
### 느낀점 : Python은 코드를 더욱 간단하게 줄이기 용이하기 때문에 문제 분석이 중요하다.
