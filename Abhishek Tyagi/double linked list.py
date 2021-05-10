
class Node(object):
    def __init__(self, data, next = None, previous = None):
        self.data = data;
        self.next = next;
        self.previous = previous

class DoublyLinkedList(object):
    def __init__(self):
        self.head = None

    def insertAtStart(self, data):
        if self.head == None:
            newNode = Node(data)
            self.head = newNode
        else:
            newNode = Node(data)
            self.head.previous = newNode
            newNode.next = self.head
            self.head = newNode

    def insertAtEnd(self, data):
        newNode = Node(data)
        temp = self.head
        while(temp.next != None):
            temp = temp.next
        temp.next = newNode
        newNode.previous = temp

    def delete(self, data):
        temp = self.head
        if(temp.next != None):
            if(temp.data == data):
                temp.next.previous = None
                self.head = temp.next
                temp.next = None
                return
            else:
                while(temp.next != None):
                    if(temp.data == data):
                        break
                    temp = temp.next
                if(temp.next):
                    temp.previous.next = temp.next
                    temp.next.previous = temp.previous
                    temp.next = None
                    temp.previous = None
                else:
                    temp.previous.next = None
                    temp.previous = None
                return

        if (temp == None):
            return
    def printdll(self):
        temp = self.head
        while(temp != None):
            print(temp.data, end=' ')
            temp = temp.next

if __name__ == '__main__':
    dll = DoublyLinkedList()
    dll.insertAtStart(1)
    dll.insertAtStart(2)
    dll.insertAtEnd(3)
    dll.insertAtStart(4)
    dll.printdll()
    dll.delete(2)
    print()
    dll.printdll()
