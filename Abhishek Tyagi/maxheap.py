
def heapify(A):
    n = len(A) - 1
    for node in range(n/2, -1, -1):
        __shiftdown(A, node)
    return

def push_heap(A, val):
    A.append(val)
    __shiftup(A, len(A) - 1)   
    return

def pop_heap(A):
    n = len(A) - 1
    __swap(A, 0, n)
    max = A.pop(n)
    __shiftdown(A, 0)
    return max

def replace_key(A, node, newval):
    curval  = A[node]
    A[node] = newval
    if newval > curval:
        __shiftup(A, node)
    elif newval < curval:
        __shiftdown(A, node)
    return

def __swap(A, i, j):
    A[i], A[j] = A[j], A[i]
    return

def __shiftdown(A, node):
    child = 2*node + 1
    if child > len(A) - 1:
        return
    if (child + 1 <= len(A) - 1) and (A[child+1] > A[child]):
        child += 1
    if A[node] < A[child]:
        __swap(A, node, child)
        __shiftdown(A, child)
    else:
        return

def __shiftup(A, node):
    parent = (node - 1)/2
    if A[parent] < A[node]:
        __swap(A, node, parent)
    if parent <= 0:
        return
    else:
        __shiftup(A, parent)
