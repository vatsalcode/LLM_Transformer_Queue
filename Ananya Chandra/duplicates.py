numbers=[0,0,1,1,1,2,2,3,3,4]
unique=[]
for number in numbers:
    if number not in unique:
        unique.append(number)
print(unique)
