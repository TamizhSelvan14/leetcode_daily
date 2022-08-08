class Solution {
public:
    
    int solve(int i,int &maxi,int &mini,vector<int>& prices,int &ans){
        
        if(i>=prices.size()){
            return ans;    
        }
       
        
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
        
        
        
        solve(i+1,maxi,mini,prices,ans);
        
        
        return ans;
        
    }
    
    
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int ans=0;
        
        // return solve(0,prices[0],prices[0],prices,ans);
        
//         int maxi=prices[0];
//         int mini=prices[0];
//         int ans=0;
//         for(int i=1;i<n;i++){
            
//             if(prices[i]<mini){
//                 mini=prices[i];
//                 maxi=0;
//             }
            
//             if(prices[i]>maxi){
//                 maxi=prices[i];
//                 ans+=maxi-mini;
               
//                 mini=maxi;
//                  maxi=0;
//             }
            
           
            
            
//         }
        
//         return ans;
        
        
        
        int maxi=0;
        //simple
        for(int i=1;i<n;i++){
            
            ans+=max(maxi,prices[i]-prices[i-1]);
            
        }
        
        return ans;
    }
};