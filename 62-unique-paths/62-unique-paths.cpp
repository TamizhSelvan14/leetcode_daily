class Solution {
public:
   
    int solve(int i,int j,int rows,int cols){
        
        if(i==0 and j==0)
            return 1;
        
        
        if(i<0 or j<0)
            return 0;
        
        // if(dp[i][j]!=-1)
        //     return dp[i][j];
        
        int top=solve(i-1,j,rows,cols);
        int left=solve(i,j-1,rows,cols);
        
        
        return top+left;
        
    }
    
    
    
    int uniquePaths(int m, int n) {
         int dp[m][n];
        memset(dp,0,sizeof(dp));
        // return solve(m-1,n-1,m,n);
    
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        
        
        for(int i=0;i<n;i++)
            dp[0][i]=1;
        
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                
                int top=dp[i-1][j];
                int left=dp[i][j-1];
                dp[i][j]=top+left;
            }
        }
        
        return dp[m-1][n-1];
    }
};