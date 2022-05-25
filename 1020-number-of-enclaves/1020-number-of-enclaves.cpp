class Solution {
public:
    
    void dfs(vector<vector<int>>  &grid,int i,int j,int row,int col){
        
        if(i<0 || j<0 || i>=row || j>=col ){
            return ;
         }
        
        if(grid[i][j]==0)
            return ;
        
        grid[i][j]=0;
        
        
        dfs(grid,i+1,j,row,col);
        dfs(grid,i,j+1,row,col);
        dfs(grid,i-1,j,row,col);
        dfs(grid,i,j-1,row,col);
        
        
        // return (a&&b&&c&&d); 
    }
    
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        int count=0;

        int row=grid.size();
        int col=grid[0].size();
        
        //for this sum make all the edge having one island to zero at last count the 1s
        
        // top right direction  -->
        
        for(int i=0;i<col;i++){
               if(grid[0][i]==1){
                    dfs(grid,0,i,row,col);
                    
                }
             
        }
        
        // left most side  
        
        for(int i=0;i<row;i++){
               if(grid[i][0]==1){
                    dfs(grid,i,0,row,col);
                    
                }
             
        }
           for(int i=0;i<row;i++){
               if(grid[i][col-1]==1){
                    dfs(grid,i,col-1,row,col);
                    
                }
             
        }
        
        
        //bottom line
        for(int i=0;i<col;i++){
               if(grid[row-1][i]==1){
                    dfs(grid,row-1,i,row,col);
                    
                }
             
        }
        
        
        //right most line
        
     
        
        
        for(int i=1;i<row-1;i++){
            for(int j=1;j<col-1;j++){
                if(grid[i][j]==1)
                    count++;
            }
        }
        
        
        
        
        
        return count;
    }
};