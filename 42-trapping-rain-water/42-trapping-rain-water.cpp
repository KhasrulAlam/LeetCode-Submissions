class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),mx=height[0];
       
        vector<int> water(n,0);
        for(int i=0;i<n;i++)
        {
           if(height[i]<mx)
               water[i]=mx-height[i];
            else if(mx<height[i])
                mx=height[i];
        }
        
        mx=height[n-1];
        int result=0;
        for(int i=n-1;i>=0;i--)
        {
           if(height[i]<mx)
               result+=min(water[i],mx-height[i]);
            else if(mx<height[i])
                mx=height[i];
        }
        
        return result;
    }
};