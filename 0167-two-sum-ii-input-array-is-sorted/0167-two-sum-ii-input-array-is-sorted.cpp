class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;int j=n-1;


        while(i<j){
            if(nums[i]+nums[j]==target)
                return {i+1,j+1};

            if(nums[i]+nums[j] > target)
                j--;
            else if(nums[i]+nums[j]<target)
                i++;    


        }

    return {-1,-1};

    }
};