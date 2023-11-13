class Solution {
public:
    void solve(vector<vector<char>>& grid,int i,int j){
        
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]=='0')
            return;
        
        
        grid[i][j]='0';
        
        solve(grid,i+1,j);
        solve(grid,i,j+1);
        solve(grid,i-1,j);
        solve(grid,i,j-1);
        
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                
                if(grid[i][j]=='1'){
                    solve(grid,i,j);
                    ans++;
                }
                
                
            }
        }
        
        
        return ans;
    }
};