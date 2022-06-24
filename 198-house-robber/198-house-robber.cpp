class Solution {
public:
    
    
    int solve(vector<int> &nums,int n,vector<int> &dp){
        
        if(n<0)
            return 0;
        
        // if(n==0 or n==1){
        //     return nums[n];
        // }
        if(dp[n]!=-1)
            return dp[n];
        
        int a=nums[n]+solve(nums,n-2,dp);
        int b=solve(nums,n-1,dp);
        
        
        
        return dp[n]=max(a,b);
        
        
        
        
    }
    
    
    
    int rob(vector<int>& nums) {
        vector<int> dp (1001,-1);
      return  solve(nums,nums.size()-1,dp);
    }
};