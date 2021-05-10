#remove consecutive repeated digits using stack
t= int(input("Enter the number of test cases\n"))
n=[]
stack=[]
for i in range(t):
    n.append(input())
    l=len(n[i])
    stack.append([])
    t=n[i][l-1]
    stack[i].append(n[i][l-1])
    for j in range(l-2,-1,-1):
        if n[i][j]!=t:
            stack[i].append(n[i][j])
            t=n[i][j]

for i in stack:
    while len(i)>0:
        print(i.pop(),end="")
    print()



