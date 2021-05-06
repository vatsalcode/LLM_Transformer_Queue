#count the number of times a pattern appears in a string
st=input("Enter the string\n")
n= len(st)
k=int(input("Enter the number of patterns\n"))
s=[]
for i in range(0,k):
   s.append(input())
for i in s:
    print(st.count(i))
