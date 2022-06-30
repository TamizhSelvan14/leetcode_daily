class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        
        //to find median sorted gives accurate
       sort(nums.begin(),nums.end());
        
        int n=nums.size();
        //find the median of the number and make all the elements to the median
        
        int sum=0;
        
        for(auto x:nums)
            sum+=x;
        
        //calculate median
        int median=nums[n/2];
        
        // cout<<median;
        for(auto x:nums){
            
            ans+=abs(x-median);//make elements equal to median
            
        }
    
    
         return ans;
    }
};

