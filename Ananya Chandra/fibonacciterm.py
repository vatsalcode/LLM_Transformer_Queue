# to print nth term of fibonacci series
def fib(n):
    if (n == 1 or n == 2):
        return 1
    else:
        return (fib(n - 1) + fib(n - 2))

n=int(input("Enter the number:\n"))
print(fib(n))


