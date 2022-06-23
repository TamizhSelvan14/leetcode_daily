class Solution {
public:
    
    void solve(int i,int j,vector<string> &ans,string s){
        
        
        if(i==0 and j==0){
            ans.push_back(s);
            return;
        }
        
        
        if(i>0){
            solve(i-1,j,ans,s+"(");
        }
        if(j>i){
            solve(i,j-1,ans,s+")");
        }
        
        
        
        
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        
        solve(n,n,ans,"");
        
        return ans;
        
    }
};