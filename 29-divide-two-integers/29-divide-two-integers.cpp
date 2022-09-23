class Solution {
public:
    int divide(int dividend, int divisor) {
       if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        long dvd = labs(dividend), dvs = labs(divisor), res = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        
        while(dvd>=dvs){
            int cnt = 0;
            while(dvd>= (dvs<<1<<cnt))
                cnt++;
            
            res+= (1<<cnt);
            dvd-= (dvs<<cnt);
        }
        cout<<res<<endl;
        return sign*res;
    }
};