

class Solution(object):
    def getMaximumGold(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        nRow, nCol = len(grid), len(grid[0])
        res = 0
        for r in range(nRow):
            for c in range(nCol): 
                if grid[r][c] == 0: continue 
                stack = [(r, c, {(r, c)}, grid[r][c])] 
                while stack:
                    x, y, path, d = stack.pop() 
                    res = max(res, d) 
                    # [(x - 1, y), (x + 1, y), (x, y - 1), (x, y + 1)] == [(previous row, currentCol),(nextRow,currentCol),(currentRow,previous Column), (currentRow, nextCol)]
                    for x1, y1 in [(x - 1, y), (x + 1, y), (x, y - 1), (x, y + 1)]:
                        if 0 <= x1 < nRow and 0 <= y1 < nCol and (x1, y1) not in path and grid[x1][y1] != 0:
                            stack += [(x1, y1, path | {(x1, y1)}, d + grid[x1][y1])]
        return res
