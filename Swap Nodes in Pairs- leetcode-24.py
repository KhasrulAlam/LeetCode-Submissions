# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def swapPairs(self, head):
        
        pre, pre.val, pre.next = ListNode(), None, head
        root= pre
        
        while pre.next and pre.next.next:
            a= pre.next
            b= pre.next.next
            
            a.next = b.next
            b.next = a
            pre.next=b
            
            pre = pre.next.next
        
        return root.next
