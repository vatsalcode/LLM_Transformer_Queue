#first 50 terms of fibonacci series 0,1,1,2,3,5....

def fibonacci(n):
    if (n==1):
        return 0
    elif (n==2):
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)

for i in range(1,51):
    print(fibonacci(i),",",end="")
