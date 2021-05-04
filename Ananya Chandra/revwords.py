#reverse order of words of a string 
str=input("Enter the string\n")
str=str+" "
t=0
a=[]
a.append("")
for i in str:
    if i==" ":
        t=t+1
        a.append("")
    else:
        a[t]=a[t]+i
for i in range(t+1):
    print(a.pop(),end=" ")
