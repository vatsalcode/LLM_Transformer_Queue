
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        temp = head
        l = 1
        while temp.next!=None:
            temp = temp.next
            l+= 1
        c = l - n
        temp = head
        keo = head
        if c==0:
            head=temp.next
        while c!=0:
            keo = temp
            temp = temp.next
            c-=1
        keo.next = temp.next
        return head

