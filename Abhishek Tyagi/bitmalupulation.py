def two_odd_occur(arr):
    xor = 0
    for i in arr:
        xor ^= i
    rsb = xor & (~ ( xor - 1 ))
    group1 = 0; group2 = 0
    for i in arr:
        if i & rsb != 0:
            group1 ^= i
        else:
            group2 ^= i

    return group1, group2

print(two_odd_occur([3, 4, 3, 4, 5, 4, 4, 6, 7, 7]))

from functools import reduce
def one_odd_occurr(arr):
    return reduce(lambda a,b: a^b, arr)

def pow_of_2(n):
    return bool(n & (n-1) == 0)


