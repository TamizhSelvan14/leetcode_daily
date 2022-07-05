class Solution {
public:
    
    bool solve(int index,vector<int> nums){
        
        if(index==nums.size()-1) return true;
        int reachable=index+nums[index];
        
        for(int i=index+1;i<=reachable;i++){
             if(solve(i,nums)){
                 return true;
            }      
        }
        return false;
    }
    
    
    
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);       
        
        dp[0]=true;
        
        for(int i = 1; i < n ; i++){
             for(int j = i-1 ; j >= 0; j--){
                 if(dp[j] && j+nums[j] >= i){
                     //if the path is true which means it can be reached
                     //and it is able to reach our current path
                     //then our current path is true
                     dp[i] = true;
                     break;
                 }  
             }          
        }
        return dp[n-1];
    }
};