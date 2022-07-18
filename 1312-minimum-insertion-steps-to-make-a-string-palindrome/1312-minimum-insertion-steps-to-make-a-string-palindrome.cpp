class Solution {
public:
    
       int dp[1001][1001];
    
    
    int solve(int i,int j,string s,string t){
        
        if(i==0 or j==0)
            return 0;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        if(s[i-1]==t[j-1])
            return dp[i][j]=1+solve(i-1,j-1,s,t);
        else
            return dp[i][j]=max(solve(i-1,j,s,t),solve(i,j-1,s,t));
        
        
        
        
    }
    
    
    
    int minInsertions(string s) {
      string t=s;
        reverse(t.begin(),t.end());
        
        int n=s.size();
        
        memset(dp,0,sizeof(dp));
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                
            }
        }
        
        
        return n-dp[n][n];
        
        // return n-solve(n,n,s,t);
        
        
        
        
        
        
    }
};