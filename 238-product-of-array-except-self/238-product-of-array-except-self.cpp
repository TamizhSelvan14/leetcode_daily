
   class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> preProduct;
        
        vector<int> suffProduct(n+1);
        
        preProduct.push_back(1);
        
        suffProduct.push_back(1);
        
        int pre=1;
        int post=1;
        for(int i=0;i<nums.size();i++){
            
            int val1=pre*nums[i];
            pre=val1;
            
            preProduct.push_back(val1);
            
            
            
            
        }
        
        for(int j=n-1;j>=0;j--){
            
            int val2=post*nums[j];
            post=val2;
            
            suffProduct[j+1]=(val2);
        
            
        }
        suffProduct[0]=1;
        // for(auto x:suffProduct){
        //     cout<<x<<" ";
        // }
        
        
        preProduct.push_back(1);
        
        suffProduct.push_back(1);
        
        
        
        vector<int> ans;
        
        for(int i=1;i<preProduct.size()-1;i++)
        {
            
            int val=preProduct[i-1] * suffProduct[i+1];
            
            ans.push_back(val);
            
            
        }
        
        return ans;
    }
};