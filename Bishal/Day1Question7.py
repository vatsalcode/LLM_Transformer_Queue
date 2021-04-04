import math

import matplotlib.pyplot as plt


def pl(li1):
    plt.plot(li1)
    plt.show()


def xcal(li2):
    for i in range(len(li2)):
        li2[i] = math.sqrt(li2[i])
    return li2


def inp():
    n = int(input("Enter how many numbers you wanna enter: "))
    print(f"Now, enter {n} numbers: ")
    li3 = []
    for i in range(n):
        li3.append(int(input()))
    return li3


lx = inp()
m = xcal(lx)
pl(m)
