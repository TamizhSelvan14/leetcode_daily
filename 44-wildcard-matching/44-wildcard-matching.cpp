class Solution {
public:
    
    // bool dp[2001][2001];
    
    bool solve(int i,int j,string &s,string &p,vector<vector<int>> &dp){
        
        if(i<0 and j<0)
            return true;
        
        if(i<0 and j>=0)
            return false;
        
        if(i>=0 and j<0)
        {
            for(int k=0;k<=i;k++){
                if(s[k]!='*')
                    return false;
            }
            return true;
        }
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        if(s[i]==p[j] or s[i]=='?'){
            return dp[i][j]=solve(i-1,j-1,s,p,dp);
        }else if(s[i]=='*'){
            return dp[i][j]=solve(i-1,j,s,p,dp) or solve(i,j-1,s,p,dp);
        }else{
            return false;
        }
        
     
    }
    
    
    
    bool isMatch(string s, string p) {
     
        int n=s.size();
        int m=p.size();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        // memset(dp,false,sizeof(dp));
        
        return solve(m,n,p,s,dp);   
    }
};