def deladdnumb():
    n = int(input("Enter the number of numbers you wanna enter: "))
    li = []
    print(f"Enter {n} numbers:")
    for i in range(n):
        li.append(int(input()))
    temp = [li[0]]
    for i in range(1, n):
        c = 0
        for j in range(i):
            if li[i] == li[j]:
                c += 1
        if c != 1:
            temp.append(li[i])
    print(f"Before Deletion: {li}")
    print(f"After Deletion: {temp}")


deladdnumb()
