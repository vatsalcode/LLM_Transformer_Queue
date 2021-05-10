def prefix_sums(ls: [int]) -> [int]:
    
    n = len(ls)
    total = 0
    sums = [0] * n
    for i in range(n):
        total += ls[i]
        sums[i] = total
    return sums
