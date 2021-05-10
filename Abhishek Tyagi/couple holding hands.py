
class Solution:
    def minSwapsCouples(self, array: List[int]) -> int:
        i=0
        ans=0
        n=len(array)
        while i<n:
            if array[i]%2==0:               
                if array[i+1]==array[i]+1: 
                    i+=2
                    continue
                else:
                    index=i+1                    
                    while array[index]!=array[i]+1:
                        index+=1
                    temp=array[index]
                    array[index]=array[i+1]
                    array[i+1]=temp
                    i+=2
                    ans+=1
            if array[i]%2!=0:                  
                if array[i+1]==array[i]-1:
                    i+=2
                    continue
                else:                                
                    index=i+1
                    while array[index]!=array[i]-1:
                        index+=1
                    temp=array[index]
                    array[index]=array[i+1]
                    array[i+1]=temp
                    i+=2                       
                    ans+=1
        return (ans)
