class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        
//         for(int i=0;i<height.size();i++){
            
//             for(int j=i;j<height.size();j++){
//                 int mini=min(height[i],height[j]);
//               maxi=max(maxi,mini*(j-i));  
                
                
//             }
            
            
//         }
        
        int i=0;int j=height.size()-1;
        
        while(i<j){
            
            int mini=min(height[j],height[i]);
            
            maxi=max(maxi,mini*(j-i));
            
              if(height[i]<height[j]){
                i++;
            }else if(height[i]>height[j]){
                j--;
            }else{
                i++;j--;
            }
            
            
        }
        
        
        return maxi;
    }
};