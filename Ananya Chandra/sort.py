#sort numbers of array to the count of set bits in their binary representation
def binary(n):
    if n>0:
        if n%2==1:
            return 1+binary(n//2)
        else:
            return binary(n//2)
    else:
        return 0
try:
    arr= []
    print(" Enter the integer array inputs and type 'stop' when you are done\n" )

    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l= len(arr)
    ans=[]
    count=[]
    for i in range(l):
        c=binary(arr[i])
        for j in count:
            p=count.index(j)
            if j<c:
                count.insert(p,c)
                ans.insert(p,arr[i])
                break
            elif j==count[len(count)-1]:
                count.append(c)
                ans.append(arr[i])
                break
        if c not in count:
            count.append(c)
            ans.append(arr[i])


print(ans)



