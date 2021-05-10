t = int(input())
for _ in range(t):
    n,k,d = map(int, input().split())

    arr = list(map(int, input().split()))

    total = sum(arr)

    print(min(total//k,d))
