class Solution {
public:
        long long dp[60][60][60];
        
    int mod=1e9+7;
    
        int solve(int m, int n, int maxMove, int startRow, int startColumn,int i) {
        
        if((startRow>=m or startRow <0 or startColumn >=n or startColumn <0) and i<=maxMove)
            return 1;
        
        
        if(i>maxMove)
            return 0;
            
            if(dp[startRow][startColumn][i]!=-1)
                return dp[startRow][startColumn][i];
            
            
            long long ans=0;
        
           
       ans+=solve(m,n,maxMove,startRow+1,startColumn,i+1) %mod;
            
       ans+=solve(m,n,maxMove,startRow,startColumn+1,i+1) %mod;
            
       ans+= solve(m,n,maxMove,startRow-1,startColumn,i+1) %mod;
    
       ans+=solve(m,n,maxMove,startRow,startColumn-1,i+1) % mod ;

 return dp[startRow][startColumn][i]=(ans)%mod;
        
        
        
    }
    
    
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp,-1,sizeof(dp));
    return solve(m,n,maxMove,startRow,startColumn,0);
        
        
    }
};