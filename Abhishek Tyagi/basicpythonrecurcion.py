def binary(n):
    if n == 0:
        return

    binary(n // 2)
    print(n % 2, end=" ")
    
def oneToN(n):
    if n == 0:
        return

    oneToN(n-1)
    print(n)


def nTo1(n):
    if n == 0:
        return

    print(n)
    nTo1(n-1)

def factorial(n,k=1):

    if n ==1 or n == 0:
        return k
    else:
        return factorial(n-1, n*k)

def fib(n):
    if n==0 or n==1:
        return n 
    else:
        return fib(n-1) + fib(n-2)

def natsum_NTR(n):
    return 0 if n == 0 else (n + natsum_NTR(n-1))

def natsum_TR(n,k=0):
    return k if n == 0 else natsum_TR(n-1, n+k)

def digisum_NTR(num):
    return 0 if num == 0 else (num%10 + digisum_NTR(num//10))


def digisum_TR(num, k=0):
    return k if num == 0 else digisum_TR(num//10, k + num%10)

