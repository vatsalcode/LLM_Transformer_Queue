#calculate sum of all cordinates(x,y) that a man at (0,0) can reach in m moves when he can only :
# 1) go to (x-1,0)
# 2) go to (x+1,0)
# 3)remain at current position
#shorter logic

T= int(input("Enter the number of test cases \n"))
print("Enter the number of moves")
for m in range(T):
    m=int(input())#stores number of moves
    s=0
    for i in range(m+1):
        s=s+2*i
    print(s)

