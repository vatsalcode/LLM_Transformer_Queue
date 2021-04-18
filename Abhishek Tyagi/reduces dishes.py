
        
from typing import List


class Solution:
    def maxSatisfaction(self, satisfaction: List[int]) -> int:
        satisfaction.sort()
        total, cur, result,  n = 0, 0, 0,  len(satisfaction)
        for i in range(n):
            total += satisfaction[i]  
        while total < 0 and cur < n:
            total -= satisfaction[cur]
            cur += 1
        for i in range(cur, n):
            result += (i-cur+1)*satisfaction[i]
        return result
