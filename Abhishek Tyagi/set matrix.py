
def setZeroes(self, matrix):
    if not matrix:
        return 
    r, c = len(matrix), len(matrix[0])
    for i in xrange(c):
        if matrix[0][i] == 0:
            zeroRow = 0
            break
    for i in xrange(1, r):
        for j in xrange(c):
            if matrix[i][j] == 0:
                matrix[i][0] = 0
                matrix[0][j] = 0
    
    for i in xrange(1, r):
        if matrix[i][0] == 0:
            for j in xrange(c):
                matrix[i][j] = 0
   
    for j in xrange(c):
        if matrix[0][j] == 0:
            for i in xrange(1, r):
                matrix[i][j] = 0
  
    if zeroRow == 0:
        for i in xrange(c):
            matrix[0][i] = 0
