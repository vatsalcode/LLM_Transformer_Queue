class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascal = []

        for i in range(numRows):
            if i == 0:
                array = [i + 1] 
                pascal.append(array)  
            else:
                array = [0] + array + [0]
                array = [sum(array[i:i+2]) for i in range(len(array)-1)]
                pascal.append(array) 
        return pascal
