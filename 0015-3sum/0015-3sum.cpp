class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){

            int start=i+1;
            int end=n-1;

            if(i>0 and nums[i]==nums[i-1])   //duplciates
                continue;


            while(start<end){
                if(nums[i]+nums[start]+nums[end]==0){
                    ans.push_back({nums[i],nums[start],nums[end]});
                
                start++;end--;
                //duplicates
                while(start<end and nums[start]==nums[start-1])
                        start++;

                while(start<end and nums[end]==nums[end+1])
                        end--;

                }else if(nums[i]+nums[start]+nums[end]>0){
                    end--;
                }else{
                    start++;
                }





            }

        }



    return ans;
    }
};