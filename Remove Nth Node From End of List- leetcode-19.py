# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, ll, n):
        
        count=0
        tmp=ll
        
        while tmp:
            count+=1
            tmp=tmp.next
        
        n = count - n +1
        
        head = ll
        
        
        for i in range(1,n-1):
            ll=ll.next
        
        if n==1:
            head=head.next
        elif n==count:
            ll.next= None
        else:
            ll.next = ll.next.next
            
        return head
