class Solution {
public:

    int solve(vector<int>& nums, int target,int i){

        if(i==nums.size())
        return target==0;


        int positive=solve(nums,target+nums[i],i+1);
        int negative=solve(nums,target-nums[i],i+1);


        return positive+negative;

    }


    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(nums,target,0);
    }
};