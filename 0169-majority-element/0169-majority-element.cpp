class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int cap=n/2;
        unordered_map<int,int> umap;
        for(auto x:nums){
            umap[x]++;
        }

        for(auto x:umap)
        {
                if(x.second>cap){
                    return x.first;
                }
        }
        return -1;
    }
};