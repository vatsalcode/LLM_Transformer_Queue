def toggle_string_1(string):
    return string.swapcase()

def toggle_string_2(string):
    toggle_string=''
    for s in string:
        if s.isupper():
            toggle_string+=s.lower()
        elif s.islower():
            toggle_string+=s.upper()
        else:
            toggle_string+=s
    return toggle_string

string=input()

print(toggle_string_1(string)) 
print(toggle_string_2(string))
