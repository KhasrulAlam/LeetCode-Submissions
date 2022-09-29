class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> res{0,1};
        
        for(int i=1;i<n;i++){
            int tmp = 1<<i;
            for(int j=res.size()-1;j>=0;j--)
                res.push_back(res[j]|tmp);
        }
        
        return res;
    }
};