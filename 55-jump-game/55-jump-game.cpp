class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step=nums[0];
        
        for(int i=1;i<nums.size();i++){
            step--;
            
            if(step<0)
                return false;
            else if(step<nums[i]){
                step=nums[i];
            }
            
            
            
            
        }
        return true;
    }
};