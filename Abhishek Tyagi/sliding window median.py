class Solution:
    def medianSlidingWindow(self, nums: List[int], k: int) -> List[float]:
        even = (k % 2 == 0)

        def median(even, nums, r, l):
            n = sorted(nums[l:r + 1])
            if even:
                med = (n[(k // 2) - 1] + n[k // 2]) / 2
            else:
                med = n[k // 2]
            return med

        r = 0
        l = 0
        ans = []
        while r < len(nums):
            if r - l + 1 == k:
                ans.append(median(even, nums, r, l))
                l += 1
            r += 1
        return ans
