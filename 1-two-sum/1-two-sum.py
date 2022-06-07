class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        complement= dict()
        
        for i in range(len(nums)):
            tmp = target- nums[i]
            
            if tmp in complement:
                return [complement[tmp], i]
            else:
                complement[nums[i]]=i
            