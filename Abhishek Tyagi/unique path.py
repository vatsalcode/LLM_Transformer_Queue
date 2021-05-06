class Solution:
    uniquePathsMap = {}
    def uniquePaths(self, m: int, n: int) -> int:
        if m == 1 or n == 1: return 1 
        if (m, n) not in self.uniquePathsMap.keys():
            self.uniquePathsMap[(m, n)] = self.uniquePaths(m - 1, n) + self.uniquePaths(m, n - 1)
        return self.uniquePathsMap[(m, n)
