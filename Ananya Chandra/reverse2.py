#reverse a string using stack
S = input("Enter the string\n")
stack=[]
for i in S:
    stack.append(i)
l=len(stack)
for i in range(l):
    print(stack.pop(), end="")
