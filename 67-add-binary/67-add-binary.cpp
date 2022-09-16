class Solution {
public:
    string addBinary(string a, string b) {
        
        int c=0, ai= a.size()-1, bi= b.size()-1;
        string add="";
        while(ai>=0 || bi>=0 || c){
            if(ai>=0)
                c+=a[ai]-'0',ai--;
            if(bi>=0)
                c+=b[bi]-'0',bi--;
         
            add = char((c%2)+'0') + add ;
            c/=2;
            cout<<c<<endl;
        }
        
        
        return add;
    }
};