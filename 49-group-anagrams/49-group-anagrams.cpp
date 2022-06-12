class Solution {
public:
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> umap;
        
        //here we storing the same thing as 
        //ant->nat,tan
        //aet->ate,eat,tea
        
        for(auto x:strs){
            string temp=x;
            sort(begin(temp),end(temp));
            
            umap[temp].push_back(x);
            
        }
        
        //then pushing the vector
        for(auto x:umap){
            ans.push_back(x.second);
        }
            
        return ans;
        
        
        
    }
};