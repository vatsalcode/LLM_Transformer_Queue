class Fibonacci:
    def __init__(self, n):
        self.n = n

    def fibonacci(self) -> list:
        a = self.n
        up = 0
        lo = 1
        lists = [up, lo]
        for c in range(a - 2):
            z = up + lo
            lists.append(z)
            up = lo
            lo = z
        return lists


x = Fibonacci(int(input("Enter the number of digits you wanna see in the series: ")))
l = x.fibonacci()
for i in range(len(l)):
    if i < len(l) - 1:
        print(l[i], end=', ')
    else:
        print(l[i], end='.')
