class Solution {
public:
    
    bool rec(string s1,string s2,string s3,int i,int j,int k,vector<vector<int>>&dp){
        
        //base 
        if(k==s3.size()&&i==s1.size()&&j==s2.size())
            return true;
        
        if(i>s1.size()||j>s2.size())
            return false;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(s3[k]==s2[j]&&s3[k]==s1[i]){
            return dp[i][j]= rec(s1,s2,s3,i+1,j,k+1,dp)||rec(s1,s2,s3,i,j+1,k+1,dp);
        } else if(s1[i]==s3[k]){
            return dp[i][j]= rec(s1,s2,s3,i+1,j,k+1,dp);
        }
        else if(s3[k]==s2[j]){
            return dp[i][j]= rec(s1,s2,s3,i,j+1,k+1,dp);
        }
        else{
            return dp[i][j]= false;
        }
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
    
        
        
        int n=s1.size();
        int m=s2.size();
        int nm=s3.size();
        
        
        if(n+m != nm)
            return false;
        
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
      return   rec(s1,s2,s3,0,0,0,dp);
       
        
    }
};