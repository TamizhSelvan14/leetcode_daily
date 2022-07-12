class Solution {
public:
    
    void solve(vector<int>& nums,vector<vector<int>> &ans,int index,vector<int> &ds){
        
        
        // if(index==nums.size()){
            ans.push_back(ds);
            // return;
        // }
        
        
        for(int i=index;i<nums.size();i++){
            
            if(i>index and nums[i]==nums[i-1])
                continue;
            
            ds.push_back(nums[i]);
            solve(nums,ans,i+1,ds);
            ds.pop_back();
            // solve(nums,ans,i,ds);
        }
        // solve(nums,ans)
        
        
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        solve(nums,ans,0,ds);
        
        return ans;
    }
};