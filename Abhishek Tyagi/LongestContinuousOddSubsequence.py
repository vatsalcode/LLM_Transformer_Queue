

def longest_continuous_odd_subsequence(array):
    final_list = []
    temp_list = []
    for i in array:
        if i%2 == 0:
            if temp_list != []:
                final_list.append(temp_list)
            temp_list = []
        else:
            temp_list.append(i)

    if temp_list != []:
        final_list.append(temp_list)

    result = max(final_list, key=len)
    print(result, len(result))

if __name__ == '__main__':
    array = [2, 6, 8, 3, 9, 1, 5, 6, 1, 3, 5, 7, 7, 1, 2, 3, 4, 5]
    longest_continuous_odd_subsequence(array)
