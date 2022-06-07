# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head): 
        cur=head
        address=[]
        
        while(cur):
            if cur in address:
                return True             
            address.append(cur)
            cur=cur.next
        return False