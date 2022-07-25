class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
       int low=0;
        int high=n-1;
        
        //not low<=high since no target
        while(low<high){
            
            int mid=low+(high-low)/2;
         
            // bringing the low to the smaalest index
            if(nums[mid]>nums[high]){
                low=mid+1;
            }else{
                high=mid;
            }
            
            
        }
        
        
        
        return nums[low];
    }
};