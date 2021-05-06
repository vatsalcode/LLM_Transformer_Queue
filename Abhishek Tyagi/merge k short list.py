from typing import List


class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None


class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        if not lists:
            return None

        nums = []
        for l in lists:
            while l:
                nums.append(l.val)
                l = l.next

        head = current = ListNode(0)
        for n in sorted(nums):
            current.next = ListNode(n)
            current = current.next

        return head.next
