class Solution {
public:
    int solve(vector<int>& nums, int k,int i,   vector<int>& dp){
        
        if(i>=nums.size()-1)
            return nums.back();
        if(dp[i]!=-1)
            return dp[i];
        
        
        int maxi=-1e9;
        for(int j=1;j<=k;j++){
            
            maxi=max(maxi,nums[i]+solve(nums,k,i+j,dp));
            
        }
        
        return dp[i]=maxi;
        
    }
    
    
    
    
    
    int maxResult(vector<int>& nums, int k) {
        
      //   vector<int> dp(nums.size()+1,-1);
      // return solve(nums,k,0,dp);
        
        vector<int> dp(size(nums), INT_MIN);
    multiset<int> s ({ dp[0] = nums[0] });         // set dp[0] = nums[0] and insert it into set
	for(int i = 1; i < size(nums); i++) {
        if(i > k) s.erase(s.find(dp[i - k - 1]));  // erase elements from which we cant jump to current index
        s.insert(dp[i] = *rbegin(s) + nums[i]);    // choose element with max score and jump from that to the current index
    }
	return dp.back();
     
        
        
    }
};