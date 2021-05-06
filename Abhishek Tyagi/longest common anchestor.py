

class Solution:
    def lowestCommonAncestor(self, root, p, q):
        
        if p==q:
            return p
        
        self.val = None
        self.d   = -1
        
        def dfs(n,d):
            res = 0
            if n and d>self.d:
                res  = n in [p,q]
                res += dfs(n.left ,d+1)
                res += dfs(n.right,d+1)
                
                if res == 2 and d > self.d:
                    self.val = n
                    self.d   = d

            return result
        
        dfs(root,0)
        return self.val

