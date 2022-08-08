class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        int maxi=prices[0];
        int mini=prices[0];
        int ans=0;
        for(int i=1;i<n;i++){
            
            if(prices[i]<mini){
                mini=prices[i];
                maxi=0;
               
            }
            
            if(prices[i]>maxi){
                maxi=prices[i];
                ans+=maxi-mini;
               
                mini=maxi;
                 maxi=0;
            }
            
           
            
            
        }
        
        return ans;
        
    }
};