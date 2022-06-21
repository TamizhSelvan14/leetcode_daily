class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>> grid,vector<vector<int>> &dp){
        
          
        if(i<0 or j<0)
            return 0;
        
                
        if(grid[i][j]==1)
            return 0;
        
        
        if((i==0 and j==0) )
            return 1;
             
        
        if(dp[i][j]!=-1)
            return dp[i][j];
      
        
        
   
        
        int left=solve(i-1,j,grid,dp);
        int right=solve(i,j-1,grid,dp);
        
        return dp[i][j]=left+right;
        
        
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i=obstacleGrid.size();
        int j=obstacleGrid[0].size();
        
        vector<vector<int>> dp(i,vector<int> (j,-1));
        
        return solve(i-1,j-1,obstacleGrid,dp);
       
        
        
        
    }
};