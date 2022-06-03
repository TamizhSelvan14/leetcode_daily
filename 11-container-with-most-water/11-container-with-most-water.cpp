class Solution {
public:
    int maxArea(vector<int>& height) {
        int sum=0;
        int n=height.size();
        
       
        int i=0,j=n-1;
       
        
        while(i<j){
            
                
                    // taking he min height and multiplying with j-i in ex 1 it is 8-1==>7 so 7*7 and do the process and store the max   
                   int t=min(height[i],height[j]) * ((j-i));
                    sum=max(sum,t);
            // cout<<t<<" ";
                
            //if the i th height is less then i++ else j++ simpler
            if(height[i]<height[j])
                i++;
            else
                j--;
            
        }
        
        
        
        return sum;
    }
};