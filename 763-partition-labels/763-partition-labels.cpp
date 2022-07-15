class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> ans;
       
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<s.size();i++){
            
            
            umap[s[i]]=i;
            
        }
        
        int start=0;
        int end=umap[s[0]];
       
        for(int i=0;i<s.size();i++){
            
            
            if(umap[s[i]]>end)
            {
                end=umap[s[i]];
            }
            
            if(i==end){
                
                ans.push_back(end-start+1);
                start=i+1;
                end=umap[s[i+1]];
                
            }
            
        }
        
        
        
        return ans;
    }
};