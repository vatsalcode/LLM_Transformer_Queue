def auto(n):
    s = n * n
    t = 1
    while n > 0:
        if n % 10 != s % 10:
            t = 0
            break
        n //= 10
        s //= 10
    return t


N = int(input("Enter the number for automorphic check: "))
if auto(N) == 1:
    print(f"{N} is Automorphic")
else:
    print(f"{N} is Non Automorphic")
