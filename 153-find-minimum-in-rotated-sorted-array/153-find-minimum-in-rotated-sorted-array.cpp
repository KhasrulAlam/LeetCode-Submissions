class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),left,right,mid;
        left=0,right=n-1;
        
        while(left<right){
            if(nums[left]<nums[right])
                return nums[left];
            
            mid=(left+right)/2;
        
           if(nums[left]>nums[mid])
                right=mid;
            else if(nums[right]<nums[mid])
                left=mid+1;
        }
        return nums[left]; //since, in this point left==right==mid
    }
};