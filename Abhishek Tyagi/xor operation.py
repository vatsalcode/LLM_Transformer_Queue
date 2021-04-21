from functools import reduce
class Solution:
    def xorOperation(self,n: int, start: int) -> int:
        nums=[]  
        for i in range(n):  
            m=start+(2*i)
            nums.append(m) 
            
        res = reduce(lambda x, y: x ^ y, nums) 
        return(res)
 
