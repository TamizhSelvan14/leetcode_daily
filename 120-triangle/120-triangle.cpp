class Solution {
public:
    vector<vector<int>> dp{201,vector<int>(201,-1)};
    int solve(int i,int j,vector<vector<int>>& triangle){
        
        if(j>triangle[i].size()-1)
            return 1e9;
        
        if(i==triangle.size()-1)
            return triangle[i][j];
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int down=triangle[i][j] +solve(i+1,j,triangle);
        int rightDiagonal=triangle[i][j]+solve(i+1,j+1,triangle);
        
        return dp[i][j]=min(down,rightDiagonal);
        
        
        
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        return solve(0,0,triangle);
        
    }
};