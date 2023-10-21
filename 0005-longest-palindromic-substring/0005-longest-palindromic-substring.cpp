class Solution {
public:
    string t;
    bool isPalindrome(int i,int j){
        
        
        
        while(i<j){
            
            if(t[i]!=t[j])
                return false;
            
            i++;j--;
        }
        
        return true;
    }
    
    string naiveSoln(string s){
        
        t=s;
        int maxlen=1;
        int start=0;
        
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                
                if(isPalindrome(i,j) && j-i+1>maxlen){
                    start=i;
                    maxlen=j-i+1;
                }
                
                
            }
        }
        
        return s.substr(start,maxlen);
        
    }
    
    
   

    
    
    string longestPalindrome(string s) {
      
        
        //naive accepts run time more
        return naiveSoln(s);
        
//         //optimized
        

        
    }
};