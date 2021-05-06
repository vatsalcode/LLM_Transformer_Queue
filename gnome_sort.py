def gnome_sort(arr):
    

    size = len(arr)

    if size <= 1:
        return arr
    ind = 0
    while ind < size:
        if ind == 0:
            ind += 1
        elif arr[ind] >= arr[ind - 1]:
            ind += 1
        else:
            # swap
            temp = arr[ind - 1]
            arr[ind - 1] = arr[ind]
            arr[ind] = temp
            ind -= 1

    return arr
