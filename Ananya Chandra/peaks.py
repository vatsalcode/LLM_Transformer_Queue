#given two int n, k .print no.of permutations of numbers from 1 to n having k peaks

T=int(input("Enter the number of test cases\n"))
for i in range(T):
    l,p=input().split()
    l=int(l)#length
    p=int(p)#no. of peaks
    a=[0]*l
    c=1
    if l%2==0 and p>(l//2)-1:
        print(-1)
    elif l%2!=0 and p>l//2:
        print(-1)
    else:
        for i in range(p):
            a[2*i+1]=l-i
        for i in range(l):
            if a[i]==0:
                a[i]=c
                c+=1
        print(a)
