class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        
        
        int low=1;
        int high=maxi;
        
        
        while(low<high){
            
            int mid=(low+high)/2;
            
            int val=0;
            for(auto x:piles)
                val+=(x+mid-1)/mid;
                
            if(val<=h)
                high=mid;
            else
                low=mid+1;
            
            
        }
        
        return low;
            
        
        
        
    }
};