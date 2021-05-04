#find unique quadraple that sums up to given number
n= int(input("Enter length of array\n"))
arr=[]
print("Enter the integer values\n")
for i in range(n):
    arr.append(int(input()))
l = len(arr)
k=int(input("Enter the number\n"))
t=0
s=0 # to store the sum
while t < l-3:
    for i in range(0, 4):
        s = s + arr[t + i]
    if s == k:
        print(arr[t:t + 4])
    s = 0
    t += 1


