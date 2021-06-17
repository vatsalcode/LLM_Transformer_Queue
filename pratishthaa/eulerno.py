import math
n=int(input("Enter the number of terms: "))
sum1=1
for i in range(1,n+1):
    sum1=sum1+(1/math.factorial(i))
print("The sum of series is",round(sum1,2))
