class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        nums = [1] + nums + [1]
        n = len(nums)
        dp = [[0 for _ in range(n)] for _ in range(n)]

        def cal(i, j):
            if dp[i][j]:
                return dp[i][j] 
            elif i > j:
                return dp[i][j]
            else:
                coins_max = 0
                for k in range(i, j + 1):
                    left = nums[i-1]
                    right = nums[j+1]
                    coins_k_max = cal(i, k - 1) + left * nums[k] * right + cal(k + 1, j)
                    coins_max = max(coins_max, coins_k_max)
                dp[i][j] = coins_max
                return dp[i][j]
        return cal(1, n - 2)
