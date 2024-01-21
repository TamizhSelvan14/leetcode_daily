class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int>& nums,int index,vector<int> &ds){
        
        
           ans.push_back(ds);

        
        for(int i=index;i<nums.size();i++){
            
             if(i > index and nums[i]==nums[i-1])//avoid duplicates
                continue;
            
                ds.push_back(nums[i]);
                solve(ans,nums,i+1,ds);
                ds.pop_back();
        }
       
        
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        solve(ans,nums,0,ds);
        
        return ans;
    }
};