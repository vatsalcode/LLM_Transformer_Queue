#a string in lowercase is repeated infinite number of times . count number of times "a" occurs in the first n numbers of this infinite string 

st=input("Enter the string(in lowercase)\n")
n=int(input("Enter number of characters to consider\n"))
c=st.count("a")
l=len(st)
a=(n//l)*c
b=st.count("a",0,n%l)
print(a+b)
