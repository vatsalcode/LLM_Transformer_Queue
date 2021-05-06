import math
def divisors(n):
    i=1
    divs = []
    while(i*i <=n):
        if (n%i == 0):
            divs.append(i)
        i+=1
    while(i>=1):
        if(n%i ==0):
            divs.append(n//i)
        i-=1
    return divs

import math
def isPrime(n):
    if n == 1 or n == 0:
        return False
    elif n == 2 or n == 3:
        return True
    elif n%2 == 0 or n%3 == 0:
        return False
    else:
        for i in range(5, round(math.sqrt(n)) + 1, 6):
            if n%i == 0 or (n+2)%i == 0:
                return False
        return True

def gcd(a,b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

count_digits = lambda n: math.floor(math.log10(n) + 1)

def reverse(n):
    l = count_digits(n)
    if n == 0:
        return 0
    else:
        return ((n % 10)*(10 ** l)) + reverse(n/10)

def countZeros(n):
    res = 0
    i=5
    while(i<=n):
        res += n//i
        i *= 5
    return res
print(countZeros(10))

