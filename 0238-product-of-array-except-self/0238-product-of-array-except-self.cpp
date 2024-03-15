class Solution {
public:
//    1   2   6   24
//    24  24  12   4
       
//    24  12   8   6
    
    
//     -1. -1   0    0   0
//     0.   0    0   -9   3
        
//      0   0.   9.  0.   0
       
       
    
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);
        int pre=1,suf=1;
        int j=n-1;
        for(int i=0;i<n;i++){
            pre*=nums[i];
            
            prefix[i]=pre;
            
            suf*=nums[j];
            
            suffix[j]=suf;
            j--;
        }
        
        ans[0]=suffix[1];
        ans[n-1]=prefix[n-2];
        
        for(int i=1;i<n-1;i++){
            ans[i]=prefix[i-1]*suffix[i+1];  
            
        }
        
        
        return ans;
        
    }
};