
   class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> preProduct(n+1);
        
        vector<int> suffProduct(n+1);
        
        preProduct[0]=(1);
        
        suffProduct[0]=(1);
        
        int pre=1;
        int post=1;
        
        int i=0;int j=n-1;
       while(i<n-1 and j>0){
            
            int val1=pre*nums[i];
            pre=val1;
            
            preProduct[i+1]=(val1);
            
             int val2=post*nums[j];
            post=val2;
            
            suffProduct[j+1]=(val2);
        
            i++;j--;
            
        }
       
        
        
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