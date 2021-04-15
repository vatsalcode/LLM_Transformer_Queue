class Solution:
    def inorderTraversal(self, root):

        if not root:
            return root
        
        res = []                                                        
            
        if root.left:
            res += self.inorderTraversal(root.left)         
        
        if root:                                           
            res.append(root.val)
        
        if root.right:
            res += self.inorderTraversal(root.right)        

        return res                                          
        
