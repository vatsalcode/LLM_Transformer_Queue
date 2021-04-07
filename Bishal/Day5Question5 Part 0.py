#Base File to be inherited
def prime(a) -> bool:
    c = 0
    for i in range(a + 1):
        if a % (i + 1) == 0:
            c += 1
    if c == 2:
        return True


def palin(b) -> bool:
    d = b
    s = 0
    while b != 0:
        div = b % 10
        s = s * 10 + div
        b = b // 10
    if d == s:
        return True
