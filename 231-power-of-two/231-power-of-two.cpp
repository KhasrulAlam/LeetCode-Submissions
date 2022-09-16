class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        while(n){
            int a= (n&1);
            cnt+=a;
            n>>=1;
            
            if(cnt>1) break;
        }
        if(cnt==1)
            return true;
        return false;
    }
};