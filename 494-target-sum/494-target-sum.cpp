class Solution {
public:
    
    int solve(vector<int>& nums, int i,int target, vector<vector<int>> &dp){
        
        if(i<0)
            return 0;
        
        
        if(i==0){
            
            if(target==0 and  (  nums[i]*(-1)==0 or nums[i]*(+1)==0  ) )
               return 1;
            
            if(((nums[i]*(-1))) ==target){
                return 1;
            }
            
            
            if(((nums[i]*(+1) )) == target){
                return 1;
            }
            
            return 0;
        }
        
        
    // if(dp[i][target]!=-1)
    //     return dp[i][target];
        
        int negative=solve(nums,i-1,target + (nums[i] * (-1)) , dp );
        int positive=solve(nums,i-1,target + (nums[i] * (+1)) ,  dp );
        
        
        
        return negative+positive;
        
        
    }
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(1001,vector<int>(10001,-1));
       int ans= solve(nums,n-1,target,dp);
        
        return nums[0]==0 ? ans*2 :ans;
        
        
    }
};