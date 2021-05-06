n = 10**6

prime=[1 for i in range(n+1)]
i=2
prime[0]=0
prime[1]=0
while i*i<=n:
    if prime[i] == 1:
        for j in range(i*i,n+1,i):
            prime[j]=0
    i+=1

tuples=[0 for i in range(n+1)]
for i in range(2,n+1):
    if prime[i]==1 and prime[i-2]==1:
        tuples[i]=tuples[i-1]+1
    else:
        tuples[i]=tuples[i-1]

for _ in range(int(input())):
    n=int(input())
    
    count=tuples[n]
    print(count)
