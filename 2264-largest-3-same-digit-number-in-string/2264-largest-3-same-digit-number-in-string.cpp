class Solution {
public:
    string largestGoodInteger(string num) {
        
        int maxi=INT_MIN;
        
        
        for(int i=0;i<=num.size()-3;i++){
            
            if(num[i]==num[i+1] && num[i+1] ==num[i+2]){
                maxi=max(maxi,num[i]-'0');
            }
            
            
        }
        
          if(maxi==INT_MIN)
            return "";
        
         string s=to_string(maxi);

        
      
        
        
        
        return s+s+s;
    }
};