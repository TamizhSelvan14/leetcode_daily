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
        
//         int t1=maxIndex;
//         int t1=minIndex;
//         minIndex=min(maxIndex,minIndex);
//         maxIndex=max(maxIndex,minIndex);
        
        // cout<<maxIndex<<" "<<minIndex;
        
        // cout<<maxIndex+1<<" "<<n-minIndex+1<<" "<<(minIndex+1)<<" "<<" "<<(n-maxIndex);
        
        return min(min(maxIndex+1,n-minIndex+1),(minIndex+1)+(n-maxIndex+1));
        
        
        
        
        
        
    }
};