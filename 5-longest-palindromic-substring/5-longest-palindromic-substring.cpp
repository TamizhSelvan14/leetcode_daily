class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        
        bool dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        int start=0;
        int maxlength=1;//because evry element is palindrome
        
        //1 char palindrome
        for(int i=0;i<n;i++)
            dp[i][i]=true;
        
        // 2 char palindrome
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                start=i;
                maxlength=2;    
            }
        }
        
        
        //for three char where k will be on centree and the i j traverse from alst
        //i from front j from last
        
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                
                if(dp[i+1][j-1] and s[i]==s[j])
                {
                    dp[i][j]=true;
                    start=i;
                    maxlength=max(maxlength,k);
                }
            }
        }
       
        
        // string str="";
        // for(int i=start;i<start+maxlength;i++)
        //     str+=s[i];
         // cout<<start<<" "<<maxlength<<endl;
      return s.substr(start, maxlength);
        
    }
};