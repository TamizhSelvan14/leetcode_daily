class Solution {
public:
    
    int solve(vector<int>& coins,int amount,int i,vector<vector<int>> &dp){
        
        if(i<0)
            return 0;
        
        if(amount==0 and i>0)
            return 1;
           
           if(i==0 and amount==coins[i])
            return 1;
        
        if(i==0 and amount==0)
            return 1;
        
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        
        
        int ans=0;
        
        if(amount<coins[i])
        {
           int dont=solve(coins,amount,i-1,dp);
            ans=dont;
            
        }else{
          int  dont=solve(coins,amount,i-1,dp);
           int pick=solve(coins,amount-coins[i],i,dp);
            
            ans=dont+pick;
           
        }
        
        
        return dp[i][amount]=ans;
    }
    
    
    
    int change(int amount, vector<int>& coins) {
vector<vector<int>> dp(coins.size(),vector<int>(amount+1,0));
        
        
        
        for(int i=0;i<amount+1;i++){
            if(i%coins[0]==0 )
            dp[0][i]=1;
        }
        
        
        
        for(int i=1;i<coins.size();i++){
            for(int j=0;j<amount+1;j++){
                
                
                    
                      int  dont=dp[i-1][j];
                
                int pick=0;
                if(coins[i]<=j){
                 pick=dp[i][j-coins[i]];
                }
            
                

                     dp[i][j]=dont+pick;;
                
                
            }
        }
       
        
        
        return dp[coins.size()-1][amount];
        
    // int ans=    solve(coins,amount,coins.size()-1,dpa);
        
         
//         for(int i=0;i<coins.size();i++){
//             for(int j=0;j<amount+1;j++){
//                 cout<<dpa[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
//         return ans;
        
    }
};