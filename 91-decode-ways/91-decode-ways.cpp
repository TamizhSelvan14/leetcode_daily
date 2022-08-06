class Solution {
public:
    
  
    int dp[1001];
    
    int solve(int i,string s,int &ans){
      
        
        if(i==s.size())
            return 1;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int pick1_digits=0;
        
        if(s[i]!='0')
        pick1_digits=solve(i+1,s,ans);
        
        int pick2_digits=0;
        
        if((i+1<s.size()) and (s[i]=='1' or (s[i]=='2' and s[i+1]<='6'))){
         pick2_digits=solve(i+2,s,ans);
        
        
        }
        
        
        ans=pick1_digits+pick2_digits;
        return dp[i]=ans;
    }
    
    
    
    int numDecodings(string s) {
      
        
        int n=s.size();
        
        int ans=0;
        memset(dp,-1,sizeof(dp));
        solve(0,s,ans);
     
        return ans; 
        
    }
};