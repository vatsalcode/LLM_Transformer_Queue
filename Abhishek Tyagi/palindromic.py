 def countPalindromicSubsequences(self, S):
        def cache(start, end):         
            if end <= start + 2:          
                return end - start
            
            if (start, end) not in check: 
                check[(start, end)] = DFS(start, end)
                
            return check[(start, end)]
        
        def DFS(start, end): 
            count = 0
            segment = S[start:end]
            
            for x in 'abcd':
                try:
                    i = segment.index(x) + start 
                    j = segment.rindex(x) + start 
                except:
                    continue
                    
                count += cache(i+1, j) + 2 if i != j else 1

            return count % 1000000007
                
        check = {}
        return cache(0, len(S))
