class Solution {
public:
    int solve(vector<int>& nums,int i,vector<int> &dp){
        if(i>=nums.size())
            return 0;
        
        // if(i==nums.size()-1){
        //     return 1;
        // }
        
        if(dp[i]!=-1)
            return dp[i];
        
        
        int pick=nums[i]+solve(nums,i+2,dp);
        int dont=solve(nums,i+1,dp);
            
        return dp[i]=max(pick,dont);
        
        
    }
    
    
    int rob(vector<int>& nums) {
        vector<int> dp(101,-1);
       return solve(nums,0,dp);
        
        
    }
};