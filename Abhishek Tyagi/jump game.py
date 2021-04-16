class Solution(object):
    def maxJumps(self, arr, d):
        
        new_arr = sorted([(val, i) for i, val in enumerate(arr)])
        dp = [1]*len(new_arr)
        for _, i in new_arr: 
            for j in range(i+1, i+d+1): 
                if not(0<=j<len(new_arr)) or arr[j]>= arr[i]: 
                    break
                dp[i] = max(dp[i], 1 + dp[j]) 
            for j in reversed(range(i-d, i)): 
                if not(0<=j<len(new_arr)) or arr[j]>= arr[i]: 
                    break
                dp[i] = max(dp[i], 1 + dp[j]) 

        return max(dp)

