class Solution {
public:
    int dp[100+1][100+1];
    int solve(int m,int n,int i,int j){


        if(i==m-1 && j==n-1)
            return 1;


        if(dp[i][j]!=-1)
        return dp[i][j];

        int down=0;
        int right=0;

        if(i<m){
            down=solve(m,n,i+1,j);
        }

        if(j<n){
            right=solve(m,n,i,j+1);
        }



    return dp[i][j]=down+right;

    }

    int uniquePaths(int m, int n) {
        // memset(dp,-1,sizeof(dp));
        // return solve(m,n,0,0);

        //tabulation

        vector<vector<int>> dp(m,vector<int>(n,1));

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }

    return dp[m-1][n-1];
    }
};