def mergeNaiveLists(arr1, arr2):
    arr1.extend(arr2)
    return sorted(arr1)

def mergeNaiveArr(arr1, arr2):
    res = [0]*(len(arr1)+len(arr2))
    res_idx = 0
    for i in range(len(arr1)):
        res[res_idx] = arr1[i]
        res_idx += 1
    for i in range(len(arr2)):
        res[res_idx] = arr2[i]
        res_idx += 1
    return sorted(res)

def merge2arr(a, b):
    i = 0; j = 0
    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            print(a[i])
            i += 1
        else:
            print(b[j])
            j += 1
    while i < len(a):
        print(a[i]); i += 1
    while j < len(b):
        print(b[j]); j += 1
    
def intersectionNaive(a1, a2):
    for i in range(len(a1)):
        if i > 0 and a1[i - 1] == a1[i]:
            continue
        else:
            if a1[i] in a2:
                print(a1[i])
                
def intersectionSet(a1, a2):
    a1 = set(a1)
    a2 = set(a2)
    a1 = a1.intersection(a2)
    for i in a1:
        print(i)

def intersection(a1, a2):
    i = 0; j = 0
    m = len(a1); n = len(a2)
    while i < m and j < n:
        if i > 0 and a1[i - 1] == a1[i]:
            i += 1
            continue
        if a1[i] == a2[j]:
            print(a1[i])
            i += 1
            j += 1
        elif a1[i] < a2[j]:
            i += 1
        else:
            j += 1
def union(a1, a2):
    i = 0; j = 0
    m = len(a1); n = len(a2)
    while i < m and j < n:
        if i > 0 and a1[i - 1] == a1[i]:
            i += 1; continue
        if j > 0 and a2[j - 1] == a2[j]:
            j += 1; continue
        if a1[i] < a2[j]:
            print(a1[i]); i += 1
        elif a2[j] < a1[i]:
            print(a2[j]); j += 1
        else:
            print(a1[i])
            i += 1; j += 1
    while i < m:
        if i > 0 and a1[i - 1] != a1[i]:
            print(a1[i])
        i += 1
    while j < n:
        if j > 0 and a2[j - 1] != a2[j]:
            print(a2[j])
        j += 1

def unionSet(a1, a2):
    a1 = set(a1)
    a2 = set(a2)
    a1 = a1.union(a2)
    for i in a1:
        print(i)
def countInversionNaive(arr):
    count = 0 
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr)):
            if arr[i] > arr[j]:
                count += 1
                print(arr[i], arr[j])
    return count

def countInversions(arr):
    temp_arr = [0]* len(arr)
    return _mergeSort(arr, temp_arr, 0, len(arr) - 1)

def _mergeSort(arr, temp_arr, left, right):
    inv_count = 0
    if left < right:
        mid = (left + right)//2
        inv_count += _mergeSort(arr, temp_arr, left, mid)
        inv_count += _mergeSort(arr, temp_arr, mid + 1, right)
        inv_count += merge(arr, temp_arr, left, mid, right)
    return inv_count

def merge(arr, temp_arr, left, mid, right):
    i = left     
    j = mid + 1  
    k = left     
    inv_count = 0
    while i <= mid and j <= right:
        if arr[i] <= arr[j]:
            temp_arr[k] = arr[i]; i += 1
        else:
            temp_arr[k] = arr[j]; j += 1
            inv_count += (mid - i + 1)
        k += 1
    while i <= mid:
        temp_arr[k] = arr[i]; k += 1; i += 1
    while j <= right:
        temp_arr[k] = arr[j]; k += 1; j += 1
    for i in range(left, right + 1):
        arr[i] = temp_arr[i]

    return inv_count

def kthsmallest(arr, k):
    low = 0; high = len(arr) - 1
    while low <= high:
        p = lomutoPartition(arr, low, high)
        if k - 1 == p:
            return p
        elif k - 1 < p:
            high = p - 1
        else:
            low = p + 1
            
def lomutoPartition(arr, low, high):
  
    pivot = arr[high] 
    i = low - 1
    for j in range(low, high):
        if arr[j] < pivot:
            arr[i + 1], arr[j] = arr[j], arr[i + 1]
            i += 1
    arr[i + 1], pivot = pivot, arr[i + 1]
    return i + 1

def chocDist(arr, m):
    arr.sort()
    min_val = arr[m - 1] - arr[0]
    for i in range(1, len(arr)):
        min_val = min(min_val, arr[i + m - 1] - arr[i])
    return min_val

def sort2types(arr):
    p = max(arr)
    i = -1
    for j in range(len(arr)):
        if arr[j] < p:
            arr[i + 1], arr[j] = arr[j], arr[i + 1]
            i += 1
    return arr

def sort3types(arr):
    low = 0; high = len(arr) - 1; mid = 0
    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low = low + 1
            mid = mid + 1
        elif arr[mid] == 1:
            mid = mid + 1
        else:
            arr[mid], arr[high] = arr[high], arr[mid]
            high = high - 1
    return arr
