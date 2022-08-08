class Solution {
public:
    
    int solve(int i,vector<int> &prices,int maxProfit,int minsofar){
       
       
        if(i<0 or i>=prices.size())
        {
            return maxProfit;
        }
          
        
        int currProfit=prices[i]-minsofar;
        
        maxProfit=max(maxProfit,currProfit);
        minsofar=min(minsofar,prices[i]);
        
        
        
        
        
        return maxProfit=max(maxProfit,solve(i+1,prices,maxProfit,minsofar));
        
    }
    
    
    int maxProfit(vector<int>& prices) {
     
        int n=prices.size();
        
        return solve(0,prices,0,prices[0]);
        
        
//     int buy=INT_MAX;
//         int sell=0;
        
//         for(int i=0;i<prices.size();i++){
//             buy=min(buy,prices[i]);
//             sell=max(sell,prices[i]-buy);
//         }
        
//         return sell;
    }
};