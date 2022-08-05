class Solution {
public:
    
    
    int dfs(int size,int target,vector<int>& nums,vector<int> &dp){
        
        if(target==0){
           return 1;
            
        }
       
        if(target<0)
            return 0;
        
        if(dp[target]!=-1)
            return dp[target];
        
        
        int ans=0;
        
        for(int i=0;i<size;i++){
          ans+=dfs(size,target-nums[i],nums,dp);
        }
        
        return dp[target]=ans;
        
        
    }
    
    
    
    int combinationSum4(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        vector<int> dp(target+1,-1);
     
   return dfs(n,target,nums,dp);
        
     
        
        
    }
};