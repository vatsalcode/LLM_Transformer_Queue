import array 

arr = array.array('i', [1, 2, 3, 1, 2, 5]) 

print ("Array before updation : ", end ="") 
for i in range (0, 6): 
	print (arr[i], end =" ") 

print ("\r") 

arr[2] = 6
print("Array after updation : ", end ="") 
for i in range (0, 6): 
	print (arr[i], end =" ") 
print() 

arr[4] = 8
print("Array after updation : ", end ="") 
for i in range (0, 6): 
	print (arr[i], end =" ") 
