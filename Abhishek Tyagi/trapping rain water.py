

class Solution:
     def trap(self, height: List[int]) -> int:
         water = 0
        
         n = len(height)
        
         left_max = [0] * n
         right_max = [0] * n
        
         left_max[0] = height[0]
         right_max[n - 1] = height[n - 1]
        
         for i in range(1, n):
             left_max[i] = max(left_max[i - 1], height[i])
            
         for i in range(n - 2, -1, -1):
             right_max[i] = max(right_max[i + 1], height[i])
            
         for i in range(n):
             water += min(left_max[i], right_max[i]) - height[i]
            
         return water
