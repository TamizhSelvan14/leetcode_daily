class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int ans=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 for(int k=j+1;k<nums.size();k++){
                  
//                     if(nums[i]+nums[j] > nums[k])
//                         ans++;
                    
                    
//                 }
//             }
//         }
        
        for(int i=2;i<nums.size();i++){
            
            
            int j=0;
            int k=i-1;
            
            while(j<k){
            
                if(nums[j]+nums[k] > nums[i])
                 {   
                   ans+=k-j;
                   k--;
                }else{
                   j++;
                }
            }
            
             
            
        }
        
        
        
        
        return ans;
    }
};