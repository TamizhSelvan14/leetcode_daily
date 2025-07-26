class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        

        //HERE BFS IS THE BEST SOLN WHY BCS IF WE LOOK CLOSELY WE CAN SEE THE ROTTEN 
        // MANGOES SIDE DIRECTIOSN WILL BE ROTTEN AND WE NEED TO CALCULATE THIS        AT          MINUTE LEVEL

    queue<pair<int,int>> q;
    int ans=0;
    int rotten=0;
    int fresh=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==2){

                q.push({i,j});


            }else if (grid[i][j]==1){

                fresh++;


            }
        }
    }

    if(fresh==0)
        return 0;
    vector<pair<int,int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
   while(!q.empty()){
            
           ans++;
            int size=q.size();
            for(int i=0;i<size;i++){
                 int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                for(auto val:directions){
                    
                    
                    int row=x+val.first;
                    int col=y+val.second;
                    
                     if(row<0 or col<0 or row>=grid.size() or col>=grid[0].size() or grid[row][col]==2 or grid[row][col]==0 )
                        continue;
                    
                    grid[row][col]=2;
                    
                    fresh--;
                    q.push({row,col});
                    
                    
                }   
            }
        }
        


    return fresh==0 ? ans-1: -1; 
    


    }
};