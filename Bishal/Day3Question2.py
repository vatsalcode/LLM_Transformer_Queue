def listings():
    n = int(input("Please enter the upper limit:\n"))
    squares = []
    for i in range(1, n+1):
        squares.append(i**2)
    print(f"The squares of the numbers from 1 to {n} are:\n{squares}")


listings()
