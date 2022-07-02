class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size(), need_rev=1;
        
        if(len<=1) 
            return;
        
        for(int i=len-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                need_rev=0;
                int tmp=i+1;
                for(int j=i+1;j<len;j++)
                {
                    if(nums[j]>nums[i] && nums[tmp]>=nums[j])
                        tmp=j;
                }
                swap(nums[i],nums[tmp]);
                
                sort(nums.begin()+i+1,nums.end());
                
                break;
            }
        }
        if(need_rev)
            reverse(nums.begin(),nums.end());
    }
};