class Solution {
public:
    vector<vector<int>> dp{201,vector<int>(201,0)};
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
        
        
        // return solve(0,0,triangle);
        int mini=INT_MAX;
        
        int rows=triangle.size();
        
        dp[0][0]=triangle[0][0];
        
        for(int i=1;i<rows;i++){
            
            for(int j=0;j<triangle[i].size();j++){
                
                if(j==0 )
                    dp[i][j]=triangle[i][j]+dp[i-1][j];
                else if(j==triangle[i].size()-1)
                        dp[i][j]=triangle[i][j]+dp[i-1][j-1];
                else {
                    dp[i][j]=triangle[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                    
                }
                
               
                
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
            
        }
        
        
        
        return *min_element(dp[rows-1].begin(),dp[rows-1].begin()+triangle[rows-1].size());
    }
};