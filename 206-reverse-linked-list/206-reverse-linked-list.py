# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def reverseList(self, head):
        if head is None:
            return None
        
        
        cur = head.next
        prev=head
        prev.next  =None
        itr= cur
        
        while itr:
            cur= itr
            itr = cur.next
            cur.next = prev
            prev = cur
        
        return prev