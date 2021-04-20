

class Solution(object):
    def minFallingPathSum(self, A):
        
        def children(row, col):
            if row < rows - 1:
                yield row + 1, col
                if col > 0: yield row + 1, col - 1
                if col < cols - 1: yield row + 1, col + 1

        def search(row, col):
            if (row, col) in mem: return mem[row, col]
            mem[row, col] = A[row][col]
            childs = list(search(r, c) for r, c in children(row, col))
            if childs: mem[row, col] += min(childs)
            return mem[row, col]

        if not A: return 0
        rows, cols = len(A), len(A[0])
        mem = {}
        return min(search(0, c) for c in range(cols))

