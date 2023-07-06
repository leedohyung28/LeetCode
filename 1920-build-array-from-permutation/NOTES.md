#### Most Viewed Solution (Space Complexity : O(1), Time : O(N))
```cpp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));
        }
        for(int i=0;i<n;i++){
            nums[i]/=n;
        }
        return nums;
    }
};
```
<br>

#### Most Viewed Solution (Space : O(N), Time : O(N))
```cpp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};
```
### 배운점 : C++에서 vector를 활용하는 방법 <br>
### 느낀점 : 이미 구성된 코드도 복잡도 계산을 통해 줄일 수 있다.
