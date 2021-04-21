import heapq

class Solution(object):
    def minFallingPathSum(self, arr):
        n = len(arr)

        for row in range(1, n):
             
            smallest, second = heapq.nsmallest(2, arr[row - 1])
            for col in range(n):
                arr[row][col] += second if arr[row - 1][col] == smallest else smallest

        return min(arr[-1])
