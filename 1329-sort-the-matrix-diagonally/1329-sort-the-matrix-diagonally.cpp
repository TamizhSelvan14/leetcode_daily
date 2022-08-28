class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
    
    // from left cols
    
        int n=mat.size();
        int m=mat[0].size();
        
        unordered_map<int, priority_queue <int, vector<int>, greater<int> >> umap;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                umap[j-i].push(mat[i][j]);
                
            }
        }
        
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
               mat[i][j]= umap[j-i].top();
                umap[j-i].pop();
                
            }
        }
       
    return mat;
    
    }
    
    
};