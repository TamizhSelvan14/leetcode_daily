class Solution {
public:
    int trap(vector<int>& height) {
       
        int n=height.size();
        int maxleft=height[0];
        int maxright=height[n-1];
        
        int low=1;
        int high=n-2;
        int ans=0;
        while(low<=high){
            
            if(maxleft<maxright){
                
                
                if(maxleft<height[low]){
                    maxleft=height[low];
                }else{
                    ans+=maxleft-height[low];
                }
                
                low++;
                
            }else{
                if(maxright<height[high])
                    maxright=height[high];
                else
                    ans+=maxright-height[high];
                
                high--;
            }
            
            
            
        }
        
        
        return ans;
        
    }
};