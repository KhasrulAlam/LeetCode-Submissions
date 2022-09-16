class Solution {
public:
    string addBinary(string a, string b) {
        
        int l_a = a.size()-1;
        int l_b = b.size()-1;
        
        string ans="";
        int c=0;
            
        while(l_a>=0 || l_b>=0){
            
            char aa, bb;
            
            if(l_a>=0 && l_b>=0)
                aa=a[l_a], bb=b[l_b];
            else if(l_a>=0)
                aa=a[l_a], bb='0';
            else 
                aa='0',bb=b[l_b];
            
            if(aa=='0' && bb=='0')
                ans+='0'+ c, c=0;
            else if(aa=='0' && bb=='1' && c==0)
                ans+='1', c=0;
            else if(aa=='0' && bb=='1' && c==1)
                ans+='0', c=1;
            else if(aa=='1' && bb=='0' && c==0)
                ans+='1', c=0;
            else if(aa=='1' && bb=='0' && c==1)
                ans+='0', c=1;
            else if(aa=='1' && bb=='1' && c==0)
                ans+='0', c=1;
            else if(aa=='1' && bb=='1' && c==1)
                ans+='1', c=1;
            cout<<aa<<' '<<bb<<' '<<c<<" ="<<ans<<' '<<c<<endl;
            l_a--, l_b--;
        }
        if (c==1)
            ans+='1';
         
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};