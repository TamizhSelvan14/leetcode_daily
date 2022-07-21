class Solution {
public:
    
    
    int solve(int i,int j,string s,string t, vector<vector<int>> &dp){
        
        if(i==0 or j==0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(s[i-1]==t[j-1])
            return dp[i][j]=1+solve(i-1,j-1,s,t,dp);
        else
            return dp[i][j]=max(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp));
        
    }
    
    
    
    
    bool isSubsequence(string s, string t) {
        
        int n=s.size();
        int m=t.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
//         // memset(dp,-1,sizeof(dp));
//         int len=solve(n,m,s,t,dp);
        
        int i=0;int j=0;
        
        while(i<m){
            
            if(s[j]==t[i])
                j++;
            
            i++;
        }
        
        
        
        
        return (j==n);
        
    }
};