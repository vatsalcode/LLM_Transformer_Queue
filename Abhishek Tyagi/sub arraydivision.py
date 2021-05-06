def getWays(squares, d, m):
    tp = (len(squares)-m) + 1
    return len([1 for i in range(tp) 
                if sum(squares[i:i+m])==d])
