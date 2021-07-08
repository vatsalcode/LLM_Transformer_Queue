def binarySearchIterative(arr, k):
    l = 0; r = len(arr) - 1
    while l<=r:
        mid = (l + r) // 2
        if arr[mid] == k:
            return mid
        if k < arr[mid]:
            r = mid - 1
        if k > arr[mid]:
            l = mid + 1
    return -1

def binarySearchRecursive(arr, l, r, k):
    if l <= r:
        mid = (l + r) // 2
        if arr[mid] == k:
            return mid
        if k < arr[mid]:
            return binarySearchRecursive(arr, l, mid - 1, k)
        if k > arr[mid]:
            return binarySearchRecursive(arr, mid + 1, r, k)
    return -1

def ternarySearchIterative(arr, k):
    l = 0; r = len(arr) - 1
    while l <= r:
        mid1 = l + (r - l) // 3
        mid2 = r - (r - l) // 3
        if arr[mid1] == k:
            return mid1
        elif arr[mid2] == k:
            return mid2
        elif k < arr[mid1]:
            r = mid1 - 1
        elif k > arr[mid2]:
            l = mid2 + 1
        else:
            l = mid1 + 1
            r = mid2 - 1
    return -1


def ternarySearchRecursive(arr, l, r, k):
    if l <= r:
        mid1 = l + (r - l) // 3
        mid2 = r - (r - l) // 3
        if arr[mid1] == k:
            return mid1
        elif arr[mid2] == k:
            return mid2
        elif k < arr[mid1]:
            return ternarySearchRecursive(arr, l, mid1 - 1, k)
        elif k > arr[mid2]:
            return ternarySearchRecursive(arr, mid2 + 1, r, k)
        else:
            return ternarySearchRecursive(arr, mid1 + 1, mid2 - 1, k)
    return -1




