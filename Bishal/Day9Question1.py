class Niven:
    def __init__(self, num):
        self.num = num

    def niven(self):
        n = self.num
        s = 0
        while n != 0:
            d = n % 10
            s += d
            n = n // 10
        if self.num % s == 0:
            print(f"{self.num} is Niven.")
        else:
            print(f"{self.num} is non-Niven.")


x = Niven(int(input("Enter the number for niven check: ")))
x.niven()
