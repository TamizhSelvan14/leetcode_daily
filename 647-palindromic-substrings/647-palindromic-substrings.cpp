class Solution {
public:
    
    bool ispalindrome(string s){
        int i=0,j=s.size()-1;
        
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            
            i++;j--;
        }
        
        return true;
    }
    int countSubstrings(string s) {
        
        int n=s.size();
        int ans=0;
        
        
        
        for(int i=0;i<s.size();i++){
        
            //for odd length sub-string
            int left=i,right=i;
            
            while(left>=0 and right<s.size() and s[left]==s[right]){
                
               
                    ans++;
                    left--;
                    right++;
                
            }
            
            
            left=i;
            right=i+1;
            
            //calculating even length substrings
            
            
            while(left>=0 and right<s.size() and s[left]==s[right]){
                
               
                    ans++;
                    left--;
                    right++;
                
            }
            
            
            
        }
        
        
        
        
        return ans;
    }
};