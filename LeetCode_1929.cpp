// 1929. Concantenation of Array (Easy)
// 89.8% Acceptance

/*
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.
 */

/*
Example :
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/

/*
Constraints :
n == nums.length
1 <= n <= 1000
1 <= nums[i] <= 1000
*/
  

// My Code (Runtime : 1ms (Beats : 92.80%), Memory : 44.7MB (Beats : 23.3%)

class Solution {
    public int[] getConcatenation(int[] nums) {
        int a = 0;
        int b = 0;
        int[] ans = new int[nums.length * 2];
        while(b < nums.length * 2)
        {
            ans[b] = nums[a];
            a++;
            b++;
            if(a == nums.length){
                a = 0;}
        }
        return ans;
    }  
}

// Best result Code
class Solution {
    public int[] getConcatenation(int[] nums) {
         int output[] = new int[nums.length + nums.length];
         
         System.arraycopy(nums, 0, output, 0, nums.length);
         System.arraycopy(nums, 0, output, nums.length, nums.length);
         
         return output;
    }
}

// More Simple code
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


/*
느낀점 : 오랜만에 Java를 사용해서 배열에 익숙하지 않았다. 다른 언어도 꾸준히 연습하여 전체적인 프로그래밍 실력을 키워야겠다고 생각한다.
 */
