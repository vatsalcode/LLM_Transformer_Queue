def cycleSortDistinct(arr):
    n = len(arr)
    for i in range(n):
        item = arr[i]
        count = i
        for j in range(i + 1, n):
            if arr[j] < item:
                count += 1
        arr[count], item = item, arr[count]
        while(count != i):
            count = i
            for j in range(i + 1, n):
                if arr[j] < item:
                    count += 1
            arr[count], item = item, arr[count]
            
def cycleSortDuplicates(arr):
    n = len(arr)
    for i in range(n):
        item = arr[i]
        count = i
        for j in range(i + 1, n):
            if arr[j] < item:
                count += 1
        if count == i:
            continue
        else:
            while item == arr[count]:
                count += 1
            arr[count], item = item, arr[count]
        while(count != i):
            count = i
            for j in range(i + 1, n):
                if arr[j] < item:
                    count += 1
            while arr[count] == item:
                count += 1
            arr[count], item = item, arr[count]


def countSort(arr, k):
    count_arr = [0] * k
    for i in arr:
        count_arr[i] += 1
    for i in range(1,k):
        count_arr[i] += count_arr[i-1]
    res = [0] * len(arr)
    for i in reversed(range(len(arr))):
        res[count_arr[arr[i]] - 1] = arr[i]
        count_arr[arr[i]] -= 1
    arr = res
    del count_arr, res
    return arr

def bucketSort(arr, numOfBuckets = 4):
    n = len(arr)
    m = max(arr) + 1
    buckets = [[None] for _ in range(numOfBuckets)]
    result = []
    for i in range(n):
        buckets[(numOfBuckets * arr[i]) // m].append(arr[i])
    for b in buckets:
        result += sorted(b[1:])
    return result

