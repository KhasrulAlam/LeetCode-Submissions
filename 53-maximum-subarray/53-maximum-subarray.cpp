class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar=nums[0];
        int max_ending_here=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=max_ending_here+nums[i])
                max_ending_here=nums[i];
            else
                max_ending_here+=nums[i];
            
            if(max_ending_here>maxSoFar)
                maxSoFar=max_ending_here;
        }
        
        return maxSoFar;
    }
};