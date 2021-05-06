class Solution:
    def findTargetSumWays(self, nums: List[int], S: int) -> int:
       
        self.memo = dict()
        
    
        return self.dfs(nums, S, 0)
    
    def dfs(self, nums, S, cur):
        if (S, cur) in self.memo:
            return self.memo[(S, cur)]
        
        if cur == len(nums):
            return 1 if S == 0 else 0
        
        result = (
            self.dfs(nums, S - nums[cur], cur + 1) +
            self.dfs(nums, S + nums[cur], cur + 1)
        )
        
        self.memo[(S, cur)] = result
        return result
