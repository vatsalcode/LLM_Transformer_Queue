# determine unique number

n=input("Enter the number \n")
c=0
for i in n:
    for j in n:
        if(i==j):
            c+=1
    if c>1:
        print("not a unique number")
        break
    else:
        c=0
if(c<=1):
    print("unique number")
