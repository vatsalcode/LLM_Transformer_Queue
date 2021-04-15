class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:        
        def dfs(root):                                                              
            if not root:
                return
            dfs(root.left)
            l.append(root.val)                                                     
            dfs(root.right)
        l=[]                                                                      
        dfs(root1)
        dfs(root2)
        return sorted(l)                                                           
