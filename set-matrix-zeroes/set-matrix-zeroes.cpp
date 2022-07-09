class Solution {
public:
    
    void solve(int i,int j,vector<vector<int>> &matrix,int rows,int cols){
        
        
        // left
        
        int t1=i,t2=j;
        while(j>=0 and j<cols){
            if(matrix[i][j]!=0){
                matrix[i][j]=INT_MAX-1;
            }
            j--;
        }
        
        //right
        i=t1;j=t2;
        while(j<cols and j>=0){
            if(matrix[i][j]!=0){
                matrix[i][j]=INT_MAX-1;
            }
            j++;
        }
        
        i=t1;j=t2;
        
        //up
        while(i>=0 and i<rows){
            if(matrix[i][j]!=0){
                matrix[i][j]=INT_MAX-1;
            }
            i--;
        }
        
        i=t1;j=t2;
        //down
        while(i<rows and i>=0){
            if(matrix[i][j]!=0){
                matrix[i][j]=INT_MAX-1;
            }
            i++;
        }
        
        
        
    }
    
    
    
    void setZeroes(vector<vector<int>>& matrix) {
     
        
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(matrix[i][j]==0){
                    solve(i,j,matrix,rows,cols);
                }
                
            }
        }
        
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(matrix[i][j]==INT_MAX-1){
                    matrix[i][j]=0;
                }
                
            }
        }
        
        
        
        
        
        
        
    }
};