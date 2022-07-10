class Solution {
public:
    
    
    int solve(vector<int>& cost,int i,vector<int> &dp){
        
        if(i<0)
            return 0;
        
        
        if(i==0 )
            return cost[i];
        
        if(dp[i]!=-1)
            return dp[i];
        
        
        //taking this step to get best result
        int onestep=solve(cost,i-1,dp);
        
        //taking 2 steps to make 
        int twostep=solve(cost,i-2,dp);
        
        
        return dp[i]=cost[i]+min(onestep,twostep);
        
    }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp(cost.size(),-1);
        return min(solve(cost,cost.size()-1,dp),solve(cost,cost.size()-2,dp));
        
        
        
    }
};