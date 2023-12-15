class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> umap;
        
        for(int i=0;i<paths.size();i++){
            umap[paths[i][0]]=paths[i][1];
        }
        
        
        for(int i=0;i<paths.size();i++){
            if(umap.find(paths[i][1])==umap.end()){
                 // cout<< umap[paths[i][0]]<<endl;

                return umap[paths[i][0]];
            }
            
            
            
        }
        
        
        return "";
    }
};