#to reverse a string
st = input("Enter the string\n")
st= " "+st
l= len(st)
def reverse(i,t):
    if i>=0:
        t=st[i]+t
        if st[i]==" ":
            return t+reverse(i-1,"")
        else:
            return reverse(i-1,t)

    else:
        return ""


print(reverse(l-1,""))
