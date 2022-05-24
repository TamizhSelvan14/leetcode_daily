class Solution {
public:
//     note:
//     here we need to check the 0s island is fully covered by the 1s island by all four sides so we use four bool 
        
//         why four bool?
//         beacuse if we dont use four bools then is any one side return false  every other returns false
    
    
    bool dfs(vector<vector<int>>&grid,int i,int j){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() )
            return false;
        
        if(grid[i][j]==1)
            return true;
        
            
            grid[i][j]=1;
            
            bool down=dfs(grid,i+1,j);
            bool right=dfs(grid,i,j+1);
            bool up=dfs(grid,i-1,j);
            bool left=dfs(grid,i,j-1);
            
        
        
        return (up&& down && left && right);
    }
    
    
    int closedIsland(vector<vector<int>>& grid) {
        int component=0;
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j)){
                     
                    component++;   
                    }
                }
            }
        }
        return component;
    }
};