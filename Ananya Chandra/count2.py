#count number of numbers before n in series 1,4,9,16,...n
n= int(input("Enter the number\n"))
i=1
c=0
while i*i<n:
    c+=1
    i+=1
print(c)
