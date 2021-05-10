

s, n, m = list(map(int, input().split()))
keyboard = list(map(int, input().split()))
drive = list(map(int, input().split()))

ans = -1

for k in keyboard:
    for mo in drive:
        if s >= k + mo > ans:
            ans = k + mo
print(ans)
