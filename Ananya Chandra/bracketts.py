#Examine whether brackets (),{},[] are in order in an expression
st= input("Enter the expression\n")
ans=[]
c=0
for i in st:
    if i =="(" or i =="[" or i =="{" :
        ans.append(i)
    else:
        if ans==[]:
            c=0
            print(False)
            break
        else:
            t=ans.pop()
            if (t=="(" and i!=")") or (t=="[" and i!="]") or (t=="{" and i!="}"):
                c=0
                print("False")
                break
            else:
                c=1
if c==1:
    print(True)
