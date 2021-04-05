#1  
#2  3  
#4  5  6  
#7  8  9  10  
#11 12 13 14 15 
#16 17 18 19 20 21 
#22 23 24 25 26 27 28 
#29 30 31 32 33 34 35 36 
def pattern():
    c = 0
    for i in range(int(input("Enter the number of rows: "))):
        for j in range(i+1):
            c += 1
            if c <= 10:
                print(f"{c} ", end=' ')
            else:
                print(f"{c}", end = ' ')
        print()


pattern()
