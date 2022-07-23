class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int maxi=INT_MIN;
        int start=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                count++;
            }
            
            while(count>k){
                if(nums[start]==0)
                    count--;
                
                start++;
            }
            
            
            maxi=max(maxi,i-start+1);
            
            
            
        }
        
        return maxi;
        
    }
};