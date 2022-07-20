class Solution {
public:
    int dp[1001][1001];
    
    int solve(int i,int j,string word1,string word2){
        
       if(i<0)
           return j+1;
         if(j<0)
            return i+1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(word1[i]==word2[j]){
            return dp[i][j]=solve(i-1,j-1,word1,word2);
            
        }else{
            
           int insert=solve(i-1,j,word1,word2);
            
           int deletion=solve(i,j-1,word1,word2);
           int replace=solve(i-1,j-1,word1,word2);
            
            return dp[i][j]= 1+min(insert,min(deletion,replace));
            
        }
        
        
    }
    
    
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(n-1,m-1,word1,word2);
        
    }
};