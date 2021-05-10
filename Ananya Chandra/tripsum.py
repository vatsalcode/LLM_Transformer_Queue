# count triplets of an array with sum sum smaller than the given sum
n= int(input("Enter the size of the array\n"))
arr=[]
print("Enter the distinct integer inputs\n")
for i in range(n):
    arr.append(int(input()))
x= int(input("Enter the sum value\n"))
c=0 # to store the count
for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            s=arr[i]+arr[j]+arr[k]
            if s<x:
                c+=1


print(c)

