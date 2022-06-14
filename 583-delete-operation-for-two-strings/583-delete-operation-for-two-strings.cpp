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
    
    
    int minDistance(string word1, string word2) {
        
    int n=word1.size()+word2.size();
        
    vector<vector<int>> dp(n,vector<int>(n,-1));
        
        
        
      return ans(word1,word2,0,0,dp);
        
        
        
        
    }
};