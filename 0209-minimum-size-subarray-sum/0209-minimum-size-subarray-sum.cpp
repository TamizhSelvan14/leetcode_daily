class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int start=0;
        int curr=0;
        int ans=INT_MAX;

        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(curr>=target){
                // ans=min(ans,i-start+1);

                while(start<=i and curr>=target){
                   ans=min(ans,i-start+1);
                   curr-=nums[start];
                   start++;
                }

                // curr=0;
                // start=i+1;
            }


        }


        return ans==INT_MAX ? 0 : ans;
    }
};