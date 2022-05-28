class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
        
        int sum=accumulate(begin(nums),end(nums),0);
       // for(int i=0;i<nums.size();i++)
        //     sum+=nums[i];
        
        cout<<sum<<endl;
        int total=(n*(n+1))/2;
        
        int ans=total-sum;
        
        return ans;
    }
};