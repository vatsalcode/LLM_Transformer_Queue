# all possible permutations of a string
from itertools import permutations
st=input("Enter the string\n")
l= len(st)
def fact(n):
    if n==1 or n==0:
        return 1
    else:
        return n*fact(n-1)
count = fact(l)
print(count)
combi=permutations(st)
for i in list(combi):
    print(''.join(i))
