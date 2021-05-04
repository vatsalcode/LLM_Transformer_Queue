# check if a number can be represented as a sum of 2020 and 2021
T= int(input("Enter the number of test cases\n"))
for i in range(T):
    n= int(input())
    if n==0:
        print("NO")
    else:
        c=0
        while(n>=2020):
            n=n-2020
            c+=1
        if n<=c:
            print("YES")
        else:
            print("NO")
