from string import ascii_lowercase as asc_lower
def check(s):
    return set(asc_lower) - set(s.lower()) == set([])
strng=raw_input("Enter string:")
if(check(strng)==True):
      print("The string is a pangram")
else:
      print("The string isn't a pangram")
