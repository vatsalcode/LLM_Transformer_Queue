# check if a number is a multiple of 3
def digisum(n):
    if n>0:
        return n%10+digisum(n//10)
    else:
        return 0
n= int(input("Enter the number\n"))
t=digisum(n)
if t%3==0 :
    print("Multiple of 3")
else:
    print("Not a multiple of 3")
