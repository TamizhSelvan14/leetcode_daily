class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>> &triangle,vector<vector<int>> &dp){
        
        if(i<0 or i>=triangle.size())
            return 0;
        
        if(j<0 or j>=triangle[i].size())
            return INT_MAX;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down=solve(i+1,j,triangle,dp);
        int rightDiagonal=solve(i+1,j+1,triangle,dp);
        
        
        return dp[i][j]=triangle[i][j]+min(down,rightDiagonal);
        
        
    }
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        vector<vector<int>> dp=triangle;
        
        for(int i=0;i<triangle.size();i++)
            for(int j=0;j<triangle[i].size();j++)
                dp[i][j]=-1;
        
        
        return solve(0,0,triangle,dp);
        
        
        
        
    }
};