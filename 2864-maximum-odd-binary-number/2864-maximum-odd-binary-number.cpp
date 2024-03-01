class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
         string str(s.size(), '0');
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                 ones++;
        }
        
        if(ones==1){
           str[s.size()-1]='1';
        
        }else{
            string temp (ones-1, '1');
            str.replace(0, ones-1,temp );
            
            str[s.size()-1]='1';
            
        }
        
        return str;
    }
};