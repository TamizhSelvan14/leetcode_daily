class Solution {
public:
    int solve(vector<int> &nums,int n,vector<int> &dp){
        if(n<0)
            return 0;
        
        
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n]=max(nums[n]+solve(nums,n-2,dp),solve(nums,n-1,dp));
        
        
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
//         vector<int> dp(n,-1);
//         return solve(nums,n-1,dp);
        
        if(nums.size()==1)
            return nums[0];
        
        vector<int> dp(n+1,0);
        
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0])   ;         
        
        if(nums.size()==1)
            return nums[0];
        
        for(int i=2;i<n;i++){
             dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};