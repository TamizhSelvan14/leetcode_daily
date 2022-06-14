class Solution {
public:
    
    int ans(string word1,string word2,int i,int j,vector<vector<int>> &dp){
        if(i>=word1.size()and j>= word2.size())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i>=word1.size() )
            return word2.size()-j;
        
        if(j>=word2.size())
            return word1.size()-i;
        
        
        if(word1[i]==word2[j])
            return dp[i][j]=ans(word1,word2,i+1,j+1,dp);
        else
            return dp[i][j]=1+min(ans(word1,word2,i+1,j,dp),ans(word1,word2,i,j+1,dp));
        
        
        
    }
    
    int solve(string word1,string word2,vector<vector<int>> &dp){
        
        int n1=word1.length();
        int n2=word2.length();
        
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        
        return dp[n1][n2];
        
        
    }
    
    
    int minDistance(string word1, string word2) {
        
    int n1=word1.size();
        int n2=word2.size();
        
        
    vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        
       int length=solve(word1,word2,dp); 
        
      // return ans(word1,word2,0,0,dp);
   
        return n1+n2 - 2*length;
        
    }
};