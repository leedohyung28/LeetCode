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