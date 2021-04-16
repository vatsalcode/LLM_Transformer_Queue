class Solution:
    def numTeams(self, rating: List[int]) -> int:
        total = 0
        
        for i in range(len(rating)):
                                                           
            l = 0
            for j in range(i):
                if rating[j] < rating[i]:
                    l += 1
            
            r = 0                                        
            for k in range(i+1,len(rating)):
                if rating[i] < rating[k]:
                    r += 1
            
            total += l*r + (i-l)*(len(rating)-1-i-r)      
            
        return total
