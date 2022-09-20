class Solution {
public:
    string toHex(int num) {
        
        if(num==0)
            return "0";
        
        string s="";
        int cnt=0;
        while(num && cnt<8){
            
            int tmp = num & 15;
            
            if(tmp<10)
               s=char('0'+tmp)+s;
            else
                s= char('a'+tmp-10)+s;
            
            num=num>>4;
            cnt++;
        }
        
        return s;
    }
};