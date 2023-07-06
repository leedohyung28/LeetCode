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
<br><br>

### 배운점 : Java의 배열을 활용하는 방법 <br>
### 느낀점 : System.​arraycopy를 활용하여 효율성을 높이는 것
