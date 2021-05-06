def is_vowel(character):
    if character.lower() in ['a', 'e', 'i', 'o', 'u']: 
        return True
    else:  
        return False
  

def adjacent_pairs(string):
    string=string.lower()
    n=len(string)
    count = 0
    for i in range(0,n):
        if ((is_vowel(string[i]) and is_vowel(string[i + 1]))): 
            count += 1
    return count

string=input("enter string")
print (adjacent_pairs(string),"is the number of adjacent pairs of vowels")
  
