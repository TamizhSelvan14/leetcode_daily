class Solution {
public:
    
    void dfs(vector<vector<char>>&grid,int row,int col,int i,int j){
        
        if(i>=0 and i<row and j>=0 and j<col and grid[i][j]=='1'){
            
            if(grid[i][j]=='0')
                return;
            
              grid[i][j]='0';
            
       
            dfs(grid,row,col,i+1,j);
            
            dfs(grid,row,col,i,j+1);
            dfs(grid,row,col,i,j-1);
            dfs(grid,row,col,i-1,j);
            
               
        }
        
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j]=='1'){
                    dfs(grid,row,col,i,j);
                    ans++;
                }
                
                
            }
        }
        
        return ans;
        
    }
};