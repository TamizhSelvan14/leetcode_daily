class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
        
   
       
 int i = 0, j = 0, sum = 0, mini = INT_MAX;
        
        while (j < nums.size()) {
            
            while (sum < target && j < nums.size()) 
                sum += nums[j++];
            
            if(sum>=target){
            
                while (sum >= target && i < j) 
                    sum -= nums[i++];
                
                mini = min(mini, j - i + 1);
            }
        }
        
        
        return mini == INT_MAX ? 0 : mini; 
        
        
        
    }
};