class Solution {
public:
    
    int dp[100]={0};
    
    int climbStairs(int n) {
        if(n==0 or n==1)
            return 1;
        
        if(dp[n]!=0)
            return dp[n];
        
        return dp[n]= climbStairs(n-1)+climbStairs(n-2);
        
    }
};