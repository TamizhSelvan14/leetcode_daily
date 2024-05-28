class Solution {
public:
    
    void solve(vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> ds,int index){
        
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
       for(int i=index;i<candidates.size();i++) {
            
        if(candidates[i]>target){
           continue;

        }
           
            ds.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,ds,i);
            ds.pop_back();
           
           
       }
       
        
        
        
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
    solve(candidates,target,ans,ds,0);
        
        
        
        
        return ans;
        
    }
};