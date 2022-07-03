class Solution {
public:
    vector<vector<int>> dp{201,vector<int>(201,0)};
    int solve(int i,int j,vector<vector<int>>& triangle){
        
        if(j>triangle[i].size()-1)
            return 1e9;
        
        if(i==triangle.size()-1)
            return triangle[i][j];
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int down=triangle[i][j] +solve(i+1,j,triangle);
        int rightDiagonal=triangle[i][j]+solve(i+1,j+1,triangle);
        
        return dp[i][j]=min(down,rightDiagonal);
        
        
        
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
       
        int rows=triangle.size();
        
        for(int i=1;i<rows;i++){
            
            for(int j=0;j<triangle[i].size();j++){
                
                if(j==0 )//leftmost row
                    triangle[i][j]+=triangle[i-1][j];
                else if(j==triangle[i].size()-1)//last row in particular index
                        triangle[i][j]+=triangle[i-1][j-1];
                else { 
                    triangle[i][j]+=min(triangle[i-1][j],triangle[i-1][j-1]);
                    
                }
                
            }
            
        }
        
        
        
        return *min_element(triangle[rows-1].begin(),triangle[rows-1].end());
    }
};