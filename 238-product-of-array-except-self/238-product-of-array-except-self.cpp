class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> pre(n),suff(n),res(n);
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)
            pre[i]=nums[i]*pre[i-1];
        
        for(int j=n-2;j>=0;j--)
            suff[j]=nums[j]*suff[j+1];
        
        res[0]=suff[1];
        res[n-1]=pre[n-2];
        
        for(int i=1;i<n-1;i++)
            res[i]=suff[i+1]*pre[i-1];
        
        return res;
    }
};