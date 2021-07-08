def is_rotate_string(A, B):
    
    len_a = len(A)
    len_b = len(B)
    if len_a != len_b:
        return False
    if len_a == 0:
        return True
    for i in range(len_a):
        A = A[-1:] + A[:-1]
        if A == B:
            return True
    return False


print(is_rotate_string('abcde', 'cdeab'))
print(is_rotate_string('abcde', 'abced'))
