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
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        
       int ans= solve(n-1,coins,amount,dp);
        
        return (ans==1e9) ? -1 :ans;
        
    }
};