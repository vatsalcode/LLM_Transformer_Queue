def josephus(n, k):
    if n == 1:
        return 0
    else:
        return (josephus(n-1,k) + k) % n

count = []
def subsets(arr, sumval, curr = [], index= 0):
    if index == len(arr):
        if sumval == sum(curr):
            count.append(True)
    else:
        subsets(arr = arr,
                sumval = sumval, 
                curr = curr, 
                index = index + 1)

        new_elem = arr[len(arr) - index - 1]
        subsets(arr = arr,
                sumval = sumval, 
                curr = curr + [new_elem], 
                index = index + 1)
        


def countSubsets(arr, index, sumval):
    if index == 0:
        return 1 if sumval == 0 else 0
    else:
        return (countSubsets(arr, index = index - 1, sumval = sumval)
                + countSubsets(arr, index = index - 1, sumval = sumval + arr[index-1]))


def TOH(n, source = "A", auxillary = "B", destination = "C"):

    if n == 1:
        print("Move 1 from {0} to {1}".format(source, destination))
        return

    else:
        TOH(n-1, source = source, auxillary = destination, destination = auxillary)
        
        print("Move {0} from {1} to {2}".format(n, source, destination))

        TOH(n-1, source = auxillary, auxillary = source, destination = destination)
