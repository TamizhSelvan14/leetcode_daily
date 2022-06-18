class Solution {
public:
    
    int ans(vector<int> nums,int i,vector<int>& dp){
        
        if(i<0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(nums[i]+ans(nums,i-2,dp),ans(nums,i-1,dp));
        
        
    }
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n,-1);
        // cout<<ans(nums,n-1)<<"  "<<ans(nums,n-2);
        return max(ans(nums,n-1,dp),ans(nums,n-2,dp));
        
        
    }
};