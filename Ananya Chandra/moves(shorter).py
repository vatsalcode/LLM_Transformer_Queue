#calculate minimum no. of moves to reach cordinates(X,Y) when a man is at (0,0) and  can only go from (x,y) to:
# 1) (x+1,y+1)
# 2) (x+1,y)
#shorter version

T= int(input("Enter the number of test cases \n"))
print("Enter the destination")
for m in range(T):
    f=(input().split())
    f[0]=int(f[0])#final co-ordinate of x
    f[1]=int(f[1])#final co-ordinate of y
    if f[1]>f[0]:
        print("Can't reach destination ")
    else :
        print(f[0])
