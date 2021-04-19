
n=int(input())

l=[] 
#loop from 0 to n-1
for i in range(n):
    a=int(input()) 
    if a<10:
        l.append("Thanks for helping Chef!")   
    else:
        l.append(-1)
for i in l:
    print(i) 
