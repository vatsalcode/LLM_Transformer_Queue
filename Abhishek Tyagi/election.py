for _ in range(int(input())):
    
    n,m = map(int,input().split())
    
    john= list(map(int, input().split()))
    
    jack= list(map(int, input().split()))
    
    john=sorted(john)
    jack=sorted(jack,reverse=True)
    
    if sum(john) > sum(jack):
        print(0)
    else:
        flag=0
        count=0
        
        for i in range(min(n,m)):
            john[i],jack[i]=jack[i],john[i]
            
            count+=1
            
            if sum(john)>sum(jack):
                flag=1
                break
        
        if flag==1:
            print(count)
        else:
            print(-1)
