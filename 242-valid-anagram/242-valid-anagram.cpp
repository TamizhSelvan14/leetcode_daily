class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        unordered_map<char,int> umap;
        
        for(int i=0;i<s.size();i++)
            umap[s[i]]++;
        
        
        for(int i=0;i<t.size();i++)
        {    if(umap.find(t[i])!=umap.end())
                umap[t[i]]--;     
            else
                return false;
        }
       
        
        
        for(auto x:umap){
            if(x.second>0)
                return false;
        }
        
        
        return true;
    }
};