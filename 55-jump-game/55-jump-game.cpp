class Solution {
public:
    
    bool solve(int index,vector<int> nums){
        
        if(index==nums.size()-1) return true;
        int reachable=index+nums[index];
        
        for(int i=index+1;i<=reachable;i++){
             if(solve(i,nums)){
                 return true;
            }      
        }
        return false;
    }
    
    
    
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
       
        int curr=nums[0];
        
        for(int i=1;i<n;i++){
          
            if(curr<=0)
                return false;
            
            curr--;
            
            curr=max(curr,nums[i]);
         
        }
    
    return true;
    }
};