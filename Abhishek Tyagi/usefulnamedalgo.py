import math
def soe(n):
    primes = [True for i in range(0, n + 1)]
    primes[0] = False
    primes[1] = False
    # i-loop
    for i in range(2, round(math.sqrt(n)) + 1): 
        if primes[i]: 
           # j-loop
            for j in range(i*i, n+1, i):
                primes[j] = False
    return [i for i in range(0, n+1) if primes[i]]

def gcd(A,B):
    if B == 0:
        return A
    else:
        return gcd(B, A%B)
def findpow(n, factors):
    res = []
    for i in factors:
        count = 0
        a=n
        while(a >= i):
            if a % i == 0:
                count += 1
            a = a/i
        res.append((i,count))
    return res

def compute(n):
    prime_factors = findpow(n, [i for i in soe(n) if n%i == 0])
    Dn = 1
    Sn = 1
    for i in prime_factors:
        pk,ek = i
        Dn *= (ek+1)
        Sn *= (pk**(ek+1) - 1)//(pk - 1)
    
    return Dn,Sn

def e(x, p=1.0, f=1.0, n=10):
    if n == 0:
        return s
    else:
        return (p/f) + e(x, p = p*x, f = f*n, n-1)



