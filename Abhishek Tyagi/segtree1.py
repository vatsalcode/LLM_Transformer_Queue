class SegmentTree:
    def __init__(self, values):
        self.valarr = values
        self.arr = dict()


    def buildTree(self, start, end, node):
        if start == end:
            self.arr[node] = self.valarr[start]
            return
        mid = (start+end)//2
        self.buildTree(start, mid, node*2)
        self.buildTree(mid+1, end, node*2+1)
        self.arr[node] = self.arr[node*2]+self.arr[node*2+1]

    def rangeQuery(self, node, start, end, l, r):
        if (l <= start and r >= end):
            return self.arr[node]
        if (end < l or start > r):
            return 0
        mid = (start+end)//2
        return self.rangeQuery(2*node, start, mid, l, r) + self.rangeQuery(2*node+1, mid+1, end, l, r)

    def update(self, node, newvalue, oldvalue, position, start, end):
        if start <= position <= end:
            self.arr[node] += (newvalue-oldvalue)
        if start != end:
            mid = (start+end)//2
            self.update(node*2, newvalue, oldvalue, position, start, mid)
            self.update(node*2+1, newvalue, oldvalue, position, mid+1, end)

if __name__ == '__main__':
    l = list(map(int, input("Enter the elements of the array separated by space:\n").split()))
    st = SegmentTree(l)
    st.buildTree(0, len(l)-1, 1)

    baseindex = 1
    endindex = len(l)

    print(st.arr)

    print("Sum of numbers from index 3 and 5 is: ", st.rangeQuery(1, baseindex, endindex, 3, 5))

    updateindex = 3
    updatevalue = 10
    st.update(1, updatevalue, l[updateindex-1], updateindex, baseindex, endindex)

    print("Updated sum of numbers from index 3 and 5 is: ", st.rangeQuery(1, baseindex, endindex, 3, 5))
