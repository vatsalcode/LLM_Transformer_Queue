for _ in range(int(input())):
    n=int(input())
    
   
    lst=list(map(int, input().split()))
    
    if sum(lst)>=0:
        print('YES')
    else:
        print('NO')
