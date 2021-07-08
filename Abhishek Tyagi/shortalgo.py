def selectionSort(arr):
	for i in range(len(arr)):
		min_idx = i
		# finding smalles element in (i+1,n)
		for j in range(i + 1, len(arr)):
			if arr[j] < arr[min_idx]:
				min_idx = j
			# swapping smallest with ith element
			arr[i], arr[min_idx] = (arr[min_idx], arr[i])
	return arr

def bubbleSort(arr):
	for i in range(len(arr)-1):
		swapped = False
		for j in range(len(arr)-i-1):
			if arr[j] > arr[j+1]:
				arr[j], arr[j+1] = (arr[j+1], arr[j])
				swapped = True
		if swapped == False:
			break
	return arr

def insertionSort(arr): 
	for i in range(1, len(arr)): 
		key = arr[i] 
        	j = i-1
        	while j >=0 and key < arr[j] : 
                	arr[j+1] = arr[j] 
                	j -= 1
        	arr[j+1] = key
	
	return arr

def mergeArrs(arr, left_half, right_half):

	k = 0; i = 0; j = 0

	while i < len(right_half) and j < len(left_half):

		if left_half[i] <= right_half[j]:
			arr[k] = left_half[i]
			i += 1
		else:
			arr[k] = right_half[j]
			j += 1
		k += 1

	while i < len(left_half) and k < len(arr):
		arr[k] = left_half[i]
		k += 1; i += 1

	while j < len(right_half) and k < len(arr):
		arr[k] = right_half[j]
		k += 1; j += 1

	return arr

def mergeSort(arr):
	
	if len(arr) == 1:
		return
	
	left_half = arr[:len(arr) // 2]
	right_half = arr[len(arr) // 2:]

	mergeSort(left_half)
	mergeSort(right_half)

	return mergeArrs(arr, left_half, right_half)

def naivePartition(arr, low, high, p):
	pivot = arr[p]
	temp = [0] * (high - low + 1); k = 0
	for i in range(low, high + 1):
		if arr[i] <= pivot:
			temp[k] = arr[i]; k += 1
	for i in range(low, high + 1):
		if arr[i] > pivot:
			temp[k] = arr[i]; k += 1
	new_idx = 0
	for i in range(low, high + 1):
		arr[i] = temp[i - low]
		if arr[i] == pivot:
			new_idx = i

	return arr, new_idx

def lomutoPartition(arr, low, high):
	pivot = arr[high]
	windowLimit = low - 1
	for j in range(low, high):
		if arr[j] < pivot:
			windowLimit += 1
			arr[windowLimit], arr[j] = (arr[j], arr[windowLimit])
	arr[windowLimit + 1], arr[high] = (arr[high], arr[windowLimit + 1])

	return arr, windowLimit + 1

def quickSort(arr, low, high):
	if low >= high:
		return
	arr, pivot_idx = lomutoPartition(arr, low, high)
	quickSort(arr, low, pivot_idx - 1)
	quickSort(arr, pivot_idx + 1, high)

