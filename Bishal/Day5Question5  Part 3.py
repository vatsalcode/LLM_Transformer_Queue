#Importing Baseclass module for Prime Palindrome check
import Baseclass
number = int(input("Enter the number for prime-palin check:\n"))
flag = Baseclass.prime(number)
flag1 = Baseclass.palin(number)
if flag and flag1:
    print(f"Yep, {number} is Prime-Palindrome.")
elif flag:
    print(f"{number} is only Prime.")
elif flag1:
    print(f"{number} is only Palindrome.")
else:
    print(f"{number} is neither Prime nor Palindrome.")
