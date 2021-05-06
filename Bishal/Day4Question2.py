#1
#1  3
#1  3   5
#1  3   5   7
#1  3   5   7   ...
rows = int(input("Enter the number of rows: "))
for i in range(rows):
    c = 1
    for j in range(i+1):
        print(c, end=' ')
        c += 2
    print()
    
