#1
#1 2
#1 2 3
#1 2 3 4
#1 2 3 4 5
#1 2 3 4 5 ...n
def pattern(n):
    for i in range(n):
        for j in range(i+1):
            print(f"{j+1} ", end='')
        print()
        

def size():
    s = int(input("Enter the number of rows: "))
    pattern(s)


size()
