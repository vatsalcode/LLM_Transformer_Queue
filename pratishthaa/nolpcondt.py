a = int(input("Enter 1st no. : "))
b = int(input("Enter 2nd no. : "))
c = int(input("Enter 3rd no. : "))

x1 = min(a, b, c)
x3 = max(a, b, c)
x2 = (a + b + c) - x1 - x3
print("Numbers in sorted order: ", x1, x2, x3)
