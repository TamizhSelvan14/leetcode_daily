class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp=nums;

        if(nums.size()==0)
        return;

        for(int i=0;i<nums.size();i++){
            nums[(i+k) % nums.size()] =temp[i];
        }


    }
};