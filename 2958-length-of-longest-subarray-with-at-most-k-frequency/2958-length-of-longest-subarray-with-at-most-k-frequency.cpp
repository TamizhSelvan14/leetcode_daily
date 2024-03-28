class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        
        int start=0;
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
             umap[nums[i]]++; 
           
            while(umap[nums[i]]>k){
                
                umap[nums[start]]--;
                start++;
                
            }
            
            
            
            
          
            
            maxi=max(maxi,i-start+1);
            
            
        }
        
        
        
        return maxi;
        
    }
};