class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        complement11= dict()
        
        for i in range(len(nums)):
            tmp = target- nums[i]
            
            if tmp in complement11:
                return [complement11[tmp], i]
            else:
                complement11[nums[i]]=i
            