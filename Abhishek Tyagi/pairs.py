import math
import os
import random
import re
import sys



def pairs(k, a):
    a.sort()
    left = 0
    right = 1   
    answer = 0
    while right < len(a):
        val = a[right]-a[left]
        if val == k:
            answer += 1     
            left += 1
            right += 1
        elif val < k:
            right += 1
        else:
            left += 1
            if left == right:
                right += 1

    return answer

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = raw_input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = map(int, raw_input().rstrip().split())

    result = pairs(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
