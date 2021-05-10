def palindrome(s, start, end):
    if start >= end:
        return True
    else:
        return (s[start] == s[end]) and palindrome(s, start+1, end-1)

def rope(n,a,b,c):
    if n < 0:
        return -1
    elif n == 0:
        return 0
    else:
        res = max(rope(n-a,a,b,c),rope(n-b,a,b,c),rope(n-c,a,b,c))
        return -1 if res == -1 else res + 1

res = [] # global variable
def genSub(s, curr="", index=0):
    if index == len(s):
        res.append(curr)
        return
    else:
        genSub(s, curr = curr, index = index+1)
        genSub(s, curr = curr + s[index], index = index+1)

def swap(s,i,j):
    s = list(s)
    s[i],s[j] = (s[j],s[i])
    s = "".join(s)
    return s 

def permute(s, i=0):
    if i == len(s)-1:
        print(s)
        return
    else:
        for j in range(i, len(s)):
            permute(s=swap(s, i, j), i = i+1)

def binary_to_gray( n ): 
    if not(n): 
        return 0
    a = n % 10
    b = int(n / 10) % 10
    if (a and not(b)) or (not(a) and b): 
        return (1 + 10 * binary_to_gray(int(n / 10))) 
    return (10 * binary_to_gray(int(n / 10)))
