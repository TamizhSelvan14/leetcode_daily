class Solution {
public:
    
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int row=mat.size();
        int col=mat[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        
        for(int i=0;i<mat.size();i++){
        
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    
                    q.push({i,j});
                    visited[i][j]=true;
                    
                }
            }
        }
        
        vector<pair<int,int>> directions{{-1,0},{1,0},{0,-1},{0,1}};
        
        while(!q.empty()){
            
            
            
            int a=q.front().first;
            int b=q.front().second;
            
            q.pop();
            
            for(auto x:directions){
                
                int row=a+x.first;
                int col=b+x.second;
                
                  
            if(row<0 or col<0 or row>=mat.size() or col>=mat[0].size() or visited[row][col]==true )
                continue;
            
            visited[row][col]=true;
            
            mat[row][col]=mat[a][b]+1;
            
            q.push({row,col});
           
                
                
                
            }
            
            
          
            
        }
        
        
        
        
        return mat;
    }
};