class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       
        
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        
        long long maxiH=horizontalCuts[0]-0;
        long long maxiV=verticalCuts[0]-0;
        
        for(int i=1;i<horizontalCuts.size();i++){
            maxiH=max((long long)horizontalCuts[i]-horizontalCuts[i-1],maxiH);
        }
        
        
        for(int i=1;i<verticalCuts.size();i++){
            maxiV=max((long long)verticalCuts[i]-verticalCuts[i-1],maxiV);
        }
            
          maxiH=max((long long )h-horizontalCuts[horizontalCuts.size()-1],maxiH);
        
          maxiV=max((long long)w-verticalCuts[verticalCuts.size()-1],maxiV);
        
        
        
        return (maxiH*maxiV) %1000000007;
        
    }
};