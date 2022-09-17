class Solution {
public:
    bool isPowerOfFour(int n) {
        int one=0, zero=0, tmp=n;
        
        while(n){
            if(n&1)one++;
            else zero++;
            if(one>1)break;
            n=n>>1;
        }

        if(one==1 && zero%2==0)
            return true;
        return false;
    }
};