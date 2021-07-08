
from typing import List

class Solution():
    def solveNQueens(self, n) -> List[List[str]]:
        
        board = [['.' for i in range(n)] for j in range(n)]

        result = []  

        self.dfs(board, 0, result)

        return result

    def dfs(self, board, colIndex, result):
        if colIndex == len(board):
            result.append(self.construct(board))
            return

        for i in range(len(board)):
            if self.validate(board, i, colIndex):
                board[i][colIndex] = 'Q'
                self.dfs(board, colIndex + 1, result)
                board[i][colIndex] = '.'

    def validate(self, board, x, y):
        for i in range(len(board)):
            for j in range(y):
                if board[i][j] == 'Q' and (x + j == y + i or x + y == i + j or x == i):
                    return False
        return True


    def construct(self, board):
        res = []
        s = ""  
        for i in range(len(board)):
            res.append(s.join(board[i])) 
        return res


if __name__ == '__main__':
    print(Solution().solveNQueens(4))
