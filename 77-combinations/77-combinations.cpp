class Solution {
public:
    
    void solve(int n,int k,int index,vector<vector<int>> &ans,vector<int>&ds){
        
        
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<=n;i++){
            
           
            ds.push_back(i);
            solve(n,k,i+1,ans,ds);
            ds.pop_back();
            }        

    }
    
    
    vector<vector<int>> combine(int n, int k) {
     
        vector<vector<int>> ans;
            
    
        vector<int> ds;
        solve(n,k,1,ans,ds);
        
        return ans;
    }
};