#Importing palin module from Baseclass module for Palindrome check
from Baseclass import palin
number = int(input("Enter the number for palindrome check:\n"))
flag = palin(number)
if flag:
    print(f"Yep, {number} is a Palindrome Number.")
else:
    print(f"{number} is a non-Palindrome Number.")
