class Solution {
public:
    int solve(vector<int>& nums,int i,int lastIndex, vector<vector<int>> &dp){
        
        if(i>=nums.size())
            return 0;
        
        int pick=0;
        int dont=0;
        
        //to avoid -1 in first call
        if(dp[i][lastIndex+1]!=-1)
            return dp[i][lastIndex+1];
        
        if(lastIndex==-1 or nums[i]>nums[lastIndex]){
            pick=1+solve(nums,i+1,i,dp);
        }
        
        dont=solve(nums,i+1,lastIndex,dp);    
        
        //lastindex+1 to avoid -1 in first call
        return dp[i][lastIndex+1]=max(pick,dont);
        
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,-1));
        return solve(nums,0,-1,dp);
    }
};