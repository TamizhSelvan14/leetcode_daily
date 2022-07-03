class Solution {
public:
    vector<vector<int>> cache{101,vector<int>(101,-1)};
    int solve(int i,int j,vector<vector<int>>& matrix){
        int n=matrix.size();
        
        
        
        if(i>=n or j>=n or j<0 )
            return 1e9;
        
        if(i==n-1)
            return matrix[i][j];
        
        if(cache[i][j]!=-1)
            return cache[i][j];
        
        
        int down=matrix[i][j]+solve(i+1,j,matrix);
        int leftAdj=matrix[i][j]+solve(i+1,j-1,matrix);
        int rightAdj=matrix[i][j]+solve(i+1,j+1,matrix);
        
        
        return cache[i][j]=min(down,min(leftAdj,rightAdj));
        
        
    }
    
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        int mini=INT_MAX;
        
        //traversing the firt col
        for(int i=0;i<n;i++){
            
        mini=min(mini ,solve(0,i,matrix));
            
        }
        
        
        return mini;
    }
};