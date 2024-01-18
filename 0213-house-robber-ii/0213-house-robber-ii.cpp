class Solution {
public:
    int solve(vector<int>& nums,int i, vector<int> &dp){
        if(i>=nums.size())
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int pick=nums[i]+solve(nums,i+2,dp);
        int dont=solve(nums,i+1,dp);

        
        return dp[i]=max(pick,dont);
    }
    
    int rob(vector<int>& nums) {
         if(nums.size()==1)
            return nums[0];
        
        vector<int> first={nums.begin(),nums.end()-1};
        vector<int> second={nums.begin()+1,nums.end()};
    
        vector<int> dp1(nums.size(),-1);
        vector<int> dp2(nums.size(),-1);

        return max(solve(first,0,dp1) ,solve(second,0,dp2) );
    }
};