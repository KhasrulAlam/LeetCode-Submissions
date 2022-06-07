class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        complement1= dict()
        
        for i in range(len(nums)):
            tmp = target- nums[i]
            
            if tmp in complement1:
                return [complement1[tmp], i]
            else:
                complement1[nums[i]]=i
            