import bisect 
n=int(input())
a=[]
for i in range(n):
    p=int(input())
    bisect.insort(a,p) 
    if len(a)%2!=0:
        print(a[len(a)//2])
    else:
        print((a[len(a)//2]+a[len(a)//2-1])/2)
