def numSubmatrixSumTarget(self, matrix, k):
        rows = len(matrix)
        columns = len(matrix[0])

        co = 0
        for i in range(columns):
            columnsum = [0] * rows
            for j in range(i, columns):
                ht = collections.defaultdict(int)
                rowsum = 0
                ht[0] = 1

                for r in range(rows):
                    columnsum[r] += matrix[r][j]
                    rowsum += columnsum[r]
                    co += ht[rowsum-k]
                    ht[rowsum] += 1
                    
        return co

matrix = input('Enter number of posts')
k = input('Enter number of colours')
print(numSubmatrixSumTarget(matrix,k))

