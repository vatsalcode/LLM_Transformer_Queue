#calculate minimum no. of moves to reach cordinates(X,Y) when a man is at (0,0) and  can only go from (x,y) to:
# 1) (x+1,y+1)
# 2) (x+1,y)


T= int(input("Enter the number of test cases \n"))
print("Enter the destination")
for m in range(T):
    f=(input().split())
    f[0]=int(f[0])
    f[1]=int(f[1])
    c=0
    x=0
    y=0
    while x!=f[0] or y!=f[1]:
        if x<f[0] and y<f[1]:
            c+=1
            x+=1
            y+=1
        elif x<f[0]:
            c+=1
            x+=1
        else:
            print("Can't reach destination")
            break
    if x==f[0] and y==f[1]:
        print(c)

