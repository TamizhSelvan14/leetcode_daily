class Solution {
public:
    
    void solve(vector<int> &nums,vector<vector<int>> &ans,int index,vector<int>&ds){
        
        
        if(index==nums.size()){
            
            ans.push_back(ds);
            return;
            
        }
        
        ds.push_back(nums[index]);
        solve(nums,ans,index+1,ds);
        ds.pop_back();
        solve(nums,ans,index+1,ds);
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        solve(nums,ans,0,ds);
        
        return ans;
    }
};