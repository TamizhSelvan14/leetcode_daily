class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        
        int ans=1;
        
        int lastVal=0;
        int currDiff=0;
        
       for(int i=1;i<nums.size();i++) 
       {
           currDiff=nums[i]-nums[i-1];
           
           if((currDiff<0 and lastVal>=0) || (currDiff>0 and lastVal<=0) )
           {
               ans++;
                lastVal=currDiff;
           }
       }
       
            
    
        return ans;
    }
};