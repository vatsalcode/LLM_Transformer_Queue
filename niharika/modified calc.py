def add(x,y):
 return(x+y)

def subtract(x,y):
 return(x-y)

def multiply(x,y):
 return(x*y)
def divide(x,y):
 return(x/y)
def power(x,y):
 return(x**y)
while(True):

 print("Welcome to the Python Calculator\n")
 print("+ for addition")
 print("- for subtraction")
 print("* for multiplication")
 print("/ for division")
 print("^ for power")
 choice=input("Choose the operation:- ")
 if(choice=="q"):
 break

 if choice in ('+','-','*','/'):
 num1=float(input("Enter Number 1:- "))
 num2=float(input("Enter Number 2:- "))
 if(choice=="+"):
 print(num1 ,"+" ,num2, "=",add(num1,num2))
 if(choice=="-"):
 print(subtract(num1,num2))
 if(choice=="*"):
 print(multiply(num1,num2))
 if(choice=="/"):
 if num2 == 0:
 print("Can't divide by 0 ")
 else:
 print(divide(num1,num2))
 if(choice=="^"):
 print(power(num1,num2))

 else:
 print("invalid Operator choice")

 print("\n")
