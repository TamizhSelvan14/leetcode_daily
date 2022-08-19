class Solution {
public:
    int dp[1001][1001];
    int solve(vector<vector<int>>& costs,int a,int b){
        
        
        
        if(a+b>=costs.size())
            return 0;
        
        int side1=INT_MAX;
        int side2=INT_MAX;
        
        if(dp[a][b]!=-1)
            return dp[a][b];
        
        if(a<costs.size()/2)
        side1=costs[a+b][0]+solve(costs,a+1,b);
        
        if(b<costs.size()/2)
        side2=costs[b+a][1]+solve(costs,a,b+1);
        
        
       
            return dp[a][b]=min(side1,side2);
        
    }
    
    
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        memset(dp,-1,sizeof(dp));
        
       return solve(costs,0,0);
        
    }
};