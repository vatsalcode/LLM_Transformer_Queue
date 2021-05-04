#performing operations on a string
print("Enter the no. of characters and the no. of operations\n")
n=int(input())
m=int(input())
st=input("Enter the string\n")
t=[]
ans=[]
temp=""
r=""
p=""
print("enter the operations")
for i in range(m):
   t.append(input())
   if(t[i][0]=="1"):
       for j in range(n):
           if j==int(t[i][1])-1:
               p=p+ t[i][2]
           else:
               p=p+st[j]
       st=st.replace(st,p)
   elif t[i][0]=="2":
       a=int(t[i][1])-1
       b = int(t[i][2])
       temp=st[a:b]
       for j in temp:
           r=j+r
       if r==temp:
           ans.append("YES")
       else:
           ans.append("NO")
   r=""
   p=""
for i in ans:
    print(i)
