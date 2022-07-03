class Solution {
public:
    int find_pivot(vector<int>& nums)
    {
        int n=nums.size(),l=0,r=n-1,mid;
       
        while(l<r)
        {
            if(nums[l]<nums[r])
                return l;
            mid=(l+r)/2;
            
            if(nums[mid]<nums[l])
                r=mid;
            else if(nums[mid]>nums[r])
                l=mid+1;
        }
        return l;
    }
    
    int binary_search(vector<int>& nums,int l,int r,int key)
    {
        int n=nums.size(),mid;
         while(l<=r){
             mid=(l+r)/2;
             if(nums[mid]==key)
                 return mid;
             else if(nums[mid]>key)
                 r=mid-1;
             else
                 l=mid+1;
         }
        return -1;
    }
    
    int search(vector<int>& nums, int target){
        int n=nums.size(),p=find_pivot(nums);
       
        if(!p)
            return binary_search(nums,0,n-1,target);
        else if(target>=nums[0])
            return binary_search(nums,0,p,target);
        
        return  binary_search(nums,p,n-1,target);
    }
};