class Solution {
public:
    
    void dfs(vector<vector<char>> &grid,int i,int j){
        
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]=='0')
            return;
        
        
        
        grid[i][j]='0';
        dfs(grid,i+1,j);
        
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        
        
        
    }
    
    
    void bfs(vector<vector<char>> &grid,int i,int j){
        
        queue<pair<int,int>> q;
        q.push({i,j});
        
        
        while(!q.empty()){
            
            int a=q.front().first;
            int b=q.front().second;
            
            
            q.pop();
            
            if(a<0 or b<0 or a>=grid.size() or b>=grid[0].size() or grid[a][b]=='0'){
                continue;
            }
            
            //directions
                grid[a][b]='0';   
                q.push({a+1,b});
            
                q.push({a-1,b});
            
                q.push({a,b+1});
                
                q.push({a,b-1});
                
        }
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j]=='1'){
                    
                    bfs(grid,i,j);
                    ans++;
                   
                }
            }
        }
        
        return ans;
    }
};