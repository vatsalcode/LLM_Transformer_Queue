def add(x,y):
    return(x+y)

def sub(x,y):
    return(x-y)

def mutiply(x,y):
    return(x*y)

def division(x,y):
    return(x/y)

print(" welcome to python calculator")
print("+ for addition")
print("- for subtraction")
print("* for multiplication")
print("/ for division")
choice = input(" enter the operator")
num1=int(input(" first number"))
num2=int(input(" second number"))

if choice=="+":
    print(add(num1,num2))
if choice=="-":
    print(sub(num1,num2))
if choice=="*":
    print(mutiply(num1,num2))
if choice=="/":
    print(division(num1,num2))
else:
    print("invalid choice")
