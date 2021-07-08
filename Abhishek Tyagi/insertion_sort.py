def insertion_sort(lst):
    for i in range(1,len(lst)):
        while(i > 0 and lst[i] < lst[i - 1]):
            lst[i], lst[i - 1] = lst[i -  1], lst[i]
            i -= 1
    return lst

test_data  = [5,9,4,27,3,6]
print(insertion_sort(test_data))

test_data  = ['f','b','z','a','x']
print(insertion_sort(test_data))

