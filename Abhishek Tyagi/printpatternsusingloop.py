n = int(input())

for i in range(1 , n):
    temp = n
    for j in range(1 , n):
        if(j <= i and j != 1):
            temp -= 1
        print(temp , end = " ")
    print(temp , end = " ")
    for j in range(1 , n):
        if(j >= n - i + 1):
            temp += 1
        print(temp , end = " ")
    print("")

temp = n
for i in range(1 , n):
    print(temp , end = " ")
    temp -= 1

print("1" , end = " ")

for i in range(1 , n):
    temp += 1
    print(temp , end = " ")
print("")

m = 1
for i in range(n - 1 , 0 , -1):
    temp = n
    for j in range(1 , n):
        if(j <= i and j != 1):
            temp -= 1
        print(temp , end = " ")
    print(temp , end = " ")
    for j in range(1 , n):
        if(j >= m + 1):
            temp += 1
        print(temp , end = " ")
    print("")
    m += 1
