
class Solution:
    def invertTree(self, root):
        if root:
            root.left, root.right = (self.invertTree(root.right), self.invertTree(root.left))
        
        return root
