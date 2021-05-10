#print sum of two arrays using recursion
print("Enter the lengths of the arrays\n")
m= int(input())
n= int(input())
a=[]
b=[]
l=m
sumarr=[]
print("Enter the elements of the first array")
for i in range(m):
    a.append(int(input()))
print("Enter the elements of the second array")
for i in range(n):
    b.append(int(input()))
if n>m:
    t=n-m
    for i in range(m,n):
        a.append(0)
    l=n #if n is greater than m then length =n
elif m>n:
    t=m-n
    for i in range(n,m):
        b.append(0)



def Sum(r):
    if r<l:
        sumarr.append(a[r]+b[r])
        return Sum(r+1)
    else:
        return sumarr


print(Sum(0))
