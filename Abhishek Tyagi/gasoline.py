for _ in range(int(input())):
    n=int(input())
    
    gasoline = list(map(int, input().split()))
    
    fuel=gasoline[0]
    
    distance=0
    
    for i in range(1,n):
        if fuel<=0:
            break
        
        fuel-=1
        
        distance+=1
        
        fuel+=gasoline[i]
        
    print(distance+fuel)
