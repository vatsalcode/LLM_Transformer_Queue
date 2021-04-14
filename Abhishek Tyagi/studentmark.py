
t=int(input())

lis = []
for i in range(t):
    lis.append(int(input()))
    
gender = input()

if gender == 'b':
    ini = 0
else:
    ini = 1
    
su = 0
while ini < len(lis):
    su += lis[ini]
    ini += 2

print(su)
    
    

