class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>> &matrix ,vector<vector<int>> &dp){
        
        //if i goes out of boundary then return 0 
        if(i<0 or i>=matrix.size())
            return 0;
        
        //if j goes out of boundary then return the max so we can take minimum
        if( j<0 or j>=matrix[0].size() )
            return 1e8;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        int down=matrix[i][j]+solve(i+1,j,matrix,dp);
        int leftDiagonal=matrix[i][j]+solve(i+1,j-1,matrix,dp);
        int rightDiagonal=matrix[i][j]+solve(i+1,j+1,matrix,dp);
        
        // cout<<left<<" "<<leftDiagonal<<" "<<rightDiagonal<<endl;
        
        
        return  dp[i][j]=min(min(down,leftDiagonal),rightDiagonal);
        
        
        
    }
    
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        //memoize
        vector<vector<int>> dp(row,vector<int> (col,-1));
        
        int mini=INT_MAX;
        for(int i=0;i<col;i++){
            // cout<<matrix[0][i]<<" ";
           mini=min(mini,solve(0,i,matrix,dp));
        }
        
        
        return mini;
        
    }
};