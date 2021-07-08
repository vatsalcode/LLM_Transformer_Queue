st=input("enter the string\n")
st=st.lower()
c=0
for i in range(97,123):
    if chr(i) in st:
        c+=1
    else :
        break
if c==26:
    print("PANGRAM EXISTS")
else:
    print("PANGRAM DOESN'T EXIST")
