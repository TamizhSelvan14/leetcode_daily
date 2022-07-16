class Solution {
public:
    
        long long dp[54][54][54];
    int mod=1e9+7;
    int solve(int rows,int cols,int maxMove,int i, int j,int index){
        
    
        if(index>maxMove){
     
            return 0;
        }
        
      
        
        if((i<0 or j<0 or i>=rows or j>=cols) and index<=maxMove)
       { 
            return 1;
       } 
                   
        
        if(dp[i][j][index]!=-1)
            return dp[i][j][index]; 
        
        long long  ans=0;
        
        ans+=solve(rows,cols,maxMove,i+1,j,index+1)%mod;
        ans+=solve(rows,cols,maxMove,i,j+1,index+1)%mod;
        
        ans+=solve(rows,cols,maxMove,i-1,j,index+1)%mod;
        
        ans=(ans+solve(rows,cols,maxMove,i,j-1,index+1))%mod;
               
        return dp[i][j][index]=(ans)%mod;
        
        
    }
    
    
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        // vector<vector<vector<int>>>  dp(100,vector<vector<int>>(100,vector<int>(100,-1)));
        
        
        
        memset(dp,-1,sizeof(dp));
        return solve(m,n,maxMove,startRow,startColumn,0);
        
    }
};