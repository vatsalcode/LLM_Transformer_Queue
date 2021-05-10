

def icecreamParlor(m, arr):
    s={}
    for i in range (len(arr)):
        if m-arr[i] in s:
            return [s[m-arr[i]],i+1]
        else:
            s[arr[i]]=i+1
