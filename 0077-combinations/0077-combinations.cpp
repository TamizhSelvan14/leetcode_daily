class Solution {
public:
    
    void solve( vector<vector<int>> &ans,vector<int> &ds,int n,int k,int ind){
        
        
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind+1;i<=n;i++){
            ds.push_back(i);
            solve(ans,ds,n,k,i);
            ds.pop_back();
            
        }
        
        
        
    }
    
    
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        
        vector<int> ds;
        solve(ans,ds,n,k,0);
            
            
            
        return ans;
    }
};