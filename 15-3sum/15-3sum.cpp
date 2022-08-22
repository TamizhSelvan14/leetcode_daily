class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size()-2;i++){
            
            
         if(i>0 and nums[i]==nums[i-1] ){ 
         continue;
             
         }  
           
             int n=i+1;
            int m=nums.size()-1;
            
            while(n<m){
                if(nums[i]>0)
                    break;
                
                int val=nums[i]+nums[n]+nums[m];
                
                if(val==0){
                    
                    ans.push_back({nums[i],nums[n],nums[m]});
                    
                    
                    
                    n++;
                    m--;
                    
                  
                    
                    //remove duplicate
                    
                    while(n<m and nums[n]==nums[n-1])
                        n++;
                    
                    
                    while(n<m and nums[m]==nums[m+1])
                        m--;
                    
                    
                    
                }else if(val>0){
                    m--;
                }else{
                    n++;
                }
                
                
            }
        
        }
        return ans;
    }
};