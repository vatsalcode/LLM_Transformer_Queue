def happy(n):
    c = n
    s = 10
    while s > 9:
        s = 0
        while c != 0:
            d = c % 10
            s += d**2
            c = c // 10
        c = s
    if s == 1:
        print(f"{n} is a Happy Number.")
    else:
        print(f"{n} is not a Happy Number.")


happy(int(input()))
