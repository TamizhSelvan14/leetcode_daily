class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini=INT_MAX;
        
        int start=0;
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            
            sum+=nums[i];
            
            while(sum>=target){
                
                sum-=nums[start];
                
                mini=min(mini,i-start+1);
                start++;
                
            }
            
            
            
        }
        
        
        
        return mini==INT_MAX ? 0 : mini;
        
    }
};