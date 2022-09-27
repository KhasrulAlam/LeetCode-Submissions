class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size(),mask=0;
        vector<vector<int>> all_set;
        vector<int> set;
        while(true){
            int tmp = mask,one=0;
            cout<<tmp<<' ';
            vector<int> set;
            for(int i=0;tmp;i++){
                tmp=mask>>i;
                if( tmp & 1 == 1){
                    one++;
                    set.push_back(nums[i]);
                }
            }
            cout<<one<<endl;
            
            all_set.push_back(set);
            
             if(one==n)
                break;
            mask++;
        }
        
        return all_set;
    }
};