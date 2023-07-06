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
