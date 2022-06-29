class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
    int minsofar=INT_MAX;
        int maxsofar=0;
        
        for(int i=0;i<prices.size();i++){
            minsofar=min(minsofar,prices[i]);
            maxsofar=max(maxsofar,prices[i]-minsofar);
        }
        
        return maxsofar;
    }
};