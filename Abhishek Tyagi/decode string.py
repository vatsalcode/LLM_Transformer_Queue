class Solution:
  def decodeString(self, s: str) -> str:
        l = []
        i=0     
        while (i< len(s)):
            if s[i] != "]": 
                l.append(s[i])
            else:          
                t=""        
                while (l[-1]!="["): 
                    t =l.pop(-1)+t
                l.pop(-1) 
                n=""  
                while (l and l[-1].isnumeric()): 
                    n= l.pop(-1)+n
                
                t= t*int(n)  
                l.append(t)  
            i+=1
            
        # print(l)
        return ''.join(l)
