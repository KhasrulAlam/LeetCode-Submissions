# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        
        tmpA, tmpB = headA, headB
        
        while True:
            
            if(tmpA==tmpB):
                return tmpA
            
            if tmpA.next==None and tmpB.next==None:
                return None
            
            tmpA= headB if tmpA.next is None else tmpA.next
            tmpB= headA if tmpB.next is None else tmpB.next
            
        