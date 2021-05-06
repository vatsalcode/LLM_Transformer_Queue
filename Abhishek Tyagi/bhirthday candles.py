

import math
import os
import random
import re
import sys


def birthdayCakeCandles(candles):
    # Write your code here
    
    # finding the tallest candle
    tallest=max(candles)
    
    # finding the count of tallest candle
    count=candles.count(tallest)
    
    # returning the count
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    candles_count = int(input().strip())

    candles = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(candles)

    fptr.write(str(result) + '\n')

    fptr.close()
