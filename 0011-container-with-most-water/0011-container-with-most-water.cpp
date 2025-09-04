class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;int j=height.size()-1;
         int maxi=0;


         while(i<j){
            cout<<i<<" - "<<j<<endl;

            maxi=max(maxi,min(height[i],height[j]) * ( j-i));
            cout<<maxi<<endl;

            if(height[i]<height[j]){
                i++;
            }else if (height[i]>height[j]){
                j--;
            }else{
                i++;j--;
            }





         }



return maxi;
    }
};