def pattern__generator(n):
    spaces = 2*n - 2
    for i in range(0,n):
        for _ in range(0, spaces):
            print(end=" ")
        spaces = spaces - 2
        for _ in range(0, i+1):
            print("+ ",end="")
        print("\r")
