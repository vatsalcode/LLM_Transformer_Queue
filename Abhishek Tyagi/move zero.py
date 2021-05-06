class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        
        non_zeros = [i for i in range(len(nums)) if nums[i] != 0] 
        nz = len(non_zeros) 
        nums[:nz] = [nums[i] for i in non_zeros]        
        nums[nz:] = [0] *(len(nums)-nz) 
