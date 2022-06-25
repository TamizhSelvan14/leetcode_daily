class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,int> umap1;
        
        unordered_map<char,int> umap2;
        
//         for(int i=0;i<s.size();i++){
//             umap1[s[i]]++;
//         }        
        
        
//         for(int i=0;i<t.size();i++){
//             umap2[t[i]]++;
//         }
        
        
        for(int i=0;i<s.size();i++){
            
            if(umap1[s[i]]!=umap2[t[i]]){
                return false;
            }
            umap1[s[i]]=i+1;
            umap2[t[i]]=i+1;
            
            
        }
        
        
       return true; 
        
    }
};