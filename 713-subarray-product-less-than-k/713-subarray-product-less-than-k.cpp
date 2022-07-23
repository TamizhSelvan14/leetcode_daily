class Solution {
public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count=0;
        
        
        
//         for(int i=0;i<nums.size();i++){
//             int sum=1;
//             for(int j=i;j<nums.size();j++){
                
//                     sum*=nums[j];
//                     if(sum<k)
//                         count++;
//                     else
//                         break;
                    
              
//             }
//         }
            
            
//             return count;
            
//     }
    
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        
        int sum=1;
        int start=0;
        for(int i=0;i<nums.size();i++){
        
            sum*=nums[i];
            
            while(start<=i and sum>=k){
                sum=sum/nums[start];
                start++;
            }
            
           ans+=i-start+1; 
        }
      
            
            
        return ans;
            
    }
    
};