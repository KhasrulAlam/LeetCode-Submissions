class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),left,right,mid;
        left=0,right=n-1;
        
        if(nums[left]<nums[right])return nums[left];
        
        while(left<right){
            mid=(left+right)/2;
            if(mid+1<n && nums[mid+1]<nums[mid])
                return nums[mid+1];
            else if(mid-1>=0 && nums[mid]<nums[mid-1])
                return nums[mid];
            else if(nums[left]>nums[mid])
                right=mid-1;
            else if(nums[right]<nums[mid])
                left=mid+1;
        }
        return nums[left]; //since, in this point left==right==mid
    }
};