# Enter your code here. Read input from STDIN. Print output to STDOUT

from sys import stdin

def f(a, b):
    print int(a)/int(b)
    print float(a)/b
    
a = int(stdin.readline())
b = int(stdin.readline())

f(a, b)
