class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
        
   
       
 int start=0, sum = 0, mini = INT_MAX;
        
       for(int i=0;i<nums.size();i++) {
            
           sum+=nums[i];
               
           
           while(sum>=target){
                 
                 mini=min(mini,i-start+1);
               sum-=nums[start++];
               
           }
       
           
       }
        
        
        
        return mini == INT_MAX ? 0 : mini; 
        
        
        
    }
};