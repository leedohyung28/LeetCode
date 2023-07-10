<h2><a href="https://leetcode.com/problems/concatenation-of-array/">1929. Concatenation of Array</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code>nums</code> of length <code>n</code>, you want to create an array <code>ans</code> of length <code>2n</code> where <code>ans[i] == nums[i]</code> and <code>ans[i + n] == nums[i]</code> for <code>0 &lt;= i &lt; n</code> (<strong>0-indexed</strong>).</p>

<p>Specifically, <code>ans</code> is the <strong>concatenation</strong> of two <code>nums</code> arrays.</p>

<p>Return <em>the array </em><code>ans</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,1]
<strong>Output:</strong> [1,2,1,1,2,1]
<strong>Explanation:</strong> The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,2,1]
<strong>Output:</strong> [1,3,2,1,1,3,2,1]
<strong>Explanation:</strong> The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>

---

## Review

#### Best result Code
```java
class Solution {
    public int[] getConcatenation(int[] nums) {
         int output[] = new int[nums.length + nums.length];
         
         System.arraycopy(nums, 0, output, 0, nums.length);
         System.arraycopy(nums, 0, output, nums.length, nums.length);
         
         return output;
    }
}
```
<br>

#### More Simple Code (Compare to My Code)
```java
class Solution {
    public int[] getConcatenation(int[] nums) {
        int ans[] = new int [2*nums.length];
        for(int i=0; i<nums.length; i++){
            ans[i] = nums[i];
            ans[i+nums.length] = nums[i];
        }
        return ans;
    }
}
```

### 배운점 : Java의 배열을 활용하는 방법 <br>
### 느낀점 : System.​arraycopy를 활용하여 효율성을 높이는 것
