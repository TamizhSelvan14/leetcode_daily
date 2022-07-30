class Solution {
public:
    int dp[2001][2001];
    int solve(int i,int j,vector<vector<int>> &matrix,int prev){
       
        if(i<0 or  i>=matrix.size() or j<0  or j>=matrix[0].size())
            return 0;
        
        if(prev>=matrix[i][j])
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        int down=1+solve(i+1,j,matrix,matrix[i][j]);
       
        int right=1+solve(i,j+1,matrix,matrix[i][j]);
        
        int top=1+solve(i-1,j,matrix,matrix[i][j]);
        
        
        int left=1+solve(i,j-1,matrix,matrix[i][j]);
        
        
       
        
        
        return dp[i][j]=max({left,top,down,right});
        
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        memset(dp,-1,sizeof(dp));
        
        int maxi=INT_MIN;
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                int ans=0;
                
                ans=solve(i,j,matrix,-1);
            
                maxi=max(maxi,ans);
                
            }
            
        }
        
        return maxi;
        
    }
};