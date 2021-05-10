#return sum of all odd length  sub array 
try:
    arr= []
    print(" enter the positive integer inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l = len(arr)
    t=0
    c=0
    s=0 # to store the sum
    subl=1 #subarray length
    while subl<=l:
        for i in range(0,subl):
            s=s+arr[t]
            t+=1
        c+=1
        if(t==(l)):
            subl += 2
            t=0
            c=0
        else:
            t=c
    print(s)





