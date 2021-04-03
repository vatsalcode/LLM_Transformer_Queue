def flickingif(n):
    if not(n > 0):
        print(f"{n} is positive.")
    elif not(n < 0):
        print(f"{n} is negative.")
    else:
        print(f"{n} is Zero.")


no = int(input("Enter a number: "))
flickingif(no)
