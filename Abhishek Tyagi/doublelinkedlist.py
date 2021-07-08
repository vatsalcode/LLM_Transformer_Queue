class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def displayFromHead(head):
    curr = head
    print("Forward traversal")
    while(curr is not None):
        print(curr.data)
        curr = curr.next

def displayFromTail(tail):
    last = tail
    print("Reverse traversal")
    while(last is not None):
        print(last.data)
        last = last.prev

def insertAtStart(head, data):
    new = Node(data)
    if head is not None:
        new.next = head
        head.prev = new
        new.prev = None
        head = new
    else:
        head = new
    return head

def insertAtEnd(head, data):
    new = Node(data)
    curr = head
    while curr.next is not None:
        curr = curr.next
    curr.next = new
    new.prev = curr
    new.next = None
    return head

def insertAtEndt(head, tail, data):
    new = Node(data)
    tail.next = new
    new.prev = tail
    new.next = None
    tail = new
    return head, tail



def insertBefore(head, given, data):
    new = Node(data)
    if given is head:
        new.next = head
        head.prev = new
        new.prev = None
        head = new
    else:
        before = given.prev
        before.next = new
        new.prev = before
        new.next = given
        given.prev = new
    return head

def deleteAtStart(head):
    if head is not None:
        curr = head.next
        if curr is not None:
            curr.prev = None
        head.next = None
        head = curr
    else:
        print("List is empty")
    return head


def deleteAtEnd(head):
    if head is not None:
        curr = head
        while(curr.next is not None):
            curr = curr.next
        if curr is head:
            head = None
        else:
            before = curr.prev
            curr.prev = None
            before.next = None
    else:
        print("List is empty")
    return head

def deleteAtEndt(head, tail):
    if head is not None:
        if head is tail:
            del head, tail
        else:
            before = tail.prev
            tail.prev = None
            before.next = None
            tail = before
    else:
        print("List is empty")
    return head, tail

def deleteGiven(head, given):
    if head is not None:
        if head is given:
            return deleteAtStart(head)
        else:
            before = given.prev
            after = given.next
            given.prev = None
            given.next = None
            before.next = after
            if after is not None:
                after.prev = before
    else:
        print("List is empty")
    return head


head = Node(1)
head = insertAtStart(head, 0)
head = insertAtEnd(head, 2)
displayFromHead(head)
given = head.next
head = insertBefore(head, given, -1)
displayFromHead(head)
given = head.next
displayFromHead(deleteGiven(head, given))
