class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size(),tmp;
        /*
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
                if(nums[j]<nums[j+1])
                {
                    tmp= nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=tmp;
                } 
        }*/
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};