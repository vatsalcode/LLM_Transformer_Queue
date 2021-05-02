


def candies(n, arr):
    # First distribute 1 candies to every child.
    candies = [1] * len(arr)
    # left -> right
    for i in range(len(arr)-1):
        # Taking in account the right of the current child having greater rating
        if arr[i] < arr[i+1]:
            candies[i+1] = max(candies[i+1], candies[i] + 1)
    # right -> left
    # Traversing in the reverse order to take into account the left of the current child having greater ranking
    for i in reversed(range(1, len(arr))):
        if arr[i] < arr[i-1]:
            candies[i-1] = max(candies[i-1], candies[i] + 1)
    # Return total number of candies required.
    return sum(candies)
