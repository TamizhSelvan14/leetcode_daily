class Solution {
public:
    
    int solve(vector<int> & nums,int n,vector<int> &dp){
        
        
        if(n<0)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
        
       
        int first=nums[n]+solve(nums,n-2,dp);
        int second=solve(nums,n-1,dp);
        return dp[n]=max(first,second);
        
    }
    
    
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        
        //without last charcter
        vector<int> nums1(nums.begin(),nums.end()-1);
        //removinf fist character
        vector<int> nums2(nums.begin()+1,nums.end());
        
        vector<int> dp1(nums1.size(),-1);
        
        vector<int> dp2(nums2.size(),-1);
        
        int first=solve(nums1,nums1.size()-1,dp1);
        
        int second=solve(nums2,nums2.size()-1,dp2);
        
        
         return max(first,second);   
        
    }
};