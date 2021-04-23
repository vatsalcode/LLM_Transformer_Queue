for _ in range(int(input())):
    n=int(input())
    
    lst = list(map(int, input().split()))
    
    lst=sorted(lst)
    
    a=lst[0]
    b=lst[1]
    c=lst[-1]
    
    result = abs(a-b)+abs(b-c)+abs(c-a)
    
    print(result)
