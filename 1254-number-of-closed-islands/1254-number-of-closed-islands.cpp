class Solution {
public:
    bool solve(int i,int j,vector<vector<int>>& grid,int rows,int cols){
        
        
        if(i<0 or j<0 or i>=rows or j>=cols ){
            return false;
        }
        
        if(grid[i][j]==1)
            return true;
       
        
        grid[i][j]=1;
        
        
        //check akll side it is returing true if not it is touching boundary
        bool a=solve(i+1,j,grid,rows,cols);
        
          bool b=solve(i,j+1,grid,rows,cols);
          bool c=solve(i-1,j,grid,rows,cols);
          bool d=solve(i,j-1,grid,rows,cols);
        
        return (a&&b&&c&&d);
        
        
    }
    
    
    void dfs(int i,int j,vector<vector<int>>& grid){
        
        
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() ){
            return ;
        }
        
        if(grid[i][j]==1)
            return ;
       
        
        grid[i][j]=1;
        
        
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        
        
    }
    
    
    void bfs(int i,int j,vector<vector<int>>& grid){
        
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        
        while(!q.empty()){
            
            int a=q.front().first;
            int b=q.front().second;
            
            q.pop();
            
            if(a<0 or b<0 or a>=grid.size() or b>=grid[0].size() or grid[a][b]==1){
                    continue;
             }
            
            grid[a][b]=1;
            
            q.push({a+1,b});
            
            q.push({a,b+1});
            
            q.push({a-1,b});
            
            q.push({a,b-1});
            
        }
        
        
    }
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        
        int ans=0;
        
        //method 1 traverse all the boundaries and fill the 0 -> 1 and travese again to count 0 islands
        
        //first and last rows
        for(int i=0;i<rows;i++){
            
            if(grid[i][0]==0)
                bfs(i,0,grid);
            
            if(grid[i][cols-1]==0)
                bfs(i,cols-1,grid);
                
                
        }
        
        
        //first and last rows
        for(int i=0;i<cols;i++){
            
            if(grid[0][i]==0)
                bfs(0,i,grid);
            
            if(grid[rows-1][i]==0)
                bfs(rows-1,i,grid);
                
        }
        
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(grid[i][j]==0){
                    
//                     if(solve(i,j,grid,rows,cols))
//                         ans++;
                    bfs(i,j,grid);
                    ans++;
                    
                }    
                
            }
        }
        
        
        
        return ans;
    }
};