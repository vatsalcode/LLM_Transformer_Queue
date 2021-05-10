
def add(mat1, mat2):
    res = []
    for i in range(len(mat1)):
        row = []
        for j in range(len(mat2)):
            row[j] = mat1[i][j] + mat2[i][j]
        res.append(row)
    return res

def sub(mat1, mat2):
    res = []
    for i in range(len(mat1)):
        row = []
        for j in range(len(mat2)):
            row[j] = mat1[i][j] - mat2[i][j]
        res.append(row)
    return res

def mul(mat1, mat2):
    m = len(mat1); n=len(mat1[0]); p = len(mat2[0])
    res = [[0 for _ in range(p)] for _ in range(m)]
    for i in range(n):
        for j in range(n):
            for k in range(p):
                res[i][j] += mat1[i][k]* mat2[k][j]
    return res

def getCofactor(mat, cf, p, q, n):
    i = 0; j = 0
    for row in range(n):
        for col in range(n):
            if row != p and col != q:
                cf[i][j] = mat[row][col]
                j += 1
            if j == n - 1:
                j = 0
                i += 1
    return cf

def determinant(mat, n):
    d = 0
    if n == 1:
        return mat[0][0]
    cf = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n):
        cf = getCofactor(mat, cf, 0, i, n)
        d += ((-1)**i) * mat[0][i] * determinant(cf, n - 1)
    return d
def printSnake(mat):
    rows = len(mat); cols = len(mat[0])
    for i in range(rows):
        for j in range(cols):
            if i % 2 == 0:
                print(mat[i][j], end = " ")
            else:
                print(mat[i][j - cols], end = " ")
        print("\n")

def printBoundary(mat):
    rows = len(mat); cols = len(mat[0])

    for i in mat[0]:
        print(i, end =" ")

    for i in range(rows):
        print(mat[i][cols-1], end=" ")

    for i in mat[-1][::-1]:
        print(i, end=" ")

    for i in reversed(range(1,rows)):
        print(mat[i][0], end=" ")

def transpose(mat):
    n = len(mat)
    for i in range(n):
        for j in range(i+1, n):
            mat[i][j], mat[j][i] = (mat[j][i], mat[i][j])
    return mat

anticlockwise90 = lambda mat: transpose(mat)[::-1]
clockwise90 = lambda mat: [row[::-1] for row in transpose(mat)]

def search(mat, x):
    rows = len(mat); cols = len(mat[0])
    r_idx = -1; c_idx = -1

    for i in range(rows):
        if x < mat[i][-1]:
            r_idx = i
            break
        elif x == mat[i][-1]:
            r_idx = i
            c_idx = cols - 1
            break
        else:
            pass
    if r_idx == -1:
        return -1
    else:
        if c_idx == -1:
            for i in range(cols):
                if mat[r_idx][i] == x:
                    c_idx = i

    if r_idx != -1 and c_idx != -1:
        return (r_idx, c_idx)
    else:
        return -1

def median(mat):
    rows = len(mat); cols = len(mat[0])
    flat = []
    for i in range(rows):
        for j in range(cols):
            flat.append(mat[i][j])
    flat = sorted(flat)
    return flat[rows*cols//2]


def printSpiral(a):
    k = 0; l = 0; m = len(a); n = len(a[0])
    while (k < m and l < n):
        for i in range(l, n):
            print(a[k][i], end=" ")
        k += 1

        for i in range(k, m):
            print(a[i][n - 1], end=" ")
        n -= 1

        if (k < m):
            for i in range(n - 1, (l - 1), -1):
                print(a[m - 1][i], end=" ")
            m -= 1

        if (l < n):
            for i in range(m - 1, k - 1, -1):
                print(a[i][l], end=" ")
            l += 1
            
           
