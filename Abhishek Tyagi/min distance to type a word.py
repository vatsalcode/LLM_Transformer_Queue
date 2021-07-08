INF = float('inf')

class Solution:
    def dist(self, t: int, f: int) -> int:
        if f == -1:
            return 0
        return abs(t // 6 - f // 6) + abs(t % 6 - f % 6)
        
    def minimumDistance(self, word: str) -> int:
        dp = {(-1,-1) : 0}        
        for c in word:
            newDp = {}
            k = ord(c) - ord('A')
            for i,j in dp.keys():
                newDp[i,k] = min(newDp.get((i,k), INF), dp[i,j] + self.dist(k,j))
                newDp[k,j] = min(newDp.get((k,j), INF), dp[i,j] + self.dist(k,i))
            dp = newDp
        return min(dp.values())
