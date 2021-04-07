#Inheriting Baseclass.py to for Prime Check
import Baseclass
number = int(input("Enter the number for prime check:\n"))
flag = Baseclass.prime(number)
if flag:
    print(f"Yep, {number} is a Prime Number.")
elif number == 1:
    print(f"{number} is neither Prime nor Composite.")
else:
    print(f"{number} is Composite.")
