class Solution {
public:
    
    int ans(vector<int> &nums,int i,vector<int> &dp){
        
        if(i<0)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        if(i==0 or i==1)
            return dp[i]=nums[i];
        
        
        return dp[i]=min(ans(nums,i-1,dp)+nums[i],ans(nums,i-2,dp)+nums[i]);
        
        
        
    }
     
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(ans(cost,n-1,dp),ans(cost,n-2,dp));
        
        
    }
};