class Solution {
public:

    int solve(vector<int>& nums,int i,vector<int> &cache){

        if(i>=nums.size()){
            return 0;
        }

        if(cache[i]!=-1){
            return cache[i];
        }


        int pick=nums[i]+solve(nums,i+2,cache);

        int dontPick=solve(nums,i+1,cache);

        return cache[i]=max(pick,dontPick);



    }



    int rob(vector<int>& nums) {
        
        // vector<int> cache(nums.size(),-1);
        // return solve(nums,0,cache);
       if(nums.size()==1)
            return nums[0];

        vector<int> dp(nums.size()+1,0);

        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }

        return dp[nums.size()-1];
    }
};