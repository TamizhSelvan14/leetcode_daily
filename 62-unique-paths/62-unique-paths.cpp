class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int rows,int cols){
        
        if(i==0 and j==0)
            return 1;
        
        
        if(i<0 or j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int top=solve(i-1,j,rows,cols);
        int left=solve(i,j-1,rows,cols);
        
        
        return dp[i][j]=top+left;
        
    }
    
    
    
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(m-1,n-1,m,n);
    }
};