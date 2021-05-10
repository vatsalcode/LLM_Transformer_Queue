class Solution(object):
    def count_sub(self,s,low,high):
        count=0
        while(low>=0 and high<len(s)):
            if(s[low]!=s[high]):
                break
            
            low-=1
            high+=1
            
            count+=1
        
        return count
    
    def countSubstrings(self, s):
        result=0
        n=len(s)
        
        for i in range(n):
            result+=self.count_sub(s,i,i)
            
            result+=self.count_sub(s,i,i+1)
        
        return result 
