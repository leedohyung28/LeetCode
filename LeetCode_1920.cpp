// 1920. Build Array from Permutation (Easy)
// 89.8% Acceptance

/*
Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
 */

/*
Example :
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
Explanation: The array ans is built as follows: 
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
    = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
    = [0,1,2,4,5,3]
  */

/*
Constraints : 
1 <= nums.length <= 1000
0 <= nums[i] < nums.length
The elements in nums are distinct.
  */

// My Code (Rumtime : 13ms (Beats :79.57%), Memory : 16.6MB (Beats : 55.81%)

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> rt;
        for(int i=0; i<nums.size(); i++)
        {
            rt.push_back(nums[nums[i]]);
        }
        return rt;
    }
};


// Most Viewed Solution
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        vector<int> Ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
            Ans.push_back(nums[nums[i]]);
        return Ans;
    }
};

// 4-line Solution
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            int index = nums[i];
            ans.push_back(nums[index]);
        }

        return ans;
    }
};

/*
느낀점 : 매우 쉬운 문제였지만, C++를 오랜만에 접하다 보니 vector 사용이 익숙하지 않은 것 같다.
앞으로 C++ 언어를 자주 접하면서 vector와 그 외 다른 것들에 대한 사용을 익숙하게 해야 될 것 같다.
*/
