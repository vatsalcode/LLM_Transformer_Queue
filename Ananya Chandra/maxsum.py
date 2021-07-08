#maximised sum of array
try:
    arr= []
    print(" Enter the integer inputs(even in number) and type 'stop' when you are done\n" )
    #user should enter even number of inputs
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l=len(arr)
    arr.sort()

    s=0
    for i in range(0,l//2):
       s=s+arr[l-2-(2*i)]
       print(arr[l-2-(2*i)])
    print("The maximized sum is ",s)

