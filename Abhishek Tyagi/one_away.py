def is_one_away(str1, str2):
    edit_counter = 0
    i = 0 
    j = 0 

    if abs(len(str1) - len(str2)) > 1:
        return False

    while i < len(str1) and j < len(str2):
        if str1[i] != str2[j]:
            if edit_counter > 0:
                return False
            edit_counter += 1

            if len(str1) > len(str2):
                i += 1
                continue
            elif len(str1) < len(str2):
                j += 1
                continue
        i += 1
        j += 1

    if (i < len(str1) or j < len(str2)) and edit_counter > 0:
        return False

    return True

str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
print(is_one_away(str1, str2))
