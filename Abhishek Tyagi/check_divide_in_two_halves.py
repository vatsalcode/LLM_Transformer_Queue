class Node:

    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def count(root):
    if not root:
        return 0
    return count(root.left) + count(root.right) + 1


def check_util(root, n):
    if root == None:
        return False
    
    if count(root) == n - count(root):
        return True
    
    return check_util(root.left, n) or check_util(root.right, n)


def check(root):
    n = count(root)
    return check_util(root, n)


root = Node(5)
root.left = Node(1)
root.right = Node(6)
root.left.left = Node(3)
root.right.left = Node(7)
root.right.right = Node(4)

print(check(root))
