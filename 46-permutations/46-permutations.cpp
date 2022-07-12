class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> &visited,vector<int>&ds){
        
        
        if(ds.size()==nums.size()){
            
            ans.push_back(ds);
            return;
            
        }
        
        
        for(int index=0;index<nums.size();index++){
       if(!visited[index]){
            
           ds.push_back(nums[index]);
           visited[index]=1; 
           solve(nums,ans,visited,ds);
           visited[index]=0;
           ds.pop_back();
        
        }
        }
        
        
        
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> visited(nums.size(),0);
        vector<int>ds;
        solve(nums,ans,visited,ds);
        
        return ans;
    }
};