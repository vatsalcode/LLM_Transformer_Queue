#Arranging Students of a Class in ascending order and assigning them roll numbers
def names(name):
    name.sort()
    print("Roll No.\t  Names")
    for i in range(len(name)):
        print(f"{i+1}.\t\t\t   {name[i]}")
    
    
def names_input(n):
    na = []*n
    print(f"Enter the name of {n} students:")
    for i in range(n):
        na.append(input(f"Student {i+1} - "))
    names(na)
    

size = int(input("Enter how many students are to be admitted: "))    
names_input(size)
