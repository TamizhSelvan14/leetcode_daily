class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;


    for(auto s: strs){
        string t=s;
            sort(t.begin(),t.end());
            umap[t].push_back(s);
            // if(umap.find(s)==umap.end()){ //not found
            //     umap[s].push_back()
            // }


    }
    vector<vector<string>> ans;
        for(auto x:umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};