def neon(n):
    t: int = n
    n = n*n
    c = 0
    while n != 0:
        d = n % 10
        c += d
        n //= 10
    if c == t:
        print(f"{t} is a Neon Number.")
    else:
        print(f"{t} is not a Neon Number.")


neon(int(input("Enter a number for Neon check: ")))
