class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // set<int> st(nums.begin(),nums.end());
        
        if(nums.size()==0)
            return 0;
        
        sort(nums.begin(),nums.end());
        
     unordered_map<int,int> umap;//int,freq

        for(int i=0;i<nums.size();i++)
            umap[i]=nums[i];
        
        int ans=0,maxi=0;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==nums[i-1])
                continue;
            
            if(umap[i]==umap[i-1]+1){
                ans++;
            }else if(umap[i]!=umap[i-1]+1){
                maxi=max(ans,maxi);
                ans=0;
            }
            
        }
            
        maxi=max(maxi,ans);
        return maxi+1;
        
        
    }
};