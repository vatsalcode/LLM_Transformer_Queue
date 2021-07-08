def reverse(s):
    i = 0
    j = len(s) - 1
    
    while i < j:
        if s[i].isalnum() and s[j].isalnum():
            s[i], s[j] = s[j], s[i]
            i += 1
            j -= 1
        if not s[i].isalnum():
            i += 1
        if not s[j].isalnum():
            j -= 1
    return ''.join(s)


s = 'a#bcd#efg'
print(s)
print(reverse(list(s)))
