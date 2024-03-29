class Solution {
public:
    
    void dfs(vector<vector<int>>  &grid,int i,int j){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() or grid[i][j]==0){
            return ;
         }
        
        
        grid[i][j]=0;
        
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        
        
    }
    
    
    void bfs(vector<vector<int>>  &grid,int i,int j){
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        
        while(!q.empty()){
            
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            
            if(a<0 || b<0 || a>=grid.size() || b>=grid[0].size() or grid[a][b]==0){
            continue ;
         }
        
            grid[a][b]=0;
            
            q.push({a+1,b});
            
            q.push({a,b+1});
            
            q.push({a-1,b});
            
            q.push({a,b-1});
            
            
            
        }
        
        
        
    }
        
    
    
    
    
    int numEnclaves(vector<vector<int>>& grid) {
       
        int row=grid.size();
        int col=grid[0].size();
        
        
        //traverse boundary if 1 found then do dfs and make them toan other symbol then count at last remaining ones
        
        
        for(int i=0;i<row;i++){
            
            //first row
            if(grid[i][0]==1)
                bfs(grid,i,0);
            
            //last row
            if(grid[i][col-1]==1)
                bfs(grid,i,col-1);
            
            
        }
        
        
        
        
        for(int i=0;i<col;i++){
            
            //first col
            if(grid[0][i]==1)
                bfs(grid,0,i);
            
            //last col
            if(grid[row-1][i]==1)
                bfs(grid,row-1,i);
            
            
        }
        
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j]==1)
                    count++;
                
            }
        }
        
        
        return count;
    }
};