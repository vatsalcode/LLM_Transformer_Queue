class Solution(object):
    def numSmallerByFrequency(self, queries, words):
        
        queries_list=[self.calculateFrequency(i) for i in queries]
        words_list=[self.calculateFrequency(i) for i in words]
            
        res=[]
        
        num=0
        while num<len(queries_list):             
            count=0
            for j in words_list:
                if queries_list[num]<j:
                    count+=1
            num+=1
            res.append(count)
            
        return res
            
        
    def calculateFrequency(self,text):          
        text = sorted(text)
        count=collections.Counter(text)

        return count[text[0]]                    
