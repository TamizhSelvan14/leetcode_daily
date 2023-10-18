class Solution {
public:
    void solve(int n,int k,vector<vector<int>> &ans,vector<int> &ds,int index){
        
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        
        
        if(index>n)
            return;
        
        
        for(int i=index;i<n;i++){
            
            ds.push_back(i+1);
            solve(n,k,ans,ds,i+1);
            ds.pop_back();
            
            
            
        }
        
    }
    
    
    
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        solve(n,k,ans,ds,0);
        
        return ans;
        
        
    }
};