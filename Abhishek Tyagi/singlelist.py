
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def display(head):
    curr = head
    while(curr is not None):
        print(curr.data)
        curr = curr.next

def insertAtStart(head, data):
    new = Node(data)
    if head is None:
        head = new
    else:
        new.next = head
        head = new
    return head

def insertAtEnd(head, data):
    curr = head
    new = Node(data)
    while(curr.next is not None):
        curr = curr.next
    curr.next = new
    new.next = None
    return head

def insertAtPos(head, pos, data):
    curr = head
    count = 0
    new = Node(data)
    if pos == 0:
        return insertAtStart(head, data)
    else:
        while curr is not None and count < pos:
            prev = curr
            curr = curr.next
            count += 1
        if count == pos:
            prev.next = new
            new.next = curr
        else:
            print("Position doesn't exist")
        return head

def deleteAtStart(head):
    if head is not None:
        nextNode = head.next 
        head.next = None 
        head = nextNode 
    else:
        print("List is empty")
    return head
def deleteAtEnd(head):
    if head is not None:
        curr = head
       
        while curr.next is not None :
            prev = curr
            curr = curr.next
      
        prev.next = None
    else:
        print("List is empty")
    return head


def deleteKey(head, key):
    if head is not None:
        if head.data == key:
            return deleteAtStart(head)
        else:
            curr = head
            while curr is not None:
                if curr.data == key:
                    break
                else:
                    prev = curr
                    curr = curr.next
            if curr is None:
                print("Key was not found")
            else:
                prev.next = curr.next
                curr.next = None    
    else:
        print("List is empty")
    return head 

head = insertAtPos(insertAtEnd(insertAtStart(Node(1), 0), 2), 3, 3)
display(head)
display(deleteKey(deleteAtStart(deleteAtEnd(head)), 1))


