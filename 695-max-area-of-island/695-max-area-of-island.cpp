class Solution {
public:
    
    void dfs(vector<vector<int>>& grid,int i,int j,int row,int col,int &area)
    {
       
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]==0){
            return ;
        }
        
        
        grid[i][j]=0;
           
              area++;
            dfs(grid,i-1,j,row,col,area); //up
            dfs(grid,i+1,j,row,col,area); //down
            dfs(grid,i,j+1,row,col,area);  //right
            dfs(grid,i,j-1,row,col,area); //left
           
        
        return;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row=grid.size(),col=grid[0].size() ;
        int area=0;
        int maxi=0;
        for(int i=0;i<row;i++){
            
            for(int j=0;j<col;j++){
                
                
                if(grid[i][j]==1){
                    dfs(grid,i,j,row,col,area);
                    
                   maxi=max(maxi,area);
                    area=0;
                }
                
                
            }
            
            
        }
        
        
        return maxi;
    }
};