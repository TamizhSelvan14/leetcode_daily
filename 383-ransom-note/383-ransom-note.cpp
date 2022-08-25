class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
        unordered_map<char,int> umap;
        unordered_map<char,int> umap2;
        for(auto x:magazine){
            umap[x]++;
        }
        
        
        for(auto x:ransomNote){
            
            umap2[x]++;            
            
        }
        
        
        for(auto x:umap2){
            if(umap[x.first]< x.second){
                return false;
            }
        }
        
        return true;
        
    }
};