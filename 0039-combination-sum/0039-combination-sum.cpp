class Solution {
public:
    
    void solve(vector<int>& candidates, int target,int index, vector<vector<int>> &ans,vector<int> ds){
        
        if(target==0)
            ans.push_back(ds);
        
        if(target<0 )
            return;
        
        
        
        
        for(int i=index;i<candidates.size();i++){
            
            if(target-candidates[i]<0)
                continue;
            ds.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i,ans,ds);
            ds.pop_back();
            // solve(candidates,target-candidates[i],i,ans,ds);

            
            
            
        }
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        
        vector<int> ds;
        solve(candidates,target,0,ans,ds);
        
        
        return ans;
        
        
    }
};