

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.tail = None

    def push(self, data):
        new = Node(data)
        if self.tail is None:
            new.next = new
            self.tail = new
        else:
            if self.tail.next is self.tail:
                self.tail.next = new
                new.next = self.tail
                self.tail = new
            else:
                before = self.tail
                after = before.next
                before.next = new
                new.next = after
                self.tail = new

    def display(self):
        if self.tail is None:
            print("List is empty")
        else:
            curr = self.tail
            while(True):
                curr = curr.next
                print(curr.data)
                if curr is self.tail:
                    break
            
    def pop(self, key):
        if self.tail is None:
            print("List is empty")
        else:
            found = False 
            curr = self.tail 
            while(True):
                prev = curr
                curr = curr.next
                if curr.data == key:
                    found = True
                    break
                if curr is self.tail:
                    break
            if found:
                if curr is prev:
                    del curr, prev
                    self.tail = None
                elif curr is self.tail:
                    prev.next = curr.next
                    curr.next = None
                    self.tail = prev
                else:
                    prev.next = curr.next
                    curr.next = None
                print("{0} was deleted".format(key))
            else:
                print("{0} was not found".format(key))
                
l = CircularLinkedList()
l.push(0)
l.push(1)
l.push(2)
l.push(3)
l.pop(0)
l.display()
