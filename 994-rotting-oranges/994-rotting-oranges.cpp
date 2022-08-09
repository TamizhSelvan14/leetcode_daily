class Solution {
public:
    void print(vector<vector<int>>& grid){
        
        
          for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
             cout<<grid[i][j]<<" ";   
            }
              cout<<endl;
        }
        
        
        
    }
   
    
    
    int orangesRotting(vector<vector<int>>& grid) {
   
        int fresh=0;
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        
        if(fresh==0)
            return 0;
        
        
      vector<pair<int,int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
        
        int ans=0;
        while(!q.empty()){
            
            ans++;
            int size=q.size();
            //traverse the q fully
            
            for(int i=0;i<size;i++){
                
                int a=q.front().first;
                int b=q.front().second;
                
                q.pop();
                
                for(auto x:directions){
                    
                    
                    int row=a+x.first;
                    int col=b+x.second;
                    
                    if(row<0 or col<0 or row>=rows or col>=cols or grid[row][col]==2 or grid[row][col]==0 )
                        continue;
                    
                    grid[row][col]=2;
                    // visited[row][col]=true;
                    
                    q.push({row,col});
                    fresh--;
                    
                }   
            }
        }
        print(grid);
        return fresh==0 ? ans-1 : -1;
        
    }
};