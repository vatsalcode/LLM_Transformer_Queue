def prime(t,i):
    if t==1:
        return 0
    elif(i<t):
        if(t%i!=0):
            return prime(t,i=i+1)
        else:
            return 0
    else:
        return 1

t=1
for m in range(4):
    for n in range(m+1):
        if prime(t,2)==1:
            print("#",end="")
        else:
            print("*", end="")
        t+=1
    print()
