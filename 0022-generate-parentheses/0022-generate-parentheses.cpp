class Solution {
public:
    void solve(int n,int i,int j,vector<string> &ans,string s){
        
        if(i==n and j==n)
        {
            ans.push_back(s);
            return;
        }
        
       
        
        if(i<n)
         solve(n,i+1,j,ans,s+'(');
        
        
        if(j<i)
           solve(n,i,j+1,ans,s+')');

        
        
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
         solve(n,0,0,ans,"");
        
        return ans;
        
    }
};