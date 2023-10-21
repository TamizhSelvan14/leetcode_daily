class Solution {
public:
    string t;
    bool isPalindrome(int i,int j){
        while(i<j){
            if(t[i]!=t[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    
    int solve(string s){
          t=s;
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                
                string str=s.substr(i,j-i+1);
                
                if(isPalindrome(i,j)){
                    count++;
                }
                
                
            }
        }
        
        
        return count;
    }
    
    int countSubstrings(string s) {
      // return solve(s);
    
        int count=0;
        
        
        for(int k=0;k<s.size();k++){
            int i=k;
            int j=k;
            
            //odd
            
            while(i>=0 and j<s.size() and s[i]==s[j]){
                count++;
                i--;
                j++;
            }
            
            i=k;
            j=k+1;
            //even
            
            while(i>=0 and j<s.size() and s[i]==s[j]){
                count++;
                i--;
                j++;
            }
            
            
            
        }
        
        
        
        return count;
        
        
        
    }
};