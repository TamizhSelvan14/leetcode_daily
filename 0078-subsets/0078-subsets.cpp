class Solution {
public:
    void solve(vector<int>& nums,vector<int> ds,vector<vector<int>> &ans,int i){
        
        
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        solve( nums,ds,ans,i+1);
        ds.pop_back();
        solve( nums,ds,ans,i+1);
        
    }
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
         solve(nums,ds,ans,0);
        return ans;
    }
};