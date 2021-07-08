
class BinaryHeap(object):
    def __init__(self):
        self.heap = [0]
        self.currentSize = 0

    def __repr__(self):
        heap = self.heap[1:]
        return ' '.join(str(i) for i in heap)

    def shiftUp(self, index):
        while (index // 2) > 0:
            if self.heap[index] < self.heap[index // 2]:    
                temp = self.heap[index // 2]
                self.heap[index // 2] = self.heap[index]
                self.heap[index] = temp
            index = index // 2

    def insert(self, key):
        self.heap.append(key)
        self.currentSize += 1
        self.shiftUp(self.currentSize)

    def shiftDown(self, index):
        while(index * 2) <= self.currentSize:
            minimumChild = self.minChild(index)
            if self.heap[index] > self.heap[minimumChild]:
                temp = self.heap[index]
                self.heap[index] = self.heap[minimumChild]
                self.heap[minimumChild] = temp
            index = minimumChild

    def minChild(self,i):
        if i * 2 + 1 > self.currentSize:
            return i * 2
        else:
            if self.heap[i * 2] < self.heap[i * 2 + 1]:
                return i * 2
            else:
                return i * 2 + 1

    def delete(self):
        deletedNode = self.heap[1]
        self.heap[1] = self.heap[self.currentSize]
        self.currentSize -= 1
        self.heap.pop()
        self.shiftDown(1)
        return deletedNode

    def buildHeap(self, alist):
        i = len(alist) // 2
        self.currentSize = len(alist)
        self.heap = [0] + alist[:]
        while (i > 0):
            self.shiftDown(i)
            i = i - 1

bh = BinaryHeap()
bh.buildHeap([9,5,6,2,3])

print('Deleted:', bh.delete())
print('Deleted:', bh.delete())
print('Deleted:', bh.delete())
bh.insert(3)
print('Deleted:', bh.delete())
print(bh)
