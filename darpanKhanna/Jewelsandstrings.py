T = int(input())
while T > 0:
    J = input()
    S = input()
    count = 0
    for i in S:
        if i in J:
            count += 1
    print(count)
    T -= 1
