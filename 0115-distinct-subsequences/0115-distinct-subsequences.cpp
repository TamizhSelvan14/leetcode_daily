class Solution {
public:
    int solve(string s,string t,int i,int j,vector<vector<int>> &dp){

        if(i>s.size() or j>t.size()){
            return 0;
        }

        if(i==s.size() and j==t.size())
        return 1;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        // if i and j matches we have two options where both moves forward and only i moves forward bcs we can have many matches upcomes
        // else we have other matches only i moves forward

        if(s[i]==t[j]){
            return dp[i][j]=solve(s,t,i+1,j+1,dp) 
                    +
                solve(s,t,i+1,j,dp);    
        }else{
            return dp[i][j]=solve(s,t,i+1,j,dp);
        }



    }


    int numDistinct(string s, string t) {
        // vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
        // return solve(s,t,0,0,dp);


        //tabulation
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,0));

        dp[0][0]=1;
        for(int i=0;i<=s.size();i++){
            dp[i][0]=1;
        }

        int mod=1e9+7;

        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=t.size();j++){
                
                if(s[i-1]==t[j-1])
                    dp[i][j]=(dp[i-1][j-1] + dp[i-1][j])%mod;
                else
                    dp[i][j]=dp[i-1][j];    
            }
        }
        return dp[s.size()][t.size()];
    }
};