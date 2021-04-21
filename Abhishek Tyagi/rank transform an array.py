class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        
        lst = arr[:]
        
        lst=sorted(lst)
        
        prev=float('inf')
        rank=0
        
        mapping = dict()
        
        for i in lst:
            if i==prev:
                mapping[i]=rank
            
            else:
                rank+=1
                mapping[i]=rank
                prev=i
        
        ranks = []
        
        for i in arr:
            ranks.append(mapping[i])
            
        return ranks
