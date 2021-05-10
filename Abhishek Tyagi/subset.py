
def subsets(nums):
    def subsets(self, nums: List[int]) -> List[List[int]]:
    result = []
    sub = []
    
    def helper(i):
        if i >= len(nums):
            result.append(sub.copy())
            return 
        
        sub.append(nums[i])
        helper(i+1)
        
        sub.pop()
        helper(i+1)
        
    helper(0)
    return result

inputs = int(input("Enter the number of unique elements: "))
input_string = input("Enter the elements seperated by space: ")
ElementList = input_string.split()

list(set(ElementList)) 

print(subsets(ElementList))
