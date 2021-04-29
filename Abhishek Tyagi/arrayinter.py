def rainwater(arr):
    water = 0
    for i in range(1, len(arr)-1):
        rmax = max(arr[i:])
        lmax = max(arr[:i+1])
        water += min(rmax, lmax) - arr[i]
    return water

def rainwaterOn(arr):
    lmax = [0 for i in range(len(arr))]
    rmax = [0 for i in range(len(arr))]
    lmax[0] = arr[0]
    rmax[-1] = arr[-1]
    for i in range(1, len(arr)):
        lmax[i] = max(lmax[i-1], arr[i])
    for i in reversed(range(0, len(arr)-1)):
        rmax[i] = max(rmax[i+1], arr[i])
    res = 0
    for i in range(1, len(arr)-1):
        res += min(lmax[i], rmax[i]) - arr[i]

    return res


def equillibrium(arr):
    total = sum(arr)
    leftsum = 0
    for i in range(len(arr)):
        rightsum = total - arr[i] - leftsum
        if leftsum == rightsum:
            return i
        else:
            leftsum += arr[i]

def majority(arr):
    for i in range(len(arr)):
        if arr.count(arr[i]) > len(arr)//2:
            return i
    return -1


def MurraysVotingAlgorithm(arr):
    res = 0
    count = 1
    for i in range(1, len(arr)):
        if arr[res] == arr[i]:
            count += 1
        else:
            count -= 1
        if count == 0:
            res = i
            count = 1
    if arr.count(arr[res]) > len(arr)//2:
        return res
    else:
        return -1

import sys
def maxksum(arr,k):
    res  = - sys.maxsize
    for i in range(k, len(arr)+1):
        res = max(res, sum(arr[i-k: i])) # O(k)
    return res

def SlindingWindow(arr, k):
    # sum of first window elements:
    currsum = sum(arr[:k]); maxsum = currsum
    for i in range(k, len(arr)):
        currsum += arr[i] - arr[i-k]
        maxsum = max(currsum, maxsum)
    return maxsum

def findSubarraySum(arr, n, sumval):
    curr_sum = arr[0]; start = 0
    for i in range(1, len(arr)+1):
        while (curr_sum > sumval and start < i-1):
            curr_sum -= arr[start]
            start += 1
        if (curr_sum == sumval):
            print("Sum found between indexes %d and %d", start, i-1)
            return True
        if (i < n):
            curr_sum += arr[i]
    print("No subarray found")
    return False
def nBonacci(n, m):
    a = [0 for i in range(m)]
    a[n-1] = 1; a[n] = 1
    for i in range(n+1, m):
        a[i] = 2 * a[i - 1] - a[i - n - 1]
    return a

def prefixsum(arr):
    for i in range(1, len(arr)):
        arr[i] = arr[i-1] + arr[i]
    return arr

def sumqueries(arr):
    arr = prefixsum(arr)
    ip = input("Enter start and end: ").split(" ")
    start = int(ip[0]); end = int(ip[1])
    start = 0 if start == 0 else start - 1
    return arr[end] - arr[start]

def maxInNranges(x,y):
    n = len(x)
    maxOcc = [0 for _ in range(1000)]
    for i in range(n):
        maxOcc[x[i]] += 1
        maxOcc[y[i]+ 1] -= 1
    maxOcc = prefixsum(maxOcc)
    return maxOcc.index(max(maxOcc))

import sys
def maxSumNaive(arr):
    res = - sys.maxsize
    for i in range(0, len(arr)):
        currsum = arr[i]
        for j in range(i+1,len(arr)):
            currsum += arr[j]
            res = max(res, currsum) 
    return res

def KadanesAlgorithm(arr):
    maxEndingSum = arr[0]
    maxSubarraySum = 0
    for i in range(1, len(arr)):
        maxEndingSum = max(maxEndingSum + arr[i], arr[i])
        maxSubarraySum = max(maxSubarraySum, maxEndingSum)
    return maxSubarraySum

def evenOddSubarraySumN(arr):
    res = 0
    for i in range(len(arr)):
        count = 0
        for j in range(i+1, len(arr)):
            if((arr[j-1] % 2 == 0 and arr[j] % 2 != 0) or (arr[j-1] % 2 != 0 and arr[j] % 2 == 0)):
                count += 1
        res = max(res, count)
    return res

def evenOddSubarraySum(arr):
    count = 1; maxcount = 1
    for i in range(1, len(arr)):
        if((arr[i-1] % 2 == 0 and arr[i] % 2 != 0) or (arr[i-1] % 2 != 0 and arr[i] % 2 == 0)):
            count += 1
            maxcount = max(count, maxcount)
        else:
            count = 1
    return maxcount

def circularSubarraySum1(arr):
    res = arr[0]
    for i in range(0, len(arr)):
        currsum = 0
        for j in range(1, len(arr)):
            idx = (i+j) % len(arr) 
            currsum += arr[idx] 
        res = max(res, currsum)
    return res

def circularSubarraySum(arr):
    normalMaxSubarraySum = KadanesAlgorithm(arr = arr) 
    total = sum(arr)
    normalMinSubarraySum = KadanesAlgorithm(arr = [-i for i in arr])
    return max(normalMaxSubarraySum, total + normalMinSubarraySum)
