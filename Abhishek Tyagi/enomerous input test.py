
n,k = map(int, input().split())
count = 0    

for _ in range(0, n):
    t = int(input())
  
    if t%k==0:
    
        count+=1
        
print(count)
