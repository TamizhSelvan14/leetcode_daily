class Solution {
public:
    
   
    
    int dfs(vector<vector<int>> &dp,int i,int j,int row,int col,vector<vector<int>> &matrix){
        
        if((i<0 || i>=row || j<0 || j>=col))
            return 0;
        
               if(matrix[i][j])
             return dp[i][j]=0;
        
        
        if(i == row-1 and j==col-1)
            return 1;
        
 
        
        if(dp[i][j])
            return dp[i][j];
        
       return dp[i][j]=dfs(dp,i+1,j,row,col,matrix)+dfs(dp,i,j+1,row,col,matrix);
        
        
        // return dp[i][j];
    }
    
    
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        // int ans=0;
        int row=obstacleGrid.size();
        int col=obstacleGrid[0].size();
        
        
        vector<vector<int>> dp (row,vector<int>(col));
        
        
       return dfs(dp,0,0,row,col,obstacleGrid);
        
        
        }
};