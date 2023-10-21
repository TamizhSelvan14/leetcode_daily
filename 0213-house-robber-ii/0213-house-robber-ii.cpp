class Solution {
public:
    
    int solve(vector<int> &nums,int i, vector<int> &dp){
        
        if(i>=nums.size())
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        
        int pick=nums[i]+solve(nums,i+2,dp);
        int dont=solve(nums,i+1,dp);
        
        
        return dp[i]= max(pick,dont);
        
        
    }
    
    
    
    
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        
        vector<int> arr1(nums.begin()+1,nums.end());
        vector<int> arr2(nums.begin(),nums.end()-1);

        vector<int> dp(nums.size()-1,-1);
        
         int first= solve(arr1,0,dp);
          fill(dp.begin(),dp.end(),-1);
           int second=solve(arr2,0,dp);
            
        
        
        return max(first,second);
    }
};