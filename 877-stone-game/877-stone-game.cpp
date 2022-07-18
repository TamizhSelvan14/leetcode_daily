class Solution {
public:
    
    int dp[1001][1001];
    int solve(vector<int>&piles,int i,int j){
        
        
        if(i>j)
            return 0;
        
        //pick first
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        int first=piles[i]+solve(piles,i+1,j-1);
        int second=piles[j]+solve(piles,i+1,j-1);
        
        
        return dp[i][j]=max(first,second);
        
        
        
        
    }
    
    
    
    bool stoneGame(vector<int>& piles) {
        int total=0;
        
        for(int i=0;i<piles.size();i++){
            total+=piles[i];
        }
        memset(dp,-1,sizeof(dp));
        
        int alice=solve(piles,0,piles.size()-1);
        // cout<<alice<<endl;
        int bob=total-alice;
        
        if(alice>bob)
            return true;
        
        
        return false;
        
    }
};