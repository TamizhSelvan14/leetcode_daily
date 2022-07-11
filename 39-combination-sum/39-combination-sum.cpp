class Solution {
public:
    void solve( vector<vector<int>> &ans,vector<int>& candidates, int target,vector<int> &ds,int index){
        
        if(index==candidates.size()){
                
            if(target==0)
            {        ans.push_back(ds);

                   
            }
         return;
        }
        
        
        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            solve(ans,candidates,target-candidates[index],ds,index);
            ds.pop_back();
        }
        
        solve(ans,candidates,target,ds,index+1);
        
        
        
        
    }
    
    
    
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        vector<vector<int>> ans;
        vector<int>ds;
        solve(ans,candidates,target,ds,0);
        
        
    return ans;
    
    }
    
};