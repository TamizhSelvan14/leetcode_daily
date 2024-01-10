class Solution {
public:
  void solve(vector<vector<int>> &ans,vector<int>ds,vector<int>& candidates,int target,int index){
        
        if(target==0 )
            ans.push_back(ds);

        
        for(int i=index;i<candidates.size();i++){
             if(i>index and candidates[i]==candidates[i-1])
                continue;
            
            if(candidates[i]>target)
                continue;
            
            ds.push_back(candidates[i]);
            solve(ans,ds,candidates,target-candidates[i],i+1);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        
        vector<int> ds;
        
        //sort it for ans
        sort(candidates.begin(),candidates.end());
        
        solve(ans,ds,candidates,target,0);
        
        
        return ans;
    }
};