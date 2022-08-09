class Solution {
public:
//     void dfs(int i,int j,vector<vector<int>> grid,int &maxi){
        
//         if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size()){
//             return;
//         }
        
//         if(grid[i][j]==0)
//             return;
        
//         grid[i][j]=1;
      
        
//         dfs(i+1,j,grid,ans);
        
//         dfs(i,j+1,grid,ans);
        
//         dfs(i-1,j,grid,ans);
        
//         dfs(i,j-1,grid,ans);
        
        
//     }
    
    
    int bfs(vector<vector<int>>& grid, vector<vector<bool>> visited,queue<pair<int,int>> &q){
        
        int maxi=0;
        
        //directions
        vector<pair<int,int>> directions{{1,0},{-1,0},{0,-1},{0,1}};
        
        while(!q.empty()){
            
            int a=q.front().first;
            int b=q.front().second;
            
            q.pop();
          
            for(auto x:directions){
                
                int row=a+x.first;
                int col=b+x.second;
                
                
                if(row<0 or col<0 or row>=grid.size() or col>=grid[0].size() or visited[row][col]==true)
                    continue;
                
               visited[row][col]=true;
                
                grid[row][col]=grid[a][b]+1;
                q.push({row,col});
                
                maxi=max(maxi,grid[row][col]);
                
                
            }
            
            
        }
        
        return maxi>0 ? maxi-1 :-1;
        
        
    }
    
    
    
    
    int maxDistance(vector<vector<int>>& grid) {
        
        
        int row=grid.size();
        int col=grid[0].size();
     
        
        queue<pair<int,int>>q;
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j]==1){
                  
                    q.push({i,j});
                    visited[i][j]=true;
                    
                }
                
                
            }
        }
        
        
       return bfs(grid,visited,q);
        
       
    }
};