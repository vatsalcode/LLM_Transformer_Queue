#in unsorted array of size n of positive number , a number a from set{1,2,3,...n} is missing
# and a number b is repeated . find a and b
n= int(input("Enter the size of the array\n"))
arr=[]
print("Enter the positive integer inputs\n")
for i in range(n):
    arr.append(int(input()))
arr.sort()
print(arr)
for i in range(n):
    if arr[i]!=i+1:
        if (i+1) not in arr:
            print("The missing number is " , i+1)

        if arr[i] in arr[i+1:n] or arr[i] in arr[0:i]:
            print("the reapeated number is",arr[i])
        i -= 1
