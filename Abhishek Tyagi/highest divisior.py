

from sys import exit
number = int(input())                  
test = 10
while test > 0:
    if (number % test) == 0:      
        print(test)
        exit(0)
    test -= 1
