class Node:

    def __init__(self, val):
        self.val = val
        self.right = None
        self.left = None


def evaluate(root):
    if root is None:
        return 0

    if root.left is None and root.right is None:
        return int(root.data)

    left_sum = evaluate(root.left)

    right_sum = evaluate(root.right)

    if root.data == '+':
        return left_sum + right_sum

    elif root.data == '-':
        return left_sum - right_sum

    elif root.data == '*':
        return left_sum * right_sum

    else:
        return left_sum / right_sum
