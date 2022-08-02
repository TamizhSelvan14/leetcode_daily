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
    
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        
        int ans=0;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(grid[i][j]==0){
                    
                    if(solve(i,j,grid,rows,cols))
                        ans++;
                    
                }    
                
            }
        }
        
        
        
        return ans;
    }
};