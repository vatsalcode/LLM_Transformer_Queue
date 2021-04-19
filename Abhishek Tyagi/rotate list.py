
class Solution:
    def rotateRight(self, head: 'ListNode', k: 'int') -> 'ListNode':
      
        if not head:
            return None
        if not head.next:
            return head
        
        old_tail = head
        n = 1
        while old_tail.next:
            old_tail = old_tail.next
            n += 1
        old_tail.next = head
        
        new_tail = head
        for i in range(n - k % n - 1):
            new_tail = new_tail.next
        new_head = new_tail.next
        
        new_tail.next = None
        
        return new_head
