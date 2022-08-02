class Solution {
public:
    int ans=0;
    
    void dfs(int i,int j,int rows,int cols,vector<vector<int>>& grid){
        
        if(i<0 or j<0 or i>=rows or j>=cols or grid[i][j]==0)
            return ;
        
        // if(grid[i][j]==1)
        //  {   
        //     ans++;
        //     return;
        //  }
        
        grid[i][j]=0;
        ans++;
        
      dfs(i+1,j,rows,cols,grid);
        
       dfs(i,j+1,rows,cols,grid);
        
       dfs(i-1,j,rows,cols,grid);
        
        dfs(i,j-1,rows,cols,grid);
        
    }
        
    
    int bfs(int i,int j,int rows,int cols,vector<vector<int>>& grid){
        
        queue<pair<int,int>> q;
        q.push({i,j});
        
        int count=0;
        while(!q.empty())
        {
            int a=q.front().first;
            int b=q.front().second;
            
            q.pop();
            
            
        if(a<0 or b<0 or a>=rows or b>=cols or grid[a][b]==0)
            continue;
        
        if(grid[a][b]==1)
           count++;
            
        grid[a][b]=0;
            
            
         q.push({a+1,b});
         q.push({a,b+1});
         q.push({a-1,b});
         q.push({a,b-1});
            
        }
        return count;
        
    }
    
    
        
        
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        int maxi=INT_MIN;
         // int ans=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(grid[i][j]==1){
                   
                    dfs(i,j,rows,cols,grid);
                    
                }
                maxi=max(maxi,ans);
                    ans=0;
            }
        }
        return maxi;
        
    }
};