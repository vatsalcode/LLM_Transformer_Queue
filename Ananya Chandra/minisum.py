#given an array of digits(0 to 9) find the minimum possible sum of two numbers formed by these digits.Each should be used only once to form two numbers
n= int(input("Enter the size of array\n"))
a=[]
print("Enter the array inputs")
for i in range(n):
    a.append(int(input()))
a.sort()
one=0
two=0
for i in range(len(a)):
    if i%2==0:
        one=one*10+a[i]
    else:
        two=two*10+a[i]

print(one+two)

