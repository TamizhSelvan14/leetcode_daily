class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        //base case
        if(nums.size()==1)
            return {nums[0]};
        
        
        
        unordered_map<int,int> umap;
        
//         1->3   3->1
//         2->2   2->2
//         3->1   1->1
        
        int maxi=0;
        
        
        for(int i=0;i<n;i++){
            
            
            umap[nums[i]]++;
            
            maxi=max(maxi,umap[nums[i]]);
            
        }
       
       priority_queue<pair<int,int>> pq;
        
        
        
        
        for(auto x:umap){
            
            pq.push({x.second,x.first});
            
            
        }
          
       
        
        vector<int> ans;
        
        
        for(int i=0;i<k;i++){
            
            int val=pq.top().second;
            pq.pop();
            ans.push_back(val);
            
            
        }
        
        return ans;
        
       
    }
};

