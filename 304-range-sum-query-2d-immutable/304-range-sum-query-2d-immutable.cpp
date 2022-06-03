class NumMatrix {
public:
    
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        //creting a dp greater than matrix to store 0 s in first row and col
        dp=vector<vector<int>>(n+1,vector<int>(m+1,0));
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                //this formula gives the size of the rectangle from (0,0) => dp[i][j]
                dp[i][j]=dp[i-1][j]+dp[i][j-1]+matrix[i-1][j-1]-dp[i-1][j-1];
                
            }
        }
        
    }
    
    
    //see notes from june 3rd in daily leetcode challenge
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        //increasing the row col size beacuse the dp is greater size
        row1++;
        col1++;
        row2++;
        col2++;
        
        //this formula gives the exact size in the given row and col
      int sum=dp[row2][col2]-dp[row1-1][col2]-dp[row2][col1-1]+dp[row1-1][col1-1];  
        
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */