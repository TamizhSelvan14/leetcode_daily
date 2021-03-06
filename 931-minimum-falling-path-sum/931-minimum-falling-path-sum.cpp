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
        vector<vector<int>> dp(n,vector<int>(n,0));
        
//         //traversing the firt col
//         for(int i=0;i<n;i++){
            
//         dp[0][i]=matrix[0][i];
            
//         }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(j==0){// 3.1->left most row
                    matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j+1]);
                }else if(j==n-1)//3.2 right most row
                   matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j-1]);
                else{//rest
                    matrix[i][j]+=min(matrix[i-1][j],min(matrix[i-1][j-1],matrix[i-1][j+1]));
                    
                }
                //last col max
               
                
            }
        }
        
        mini=*min_element(matrix[n-1].begin(),matrix[n-1].end());
        return mini;
    }
};