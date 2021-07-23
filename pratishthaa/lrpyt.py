#!/bin/python3

import math
import os
import random
import re
import sys

n, d = map(int, input().split())
arr = [int(x) for x in input().split()]

for i in range(d):
    arr.append(arr[i])
    
for x in arr[d:]:
    print(x, end=' ')
