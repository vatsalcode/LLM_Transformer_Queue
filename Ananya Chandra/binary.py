# minimize a binary string by performing several operations on it . operation: remove even length substring containing only 0's or 1's
st=input("Enter the binary string\n")
l=len(st)
a=[]
for i in range(l-1,-1,-1):
    if a==[]:
        a.append(st[i])
    else:
        p=a.pop()
        if st[i] != p:
            a.append(p)
            a.append(st[i])
if len(a)==0:
    print(-1)
else:
    for i in range(len(a)):
        print(a.pop(),end="")


