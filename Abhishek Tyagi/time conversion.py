import os
import sys


def timeConversion(s):
    if s[-2]=='P':                                  
        if s[0:2]=='12':
            s=s[0:8]
        else:
            s=str(int(s[0:2])+12)+s[2:8]
    else:
        if s[0:2]=='12':
            s='00'+ s[2:8]
        else:
            s=s[0:8]
    return s

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()                                     

    result = timeConversion(s)                       

    f.write(result + '\n')                          

    f.close()
