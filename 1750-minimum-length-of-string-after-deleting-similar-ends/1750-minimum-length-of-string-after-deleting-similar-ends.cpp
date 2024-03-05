class Solution {
public:
    int minimumLength(string s) {
        int i=0;int j=s.size()-1;
        
        
        while(i<j){
            
            if(s[i]==s[j]){
                
                char c=s[i];
                
                while(i<= j and s[i]==c){
                    i++;
                }
                
                while(i< j and s[j]==c){
                    j--;
                }
                
            }else{
                break;
            }
            
            
            
        }
        
  
        
        return j-i+1;
    }
};