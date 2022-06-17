class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //stores the ans
       vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
       
        //frequency,number
        priority_queue<pair<int,int>> pq;
        
        for(auto x:umap){
            
            pq.push({x.second,x.first});
            
        }
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        
        
        return ans;
        
    }
};