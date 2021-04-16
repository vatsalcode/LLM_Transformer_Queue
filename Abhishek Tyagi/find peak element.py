class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if nums == None or len(nums) == 0:
            return -1
        return self.helper(0, len(nums) - 1, nums)
        
    def helper(self, st, end, nums):
        mid = (st + end) // 2 
        if mid > 0 and nums[mid] < nums[mid - 1]: 
            return self.helper(st, mid-1, nums) 
        elif mid < len(nums)-1 and nums[mid] < nums[mid + 1]:
            return self.helper(mid+1, end, nums)
        else:
            return mid 
