

import math
import os
import random
import re
import sys

def gradingStudents(grades):
    lst=[] 
    for x in grades:
        if x>=38: 
            y=x//5
            z=(y+1)*5 
            if z-x<=2:
                lst.append(z) 
            else:
                lst.append(x) 
        else:
            lst.append(x) 
    return lst            
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
