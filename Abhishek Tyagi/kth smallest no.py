class Solution:
    def findKthNumber(self, m, n, k):
        if n<m:
            m,n = n,m 
        def enough(x):
            res  = 0 
            for a in range(1,m+1):
                b = min(n, x//a)
                if not b:
                    break
                res += b
            return res
        
        i,j = 1,m*n
        while i<j:
            mid  = (i+j)//2
            pos  = enough(mid)
            if pos<k:
                i = mid + 1
            else:
                j = mid # pos>=k is good
        return i
