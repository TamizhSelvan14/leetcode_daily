class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        
        
        for(int i=0;i<nums.size()-2;i++){
            
           
            int j=i+1;
            int k=nums.size()-1;
            
             if(i>0 and nums[i]==nums[i-1])
               continue;
            
            while(j<k){
                
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                
                j++;k--;
                
                //skip duplicates
                while(j<k and nums[j]==nums[j-1]){
                    j++;
                }
                
                //skip duplicates
                while(j<k and nums[k]==nums[k+1]){
                    k--;
                }
                
                
                }else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }else{
                    k--;
                }
                
            }
            
            
            
            
        }
        
        
        return ans;
        
    }
};