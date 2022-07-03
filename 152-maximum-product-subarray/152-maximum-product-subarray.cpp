class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),left=1,right=1,res=nums[0];
        for(int i=0;i<n;i++){
            left= left*nums[i];
            right=right*nums[n-1-i];
            res=max(res,max(left,right));
            if(!left)left=1;
            if(!right)right=1;
        }
        return res;
    }
};