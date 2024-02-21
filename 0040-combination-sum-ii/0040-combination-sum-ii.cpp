class Solution {
public:
    void solve( vector<vector<int>> &ans,vector<int> ds,vector<int>& candidates,int target,int index){
        
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            
            //avoid negative
            if (candidates[i]>target)
                continue;
            
            //avoid duplicates
            if(i> index && candidates[i]==candidates[i-1])
                continue;
            
            
            ds.push_back(candidates[i]);
            solve(ans,ds,candidates,target-candidates[i],i+1);
            ds.pop_back();
            
            
            
            
        }
        
        
        
        
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        vector<int> ds;
        solve(ans,ds,candidates, target,0);
        
        
        
        
        
        
        return ans;
    }
};