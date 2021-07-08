#to check if given string has an anagram which is also palindrome
st=input("Enter the string\n")
t=""
n=[]
l= len(st)
c=0
for  i in st:
    if i in t:
        r=t.index(i)
        n[r]+=1
    else:
        t=t+i
        n.append(1)
for i in n:
    if i%2!=0:
        c+=1

if l%2==0 and c==0:
    print("YES")
elif l%2!=0 and c==1 :
    print("YES")
else:
    print("NO")
