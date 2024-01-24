class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        
        int maxi=0;
        int start=-1;
        
        for (int i=0;i<s.size();i++){
            
            
            
            if(umap.find(s[i])!=umap.end()){
                start=max(start,umap[s[i]]);
            }
            
            maxi=max(maxi,i-start);
            
            umap[s[i]]=i;
            
        }
        
        return maxi;
    }
};