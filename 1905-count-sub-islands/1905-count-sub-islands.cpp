class Solution {
public:
    
    void dfs(vector<vector<int>> &grid1,vector<vector<int>> &grid2,int i,int j,int r2,int c2,int &res){
        
        if(i<0 || j<0 || i>=r2 || j>=c2 )
            return;
        
        if( grid2[i][j]==1 and grid1[i][j]==0)
        {
            res=false;
        }
        
        if(grid2[i][j]==0)
            return;
        
        
        grid2[i][j]=0;
        
        
            dfs(grid1,grid2,i+1,j,r2,c2,res);
        
            dfs(grid1,grid2,i,j+1,r2,c2,res);
        
            dfs(grid1,grid2,i,j-1,r2,c2,res);
        
            dfs(grid1,grid2,i-1,j,r2,c2,res);
     
        
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int r1=grid1.size();
        int c1=size(grid1[0]);
        
        int r2=size(grid2);
        int c2=size(grid2[0]);
        
        
        int count=0;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                if(grid2[i][j]==1){
                    int res=true;
                    dfs(grid1,grid2,i,j,r2,c2,res);
                    // cout<<res<<" ";
                        count+=res;
                       
                }
            }
        }
        
        return count;
    }
};