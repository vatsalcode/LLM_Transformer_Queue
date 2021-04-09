#Permutations for i, j, k but i+j+k must not be equal to n and the combination must not be taken into consideration
def co(i, j, k, n):
    for a in range(i+1):
        for b in range(j+1):
            for c in range(k+1):
                d = []
                if a+b+c != n:
                    d.append(a)
                    d.append(b)
                    d.append(c)
                    print(d)
                else:
                    continue

            
co(int(input()), int(input()), int(input()), int(input()))
