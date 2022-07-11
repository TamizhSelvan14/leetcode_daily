class Solution {
public:
    
    void solve(vector<int>& candidates,vector<vector<int>> &ans, int target,vector<int> &ds,int index){
        
        
        
            if(target==0)
        {        ans.push_back(ds);
            
            return ;
        }
        
        
        for(int i=index;i<candidates.size();i++)    {
          
            if(i>index and candidates[i]==candidates[i-1])
                continue;
        
            if(candidates[i]>target)
                break;
            
            
            ds.push_back(candidates[i]);
            solve(candidates,ans,target-candidates[i],ds,i+1);
            ds.pop_back();
        
        }

    }
    
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        solve(candidates,ans,target,ds,0);
        
        
        return ans;
        
    }
};