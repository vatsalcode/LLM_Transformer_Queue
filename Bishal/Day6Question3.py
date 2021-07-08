def secondlargest(n):
    lists = list(int(num) for num in input().strip().split())
    temp = [lists[0]]
    for i in range(1, n):
        c = 0
        for j in range(i):
            if lists[i] == lists[j]:
                c += 1
                break
        if c != 1:
            temp.append(lists[i])
    temp.sort()
    temp.sort()
    print(temp[len(temp)-2])
    print(temp)


runner(int(input()))
