class Solution {
public:
int dp[12+1][10000+1];
    int solve(vector<int>& coins, int amount,int i){

        if(i>=coins.size() or amount<=0)
            return (amount==0) ? 0 : 1e9;


            if(dp[i][amount]!=-1)
            return dp[i][amount];


int ans=-1;

         if(coins[i]>amount){
           
            int dont=solve(coins,amount,i+1);
            ans=dont;
           
         }else{
            int pick=1+solve(coins,amount-coins[i],i);
            int dont=solve(coins,amount,i+1);
             ans=min(pick,dont);
         }
          

       


    return dp[i][amount]=ans;

    }


    int coinChange(vector<int>& coins, int amount) {
            memset(dp,-1,sizeof(dp));
            int ans= solve(coins,amount,0);

        return ans== 1e9 ? -1 : ans;

    }
};