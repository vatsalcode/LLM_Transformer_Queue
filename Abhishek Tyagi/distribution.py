from math import ceil

for _ in range(int(input())):
    n,d=map(int, input().split())
    
    age = list(map(int, input().split()))
    
    risk = 0
    not_risk =0
    
    for i in age:
        if i>=80 or i<=9:
            risk+=1
        else:
            not_risk+=1
            
    days_for_risk = ceil(risk/d)
    
    days_for_not_risk = ceil(not_risk/d)
    
    print(days_for_risk + days_for_not_risk)
