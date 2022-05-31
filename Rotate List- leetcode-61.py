# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def rotateRight(self, head, k):
        
        temp,count,tail = head,0,None
        
        while temp:
            tail = temp
            count+=1
            temp=temp.next
        
        if(count==0):
            k=0
        else:
            k= k%count
        
        if k==0:
            return head
        
        n,temp= count -k, head

        for _ in range(n-1):
            temp=temp.next
            
        a= temp.next
        temp.next = None
        
        tail.next = head
        
        return a
