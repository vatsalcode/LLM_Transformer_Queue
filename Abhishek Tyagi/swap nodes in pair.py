class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        ans =temp= ListNode(0) 
        temp.next = head
		
        while temp.next and temp.next.next: 
            currentNode = temp.next 
            nextNode = currentNode.next

            temp.next,nextNode.next,currentNode.next=nextNode,currentNode,nextNode.next 
            temp=currentNode

        return ans.next
