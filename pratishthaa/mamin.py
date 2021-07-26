import math
import os
import random
import re
import sys
n=int(input())
k=int(input())
l=sorted([int(input()) for _ in range(n)])
print(min([abs(l[i+k-1]-l[i]) for i in range(n-k+1)]))
