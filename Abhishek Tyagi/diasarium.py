num=int(input("Enter the no."))
sum=0
j=1
temp=num
while(temp!=0):
    rem=temp%10
    sum=sum*10+rem
    temp=int(temp/10)
temp=sum
sum=0
while(temp!=0):
    rem=temp%10
    sum=sum+pow(rem,j)
    temp=int(temp/10)
    j=j+1
if sum==num:
    print("Number is disarium no.")
else:
    print("Number is not disarium no.")
