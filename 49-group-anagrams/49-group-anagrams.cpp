class Solution {
public:
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> umap;
        
        //here we storing the same thing as 
        //ant->nat,tan
        //aet->ate,eat,tea
        
      
        for(auto s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            
            umap[temp].push_back(s);
            
        }
        
        
        for(auto x:umap){
            ans.push_back(x.second);
        }
        
        
        
        return ans;
    }
};