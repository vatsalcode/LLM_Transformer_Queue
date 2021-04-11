def inp():
    a = list(map(int, input().split()))
    a.sort()
    for i in range(len(a)):
        a[i] = a[i] << 2
    print(a)


inp()
