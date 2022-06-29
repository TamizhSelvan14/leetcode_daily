class Solution {
public:
    
    void solve( vector<vector<int>> &ans,vector<int> &ds,int n,int k,vector<int> nums,int index){
        
        
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<nums.size();i++){
            
            ds.push_back(nums[i]);
            solve(ans,ds,n,k,nums,i+1);
            ds.pop_back();
            
        }
      
            
        
        
        
        
    }
    
    
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        vector<int> nums;
        
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        
        
        
        solve(ans,ds,n,k,nums,0);
        
        return ans;
        
    }
};