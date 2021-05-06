# 3,12,33,72...
# 1^3+2,2^3+4,3^3+6,
n= int(input("enter the number of terms to be found \n"))
answers=[]
for i in range(1,n+1):
    answers.append((i**3)+2*i)

print(answers)
