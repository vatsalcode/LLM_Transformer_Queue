

def longest_increaing_subsequence(myList):
    lis = [1] * len(myList)
    elements = [0] * len(myList)

    for i in range (1 , len(myList)):
        for j in range(0 , i):
            if myList[i] > myList[j] and lis[i]< lis[j] + 1:
                lis[i] = lis[j]+1
                elements[i] = j

    idx = 0

    maximum = max(lis)              
    idx = lis.index(maximum)

    
    seq = [myList[idx]]
    while idx != elements[idx]:
        idx = elements[idx]
        seq.append(myList[idx])

    return (maximum, reversed(seq))

myList = [10, 22, 9, 33, 21, 50, 41, 60]
ans = longest_increaing_subsequence(myList)
print ('Length of lis is', ans[0])
print ('The longest sequence is', ', '.join(str(x) for x in ans[1]))

