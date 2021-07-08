#print prime factorisation of a number
n= int(input("enter the number \n"))

def prime(t, j):
    if(j<t):
        if(t%j!=0):
            return prime(t, j=j + 1)
        else:
            return 0
    else:
        return 1

i=2
while(n>1):
    if (prime(i, 2) == 1):
        while n % i == 0:
            print(i, ",",end="")
            n=n/i
    i+=1
