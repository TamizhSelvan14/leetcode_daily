class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start=-1;
        int maxlength=0;
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++){
            
            if(umap.count(s[i])!=0){
                start=max(start,umap[s[i]]);
            }
            umap[s[i]]=i;
            maxlength=max(maxlength,i-start);
            
        }
          return maxlength;  
    }
};