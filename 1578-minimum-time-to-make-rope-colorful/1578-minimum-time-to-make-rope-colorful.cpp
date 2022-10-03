class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
    int n= neededTime.size();
        
        int mini=0;
        
        
        if(n==1)
            return neededTime[0];
        
        
        for(int i=1;i<n;i++){
            
            if(colors[i-1]==colors[i]){
                mini+=min(neededTime[i-1],neededTime[i]);
                
               neededTime[i]=max(neededTime[i-1],neededTime[i]);
                 
                
            }
            
            
        }
        
        
        return mini;
        
    }
};