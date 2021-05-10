t=int(input()) 
while(t):
    
    a=list(map(int,input().split())) 
    k=int(input())
    
    for i in range(9,-1,-1): 
        
        a[i]=a[i]-k
        
        k=-1*a[i]
        
        if a[i]>0:
            break
    
    print(i+1) 
    
    
    t=t-1 
