
class Solution(object):
    def kthFactor(self, n, k):
        
        l=[]
        for i in range(1,n+1):
            if (n%i==0):
                l.append(i)
        sorted(l)

        if(len(l)<k):
            return -1;
        return l[k-1]
    
