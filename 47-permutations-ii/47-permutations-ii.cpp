class Solution {
public:
    
    void solve(vector<int> nums,vector<vector<int>> &ans,int index){
        
        
        if(index==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        
        
        for(int i=index;i<nums.size();i++){
            
            
            if(nums[index]==nums[i] and i!=index)
                continue;

             swap(nums[i],nums[index]);
            
            solve(nums,ans,index+1);
            
            // swap(nums[i],nums[index]);
            
            
        }
        
        
        
        
    }
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        solve(nums,ans,0);
        
        
        return ans;
        
        
        
        
        
    }
};