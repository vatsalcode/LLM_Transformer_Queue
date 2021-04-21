class Solution(object):
    def numOfWays(self, n):         

        mod = 10**9+7              
        dp = [[6, 6] for _ in range(n)]
        for i in range(1, n):
            dp[i][0] = 2*dp[i-1][0] + 2*dp[i-1][1]
            dp[i][1] = 2*dp[i-1][0] + 3*dp[i-1][1]
            dp[i][0] %= mod         
            dp[i][1] %= mod
        return sum(dp[n-1])%mod
 
s=Solution()
print(s.numOfWays(7))              
