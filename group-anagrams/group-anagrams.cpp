class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        
        
    
        
        for(int i=0;i<strs.size();i++){
            
            string s=strs[i];
            sort(s.begin(),s.end());
            
            // if(umap.find(s)!=umap.end()){
                umap[s].push_back(strs[i]);
            // }else{
                // umap[/s]
            // }
            
            // umap[s];
            
            
            
        }
        
        vector<vector<string>> ans;
        
        for(auto x:umap){
            ans.push_back(x.second);
        }
        
        
        return ans;
        
        
    }
};