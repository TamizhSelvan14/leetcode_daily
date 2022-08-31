class NumMatrix {
public:
    
    vector<vector<int>> prefixsum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        prefixsum.resize(n+1,vector<int>(m+1,0));
        
        int temp=0;
        for(int i=0;i<m;i++){
            temp+=matrix[0][i];
            prefixsum[1][i+1]=temp;
        }
        temp=0;
        for(int i=0;i<n;i++){
            temp+=matrix[i][0];
            prefixsum[i+1][1]=temp;
        }
        
        
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                 // cout<<prefixsum[i-1][j]+prefixsum[i][j-1]<<" ";
                prefixsum[i][j]=((prefixsum[i-1][j]+prefixsum[i][j-1])-prefixsum[i-1][j-1]) + matrix[i-1][j-1];
                
                
                
            }
            // cout<<endl;
        }
        
        
        
         
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
                
//                 cout<<prefixsum[i][j]<<" ";
                
//             }
//             cout<<endl;
//         }
       
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        
        int ans=0;
        
        int r1=row1+1;
        int c1=col1+1;
        int r2=row2+1;
        int c2=col2+1;
        
        
        ans=prefixsum[r2][c2] - (prefixsum[r1-1][c2]+prefixsum[r2][c1-1]  -prefixsum[r1-1][c1-1]);
        
    
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */