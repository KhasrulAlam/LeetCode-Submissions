# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def deleteDuplicates(self, head):
        prev= head
        
        if head:
            cur = prev.next
        else:
            cur = None
        
        while(cur):
            if cur.val == prev.val:
                prev.next = cur.next
                cur = cur.next
            else:
                prev= cur
                cur = cur.next
        
        return head
               
            
            
       