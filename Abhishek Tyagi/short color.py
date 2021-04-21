class Solution:
    def sortColors(self, nums: List[int]) -> None:
        
        
        idx = 0
        for _ in range(len(nums)):
            if nums[idx] == 2:
                nums.append(nums.pop(idx))
                continue
            elif nums[idx] == 0:
                nums.insert(0, nums.pop(idx))
            idx += 1
