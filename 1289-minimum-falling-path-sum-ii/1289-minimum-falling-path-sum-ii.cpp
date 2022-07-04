class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>& grid,int prevIndex){
        
        
        if(i<0 or j>=grid.size()-1 or j<0)
            return 1e9;
        
        
        if(i==grid.size()-1)
           return grid[i][j];
        int leftAdj=1e9,rightAdj=1e9;
        for(int k=j;k<grid.size();k++){
        
            if(prevIndex!=k)      
            leftAdj=grid[i][j]+solve(i+1,j-1,grid,k);
        
            if(prevIndex!=k)
           rightAdj=grid[i][j]+solve(i+1,j+1,grid,k);
        
        
        }
        
        return min(leftAdj,rightAdj);        
        
        
    }
    
    
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        for(int i=0;i<n;i++)
            dp[0][i]=grid[0][i];
        
        
        for(int i=1;i<n;i++){
            
            for(int j=0;j<n;j++){
                
                int temp=INT_MAX;
                    for(int k=0;k<n;k++){
                     
                        if(j!=k){
                            temp=min(temp,dp[i-1][k]);
                        }
                        
                    }
                // cout<<temp<<" ";
                dp[i][j]=grid[i][j]+temp;
                    
                }
                
                
            }
        
        
        
//         for(int i=0;i<dp.size();i++){
//             for(int j=0;j<n;j++){
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
        
        // int mini=0;
        // for(int i=0;i<n;i++){
        //     mini=min(mini,solve(0,i,grid,0));
        // }
        
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};