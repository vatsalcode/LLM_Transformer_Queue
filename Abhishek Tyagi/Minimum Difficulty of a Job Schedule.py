class Solution:
    def minDifficulty(self, jobDifficulty: List[int], d: int) -> int:
        if d > len(jobDifficulty):
            return -1
        

        
        dp = {}
        
        running_max = 0
        for k in range(len(jobDifficulty)):
            running_max = max(running_max, jobDifficulty[k])
            dp[(0, k)] = running_max

        for i in range(1, d):
            for j in range(i, len(jobDifficulty)):
                running_max = 0
                dp[(i,j)] = 2**16
                for k in range(j, i-1, -1):
                    running_max = max(running_max, jobDifficulty[k])
                    dp[(i, j)] = min(dp[(i, j)], dp[(i-1, k-1)] + running_max)
            
            
        return dp[(d-1, len(jobDifficulty)-1)]
