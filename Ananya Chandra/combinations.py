# no. of combinations of a binary string that start and end with 1
T=int(input("Enter number of test cases\n"))
ans=[]
for i in range(T):
    l= int(input("Enter length of input\n"))
    S=input("Enter the binary string\n")
    c = 0
    t = 0
    count=0
    temp = ""
    subl = 1  # subarray length
    while subl <= l:
        for i in range(0, subl):
            temp = temp + S[t]
            t += 1
        c+=1
        l1=len(temp)-1
        if temp[0] == "1" and temp[l1] == "1":
            count += 1
        temp=""
        if (t == (l)):
            subl += 1
            t = 0
            c = 0
        else:
            t = c

    ans.append(count)
    count=0
for i in ans:
    print(i)




