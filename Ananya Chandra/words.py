#to print words of a camelcase string seperate and print the number of these words
st= input("Enter the string \n")
st=st+"A"
t=0
c=0
l= len(st)
for i in range(1,l):
    if ord(st[i])>=65 and ord(st[i])<=90:
        print(st[t:i])
        t=i
        c+=1

print(c)
