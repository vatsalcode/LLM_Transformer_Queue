# print sum of series 1+12+123+...n terms

n=int(input("Enter the number of terms \n"))
t=0
s=0
for i in range(1,n+1):
    for j in range(1,i+1):
        t=t*10+j
    print(t)
    s=s+t
    t=0
print(" the sum of series is ",s)
