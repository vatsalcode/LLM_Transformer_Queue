#program for disarium number
st=input("enter the number \n")
l=len(st)
n=int(st)
t=n
s=0
while t>0 :
    r=t%10
    s=s+(r**l)
    l-=1
    t=t//10

if(s==n):
    print(n,"is a disarium number")
else:
    print(n,"is not a disarium number ")

