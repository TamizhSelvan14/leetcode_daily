class Solution {
public:

    void solve(vector<vector<int>> &ans ,vector<int> nums, vector<int> dummy,int i){

        if(i==nums.size()){
            cout<<i<<endl;
            ans.push_back(dummy);
            return;
        }

        dummy.push_back(nums[i]);
        solve(ans,nums,dummy,i+1);
        dummy.pop_back();
        solve(ans,nums,dummy,i+1);



    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> dummy;
        vector<vector<int>> ans;


        solve(ans,nums,dummy,0);


        return ans;
    }
};