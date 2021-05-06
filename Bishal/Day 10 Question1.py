def ang(n):
    c = n
    counter = 0
    while c != 0:
        c = c // 10
        counter += 1
    c = n
    s = 0
    while c != 0:
        d = c % 10
        s += d ** counter
        c //= 10
    if s == n:
        print(f"{n} is an Angstrom Number.")
    else:
        print(f"{n} is a non Angstrom Number.")


ang(int(input("Enter the number for Angstrom check:\n")))
