#largest sum of a subarray
try:
    arr= []
    print(" Enter the integer inputs and type 'stop' when you are done\n" )
    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l=len(arr)
    sub=[]
    maxarr=[]
    max=0
    t = 0
    c = 0
    s = 0
    index=0
    subl = 1  # subarray length
    while subl <= l:
        for i in range(0, subl):
            s = s + arr[t]
            sub.append(arr[t])
            t += 1
        c += 1
        if(s>max):
            max=s
            maxarr=sub
        s=0
        sub=[]

        if (t == (l)):
            subl += 1
            t = 0
            c = 0
        else:
            t = c
    print(maxarr," has tha largest sum ",max)

