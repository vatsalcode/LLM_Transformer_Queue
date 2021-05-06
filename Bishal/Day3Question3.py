# Printing elements of a list using index number
def listings(li):
    for i in range(len(li)):
        print(f"{i + 1}. {li[i]}")


# Printing elements using method 2
def listings1(li1):
    c = 1
    print()
    for i in range(-len(li1), -1):
        print(f"{c}. {li1[i]}")
        c += 1


# Sorting the list and printing the elements in sorted reverse order
def listings2(li2):
    print()
    li2.sort(reverse=True)
    for i in range(len(li2)):
        print(f"{i + 1}. {li2[i]}")


# Inserting elements in a list
def listings3(li3):
    print()
    pos = int(input("Enter the position where you want to insert the element: "))
    if isinstance(pos, int):
        if pos > len(li3):
            print("Sorry, the limit has exceed.\nProcess has ended")
        elif pos < 1:
            print("Sorry, the limit is less.\nProcess has ended")
        else:
            li3.insert(pos - 1, int(input("Enter the number you wanna enter: ")))
            print(f"After insertion:\nThe final list stands as follows: {li3}")
    else:
        print("Error: 'The position must be an integer value.'")


# Inserting elements in a list
def listing():
    n = int(input("Enter how many numbers you want to enter in the list:\n"))
    print(f"Enter {n} numbers:")
    l = [] * n
    for i in range(0, n):
        l.append(int(input()))
    return l


lists = listing()
listings(lists)
listings1(lists)
listings2(lists)
listings3(lists)
