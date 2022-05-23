class Solution {
public:
    void dfs(vector<vector<char>> &grid,int i,int j,int row,int col){
        
        //boundary check
        if(i<0 || j<0 || i>=row || j>=col)
            return;
        
        if(grid[i][j]=='0')
            return;        
        
        grid[i][j]='0';
        
        //all directions
        dfs(grid,i+1,j,row,col);
        
        dfs(grid,i,j+1,row,col);
        dfs(grid,i-1,j,row,col);
        dfs(grid,i,j-1,row,col);
        
        
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        
        int row=size(grid);
        int col=size(grid[0]);
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,row,col);
                    count++;
                }
            }
        }
        return count;
    }
};