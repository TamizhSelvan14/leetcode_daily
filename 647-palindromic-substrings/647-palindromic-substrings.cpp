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
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                string str=s.substr(i,(j-i+1));
                // cout<<str<<endl;
                if(ispalindrome(str)){
                    ans++;
                }
                
            }
        }
        
        
        return ans;
    }
};