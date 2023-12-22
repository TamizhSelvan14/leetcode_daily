class Solution {
public:
    int maxScore(string s) {
        int maxi=0;
        int one=0,zero=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='1'){
                one++;
            }

        }
        for(int i=0;i<s.size()-1;i++){
            
           if(s[i]=='0'){
               zero++;
           }else{
               one--;
           }
            maxi=max(maxi,zero+one);

          
        }
        
    
        
        
        return maxi;
    }
};