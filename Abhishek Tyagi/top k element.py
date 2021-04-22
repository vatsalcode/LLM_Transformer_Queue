class Solution(object):
    def topKFrequent(self, nums, k):
        
        items = {}
        for item in nums:
            if items.has_key(item):
                items[item]+=1
            else:
                items[item]=1

        a1 = sorted(items.iteritems(), key=lambda asd:asd[1], reverse=True)
        # a2 is empty list
        a2 = []

        for key in range(len(a1)):
            a2.append(a1[key][0])
        
        return a2[0:k]

