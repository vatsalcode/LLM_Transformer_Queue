class Solution:
    def numberOfArithmeticSlices(self, A: List[int]) -> int:
        m = [0]*len(A)  
        for i in range(0,len(A)-2):
            if (A[i]-A[i+1])==(A[i+1]-A[i+2]):  
                m[i+2] = m[i+1]+1
        return sum(m)
      
      
