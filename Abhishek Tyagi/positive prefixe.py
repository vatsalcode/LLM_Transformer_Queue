for _ in range(int(input())):
    n,k = map(int, input().split())
    
    arr=[]

    if k <= (n/2):
        for i in range(1,n+1):
            
            if i<=2*k and i%2==1:
                arr.append(i)
            else:
                arr.append(-i)
    else:
        for i in range(1,n+1):
            
            if i<=2*(n-k) and i%2==0:
                arr.append(-i)
            else:
                arr.append(i)
    
    print(*arr)
