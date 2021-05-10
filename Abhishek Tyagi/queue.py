
class Queue(object):
    def __init__(self, limit = 10):
        self.queue = []
        self.front = None
        self.rear = None
        self.limit = limit
        self.size = 0

    def __str__(self):
        return ' '.join([str(i) for i in self.queue])

    def isEmpty(self):
        return self.size <= 0

    def enqueue(self, data):
        if self.size >= self.limit:
            return -1         
        else:
            self.queue.append(data)

        if self.front is None:
            self.front = self.rear = 0
        else:
            self.rear = self.size

        self.size += 1

    def dequeue(self):
        if self.isEmpty():
            return -1         
        else:
            self.queue.pop(0)
            self.size -= 1
            if self.size == 0:
                self.front = self.rear = 0
            else:
                self.rear = self.size - 1

    def getSize(self):
        return self.size

if __name__ == '__main__':
    myQueue = Queue()
    for i in range(10):
        myQueue.enqueue(i)
    print(myQueue)
    print('Queue Size:',myQueue.getSize())
    myQueue.dequeue()
    print(myQueue)
    print('Queue Size:',myQueue.getSize())
