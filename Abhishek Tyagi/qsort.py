def qsort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr.pop()
    greater, lesser = [], []
    for item in arr:
        if item > pivot:
            greater.append(item)
        else:
            lesser.append(item)
    return qsort(lesser) + [pivot] + qsort(greater)
