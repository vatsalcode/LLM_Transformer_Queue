

import math
import os
import random
import re
import sys


def miniMaxSum(arr):
    print(sum(arr)-max(arr),sum(arr)-min(arr))                

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))           

    miniMaxSum(arr)                                          
