#to remove adjacent  duplicate characters in a string
st= " " + input("Enter the string\n") # adding space so that the first character not being printed is a space
l=len(st)
def duplicates(i,a):
    if i<l:
        if st[i]!=a:
            return st[i]+duplicates(i+1,st[i])
        else:
            return duplicates(i+1,st[i])
    else:
        return ""

print(duplicates(0,st[0]))


