class Solution {
public:
    void solve(vector<vector<int>>& grid,int i,int j,int n,int m,int &ans){

        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0){
            return;
        }

  grid[i][j]=0;
        ans++;
      
        solve(grid,i+1,j,n,m,ans);
        solve(grid,i,j+1,n,m,ans);
        solve(grid,i-1,j,n,m,ans);
        solve(grid,i,j-1,n,m,ans);




    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {

            int ans=0;
            int n=grid.size();
            int m=grid[0].size();
            int maxi=0;

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){

                    if(grid[i][j]==1){
                        solve(grid,i,j,n,m,ans);
                         maxi=max(maxi,ans);
                        ans=0;
                    }
                   

                }
            }


    return maxi;
    }
};