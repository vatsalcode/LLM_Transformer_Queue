# sum of unique elements of array
try:
    arr= []
    print(" Enter the integer inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    unique=[]
    repeat=[]
    s=0
    for i in arr:
        if i  not in unique:
            unique.append(i)
            s=s+i
        elif i not in repeat :
            repeat.append(i)
            s=s-i
    for i in repeat:
        unique.remove(i)
    print("The unique elements are ",unique)
    print("The sum is : ",s)

