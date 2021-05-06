def magic(n):
    c = n
    s = n
    while s > 9:
        s = 0
        while c != 0:
            d = c % 10
            s += d
            c = c // 10
        c = s
    if s == 1:
        print(f"{n} is a Magic Number.")
    else:
        print(f"{n}is not a Magic Number.")


magic(int(input()))
