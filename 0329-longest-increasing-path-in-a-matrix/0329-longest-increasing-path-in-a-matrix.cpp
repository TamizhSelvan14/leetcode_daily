class Solution {
public:

    int solve(vector<vector<int>>& matrix,int i,int j,int prev,vector<vector<int>> &dp){

        if(i>=matrix.size() or i<0 or j>=matrix[0].size() or j<0)
            return 0;


        if(prev>=matrix[i][j]){
            return 0;
        }

        if(dp[i][j]!=-1)
        return dp[i][j];

        int right=1+solve(matrix,i,j+1,matrix[i][j],dp);
        int left=1+solve(matrix,i,j-1,matrix[i][j],dp);
        int down=1+solve(matrix,i+1,j,matrix[i][j],dp);
         int up=1+solve(matrix,i-1,j,matrix[i][j],dp);



        return dp[i][j]=max({right,left,down,up});


    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> dp(n+1,vector<int>(m,-1));
        
       
int temp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp=solve(matrix,i,j,-1,dp);

                ans=max(ans,temp);
                temp=0;
            }
        }
        


         return ans;

    }
};