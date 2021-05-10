def palin(n,m):
    if n<l//2:
        if arr[n]==arr[m]:
            return palin(n+1,m-1)
        else:
            return False
    else:
        return True



try:
    arr= []
    print(" Enter the array inputs and type 'stop' when you are done\n" )

    while True:
        arr.append(int(input()))

except:# if the input is not-integer, just continue to the next step
    l= len(arr)
    if palin(0,l-1):
        print("PALINDROME")
    else:
        print("NOT PALINDROME")

