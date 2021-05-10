lis = [1,2,3,4,5,6,7,8,9]
lis.insert(3, 54)
lis.append(10)
lis.remove(9)
lis[2] = 24
for i in lis: i
lis[::-1]

import array as a 
arr = a.array('i', lis)
arr.insert(len(arr), 11)
arr.remove(arr[5])
arr[3] = 69
for i in arr: i
arr[::-1]

sorted(arr)

arr.index(69)

max(arr)
min(arr)


def leftRotateby1(arr):
    temp = arr[0]
    for i in range(1,len(arr)):
        arr[i-1] = arr[i]
    arr[len(arr)-1] = temp
    return arr

def leftRotatebyD(arr, d):
    arr = arr[0:d][::-1] + arr[d:]
    arr = arr[0:d] + arr[d:][::-1]
    arr = arr[::-1]
    return arr


def removedups1(arr):
    res = []
    for i in arr:
        if i not in res: 
            res.append(i)
    return len(res)

def removedups2(arr):
    res = a.array('i', [0 for i in range(len(arr))])
    res[0] = arr[0]
    k = 1
    for i in arr:
        if res[k-1] != i:
            res[k]=i
            k += 1
    return k 

def removedups3(arr):
    res = 1
    for i in range(1, len(arr)):
        if arr[res-1] != arr[i]:
            arr[res] = arr[i]
            res += 1
    return res


import sys
def max2(arr):
    fmax = max(arr) 
    smax = - sys.maxsize
    for i in arr: 
        if smax < i and i != fmax:
            smax = i
    return fmax, smax


def moveZeros(arr):
    count = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[i], arr[count] = (arr[count], arr[i])
            count += 1
    return arr


def leader(arr):
    curr_leader = arr[-1]
    print(curr_leader)
    for i in range(len(arr)-2,-1,-1):
        if arr[i] > curr_leader:
            curr_leader = arr[i]
            print(curr_leader)



def maxdiff1(arr):
    if len(arr) % 2 != 0:
        arr1 = arr[:(len(arr)//2)+1]
        arr2 = arr[(len(arr)//2):]
    else:
        arr1 = arr[:(len(arr)//2)]
        arr2 = arr[(len(arr)//2):]
    return max(arr2) - min(arr1)

def maxdiff2(arr):
    diff = arr[1] - arr[0] 
    minval = arr[0] 
    for i in range(2, len(arr)):
        diff = max(diff, arr[i]- minval)
        minval = min(minval, arr[i])
    return diff



def max1(arr):
    res = 0
    for i in range(0, len(arr)):
        count = 0
        if arr[i] == 1:
            for j in range(i, len(arr)):
                if arr[j] == 1:
                    count += 1
                else:
                    break
        res = max(res, count)
    return res

def max1opt(arr):
    count = 0; res = 0
    for i in range(0,len(arr)):
        if arr[i] == 0:
            count = 0
        else:
            count += 1
            res = max(res, count)
    return res
    



def freqsorted(arr):
    count = 0
    arr.append(-1)  
    for i in range(1, len(arr)):
        if arr[i-1] == arr[i]:
            count += 1
        else:
            print(arr[i-1], count+1)
            count = 0



def pairSum(arr, k, start, end):
    l  = start; r = end
    while l < r :
        s = arr[r] + arr[l]
        if s == k:
            return True
        elif s < k:
            l += 1
        else:
            r -= 1
    return False

def tripletSum(arr, k):
    for i in range(len(arr)):
        if pairSum(arr, k - arr[i], i + 1, len(arr) - 1):
            return True
    return False


def stocks(arr):
    profit = 0
    for i in range(1, len(arr)):
        if arr[i] > arr[i-1]:
            profit += arr[i] - arr[i-1]
    return profit
