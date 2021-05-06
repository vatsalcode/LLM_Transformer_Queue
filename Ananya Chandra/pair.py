#count no. of pairs of prime and composite numbers that can be formed between a given range
def prime(n,i):
    if i<n:
        if n%i==0 :
            return 1+prime(n,i+1)
        else:
            return prime(n,i+1)
    else:
        return 0
T= int(input("Enter the number of test cases \n"))
print("Enter the range")
ans=[]
for i in range(T):
    r=input().split()
    r[0]=int(r[0])
    r[1] = int(r[1])
    p=0#stores no. of prime numbers
    c=0# stores no. of composite numbers
    for j in range(r[0],r[1]+1):
        if prime(j,1)==1:
            p+=1
        else:
            c+=1
    ans.append(p*c)
print(ans)
