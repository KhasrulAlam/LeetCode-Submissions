class Solution {
public:
    bool isNice(string s,int i,int j){
        int upper[26],lower[26];
        memset(upper,0,sizeof upper);
        memset(lower,0,sizeof lower);
        
        for(int k=i;k<=j;k++){
            if(s[k]>='a' && s[k]<='z')
                lower[s[k]-'a']=1;
            else 
                upper[s[k]-'A']=1;
        }
        
        for(int i=0;i<26;i++)
            if(upper[i]!=lower[i])
                return false;
        return true;
                
    }
    
    string longestNiceSubstring(string s) {
        
        int n = s.size(),mx=0;
        string ans;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isNice(s,i,j) && (j-i+1)>mx){
                    mx=j-i+1;
                    ans=s.substr(i,mx);
                }
            }
        }
        
        return ans;
    }
};