class Solution {
public:
    int solve(int i,vector<int>& coins, int amount,vector<vector<int>>&dp){
    
    if(i<0)
            return 1e9;
        
        
    if(amount==0)
        return 0;
        
    if(i==0){
        
            if(amount==coins[i])
                return 1;
            else if(coins[i]>amount)
                return 1e9;
        
    }
        
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        
        
    int ans=-1;
        
        if(coins[i]>amount){
            
        int dontPick=solve(i-1,coins,amount,dp);
            
           ans=dontPick; 
        }else if(coins[i]<=amount){
            
            //if possible means we have 2 options either we need to skip or we need to pick
            
            int dont=solve(i-1,coins,amount,dp);
            int pick=1+solve(i,coins,amount-coins[i],dp);
            
            ans=min(pick,dont);
            
            
        }
        
        
    return dp[i][amount]=ans;
    
    
    }
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        
//        int ans= solve(n-1,coins,amount,dp);
        
//         return (ans==1e9) ? -1 :ans;
        
        
        for(int i=0;i<=n;i++)
        {
            
        for(int j=0;j<=amount;j++)
            {
            
            if(j==0)
            dp[i][j]=0;
            else
                dp[i][j]=INT_MAX-1;
            
            
            }       
        }
        
        
        
        if(amount>=coins[0])
        dp[0][coins[0]]=1;
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
               
                if (coins[i-1 ] > j)
                    dp[i][j] = 0 + dp[i - 1][j];
                else
                    dp[i][j] = min(0 + dp[i - 1][j], 1 + dp[i][j - coins[i-1 ]]);
                
            }
        }
        
        
//          for(int i=0;i<=n;i++){
//             for(int j=0;j<amount+1;j++){
              
//                 cout<<dp[i][j]<<" ";
                
//             }
//              cout<<endl;
//         }
        
        
        
        int ans= (dp[n][amount]) ;
        
        
        return (ans==INT_MAX-1) ? -1:ans;
        
    }
};