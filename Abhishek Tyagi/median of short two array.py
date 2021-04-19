import math
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1.extend(nums2) 
        nums1.sort() 
        if(len(nums1)%2==0): 
            mid=int(len(nums1)/2)
            return (nums1[mid]+nums1[mid-1])/2
        else:
            mid=math.ceil(len(nums1)/2) 
            return nums1[mid-1]
