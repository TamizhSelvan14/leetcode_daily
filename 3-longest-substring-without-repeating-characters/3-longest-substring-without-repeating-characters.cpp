class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int,int> umap;
        
        int n=s.size();
        int start=0;
        
        int maxi=0;
        for(int i=0;i<n;i++){
            
            
                    if(umap.find(s[i])!=umap.end() and umap[s[i]]>=start){
                        ///if we found an element move start at umap[i]+1
                        
                        start=umap[s[i]]+1;
                    }
            
                    umap[s[i]]=i;
                    maxi=max(maxi,i-start+1);
            // cout<<maxi<<endl;
            }
            
        
        return maxi;
    }
};