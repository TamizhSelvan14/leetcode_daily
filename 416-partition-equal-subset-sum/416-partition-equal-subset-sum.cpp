class Solution {
public:
    
    bool solve(int index,int target,vector<int>& nums,vector<vector<int>> &dp){
    if(index<0)
       return false;
        
         if(target==0)
        return true;
    
     if(index == 0)
        return (nums[0] == target);
        
         if(dp[index][target]!=-1)
            return dp[index][target];
        
        
      
        
        
        bool dontPick=solve(index-1,target,nums,dp);
        
        bool pick=false;
        
        if(target>=nums[index])
            pick=solve(index-1,target-nums[index],nums,dp);
        
        
        return dp[index][target]=(pick or dontPick);
    }
    
    
    bool subsetSumUtil(int ind, int target, vector<int>& arr, vector<vector<int>> &dp){
    if(target==0)
        return true;
    
    if(ind == 0)
        return arr[0] == target;
    
    if(dp[ind][target]!=-1)
        return dp[ind][target];
        
    bool notTaken = subsetSumUtil(ind-1,target,arr,dp);
    
    bool taken = false;
    if(arr[ind]<=target)
        taken = subsetSumUtil(ind-1,target-arr[ind],arr,dp);
        
    return dp[ind][target]= notTaken||taken;
}
    
bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        
        if(total%2!=0)
            return false;
        
       int n=nums.size(); 
        vector<vector<int>> dp(2001,vector<int>(20001 , -1));
        
       return subsetSumUtil(n-1,(total/2),nums,dp);
        
    }
};