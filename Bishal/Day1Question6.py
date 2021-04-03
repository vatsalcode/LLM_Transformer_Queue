def summation(li):
    s: int = 0
    for j in li:
        s += j
    return s


n = int(input("Enter for how many numbers you want to compute the sum: "))
print(f"Enter {n} numbers to get the desired sum: ")
numbers = []
for i in range(n):
    numbers.append(int(input()))
sum1 = summation(numbers)
print(sum1)
