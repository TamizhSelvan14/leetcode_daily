class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int maxElement=*max_element(nums.begin(),nums.end());
        int minElement=*min_element(nums.begin(),nums.end());
        
        int maxIndex=INT_MIN;
        int minIndex=INT_MAX;
        int n=nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            
            
            if(maxElement==nums[i]){
                maxIndex=i;
            }
            
            
            if(minElement==nums[i]){
                minIndex=i;
            }
            
            
        }
        
        if(maxIndex<minIndex){
            swap(maxIndex,minIndex);
        }
        
        int fromStart=maxIndex+1;
        int fromEnd=n-minIndex+1;
        int frombothEnd=(minIndex+1)+(n-maxIndex+1);
        
        return min(min(fromStart,fromEnd),frombothEnd);
        
        
        
        
        
        
    }
};