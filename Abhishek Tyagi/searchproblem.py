def binarySearchFirstOcc(arr, low, high, k):
    if low <= high:

        mid = (low + high) // 2

        if arr[mid] == k:
            if mid == 0 or arr[mid - 1] != arr[mid]:
                return mid
            else:
                return binarySearchFirstOcc(arr, low, mid - 1, k)

        if arr[mid] < k:
            return binarySearchFirstOcc(arr, mid + 1, high, k)

        if arr[mid] > k:
            return binarySearchFirstOcc(arr, low, mid - 1, k)
    else:
        return -1 

def binarySearchLastOcc(arr, low, high, k):
    if low <= high:
        mid = (low + high) // 2

        if arr[mid] == k:
            if mid == len(arr) - 1 or arr[mid + 1] != arr[mid]:
                return mid
            else:
                return binarySearchLastOcc(arr, mid + 1, high, k)

        if arr[mid] < k:
            return binarySearchLastOcc(arr, mid + 1, high, k)

        if arr[mid] > k:
            binarySearchLastOcc(arr, low, mid - 1, k)
    else:
        return -1
def countOcc(arr, k):
    firstOcc = binarySearchFirstOcc(arr, 0, len(arr) - 1, k)
    lastOcc = binarySearchLastOcc(arr, 0, len(arr) - 1, k)
    if firstOcc != -1 and lastOcc != -1:
        return lastOcc - firstOcc + 1
    else:
        return -1

def binarySearchInf(arr, k):
    uppbound = 1
    while arr[uppbound] < k:
        uppbound *= 2
    low = 0; high = uppbound
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == k:
            return mid
        elif arr[mid] < k:
            low = mid + 1
        else:
            high = mid - 1
    return -1

def binarySearchRotArr(arr, k):
    low = 0; high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] ==  k:
            return mid
        if (arr[0] < arr[mid]) and (k <= arr[mid] and k >= arr[0]):
            high = mid - 1
        else:
            low = mid + 1
    return -1


def sqrootBS(x):
    low = 0; high = x - 1
    while low <= high:
        mid = (low + high) // 2
        sq = mid*mid
        if sq == x:
            return mid
        elif sq > x:
            high = mid - 1
        else:
            low = mid + 1
            ans = mid
    return ans

def peakElement(arr):
    low = 0; high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        c1 = mid == 0 or arr[mid - 1] <= arr[mid]
        c2 = mid == len(arr) - 1 or arr[mid + 1] <= arr[mid]
        if c1 and c2:
            return mid
        elif arr[mid - 1] >= arr[mid]:
            high = mid - 1
        else:
            low = mid + 1
    return - 1 
  
def miss_rep_optimal(n, arr):
    countarr = [0] * n
    for i in range(len(arr)):
        countarr[arr[i]] += 1
    for i in countarr:
        if i == 0:
            yield 
        if i > 1:
            yield 
