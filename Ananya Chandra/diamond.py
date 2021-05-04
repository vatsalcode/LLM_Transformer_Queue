n= int(input("the length of one side of diamond"))
t=1
while t<=n:
    v = 2 * t - 1
    print(" "*(n-t)+"*"*v+" "*(n-t))
    t+=1
t=n-1
while t>0:
    v=2*t-1
    print(" "*(n-t)+"*"*v+" "*(n-t))
    t-=1
