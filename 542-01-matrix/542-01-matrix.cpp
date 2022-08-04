class Solution {
public:
    
    void bfs(vector<vector<int>>& mat){
          
        
        int rows=mat.size();
        int cols=mat[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        
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
        
    }
    
    void dp(vector<vector<int>>& mat){
        
        
        int rows=mat.size();
        int cols=mat[0].size();
        
        int maxi=rows+cols;
        
        //top to bottom
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                
                if(mat[i][j]==0)
                    continue;
                
                mat[i][j]=maxi;
                
                //check edge cases to tackle the side boundaries
                //top
                if(i-1>=0 ){
                    mat[i][j]=min(mat[i][j],mat[i-1][j]+1);
                    
                }
                //left
                if(j-1>=0 ){
                    mat[i][j]=min(mat[i][j],mat[i][j-1]+1);
                    
                }
                
            }
        }
        
        //bottom to up
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                
                if(mat[i][j]==0)
                    continue;
                
                
                //check edge cases to tackle the side boundaries
                //bottom
                if(i+1<rows ){
                    mat[i][j]=min(mat[i][j],mat[i+1][j]+1);
                    
                }
                //right
                if(j+1<cols ){
                    mat[i][j]=min(mat[i][j],mat[i][j+1]+1);
                    
                }
                
            }
        }
    }
    
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int row=mat.size();
        int col=mat[0].size();
        
        // bfs(mat);
        dp(mat);
      return mat;
    }
};