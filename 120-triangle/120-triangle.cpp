class Solution {
public:
    
    int minimum(int i,int j,vector<vector<int>> &tri,vector<vector<int>> &dp){
     
        if(i==tri.size()-1)
            return tri[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int min1=tri[i][j]+minimum(i+1,j,tri,dp);
        
        int min2=tri[i][j]+minimum(i+1,j+1,tri,dp);
        
  
        return dp[i][j]=min(min1,min2);
        
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
      
      
        
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),-1));    
        
             return minimum(0,0,triangle,dp);
        
        

    }};