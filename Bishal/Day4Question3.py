#      1
#    1 2 1
#  1 2 3 2 1
#1 2 3 4 3 2 1
#...
c = int(input("Enter the number of rows: "))
for i in range(c):
    c -= 1
    for k in range(c):
        print(" ", end=' ')
    for j in range(i+1):
        print(j+1, end=' ')
    while j >= 1:
        print(j, end= ' ')
        j -= 1

    print()
    
