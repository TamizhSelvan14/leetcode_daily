class Solution {
public:
    int solve(vector<int> &nums,int i,  vector<int> &dp)
    {
        
        if(i>=nums.size())
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        
        int pick=nums[i]+solve(nums,i+2,dp);
        int skip=solve(nums,i+1,dp);
        
        
        return dp[i]=max(pick,skip);
        
        
        
    }    
    
    
    int rob(vector<int>& nums) {
        // vector<int> dp(nums.size(),-1);
        
        
        
        
        // return solve(nums,0,dp);
        
        
        //tabulation
        
        if(nums.size()<=2){
        
            if (nums.size()==1){
                return nums[0];
            }else{
                return max(nums[0],nums[1]);
            }
        }
        
        
         vector<int> dp(nums.size(),0);
        
        dp[0]=nums[0];

        for(int i=1;i<nums.size();i++){
            int pick=nums[i];
                
                if(i>1)
                pick+=dp[i-2];
            
            int skip=dp[i-1];
        
        
                dp[i]=max(pick,skip);
            cout<<dp[i]<<endl;
        }
        
        return dp[nums.size()-1];
        
    }
};