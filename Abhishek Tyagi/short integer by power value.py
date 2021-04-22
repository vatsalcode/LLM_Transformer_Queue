class Solution:
    def getKth(self, lo: int, hi: int, k: int) -> int:q
        d = {}
        for i in range(10):
            d[2**i] = i
        def helper(num):
            if num in d:
                return d[num]
            if num % 2:
                ans = helper(num*3+1)+1
            else:
                ans = helper(num//2)+1
            d[num] = ans
            return ans
        nums = list(range(lo,hi+1))
        ans = [[helper(n),n] for n in nums] 
        ans.sort(key = lambda x:x[0])
        return ans[k-1][1]
