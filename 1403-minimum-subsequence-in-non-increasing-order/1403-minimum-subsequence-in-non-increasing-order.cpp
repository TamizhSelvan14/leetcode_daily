class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        vector<int> ans;
        
        sort(begin(nums),end(nums),greater<int>());
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        // cout<<sum;
        
        int curr=0;
        for(int i=0;i<nums.size();i++){
            
            
            if(curr<=sum){
                curr+=nums[i];
                ans.push_back(nums[i]);
                sum-=nums[i];
            }
            
            
        }
        
        
        
        return ans;
    }
};