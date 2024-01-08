class Solution {
public:
    void solve(vector<vector<int>> &ans, int target, vector<int> ds,vector<int>& candidates,int i){
        
        
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int k=i;k<candidates.size();k++){
            
            if(candidates[k]>target)
                continue;
            
             ds.push_back(candidates[k]);
             solve(ans,target-candidates[k],ds,candidates,k);
             ds.pop_back();
        
        }
        
       
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        
        solve(ans,target,ds,candidates,0);
        
        return ans;
        
    }
};