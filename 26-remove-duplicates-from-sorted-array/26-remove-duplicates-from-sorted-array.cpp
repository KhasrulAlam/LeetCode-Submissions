class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current_index=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[current_index]=nums[i];
                current_index++;
            }
        }
        
        return current_index;
    }
};