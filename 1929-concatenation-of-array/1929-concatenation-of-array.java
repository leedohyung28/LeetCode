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