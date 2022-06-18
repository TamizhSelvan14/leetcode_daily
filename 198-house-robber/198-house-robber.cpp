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
        vector<int> dp(n,0);
        
        if(nums.size()==1)
            return nums[0];
        else if(n==2)
            return max(nums[0],nums[1]);
        
        
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

                for(int i=2;i<n;i++){
            
                        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
            
                }
        
        
        
        // int t=max(ans(nums,n-1,dp),ans(nums,n-2,dp));
        
//         for(auto x:dp)
//             cout<<x<<" ";
        
        return dp[n-1];
        
        
    }
};