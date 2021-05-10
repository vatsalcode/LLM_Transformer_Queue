class Node:

    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def continuous(root):
    if root is None:
        return True
    
    if root.left == None and root.right == None:
        return True

    if root.left == None:
        return (abs(root.val - root.right.val) == 1) and continuous(root.right)

    if root.right == None:
        return (abs(root.val - root.left.val) == 1) and continuous(root.left)

    return (abs(root.val - root.right.val) == 1) and (abs(root.left.val - root.val) == 1) and continuous(root.left) and continuous(root.right)

