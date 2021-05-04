# divide numbers 1,2,....n into two sets of equal sum. print yes if possible and no if not.if possible print an example of these sets along with their length
n=int(input())
a=[]
s=0
for i in range(1,n+1):
    a.append(i)
    s+=i
if s%2!=0:
    print("NO")
else:
    c=0
    print("YES")
    if n%2!=0:
        c+=1

    def divide(x,y,i,c):
        if c<=3 and i<n:
            if c==0 or c==3:
                x.append(a[i])
            else:
                y.append(a[i])
            return divide(x,y,i+1,c+1)
        elif c>3 and i<n:
            return divide(y,x,i,0)
        else:
            return x,y


    p,q=divide([], [], 0, c)
    print(len(p))
    print(p)
    print(len(q))
    print(q)

