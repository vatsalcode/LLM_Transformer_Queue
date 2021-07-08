#print sum of digits of a number
def sum(r):
    if r> 0:
        return r % 10 + sum(r // 10)
    else:
        return r % 10


n=int(input("Enter the number \n"))
print( sum(n))

