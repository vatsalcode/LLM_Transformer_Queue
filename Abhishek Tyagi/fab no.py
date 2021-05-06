def fib(n):
    if n == 0 or n == 1:
        return n
    
    a = 0
    b = 1
    for i in xrange(n-1):
        c = a + b
        a = b
        b = c
     
    return b

class Solution(object):
    def fib(self , N):
        return fib(N)
        

