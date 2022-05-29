class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        
        if(s.size()<target.size())
            return 0;        
        unordered_map<char,int> umap;
        unordered_map<char,int> umap2;
        
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        
        
        for(int i=0;i<target.size();i++){
            umap2[target[i]]++;
        }
        
        
        
         int mn = INT_MAX  ; 
        for(auto a : umap2 ) {
             mn = min(mn , umap[a.first]/a.second); 
        }
        return mn ; 
        
    }
};