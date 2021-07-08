  def fact(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n*fact(n - 1)


def kr(n):
    c = n
    s = 0
    while c != 0:
        d = c % 10
        s += fact(d)
        c //= 10
    if s == n:
        print(f"{n} is a Krishnamurti Number.")
    else:
        print(f"{n} is a non Krishnamurti Number.")


kr(int(input("Enter the number for Krishnamurti check:\n")))
