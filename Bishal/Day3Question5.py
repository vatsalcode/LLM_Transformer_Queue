#A class of 15 students after arranging the names in ascending order has to be grouped in three groups
def grouping(lists):
    lists.sort()
    list1 = lists[0:5]
    list2 = lists[5:10]
    list3 = lists[10:15]
    print("The students are: ")
    print("Roll No.\t  Names")
    for i in range(len(lists)):
        print(f"{i + 1}.\t\t\t   {lists[i]}")
    print("Group 1:")
    print("Roll No.\t  Names")
    for i in range(len(list1)):
        print(f"{i + 1}.\t\t\t   {list1[i].lower().title()}")
    print("Group 2:")
    print("Roll No.\t  Names")
    for i in range(len(list2)):
        print(f"{i + 6}.\t\t\t   {list2[i].lower().title()}")
    print("Group 3:")
    print("Roll No.\t  Names")
    for i in range(len(list3)):
        print(f"{i + 11}.\t\t\t   {list3[i].lower().title()}")


def names():
    name = []*15
    print("Enter the name of 15 students: ")
    for i in range(15):
        name.append(input())
    grouping(name)


names()
