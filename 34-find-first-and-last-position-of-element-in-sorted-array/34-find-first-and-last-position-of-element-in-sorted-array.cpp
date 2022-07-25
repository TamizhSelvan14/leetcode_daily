class Solution {
public:
    
    int firstPosition(vector<int> &nums,int target){
        
        int ans=-1;
        int low=0;
        int high=nums.size()-1;
        
        
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            // reducing the mid as possible with the target to get minimist
            if(nums[mid]>=target)
                 high=mid-1;
            else
                low=mid+1;
            
            if(nums[mid]==target)
                ans=mid;
            
            
        }
        
        return ans;
        
    }
    
     int secondPosition(vector<int> &nums,int target){
        
        int ans=-1;
        int low=0;
        int high=nums.size()-1;
        
        
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            //increase the mid as possible to make the higest mid with value target
            if(nums[mid]<=target)
                 low=mid+1;
            else
                high=mid-1;
            
            if(nums[mid]==target)
                ans=mid;
            
            
        }
        
        return ans;
        
    }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
      
    vector<int> ans(2,-1);
        
        
     ans[0]=firstPosition(nums,target);
     ans[1]=secondPosition(nums,target);
            
    return ans;
    
    }
};