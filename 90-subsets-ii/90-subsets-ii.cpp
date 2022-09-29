class Solution {
public:
    bool same(vector<int> a , vector<vector<int>> b){
        int n= a.size(),m=b.size();
        
        for(int i=0;i<m;i++){
            int mm= b[i].size();
            if(mm!=n)continue;
            int flg=0;
            for(int j=0;j<n;j++)
                if(a[j]!=b[i][j])
                    flg=1;
            if(!flg)
                return true;
        }
        
        return false;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),mask=1<<n;
        cout<<mask<<endl;
        vector<vector<int>> ans{{}};
        for(int i=1;i<mask;i++){
            vector<int> tmp;
            for(int j=0;j<n;j++){
                if(i & (1<<j))
                    tmp.push_back(nums[j]);
            }
            if(!same(tmp,ans))
                ans.push_back(tmp);
        }
        
        return ans;
    }
};