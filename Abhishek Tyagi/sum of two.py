class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        container = {}
        
        for i, num in enumerate(nums):
            if target - num in container:
                return [container[target - num], i]
            container[num] = i
        return
        

