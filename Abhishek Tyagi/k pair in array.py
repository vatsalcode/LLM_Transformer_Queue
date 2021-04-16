
class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        
        if k == 0:
            freq = Counter(nums)
            return sum([v > 1 for k,v in freq.items()])
        
        
        nums = list(set(nums))
        
        nums.sort()
        
        i = 0
        j = 0
        count = 0
       
        while j < len(nums):
            diff = abs(nums[i] - nums[j])
        
            if diff == k:
                count+=1
                i+=1
                j+=1

            elif diff < k:
                j+=1

            elif diff > k:
                i+=1
        
        
        return count
        
