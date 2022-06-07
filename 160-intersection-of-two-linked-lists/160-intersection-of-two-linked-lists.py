# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        tmpA, tmpB = headA, headB
        while tmpA!= tmpB:
            tmpA= headB if tmpA is None else tmpA.next
            tmpB= headA if tmpB is None else tmpB.next
        return tmpA
            
        