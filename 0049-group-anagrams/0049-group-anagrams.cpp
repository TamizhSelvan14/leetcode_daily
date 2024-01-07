class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> umap;
        
        //sort the string and store mapped array
        for(int i=0;i<strs.size();i++){
            
            string s=strs[i];
            sort(s.begin(),s.end());
            
            umap[s].push_back(strs[i]);
            
        }
        
        for(auto x:umap){
            ans.push_back(x.second);
        }
        
        
        return ans;
        
    }
};