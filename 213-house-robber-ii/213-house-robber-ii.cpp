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
        else if(nums.size()==2)
            return max(nums[0],nums[1]);
        
        
        //without last charcter
        vector<int> nums1(nums.begin(),nums.end()-1);
        //removinf fist character
        vector<int> nums2(nums.begin()+1,nums.end());
        
        vector<int> dp1(nums1.size(),0);
        
        vector<int> dp2(nums2.size(),0);
        
//         int first=solve(nums1,nums1.size()-1,dp1);
        
//         int second=solve(nums2,nums2.size()-1,dp2);
        
        
        dp1[0]=nums1[0];
        dp2[0]=nums2[0];
        
        dp1[1]=max(nums1[0],nums1[1]);
        dp2[1]=max(nums2[0],nums2[1]);
        
        
        for(int i=2;i<nums1.size();i++){
            
            dp1[i]=max(nums1[i]+dp1[i-2],dp1[i-1]);
            
            dp2[i]=max(nums2[i]+dp2[i-2],dp2[i-1]);
            
        }
        
        
         return max(dp1[nums1.size()-1],dp2[nums2.size()-1]);   
        
    }
};