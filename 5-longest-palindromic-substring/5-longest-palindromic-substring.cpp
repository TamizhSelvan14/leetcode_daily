class Solution {
public:
    string longestPalindrome(string s) {
        
        int maxlength=1;
        int start=0;
        
        int n=s.size();
        
        bool dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        
        
        for(int i=0;i<s.size();i++){
            
            dp[i][i]=1;
           
        }
        
        
        for(int i=0;i<s.size()-1;i++){
            
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i;
                maxlength=2;
            }
            
        }
        
        
        for(int j=2;j<n;j++){
            for(int i=0;i<n-j;i++){
                
                int left=i;
                int right=i+j;
                
                if(dp[left+1][right-1]==1 and s[left]==s[right]){
                    dp[left][right]=1;
                    start=i;
                    maxlength=j+1;
                }
                
            }
        }
        
        
        
        return s.substr(start,maxlength);
    }
};