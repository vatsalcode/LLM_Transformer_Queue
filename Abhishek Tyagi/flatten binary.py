class Solution(object):
    def flatten(self, root):
        stack = []
        while root or stack:
            if root.left and root.right:
                stack.append(root.right)
                root.right = root.left
                root.left = None
                root = root.right
            elif root.left:
                root.right = root.left
                root.left = None
                root = root.right
            elif root.right:
                root = root.right
            else:
                if stack:
                    root.right = stack.pop()
                root = root.right
        return
