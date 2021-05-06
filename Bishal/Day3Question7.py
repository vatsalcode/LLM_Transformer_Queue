#1
#2 2
#3 3 3
#4 4 4 4
#5 5 5 5 5
#n n n n n n ...
def pattern(n):
    for i in range(n):
        for j in range(i+1):
            print(f"{i+1} ", end='')
        print()


def size():
    s = int(input("Enter the number of rows: "))
    pattern(s)


size()
