def has_cycle(head):
    fast = head;
    while(fast != None and fast.next != None):
        fast = fast.next.next;
        head = head.next;
        
        if(head == fast):
            return True;
    return False;
