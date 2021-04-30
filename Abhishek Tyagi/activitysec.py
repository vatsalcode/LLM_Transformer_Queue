

def print_max_activities(s, f):
    n = len(f)

    i = 0
    print(i, end=' ')

    for j in range(n):
        if s[j] >= f[i]:
            print(j, end=' ')
            i = j
