class Solution {
public:
    
    //similiar to longest common subsequence just reverse the string and add to the string 2
    
    
    int find(int i,int j,string &a,string &b,vector<vector<int>> &dp){
    
    if(i<=0 || j<=0)
        return 0;
        
    if(dp[i][j]!=-1)
        return dp[i][j];

        if(a[i-1]==b[j-1]){

            return dp[i][j]=find(i-1,j-1,a,b,dp)+1;

        }else{
         
            return dp[i][j]=max(find(i-1,j,a,b,dp),find(i,j-1,a,b,dp));
        
        }
        
        
        
    }
    
    
    int longestPalindromeSubseq(string s) {
    
        int n=s.size();
        
        string w=s;
        
        reverse(w.begin(),w.end());
        
        vector<vector<int>> dp(1001,vector<int>(1001,-1));
        
       return find(n,n,s,w,dp);
        
     
        
    }
};