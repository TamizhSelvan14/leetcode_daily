class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]++;
            
            if(umap[arr[i]]> (arr.size()/4)){
                return arr[i];
            }
            
        }
        
        
        
        
        
        
        return 0;
    }
};