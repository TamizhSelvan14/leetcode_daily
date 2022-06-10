class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
            
         unordered_map<char,int> umap;
        int start=0,maxi=0;
        for(int i=0;i<s.size();i++){
            
            
            if(umap.find(s[i])!=umap.end() and umap[s[i]]>=start)
                start=umap[s[i]]+1;
            
            
            umap[s[i]]=i;
           
            maxi=max(maxi,i-start+1);
            
            
        }
        
        return maxi;
    }
};