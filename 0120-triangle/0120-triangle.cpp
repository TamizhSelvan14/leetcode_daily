class Solution {
public:
    int solve(vector<vector<int>>& triangle,int i,int j, vector<vector<int>> dp){

        if(i>=triangle.size() or j>=triangle[i].size())
        return 0;

        if(dp[i][j]!=-1)
        return dp[i][j];
     
        int down=triangle[i][j]+solve(triangle,i+1,j,dp);

        int rightDiagonal=triangle[i][j]+solve(triangle,i+1,j+1,dp);

        return dp[i][j]=min(down,rightDiagonal);
    }


    int minimumTotal(vector<vector<int>>& triangle) {
                vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),-1));    

      return solve(triangle,0,0,dp);  
    }
};