#1
#1  3
#1  3   5
#1  3   5   7
#1  3   5   7   ...
for i in range(5):
    c = 1
    for j in range(i+1):
        print(c, end=' ')
        c += 2
    print()
    
