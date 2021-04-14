import math
import os
import random
import re
import sys

def staircase(n):
    for i in range(n):
        for j in range(n):                 
            if j>=n-i-1:         
                print("#",end="")
            else:
                print(" ",end="")
        print()                 
    

if __name__ == '__main__':
    n = int(input())

    staircase(n)

