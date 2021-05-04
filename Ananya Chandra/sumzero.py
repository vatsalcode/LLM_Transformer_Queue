#count number of sub arrays habing sum=0
n= int(input("Enter length of array\n"))
arr=[]
print("Enter the integer values\n")
for i in range(n):
    arr.append(int(input()))
l = len(arr)
t=0
ans=0
c=0
s=0 # to store the sum
subl=1 #subarray length
while subl <= l:
    for i in range(0, subl):
        s = s + arr[t]
        t+=1
    if s==0:
        ans+=1
    c+=1
    s=0
    if (t == (l)):
        subl += 1
        t = 0
        c = 0
    else:
        t = c

print(ans)

