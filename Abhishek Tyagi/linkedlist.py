def reverse(head):
    prevN = None
    currN = head
    nextN = None
    while(currN is not None):
        nextN = currN.next  
        currN.next = prevN  
        prevN = currN
        currN = nextN
    head = prevN
    return head

def searchList(current, key):
    if current.data == key:
        return 1
    elif current is None:
        return -1
    else:
        return searchList(current.next, key)

def reverseTraversalDLL(last):
    if last is None:
        return 
    print(last.data)
    return reverseTraversalDLL(last.prev)


def loopDetectionHashing(head):
    seen = set()
    curr = head
    while curr is not None:
        if curr.data in seen:
            return True
        else:
            seen.add(curr.data)
            curr = curr.next
    return False

def loopFloydDetection(head):
    t = head #
    h = head 
    while t and h and h.next:
        t = t.next  
        h = h.next.next  
        if t is h:
            return True
    return False

def detectAndRemove(head):
    fast = head; slow = head
    found = False 
    while slow and fast and fast.next:
        slow = slow.next 
        fast = fast.next.next 
        if fast is slow:
            found = True
            break
    if found:
        slow = head 
        while slow.next is not fast.next:
            slow = slow.next
            fast = fast.next
        fast.next = None
    else:
        print("No Cycle Detected")

def getMid(head):
    if head is None:
        return head
    slow = head; fast = head
    while(fast.next.next != None and fast.next != None):
        slow = slow.next
        fast = fast.next.next
    return slow
    

def mergeSortedHalves(left, right):
    left = reverse(left)
    right = reverse(right)
    head = None

    while left != None and right != None:
        if left.data >= right.data:
            temp = left.next 
            left.next = head 
            left = temp 
        else:
            temp = right.next  
            right.next = head 
            right = temp  

    while right is not None:
        temp = right.next 
        right.next = head 
        head = right 
        right = temp 

    while left is not None:
        temp = left.next  
        left.next = head  
        head = left  
        left = temp  
    return head

def mergeSort(head):
    if head is None or head.next is None:
        return head
    else:
        mid = getMid(head)
        secondhalf = mid.next
        mid.next = None
        left = mergeSort(head) 
        right = mergeSort(secondhalf) 
        return mergeSortedHalves(left, right)

def countNodes(head):
    curr = head
    count = 0
    while curr is not None:
        count += 1
        curr = curr.next
    return count

def listIntersection(head1, head2):
    c1 = countNodes(head1)
    c2 = countNodes(head2)
    d = abs(c2 - c1)
    curr1 = head1
    curr2 = head2
    if c2 > c1:
        for _ in range(d):
            curr2 = curr2.next
    else:
        for _ in range(d):
            curr1 = curr1.next
    while curr1 is not None and curr2 is not None:
        if curr1 is curr2:
            print("Intersection at {0}".format(curr1.data))
            break
        else:
            curr1 = curr1.next
            curr2 = curr2.next
    return -1


