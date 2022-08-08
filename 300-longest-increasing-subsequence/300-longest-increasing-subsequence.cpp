class Solution {
public:
    
    int solve(int i,int prevIndex,vector<int> &nums,vector<vector<int>> &dp){
        
        
        
        if(i>=nums.size()){
            return 0;
        }
        
        // adding 1 to prev index because of -1 in first
        if( dp[i][prevIndex+1]!=-1)
            return dp[i][prevIndex+1];
        
     int pick=INT_MIN;
     int dont=INT_MIN;
        
        
        dont=solve(i+1,prevIndex,nums,dp);
        
        if(prevIndex==-1 or nums[i]>nums[prevIndex] ){
            pick=1+solve(i+1,i,nums,dp);
        }
        
        
      
        
        return dp[i][prevIndex+1]=max(pick,dont);
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,-1,nums,dp);
        
    }
};