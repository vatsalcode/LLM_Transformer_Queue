def merge_sort(arr):
    if len(arr) >1:
        mid = len(arr)//2 
        L = arr[:mid] 
        R = arr[mid:] 

        merge_sort(L) 
        merge_sort(R) 

        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1

        while i < len(L):
            arr[k] = L[i]
            i+=1
            k+=1

        while j < len(R):
            arr[k] = R[j]
            j+=1
            k+=1

test_array = [10,30,20,100,40,80,90,210,34]

merge_sort(test_array)

print(test_array)

