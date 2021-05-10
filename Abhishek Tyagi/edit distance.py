class Solution:
    def minDistance(self, word1, word2):
        s1, s2 = len(word1), len(word2) 
        dp = [[0 for _ in range(s2+1)] for _ in range(s1+1)] 
        def helper(n, m):
            if n==0:
                return m
            if m==0:
                return n
            if dp[n][m]:
                return dp[n][m]
            if word1[n-1] == word2[m-1]:
                dp[n][m] = helper(n-1, m-1)
                return dp[n][m]
            ans = 1 + min(helper(n, m-1), helper(n-1, m-1), helper(n-1, m))
            dp[n][m] = ans
            return ans
        
        return helper(s1, s2)

    
