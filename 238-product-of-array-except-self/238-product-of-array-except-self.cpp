class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int n=nums.size();
        
        vector<int> ans(n);
        
//         //following cosde has space of 0(N)
//         vector<int> prefixProduct(n);
//         vector<int> suffixProduct(n);
//         int pre=1;
//         for(int i=0;i<n;i++){
            
//             prefixProduct[i]=nums[i]*pre;
//             pre=prefixProduct[i];
            
//         }
        
//         int suff=1;
//         for(int i=n-1;i>=0;i--){
            
//             suffixProduct[i]=nums[i]*suff;
//             suff=suffixProduct[i];
            
//         }
        
//         ans[0]=suffixProduct[1];
//         ans[n-1]=prefixProduct[n-2];
            
            
            
//         for(int i=1;i<n-1;i++){
//             ans[i]=prefixProduct[i-1]*suffixProduct[i+1];
//         }
        
        
        int pre=1;
        
        for(int i=0;i<n;i++)
        {
            ans[i]=pre;
            pre=nums[i]*pre;
        }
        
        int suff=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]*=suff;
            suff=nums[i]*suff;
        }
        
        
        
        
        
        
        return ans;
    }
};