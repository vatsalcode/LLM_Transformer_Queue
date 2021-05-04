from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        c = Counter(nums)
        for n in c.keys():
            if c[n] == 1:
                return n
             
