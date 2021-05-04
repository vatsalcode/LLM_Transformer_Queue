# to print  fibonacci series till the nth term(including it)
def fib(n):
    if (n == 1 or n == 2):
        return 1
    else:
        return (fib(n - 1) + fib(n - 2))

n=int(input("Enter the number:\n"))
for i in range(1,n+1):
    print(fib(i),end=",")
